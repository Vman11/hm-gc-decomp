/* AXOut.c (Dolphin SDK 2003) : 0x800C8094 - 0x800C8864 of auto/text_800B2E70.
 * dolsdk2001 src/ax/AXOut.c with the 2003 triple-buffer output mode and task cancel on quit. */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef s64 OSTime;
typedef struct OSThreadQueue { void *head; void *tail; } OSThreadQueue;
typedef struct DSPTaskInfo DSPTaskInfo;
typedef void (*DSPCallback)(void *task);
struct DSPTaskInfo {
    volatile u32 state;
    volatile u32 priority;
    volatile u32 flags;
    u16 *iram_mmem_addr;
    u32 iram_length;
    u32 iram_addr;
    u16 *dram_mmem_addr;
    u32 dram_length;
    u32 dram_addr;
    u16 dsp_init_vector;
    u16 dsp_resume_vector;
    DSPCallback init_cb;
    DSPCallback res_cb;
    DSPCallback done_cb;
    DSPCallback req_cb;
    DSPTaskInfo *next;
    DSPTaskInfo *prev;
    OSTime t_context;
    OSTime t_task;
};
typedef struct AXPROFILE {
    OSTime axFrameStart;
    OSTime auxProcessingStart;
    OSTime auxProcessingEnd;
    OSTime userCallbackStart;
    OSTime userCallbackEnd;
    OSTime axFrameEnd;
    u32 axNumVoices;
} AXPROFILE;

OSTime OSGetTime(void);
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void OSInitThreadQueue(OSThreadQueue *queue);
void fn_800BA2C8(OSThreadQueue *queue); /* OSSleepThread */
void fn_800BA3B4(OSThreadQueue *queue); /* OSWakeupThread */
void DCFlushRange(void *addr, u32 nBytes);
void *memcpy(void *dst, const void *src, u32 n);
void *fn_800C4594(void *callback); /* AIRegisterDMACallback */
void fn_800C45D8(u32 start, u32 length); /* AIInitDMA */
void fn_800C4660(void); /* AIStartDMA */
void fn_800C4678(void); /* AIStopDMA */
u32 fn_800CC114(void); /* DSPCheckMailToDSP */
void fn_800CC14C(u32 mail); /* DSPSendMailToDSP */
void fn_800CC160(void); /* DSPInit */
BOOL fn_800CC224(void); /* DSPCheckInit */
DSPTaskInfo *fn_800CC22C(DSPTaskInfo *task); /* DSPAddTask */
void fn_800CC29C(DSPTaskInfo *task); /* DSPCancelTask */
DSPTaskInfo *fn_800CC2DC(DSPTaskInfo *task); /* DSPAssertTask */
void fn_800C9480(u32 lessDspCycles); /* __AXSyncPBs */
void fn_800C8870(void); /* __AXPrintStudio */
u32 fn_800C796C(void); /* __AXGetCommandListAddress */
void fn_800C6F84(void); /* __AXServiceCallbackStack */
void fn_800C7728(void); /* __AXProcessAux */
void fn_800C79A8(void *sbuffer, void *buffer); /* __AXNextFrame */
u32 fn_800C8D2C(void); /* __AXGetNumVoices */
AXPROFILE *fn_800C9EC4(void); /* __AXGetCurrentProfile */
extern u16 lbl_802DC680[]; /* axDspSlave (DSPCode.c) */
extern u16 lbl_803595F0;   /* axDspSlaveLength */
#define OSSleepThread fn_800BA2C8
#define OSWakeupThread fn_800BA3B4
#define AIRegisterDMACallback fn_800C4594
#define AIInitDMA fn_800C45D8
#define AIStartDMA fn_800C4660
#define AIStopDMA fn_800C4678
#define DSPCheckMailToDSP fn_800CC114
#define DSPSendMailToDSP fn_800CC14C
#define DSPInit fn_800CC160
#define DSPCheckInit fn_800CC224
#define DSPAddTask fn_800CC22C
#define DSPCancelTask fn_800CC29C
#define DSPAssertTask fn_800CC2DC
#define __AXSyncPBs fn_800C9480
#define __AXPrintStudio fn_800C8870
#define __AXGetCommandListAddress fn_800C796C
#define __AXServiceCallbackStack fn_800C6F84
#define __AXProcessAux fn_800C7728
#define __AXNextFrame fn_800C79A8
#define __AXGetNumVoices fn_800C8D2C
#define __AXGetCurrentProfile fn_800C9EC4
#define axDspSlave lbl_802DC680
#define axDspSlaveLength lbl_803595F0

