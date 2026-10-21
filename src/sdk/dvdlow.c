/* dvdlow.c (Dolphin SDK 2003) : 0x800BC1C8 - 0x800BD00C of auto/text_800B2E70.
 * Based on dolsdk2001 src/dvd/dvdlow.c plus the 2003 drive work-around / timeout code. */
#include "common.h"

typedef s64 OSTime;
typedef struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(OSAlarm *alarm, OSContext *context);
struct OSAlarm {
    OSAlarmHandler handler;
    u32 tag;
    OSTime fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTime period;
    OSTime start;
};

typedef struct DVDDiskID {
    char gameName[4];
    char company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
} DVDDiskID;
typedef struct DVDDriveInfo DVDDriveInfo;

typedef void (*DVDLowCallback)(u32 intType);

typedef struct DVDBuffer {
    void *addr;
    u32 length;
    u32 offset;
} DVDBuffer;

typedef struct DVDCommand {
    s32 cmd;
    void *addr;
    u32 length;
    u32 offset;
    DVDLowCallback callback;
} DVDCommand;

volatile u32 __DIRegs[16] : 0xCC006000;
volatile u32 __PIRegs[16] : 0xCC003000;
u32 __OSBusClock : 0x800000F8;
#define OS_TIMER_CLOCK (__OSBusClock / 4)
#define OSSecondsToTicks(sec) ((sec) * OS_TIMER_CLOCK)
#define OSMillisecondsToTicks(msec) ((msec) * (OS_TIMER_CLOCK / 1000))
#define OSMicrosecondsToTicks(usec) (((usec) * (OS_TIMER_CLOCK / 125000)) / 8)

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
u32 __OSMaskInterrupts(u32 mask);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
OSTime __OSGetSystemTime(void);
void OSInitAlarm(void);
void OSCreateAlarm(OSAlarm *alarm);
void OSSetAlarm(OSAlarm *alarm, OSTime tick, OSAlarmHandler handler);
void fn_800B3EF8(OSAlarm *alarm); /* OSCancelAlarm */
DVDDiskID *fn_800BFF4C(void);     /* DVDGetCurrentDiskID */

/* names used by the rest of the program (and by symbols.txt) */
#define AlarmHandler fn_800BC4E8
#define Read fn_800BC5DC
#define SeekTwiceBeforeRead fn_800BC6EC
#define DVDLowRead fn_800BC76C
#define DVDLowSeek fn_800BCA04
#define DVDLowReadDiskID fn_800BCAC4
#define DVDLowRequestError fn_800BCBF4
#define DVDLowInquiry fn_800BCC80
#define DVDLowAudioStream fn_800BCD1C
#define DVDLowRequestAudioStatus fn_800BCDB4
#define DVDLowAudioBufferConfig fn_800BCE40
#define DVDLowBreak fn_800BCF98
#define DVDLowClearCallback fn_800BCFAC
#define OSCancelAlarm fn_800B3EF8
#define DVDGetCurrentDiskID fn_800BFF4C

/* .sdata */
static BOOL FirstRead = TRUE;

/* .sbss */
static volatile BOOL StopAtNextInt;
static u32 LastLength;
static DVDLowCallback Callback;
static DVDLowCallback ResetCoverCallback;
static volatile OSTime LastResetEnd;
static volatile u32 ResetOccurred;
static volatile BOOL WaitingCoverClose;
static volatile BOOL Breaking;
static volatile u32 WorkAroundType;
static u32 WorkAroundSeekLocation;
static volatile OSTime LastReadFinished;
static OSTime LastReadIssued;
static volatile BOOL LastCommandWasRead;
static volatile u32 NextCommandNumber;

/* .bss */
static DVDCommand CommandList[3];
static OSAlarm AlarmForWA;
static OSAlarm AlarmForTimeout;
static OSAlarm AlarmForBreak;
static DVDBuffer Prev;
static DVDBuffer Curr;

void __DVDLowSetWAType(u32 type, s32 seekLoc);
BOOL DVDLowSeek(u32 offset, DVDLowCallback callback);
static void Read(void *addr, u32 length, u32 offset, DVDLowCallback callback);

void __DVDInitWA(void) {
    NextCommandNumber = 0;
    CommandList[0].cmd = -1;
    __DVDLowSetWAType(0, 0);
    OSInitAlarm();
}

static inline BOOL ProcessNextCommand(void) {
    s32 n = NextCommandNumber;

    if (CommandList[n].cmd == 1) {
        ++NextCommandNumber;
        Read(CommandList[n].addr, CommandList[n].length, CommandList[n].offset, CommandList[n].callback);
        return TRUE;
    } else if (CommandList[n].cmd == 2) {
        ++NextCommandNumber;
        DVDLowSeek(CommandList[n].offset, CommandList[n].callback);
        return TRUE;
    }
    return FALSE;
}

