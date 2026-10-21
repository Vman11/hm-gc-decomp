/* ai.c (Dolphin SDK 2003) : 0x800C4594 - 0x800C4E78 of auto/text_800B2E70. Based on dolsdk2001 src/ai/ai.c. */
#include "common.h"

typedef s64 OSTime;
typedef struct OSContext OSContext;
typedef void (*AISCallback)(u32 count);
typedef void (*AIDCallback)(void);

volatile u16 __DSPRegs[32] : 0xCC005000;
volatile u32 __AIRegs[8] : 0xCC006C00;
u32 __OSBusClock : 0x800000F8;
#define OS_TIMER_CLOCK (__OSBusClock / 4)
#define OSNanosecondsToTicks(nsec) (((nsec) * (OS_TIMER_CLOCK / 125000)) / 8000)
#define SET_REG_FIELD(line, reg, size, shift, val) \
    ((reg) = ((reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define GET_REG_FIELD(reg, size, shift) (((reg) >> (shift)) & ((1 << (size)) - 1))
#define AI_STREAM_START 1
#define AI_STREAM_STOP 0
#define AI_SAMPLERATE_32KHZ 0
#define AI_SAMPLERATE_48KHZ 1

void OSRegisterVersion(const char *id);
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
OSTime OSGetTime(void);
void *__OSSetInterruptHandler(s16 interrupt, void *handler);
u32 __OSUnmaskInterrupts(u32 mask);

#define AIRegisterDMACallback fn_800C4594
#define AIInitDMA fn_800C45D8
#define AIStartDMA fn_800C4660
#define AIStopDMA fn_800C4678
#define AISetStreamPlayState fn_800C4690
#define AIGetStreamPlayState fn_800C4768
#define AISetDSPSampleRate fn_800C4778
#define AIGetDSPSampleRate fn_800C4858
#define __AI_set_stream_sample_rate fn_800C486C
#define AIGetStreamSampleRate fn_800C4940
#define AISetStreamVolLeft fn_800C4950
#define AIGetStreamVolLeft fn_800C496C
#define AISetStreamVolRight fn_800C497C
#define AIGetStreamVolRight fn_800C4998
#define AIInit fn_800C49A8
#define __AISHandler fn_800C4B14
#define __AIDHandler fn_800C4B90
#define __AICallbackStackSwitch fn_800C4C3C
#define __AI_SRC_INIT fn_800C4C94

char *__AIVersion = "<< Dolphin SDK - AI\trelease build: Apr 17 2003 12:33:54 (0x2301) >>";

static AISCallback __AIS_Callback;
static AIDCallback __AID_Callback;
static u8 *__CallbackStack;
static u8 *__OldStack;
static volatile BOOL __AI_init_flag;
static volatile BOOL __AID_Active;
static OSTime bound_32KHz;
static OSTime bound_48KHz;
static OSTime min_wait;
static OSTime max_wait;
static OSTime buffer;

u32 AIGetStreamPlayState(void);
u32 AIGetDSPSampleRate(void);
u32 AIGetStreamSampleRate(void);
void AISetStreamVolLeft(u8 vol);
u8 AIGetStreamVolLeft(void);
void AISetStreamVolRight(u8 vol);
u8 AIGetStreamVolRight(void);
static void __AI_set_stream_sample_rate(u32 rate);
static void __AIDHandler(s16 interrupt, OSContext *context);
static void __AISHandler(s16 interrupt, OSContext *context);
static void __AICallbackStackSwitch(void *cb);
void __AI_SRC_INIT(void);

AIDCallback AIRegisterDMACallback(AIDCallback callback)
{
    AIDCallback old_callback;
    BOOL old;

    old_callback = __AID_Callback;
    old = OSDisableInterrupts();
    __AID_Callback = callback;
    OSRestoreInterrupts(old);
    return old_callback;
}

void AIInitDMA(u32 start_addr, u32 length)
{
    BOOL old;

    old = OSDisableInterrupts();
    __DSPRegs[24] = (__DSPRegs[24] & 0xFFFFFC00) | (start_addr >> 16);
    __DSPRegs[25] = (__DSPRegs[25] & 0xFFFF001F) | (start_addr & 0xFFFF);
    __DSPRegs[27] = (__DSPRegs[27] & 0xFFFF8000) | ((length >> 5) & 0xFFFF);
    OSRestoreInterrupts(old);
}

void AIStartDMA(void)
{
    __DSPRegs[27] = __DSPRegs[27] | 0x8000;
}

void AIStopDMA(void)
{
    __DSPRegs[27] = __DSPRegs[27] & ~0x8000;
}

static inline void AIResetStreamSampleCount(void)
{
    __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
}

static inline void AISetStreamTrigger(u32 trigger)
{
    __AIRegs[3] = trigger;
}

void AISetStreamPlayState(u32 state)
{
    BOOL old;
    u8 vol_left;
    u8 vol_right;

    if (state != AIGetStreamPlayState()) {
        if (AIGetStreamSampleRate() == 0 && state == AI_STREAM_START) {
            vol_left = AIGetStreamVolRight();
            vol_right = AIGetStreamVolLeft();
            AISetStreamVolRight(0);
            AISetStreamVolLeft(0);
            old = OSDisableInterrupts();
            __AI_SRC_INIT();
            SET_REG_FIELD(0, __AIRegs[0], 1, 5, 1);
            SET_REG_FIELD(0, __AIRegs[0], 1, 0, AI_STREAM_START);
            OSRestoreInterrupts(old);
            AISetStreamVolLeft(vol_left);
            AISetStreamVolRight(vol_right);
            return;
        }
        SET_REG_FIELD(0x27F, __AIRegs[0], 1, 0, state);
    }
}

u32 AIGetStreamPlayState(void)
{
    return __AIRegs[0] & 1;
}

void AISetDSPSampleRate(u32 rate)
{
    BOOL old;
    u32 play_state;
    u32 afr_state;
    u8 vol_left;
    u8 vol_right;

    if (rate != AIGetDSPSampleRate()) {
        __AIRegs[0] = (__AIRegs[0] & 0xFFFFFFBF);
        if (rate == AI_SAMPLERATE_32KHZ) {
            vol_left = AIGetStreamVolLeft();
            vol_right = AIGetStreamVolRight();
            play_state = AIGetStreamPlayState();
            afr_state = AIGetStreamSampleRate();
            AISetStreamVolLeft(0U);
            AISetStreamVolRight(0U);
            old = OSDisableInterrupts();
            __AI_SRC_INIT();
            SET_REG_FIELD(0x2D8, __AIRegs[0], 1, 5, 1);
            SET_REG_FIELD(0x2D9, __AIRegs[0], 1, 1, afr_state);
            SET_REG_FIELD(0x2DA, __AIRegs[0], 1, 0, play_state);
            __AIRegs[0] |= 0x40;
            OSRestoreInterrupts(old);
            AISetStreamVolLeft(vol_left);
            AISetStreamVolRight(vol_right);
        }
    }
}

u32 AIGetDSPSampleRate(void)
{
    return GET_REG_FIELD(__AIRegs[0], 1, 6) ^ 1;
}

static void __AI_set_stream_sample_rate(u32 rate)
{
    BOOL old;
    u32 play_state;
    u8 vol_left;
    u8 vol_right;
    u32 dsp_src_state;

    if (rate != AIGetStreamSampleRate()) {
        play_state = AIGetStreamPlayState();
        vol_left = AIGetStreamVolLeft();
        vol_right = AIGetStreamVolRight();
        AISetStreamVolRight(0);
        AISetStreamVolLeft(0);
        dsp_src_state = __AIRegs[0] & 0x40;
        SET_REG_FIELD(0, __AIRegs[0], 1, 6, 0);
        old = OSDisableInterrupts();
        __AI_SRC_INIT();
        __AIRegs[0] |= dsp_src_state;
        SET_REG_FIELD(0x368, __AIRegs[0], 1, 5, 1);
        SET_REG_FIELD(0x369, __AIRegs[0], 1, 1, rate);
        OSRestoreInterrupts(old);
        AISetStreamPlayState(play_state);
        AISetStreamVolLeft(vol_left);
        AISetStreamVolRight(vol_right);
    }
}

u32 AIGetStreamSampleRate(void)
{
    return GET_REG_FIELD(__AIRegs[0], 1, 1);
}

void AISetStreamVolLeft(u8 vol)
{
    SET_REG_FIELD(0x3A3, __AIRegs[1], 8, 0, vol);
}

u8 AIGetStreamVolLeft(void)
{
    return GET_REG_FIELD(__AIRegs[1], 8, 0);
}

void AISetStreamVolRight(u8 vol)
{
    SET_REG_FIELD(0x3CC, __AIRegs[1], 8, 8, vol);
}

u8 AIGetStreamVolRight(void)
{
    return (__AIRegs[1] & (0xFF << 8)) >> 8;
}

void AIInit(u8 *stack)
{
    if (__AI_init_flag != TRUE) {
        OSRegisterVersion(__AIVersion);
        bound_32KHz = OSNanosecondsToTicks(31524);
        bound_48KHz = OSNanosecondsToTicks(42024);
        min_wait = OSNanosecondsToTicks(42000);
        max_wait = OSNanosecondsToTicks(63000);
        buffer = OSNanosecondsToTicks(3000);
        AISetStreamVolRight(0);
        AISetStreamVolLeft(0);
        AISetStreamTrigger(0);
        AIResetStreamSampleCount();
        __AI_set_stream_sample_rate(AI_SAMPLERATE_48KHZ);
        AISetDSPSampleRate(AI_SAMPLERATE_32KHZ);
        __AIS_Callback = NULL;
        __AID_Callback = NULL;
        __CallbackStack = stack;
        if (stack) {
        }
        __OSSetInterruptHandler(5, __AIDHandler);
        __OSUnmaskInterrupts(0x04000000);
        __OSSetInterruptHandler(8, __AISHandler);
        __OSUnmaskInterrupts(0x800000);
        __AI_init_flag = TRUE;
    }
}

static void __AISHandler(s16 interrupt, OSContext *context)
{
    u8 exceptionContext[712] __attribute__((aligned(8)));

    __AIRegs[0] |= 8;
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext((OSContext *)exceptionContext);
    if (__AIS_Callback) {
        __AIS_Callback(__AIRegs[2]);
    }
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext(context);
}

static void __AIDHandler(s16 interrupt, OSContext *context)
{
    u8 exceptionContext[712] __attribute__((aligned(8)));
    u16 tmp;

    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xA0) | 8;
    __DSPRegs[5] = tmp;
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext((OSContext *)exceptionContext);
    if (__AID_Callback && !__AID_Active) {
        __AID_Active = TRUE;
        if (__CallbackStack) {
            __AICallbackStackSwitch(__AID_Callback);
        } else {
            __AID_Callback();
        }
        __AID_Active = FALSE;
    }
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext(context);
}

static asm void __AICallbackStackSwitch(register void *cb)
{
    nofralloc
    mflr r0
    stw r0, 0x4(r1)
    stwu r1, -0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r3
    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    stw r1, 0x0(r5)
    lis r5, __CallbackStack@ha
    addi r5, r5, __CallbackStack@l
    lwz r1, 0x0(r5)
    subi r1, r1, 0x8
    mtlr r31
    blrl
    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    lwz r1, 0x0(r5)
    lwz r0, 0x1c(r1)
    lwz r31, 0x14(r1)
    addi r1, r1, 0x18
    mtlr r0
    blr
}

void __AI_SRC_INIT(void)
{
    OSTime rising_32khz = 0;
    OSTime rising_48khz = 0;
    OSTime diff = 0;
    OSTime t1 = 0;
    OSTime temp;
    u32 temp0;
    u32 temp1;
    u32 done = 0;
    u32 volume = 0;
    u32 Init_Cnt = 0;
    u32 walking = 0;

    walking = 0;
    Init_Cnt = 0;
    temp = 0;


    while (!done) {
        SET_REG_FIELD(0, __AIRegs[0], 1, 5, 1);
        SET_REG_FIELD(0, __AIRegs[0], 1, 1, 0);
        SET_REG_FIELD(0, __AIRegs[0], 1, 0, AI_STREAM_START);
        temp0 = __AIRegs[2];
        while (temp0 == __AIRegs[2]) {
        }
        rising_32khz = OSGetTime();
        SET_REG_FIELD(0, __AIRegs[0], 1, 1, 1);
        SET_REG_FIELD(0, __AIRegs[0], 1, 0, AI_STREAM_START);
        temp1 = __AIRegs[2];
        while (temp1 == __AIRegs[2]) {
        }
        rising_48khz = OSGetTime();
        diff = rising_48khz - rising_32khz;
        SET_REG_FIELD(0, __AIRegs[0], 1, 1, 0);
        SET_REG_FIELD(0, __AIRegs[0], 1, 0, AI_STREAM_STOP);
        if (diff < bound_32KHz - buffer) {
            temp = min_wait;
            done = 1;
            Init_Cnt++;
        } else if (diff >= bound_32KHz + buffer && diff < bound_48KHz - buffer) {
            temp = max_wait;
            done = 1;
            Init_Cnt++;
        } else {
            done = 0;
            walking = 1;
            Init_Cnt++;
        }
    }
    while (rising_48khz + temp > OSGetTime()) {
    }
}