#define __AXOutNewFrame fn_800C8094
#define __AXOutAiCallback fn_800C824C
#define __AXDSPInitCallback fn_800C8308
#define __AXDSPResumeCallback fn_800C8314
#define __AXDSPDoneCallback fn_800C836C
#define __AXOutInitDSP fn_800C8398
#define __AXOutInit fn_800C8464
#define __AXOutQuit fn_800C8804
#define AXRegisterCallback fn_800C885C

static s16 __AXOutBuffer[3][320] ATTRIBUTE_ALIGN(32);
static s32 __AXOutSBuffer[160] ATTRIBUTE_ALIGN(32);
static u16 ax_dram_image[8192] ATTRIBUTE_ALIGN(32);
static DSPTaskInfo task;
static AXPROFILE __AXLocalProfile;

static volatile u32 __AXOutFrame;
static volatile u32 __AXAiDmaFrame;
static volatile u32 __AXOutDspReady;
static volatile OSTime __AXOsTime;
static void (*__AXUserFrameCallback)(void);
static volatile BOOL __AXDSPInitFlag;
static volatile BOOL __AXDSPDoneFlag;
static volatile BOOL __AXDebugSteppingMode;
static OSThreadQueue __AXOutThreadQueue;
static u32 __AXOutputBufferMode;

void __AXOutNewFrame(u32 lessDspCycles) {
    u32 cl;
    AXPROFILE *profile;

    __AXLocalProfile.axFrameStart = OSGetTime();
    __AXSyncPBs(lessDspCycles);
    __AXPrintStudio();
    cl = __AXGetCommandListAddress();
    DSPSendMailToDSP(0xBABE0180);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP(cl);
    while (DSPCheckMailToDSP()) {
    }
    __AXServiceCallbackStack();
    __AXLocalProfile.auxProcessingStart = OSGetTime();
    __AXProcessAux();
    __AXLocalProfile.auxProcessingEnd = OSGetTime();
    __AXLocalProfile.userCallbackStart = OSGetTime();
    if (__AXUserFrameCallback) {
        __AXUserFrameCallback();
    }
    __AXLocalProfile.userCallbackEnd = OSGetTime();
    __AXNextFrame(__AXOutSBuffer, &__AXOutBuffer[__AXOutFrame][0]);
    __AXOutFrame++;
    if (__AXOutputBufferMode == 1) {
        __AXOutFrame %= 3;
    } else {
        __AXOutFrame &= 1;
        AIInitDMA((u32)&__AXOutBuffer[__AXOutFrame][0], 640);
    }
    __AXLocalProfile.axFrameEnd = OSGetTime();
    __AXLocalProfile.axNumVoices = __AXGetNumVoices();
    profile = __AXGetCurrentProfile();
    if (profile) {
        u8 *src = (u8 *)&__AXLocalProfile;
        u8 *dst = (u8 *)profile;
        int i = sizeof(AXPROFILE);

        while (i--) {
            *dst++ = *src++;
        }
    }
}