void __DVDInterruptHandler(s16 interrupt, OSContext *context) {
    DVDLowCallback cb;
    OSContext exceptionContext;
    u32 cause = 0;
    u32 reg;
    u32 intr;
    u32 mask;

    if (LastCommandWasRead) {
        LastReadFinished = __OSGetSystemTime();
        FirstRead = FALSE;
        Prev.addr = Curr.addr;
        Prev.length = Curr.length;
        Prev.offset = Curr.offset;
        if (StopAtNextInt == TRUE) {
            cause |= 8;
        }
    }
    LastCommandWasRead = FALSE;
    StopAtNextInt = FALSE;
    reg = __DIRegs[0];
    mask = reg & 0x2A;
    intr = (reg & 0x54) & (mask << 1);
    if (intr & 0x40) {
        cause |= 8;
    }
    if (intr & 0x10) {
        cause |= 1;
    }
    if (intr & 4) {
        cause |= 2;
    }
    if (cause) {
        ResetOccurred = FALSE;
        OSCancelAlarm(&AlarmForTimeout);
    }
    __DIRegs[0] = intr | mask;
    if (ResetOccurred && (__OSGetSystemTime() - LastResetEnd) < OSMillisecondsToTicks(200)) {
        reg = __DIRegs[1];
        mask = reg & 2;
        intr = (reg & 4) & (mask << 1);
        if (intr & 4) {
            if (ResetCoverCallback) {
                ResetCoverCallback(4);
            }
            ResetCoverCallback = NULL;
        }
        __DIRegs[1] = __DIRegs[1];
    } else if (WaitingCoverClose) {
        reg = __DIRegs[1];
        mask = reg & 2;
        intr = (reg & 4) & (mask << 1);
        if (intr & 4) {
            cause |= 4;
        }
        __DIRegs[1] = intr | mask;
        WaitingCoverClose = FALSE;
    } else {
        __DIRegs[1] = 0;
    }
    if ((cause & 8) && !Breaking) {
        cause &= ~8;
    }
    if (cause & 1) {
        if (ProcessNextCommand()) {
            return;
        }
    } else {
        CommandList[0].cmd = -1;
        NextCommandNumber = 0;
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    if (cause) {
        cb = Callback;
        Callback = NULL;
        if (cb) {
            cb(cause);
        }
        Breaking = FALSE;
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

static void AlarmHandler(OSAlarm *alarm, OSContext *context) {
    BOOL error = ProcessNextCommand();
}

void AlarmHandlerForTimeout(OSAlarm *alarm, OSContext *context) {
    OSContext tmpContext;
    DVDLowCallback callback;

    __OSMaskInterrupts(0x400);
    OSClearContext(&tmpContext);
    OSSetCurrentContext(&tmpContext);
    callback = Callback;
    Callback = NULL;
    if (callback) {
        callback(0x10);
    }
    OSClearContext(&tmpContext);
    OSSetCurrentContext(context);
}

static inline void SetTimeoutAlarm(OSAlarmHandler handler, OSTime timeout) {
    OSCreateAlarm(&AlarmForTimeout);
    OSSetAlarm(&AlarmForTimeout, timeout, handler);
}

static void Read(void *addr, u32 length, u32 offset, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    LastCommandWasRead = TRUE;
    Callback = callback;
    LastReadIssued = __OSGetSystemTime();
    __DIRegs[2] = 0xA8000000;
    __DIRegs[3] = offset / 4;
    __DIRegs[4] = length;
    __DIRegs[5] = (u32)addr;
    __DIRegs[6] = length;
    LastLength = length;
    __DIRegs[7] = 3;
    if (length > 0xA00000) {
        SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(20));
    } else {
        SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    }
}

static inline BOOL HitCache(DVDBuffer *cur, DVDBuffer *prev) {
    u32 uNumPrev = (prev->offset + prev->length - 1) >> 15;
    u32 uNumCur = (cur->offset >> 15);
    u32 cacheBlockSize = (DVDGetCurrentDiskID()->streaming ? TRUE : FALSE) ? 5 : 15;

    if ((uNumCur > uNumPrev - 2) || (uNumCur < uNumPrev + cacheBlockSize + 3)) {
        return TRUE;
    }
    return FALSE;
}

static inline void DoJustRead(void *addr, u32 length, u32 offset, DVDLowCallback callback) {
    CommandList[0].cmd = -1;
    NextCommandNumber = 0;
    Read(addr, length, offset, callback);
}

static void SeekTwiceBeforeRead(void *addr, u32 length, u32 offset, DVDLowCallback callback) {
    u32 offsetToSeek;

    if ((offset & ~0x7FFF) == 0) {
        offsetToSeek = 0;
    } else {
        offsetToSeek = (offset & ~0x7FFF) + WorkAroundSeekLocation;
    }
    CommandList[0].cmd = 2;
    CommandList[0].offset = offsetToSeek;
    CommandList[0].callback = callback;
    CommandList[1].cmd = 1;
    CommandList[1].addr = addr;
    CommandList[1].length = length;
    CommandList[1].offset = offset;
    CommandList[1].callback = callback;
    CommandList[2].cmd = -1;
    NextCommandNumber = 0;
    DVDLowSeek(offsetToSeek, callback);
}

static inline void WaitBeforeRead(void *addr, u32 length, u32 offset, DVDLowCallback callback, OSTime timeout) {
    CommandList[0].cmd = 1;
    CommandList[0].addr = addr;
    CommandList[0].length = length;
    CommandList[0].offset = offset;
    CommandList[0].callback = callback;
    CommandList[1].cmd = -1;
    NextCommandNumber = 0;
    OSCreateAlarm(&AlarmForWA);
    OSSetAlarm(&AlarmForWA, timeout, AlarmHandler);
}

BOOL DVDLowRead(void *addr, u32 length, u32 offset, DVDLowCallback callback) {
    u32 prev;
    OSTime diff;

    __DIRegs[6] = length;
    Curr.addr = addr;
    Curr.length = length;
    Curr.offset = offset;
    if (WorkAroundType == 0) {
        DoJustRead(addr, length, offset, callback);
    } else if (WorkAroundType == 1) {
        if (FirstRead) {
            SeekTwiceBeforeRead(addr, length, offset, callback);
        } else {
            if (!HitCache(&Curr, &Prev)) {
                DoJustRead(addr, length, offset, callback);
            } else {
                prev = (Prev.offset + Prev.length - 1) >> 15;
                if (prev == Curr.offset >> 15 || prev + 1 == Curr.offset >> 15) {
                    diff = __OSGetSystemTime() - LastReadFinished;
                    if (OSMillisecondsToTicks(5) < diff) {
                        DoJustRead(addr, length, offset, callback);
                    } else {
                        WaitBeforeRead(addr, length, offset, callback, OSMillisecondsToTicks(5) - diff + OSMicrosecondsToTicks(500));
                    }
                } else {
                    SeekTwiceBeforeRead(addr, length, offset, callback);
                }
            }
        }
    }
    return TRUE;
}

BOOL DVDLowSeek(u32 offset, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0xAB000000;
    __DIRegs[3] = offset / 4;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowWaitCoverClose(DVDLowCallback callback) {
    Callback = callback;
    WaitingCoverClose = TRUE;
    StopAtNextInt = FALSE;
    __DIRegs[1] = 2;
    return TRUE;
}

BOOL DVDLowReadDiskID(DVDDiskID *diskID, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0xA8000040;
    __DIRegs[3] = 0;
    __DIRegs[4] = sizeof(DVDDiskID);
    __DIRegs[5] = (u32)diskID;
    __DIRegs[6] = sizeof(DVDDiskID);
    __DIRegs[7] = 3;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowStopMotor(DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0xE3000000;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowRequestError(DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0xE0000000;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowInquiry(DVDDriveInfo *info, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0x12000000;
    __DIRegs[4] = 0x20;
    __DIRegs[5] = (u32)info;
    __DIRegs[6] = 0x20;
    __DIRegs[7] = 3;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowAudioStream(u32 subcmd, u32 length, u32 offset, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = subcmd | 0xE1000000;
    __DIRegs[3] = offset >> 2;
    __DIRegs[4] = length;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowRequestAudioStatus(u32 subcmd, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = subcmd | 0xE2000000;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

BOOL DVDLowAudioBufferConfig(BOOL enable, u32 size, DVDLowCallback callback) {
    StopAtNextInt = FALSE;
    Callback = callback;
    __DIRegs[2] = 0xE4000000 | (enable ? 0x10000 : 0) | size;
    __DIRegs[7] = 1;
    SetTimeoutAlarm(AlarmHandlerForTimeout, OSSecondsToTicks(10));
    return TRUE;
}

void DVDLowReset(void) {
    u32 reg;
    OSTime resetStart;

    __DIRegs[1] = 2;
    reg = __PIRegs[9];
    __PIRegs[9] = (reg & ~4) | 1;
    resetStart = __OSGetSystemTime();
    while ((__OSGetSystemTime() - resetStart) < OSMicrosecondsToTicks(12)) {
    }
    __PIRegs[9] = reg | 4 | 1;
    ResetOccurred = TRUE;
    LastResetEnd = __OSGetSystemTime();
}

BOOL DVDLowBreak(void) {
    StopAtNextInt = TRUE;
    Breaking = TRUE;
    return TRUE;
}

DVDLowCallback DVDLowClearCallback(void) {
    DVDLowCallback old;

    __DIRegs[1] = 0;
    old = Callback;
    WaitingCoverClose = FALSE;
    Callback = NULL;
    return old;
}

void __DVDLowSetWAType(u32 type, s32 seekLoc) {
    BOOL enabled;

    enabled = OSDisableInterrupts();
    WorkAroundType = type;
    WorkAroundSeekLocation = seekLoc;
    OSRestoreInterrupts(enabled);
}
