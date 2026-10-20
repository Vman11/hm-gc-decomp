#include "common.h"
typedef s64 OSTime;
typedef struct OSContext OSContext;
typedef struct OSAlarm { u8 data[40]; } OSAlarm;
typedef void (*OSAlarmHandler)(OSAlarm *, OSContext *);
typedef void (*SICallback)(s32 chan, u32 sr, OSContext *context);
typedef void (*SITypeAndStatusCallback)(s32 chan, u32 type);
typedef void (*__OSInterruptHandler)(s16 interrupt, OSContext *context);
typedef struct SIControl {
    s32 chan;
    u32 poll;
    u32 inputBytes;
    void *input;
    SICallback callback;
} SIControl;
typedef struct SIPacket {
    s32 chan;
    void *output;
    u32 outputBytes;
    void *input;
    u32 inputBytes;
    SICallback callback;
    OSTime fire;
} SIPacket;
typedef struct XY {
    u16 line;
    u8 count;
} XY;
volatile u32 __SIRegs[0x40] : 0xCC006400;
volatile u16 __VIRegs[0x3B] : 0xCC002000;
u32 __OSBusClock : 0x800000F8;
#define OS_TIMER_CLOCK (__OSBusClock / 4)
#define OSMillisecondsToTicks(msec) ((msec) * (OS_TIMER_CLOCK / 1000))
#define OSMicrosecondsToTicks(usec) (((usec) * (OS_TIMER_CLOCK / 125000)) / 8)
#define SI_MAX_CHAN 4
#define SI_ERROR_UNDER_RUN 0x0001
#define SI_ERROR_OVER_RUN 0x0002
#define SI_ERROR_COLLISION 0x0004
#define SI_ERROR_NO_RESPONSE 0x0008
#define SI_ERROR_WRST 0x0010
#define SI_ERROR_RDST 0x0020
#define SI_ERROR_UNKNOWN 0x0040
#define SI_ERROR_BUSY 0x0080
#define SI_TYPE_MASK 0x18000000u
#define SI_TYPE_DOLPHIN 0x08000000u
#define SI_GC_WIRELESS 0x80000000u
#define SI_WIRELESS_RECEIVED 0x40000000u
#define SI_WIRELESS_IR 0x04000000u
#define SI_WIRELESS_FIX_ID 0x00100000u
#define SI_WIRELESS_TYPE_ID 0x00CFFF00u
#define SI_CHAN0_BIT 0x80000000u
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void __OSUnmaskInterrupts(u32);
void *__OSSetInterruptHandler(s16, void *);
OSTime __OSGetSystemTime(void);
void fn_800B3EF8(OSAlarm *);
#define OSCancelAlarm fn_800B3EF8
void OSSetAlarm(OSAlarm *, OSTime, OSAlarmHandler);
void OSRegisterVersion(const char *);
void OSReport(const char *, ...);
u32 VIGetTvFormat(void);
u32 fn_800C2748(void);
#define VIGetCurrentLine fn_800C2748
u16 fn_800B9348(s32);
#define OSGetWirelessID fn_800B9348
void fn_800B93CC(s32, u16);
#define OSSetWirelessID fn_800B93CC
#define SIBusy fn_800F3D80
#define SIIsChanBusy fn_800F3DA0
#define CompleteTransfer fn_800F3DDC
#define SIEnablePollingInterrupt fn_800F441C
#define SIRegisterPollingHandler fn_800F44B4
#define SIUnregisterPollingHandler fn_800F4580
#define __SITransfer fn_800F4728
#define SIGetStatus fn_800F4934
#define SISetCommand fn_800F49B0
#define SITransferCommands fn_800F49C4
#define SIEnablePolling fn_800F4A40
#define SIDisablePolling fn_800F4ADC
#define SIGetResponseRaw fn_800F4B48
#define SIGetResponse fn_800F4C1C
#define AlarmHandler fn_800F4CE0
#define SIGetTypeAsync fn_800F5334
#define SIRefreshSamplingRate fn_800F5554
#define SamplingRate SamplingRate_8035A9E0

static XY XYNTSC[12] = {
    { 246, 2 }, { 15, 18 }, { 30, 9 }, { 44, 6 }, { 52, 5 }, { 65, 4 },
    { 87, 3 }, { 87, 3 }, { 87, 3 }, { 131, 2 }, { 131, 2 }, { 131, 2 },
};
static XY XYPAL[12] = {
    { 296, 2 }, { 15, 21 }, { 29, 11 }, { 45, 7 }, { 52, 6 }, { 63, 5 },
    { 78, 4 }, { 104, 3 }, { 104, 3 }, { 104, 3 }, { 104, 3 }, { 156, 2 },
};
static u32 SamplingRate;
u32 SISetXY(u32 x, u32 y);

void SISetSamplingRate(u32 msec) {
    XY *xy;
    BOOL progressive;
    BOOL enabled;

    if (msec > 11) {
        msec = 11;
    }
    enabled = OSDisableInterrupts();
    SamplingRate = msec;
    switch (VIGetTvFormat()) {
    case 0:
    case 2:
    case 5:
        xy = XYNTSC;
        break;
    case 1:
        xy = XYPAL;
        break;
    default:
        OSReport("SISetSamplingRate: unknown TV format. Use default.");
        msec = 0;
        xy = XYNTSC;
        break;
    }
    progressive = __VIRegs[54] & 1;
    SISetXY((progressive ? 2u : 1u) * xy[msec].line, xy[msec].count);
    OSRestoreInterrupts(enabled);
}

void SIRefreshSamplingRate(void) {
    SISetSamplingRate(SamplingRate);
}