void __AXOutAiCallback(void) {
    if (__AXOutDspReady == 0) {
        __AXOsTime = OSGetTime();
    }
    if (__AXOutDspReady == 1) {
        __AXOutDspReady = 0;
        __AXOutNewFrame(0);
    } else {
        __AXOutDspReady = 2;
        DSPAssertTask(&task);
    }
    if (__AXOutputBufferMode == 1) {
        AIInitDMA((u32)&__AXOutBuffer[__AXAiDmaFrame][0], 640);
        __AXAiDmaFrame++;
        __AXAiDmaFrame %= 3;
    }
}

static void __AXDSPInitCallback(void *task) {
    __AXDSPInitFlag = TRUE;
}

static void __AXDSPResumeCallback(void *task) {
    if (__AXOutDspReady == 2) {
        __AXOutDspReady = 0;
        __AXOutNewFrame((u32)(OSGetTime() - __AXOsTime) / 4);
    } else {
        __AXOutDspReady = 1;
    }
}

static void __AXDSPDoneCallback(void *task) {
    __AXDSPDoneFlag = TRUE;
    OSWakeupThread(&__AXOutThreadQueue);
}

void __AXOutInitDSP(void) {
    task.iram_mmem_addr = axDspSlave;
    task.iram_length = axDspSlaveLength;
    task.iram_addr = 0;
    task.dram_mmem_addr = ax_dram_image;
    task.dram_length = 0x2000;
    task.dram_addr = 0;
    task.dsp_init_vector = 0x10;
    task.dsp_resume_vector = 0x30;
    task.init_cb = __AXDSPInitCallback;
    task.res_cb = __AXDSPResumeCallback;
    task.done_cb = __AXDSPDoneCallback;
    task.req_cb = NULL;
    task.priority = 0;
    __AXDSPInitFlag = FALSE;
    __AXDSPDoneFlag = FALSE;
    OSInitThreadQueue(&__AXOutThreadQueue);
    if (!DSPCheckInit()) {
        DSPInit();
    }
    DSPAddTask(&task);
    while (__AXDSPInitFlag == FALSE) {
    }
}

void __AXOutInit(u32 outputBufferMode) {
    u32 i;
    u32 *p;

    __AXOutFrame = 0;
    __AXAiDmaFrame = 0;
    __AXOutputBufferMode = outputBufferMode;
    __AXDebugSteppingMode = FALSE;
    p = (u32 *)&__AXOutBuffer[0][0];
    for (i = 0; i < 480; i++) {
        *p = 0;
        p++;
    }
    DCFlushRange(__AXOutBuffer, sizeof(__AXOutBuffer));
    p = (u32 *)__AXOutSBuffer;
    for (i = 0; i < 160; i++) {
        *p = 0;
        p++;
    }
    DCFlushRange(__AXOutSBuffer, sizeof(__AXOutSBuffer));
    __AXOutInitDSP();
    AIRegisterDMACallback(__AXOutAiCallback);
    if (__AXOutputBufferMode == 1) {
        __AXNextFrame(__AXOutSBuffer, &__AXOutBuffer[2][0]);
    } else {
        __AXNextFrame(__AXOutSBuffer, &__AXOutBuffer[1][0]);
    }
    __AXOutDspReady = 1;
    __AXUserFrameCallback = NULL;
    if (__AXOutputBufferMode == 1) {
        AIInitDMA((u32)&__AXOutBuffer[__AXAiDmaFrame][0], 640);
        __AXAiDmaFrame++;
        __AXAiDmaFrame &= 1;
    } else {
        AIInitDMA((u32)&__AXOutBuffer[__AXOutFrame][0], 640);
    }
    AIStartDMA();
}

void __AXOutQuit(void) {
    BOOL old;

    old = OSDisableInterrupts();
    __AXUserFrameCallback = NULL;
    DSPCancelTask(&task);
    OSSleepThread(&__AXOutThreadQueue);
    AIStopDMA();
    OSRestoreInterrupts(old);
}

void AXRegisterCallback(void (*callback)(void)) {
    __AXUserFrameCallback = callback;
}
