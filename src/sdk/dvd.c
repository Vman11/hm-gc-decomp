/* dvd.c (Dolphin SDK 2003, "Apr 22 2003") : 0x800BDA6C - 0x800C0168 of auto/text_800B2E70.
 * Based on dolsdk2001 src/dvd/dvd.c, adapted to the 2003 state machine. */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef s64 OSTime;
typedef struct OSContext OSContext;
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
typedef struct OSThreadQueue { void *head; void *tail; } OSThreadQueue;

typedef struct DVDDiskID {
    char gameName[4];
    char company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
} DVDDiskID;

typedef struct DVDCommandBlock DVDCommandBlock;
typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock *block);
struct DVDCommandBlock {
    DVDCommandBlock *next;
    DVDCommandBlock *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    DVDDiskID *id;
    DVDCBCallback callback;
    void *userData;
};

typedef struct DVDDriveInfo {
    u16 revisionLevel;
    u16 deviceCode;
    u32 releaseDate;
    u8 padding[24];
} DVDDriveInfo;

typedef struct DVDBB2 {
    u32 bootFilePosition;
    u32 FSTPosition;
    u32 FSTLength;
    u32 FSTMaxLength;
    void *FSTAddress;
    u32 userPosition;
    u32 userLength;
    u32 padding0;
} DVDBB2;

typedef struct OSBootInfo {
    DVDDiskID DVDDiskID;
    u32 magic;
    u32 version;
    u32 memorySize;
    u32 consoleType;
    void *arenaLo;
    void *arenaHi;
    void *FSTLocation;
    u32 FSTMaxLength;
} OSBootInfo;

typedef void (*DVDLowCallback)(u32 intType);
typedef void (*DVDOptionalCommandChecker)(DVDCommandBlock *block, DVDLowCallback cb);

volatile u32 __DIRegs[16] : 0xCC006000;
u32 __OSBusClock : 0x800000F8;
#define OS_TIMER_CLOCK (__OSBusClock / 4)
#define OSMillisecondsToTicks(msec) ((msec) * (OS_TIMER_CLOCK / 1000))
#define OSRoundUp32B(x) (((u32)(x) + 32 - 1) & ~(32 - 1))

/* os */
void OSRegisterVersion(const char *id);
void OSReport(const char *msg, ...);
void fn_800B5520(char *file, int line, char *msg, ...); /* OSPanic */
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void *__OSSetInterruptHandler(s16 interrupt, void *handler);
u32 __OSUnmaskInterrupts(u32 mask);
void OSInitThreadQueue(OSThreadQueue *queue);
void fn_800BA2C8(OSThreadQueue *queue); /* OSSleepThread */
void fn_800BA3B4(OSThreadQueue *queue); /* OSWakeupThread */
void OSCreateAlarm(OSAlarm *alarm);
void OSSetAlarm(OSAlarm *alarm, OSTime tick, OSAlarmHandler handler);
void DCInvalidateRange(void *addr, u32 nBytes);
void *memcpy(void *dst, const void *src, u32 n);
int memcmp(const void *a, const void *b, u32 n); /* memcmp */

/* dvdlow.c */
void __DVDInitWA(void);
void __DVDInterruptHandler(s16 interrupt, OSContext *context);
BOOL fn_800BC76C(void *addr, u32 length, u32 offset, DVDLowCallback callback); /* DVDLowRead */
BOOL fn_800BCA04(u32 offset, DVDLowCallback callback);                        /* DVDLowSeek */
BOOL DVDLowWaitCoverClose(DVDLowCallback callback);
BOOL fn_800BCAC4(DVDDiskID *diskID, DVDLowCallback callback); /* DVDLowReadDiskID */
BOOL DVDLowStopMotor(DVDLowCallback callback);
BOOL fn_800BCBF4(DVDLowCallback callback);                                  /* DVDLowRequestError */
BOOL fn_800BCC80(DVDDriveInfo *info, DVDLowCallback callback);              /* DVDLowInquiry */
BOOL fn_800BCD1C(u32 subcmd, u32 length, u32 offset, DVDLowCallback callback); /* DVDLowAudioStream */
BOOL fn_800BCDB4(u32 subcmd, DVDLowCallback callback);                      /* DVDLowRequestAudioStatus */
BOOL fn_800BCE40(BOOL enable, u32 size, DVDLowCallback callback);           /* DVDLowAudioBufferConfig */
void DVDLowReset(void);
BOOL fn_800BCF98(void);           /* DVDLowBreak */
DVDLowCallback fn_800BCFAC(void); /* DVDLowClearCallback */

/* dvdfs.c */
extern OSThreadQueue __DVDThreadQueue;
void __DVDFSInit(void);

/* dvdqueue.c */
void __DVDClearWaitingQueue(void);
BOOL __DVDPushWaitingQueue(s32 prio, DVDCommandBlock *block);
DVDCommandBlock *__DVDPopWaitingQueue(void);
BOOL __DVDCheckWaitingQueue(void);
BOOL fn_800C0300(DVDCommandBlock *block); /* __DVDDequeueWaitingQueue */

/* dvderror.c / dvdidutils.c / dvdFatal.c / fstload.c */
void __DVDStoreErrorCode(u32 error);
BOOL fn_800C04F8(DVDDiskID *id1, DVDDiskID *id2); /* DVDCompareDiskID */
void fn_800C06EC(void);                           /* __DVDPrintFatalMessage */
void __fstLoad(void);

#define defaultOptionalCommandChecker fn_800BDA6C
void defaultOptionalCommandChecker(DVDCommandBlock *block, DVDLowCallback cb);

char *__DVDVersion = "<< Dolphin SDK - DVD\trelease build: Apr 22 2003 15:49:00 (0x2301) >>";
static BOOL autoInvalidation = TRUE;
static DVDOptionalCommandChecker checkOptionalCommand = defaultOptionalCommandChecker;

static DVDBB2 BB2 ATTRIBUTE_ALIGN(32);
static DVDDiskID CurrDiskID ATTRIBUTE_ALIGN(32);
static DVDCommandBlock DummyCommandBlock;
static OSAlarm ResetAlarm;

/* .sbss: MWCC lays these out in reverse definition order */
void (*LastState_8035A6BC)(DVDCommandBlock *block);
BOOL DVDInitialized_8035A6B8;
BOOL FirstTimeInBootrom_8035A6B4;
BOOL ResetRequired_8035A6B0;
volatile s32 NumInternalRetry_8035A6AC;
u32 LastError_8035A6A8;
volatile u32 CancelLastError_8035A6A4;
volatile u32 ResumeFromHere_8035A6A0;
DVDCBCallback CancelCallback_8035A69C;
volatile u32 Canceling_8035A698;
volatile u32 CurrCommand_8035A694;
volatile BOOL FatalErrorFlag_8035A690;
BOOL AutoFinishing_8035A68C;
volatile BOOL PausingFlag_8035A688;
volatile BOOL PauseFlag_8035A684;
OSBootInfo *bootInfo_8035A680;
DVDDiskID *IDShouldBe_8035A67C;
DVDCommandBlock *executing_8035A678;

#define executing executing_8035A678
#define IDShouldBe IDShouldBe_8035A67C
#define bootInfo bootInfo_8035A680
#define PauseFlag PauseFlag_8035A684
#define PausingFlag PausingFlag_8035A688
#define AutoFinishing AutoFinishing_8035A68C
#define FatalErrorFlag FatalErrorFlag_8035A690
#define CurrCommand CurrCommand_8035A694
#define Canceling Canceling_8035A698
#define CancelCallback CancelCallback_8035A69C
#define ResumeFromHere ResumeFromHere_8035A6A0
#define CancelLastError CancelLastError_8035A6A4
#define LastError LastError_8035A6A8
#define NumInternalRetry NumInternalRetry_8035A6AC
#define ResetRequired ResetRequired_8035A6B0
#define FirstTimeInBootrom FirstTimeInBootrom_8035A6B4
#define DVDInitialized DVDInitialized_8035A6B8
#define LastState LastState_8035A6BC


/* names used by the rest of the program (and by symbols.txt) */
#define stateReadingFST fn_800BDB3C
#define cbForStateReadingFST fn_800BDBD0
#define stateTimeout fn_800BDD08
#define stateGettingError fn_800BDD3C
#define CategorizeError fn_800BDD64
#define cbForStateGettingError fn_800BDE18
#define cbForUnrecoveredError fn_800BE0AC
#define cbForUnrecoveredErrorRetry fn_800BE114
#define stateGoToRetry fn_800BE1AC
#define cbForStateGoToRetry fn_800BE1D4
#define stateCheckID fn_800BE32C
#define stateCheckID3 fn_800BE40C
#define stateCheckID2a fn_800BE440
#define cbForStateCheckID2a fn_800BE474
#define stateCheckID2 fn_800BE4E8
#define cbForStateCheckID1 fn_800BE520
#define cbForStateCheckID2 fn_800BE634
#define cbForStateCheckID3 fn_800BE718
#define stateCoverClosed fn_800BE858
#define stateCoverClosed_CMD fn_800BE924
#define cbForStateCoverClosed fn_800BE954
#define stateMotorStopped fn_800BE9C4
#define cbForStateBusy fn_800BF020
#define DVDReadAbsAsyncPrio fn_800BF658
#define DVDReadAbsAsyncForBS fn_800BF734
#define DVDCancelStreamAsync fn_800BF8D8
#define DVDGetCommandBlockStatus fn_800BFAA8
#define DVDSetAutoInvalidation fn_800BFBA0
#define DVDResume fn_800BFBB0
#define DVDCancelAsync fn_800BFC00
#define DVDCancel fn_800BFE7C
#define cbForCancelSync fn_800BFF28
#define DVDGetCurrentDiskID fn_800BFF4C
#define DVDCheckDisk fn_800BFF54
#define __DVDPrepareResetAsync fn_800C004C

void DVDReset(void);
void stateReadingFST();
void cbForStateReadingFST(u32 intType);
static void cbForStateError(u32 intType);
void stateTimeout();
void stateGettingError();
u32 CategorizeError(u32 error);
void cbForStateGettingError(u32 intType);
void cbForUnrecoveredError(u32 intType);
void cbForUnrecoveredErrorRetry(u32 intType);
void stateGoToRetry();
void cbForStateGoToRetry(u32 intType);
void stateCheckID();
void stateCheckID3();
void stateCheckID2a();
void cbForStateCheckID2a(u32 intType);
void stateCheckID2();
void cbForStateCheckID1(u32 intType);
void cbForStateCheckID2(u32 intType);
void cbForStateCheckID3(u32 intType);
void stateCoverClosed();
void stateCoverClosed_CMD();
void cbForStateCoverClosed(u32 intType);
void stateMotorStopped();
static void cbForStateMotorStopped(u32 intType);
static void stateReady();
static void stateBusy(DVDCommandBlock *block);
void cbForStateBusy(u32 intType);
BOOL DVDCancelAsync(DVDCommandBlock *block, DVDCBCallback callback);
void cbForCancelSync(s32 result, DVDCommandBlock *block);

void defaultOptionalCommandChecker(DVDCommandBlock *block, DVDLowCallback cb) {
}

void DVDInit(void) {
    if (DVDInitialized) {
        return;
    }
    OSRegisterVersion(__DVDVersion);
    DVDInitialized = TRUE;
    __DVDFSInit();
    __DVDClearWaitingQueue();
    __DVDInitWA();
    bootInfo = (OSBootInfo *)0x80000000;
    IDShouldBe = &bootInfo->DVDDiskID;
    __OSSetInterruptHandler(21, __DVDInterruptHandler);
    __OSUnmaskInterrupts(0x400);
    OSInitThreadQueue(&__DVDThreadQueue);
    __DIRegs[0] = 0x2A;
    __DIRegs[1] = 0;
    if (bootInfo->magic == 0xE5207C22) {
        OSReport("load fst\n");
        __fstLoad();
    } else if (bootInfo->magic != 0x0D15EA5E) {
        FirstTimeInBootrom = TRUE;
    }
}

void stateReadingFST() {
    LastState = (void (*)(DVDCommandBlock *))stateReadingFST;
    if (bootInfo->FSTMaxLength < BB2.FSTLength) {
        fn_800B5520("dvd.c", 644, "DVDChangeDisk(): FST in the new disc is too big.   ");
    }
    fn_800BC76C(bootInfo->FSTLocation, OSRoundUp32B(BB2.FSTLength), BB2.FSTPosition, cbForStateReadingFST);
}

void cbForStateReadingFST(u32 intType) {
    DVDCommandBlock *finished;

    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
    } else if (intType & 1) {
        NumInternalRetry = 0;
        __DVDFSInit();
        finished = executing;
        executing = &DummyCommandBlock;
        finished->state = 0;
        if (finished->callback) {
            (finished->callback)(0, finished);
        }
        stateReady();
    } else {
        stateGettingError();
    }
}

static void cbForStateError(u32 intType) {
    DVDCommandBlock *finished;

    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    fn_800C06EC();
    FatalErrorFlag = TRUE;
    finished = executing;
    executing = &DummyCommandBlock;
    if (finished->callback) {
        (finished->callback)(-1, finished);
    }
    if (Canceling) {
        Canceling = FALSE;
        if (CancelCallback) {
            (CancelCallback)(0, finished);
        }
    }
    stateReady();
}

static inline void stateError(u32 error) {
    __DVDStoreErrorCode(error);
    DVDLowStopMotor(cbForStateError);
}

void stateTimeout() {
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError(0);
}

void stateGettingError() {
    fn_800BCBF4(cbForStateGettingError);
}

u32 CategorizeError(u32 error) {
    if (error == 0x20400) {
        LastError = error;
        return 1;
    }
    error &= 0xFFFFFF;
    if (error == 0x62800 || error == 0x23A00 || error == 0xB5A01) {
        return 0;
    }
    NumInternalRetry++;
    if (NumInternalRetry == 2) {
        if (error == LastError) {
            LastError = error;
            return 1;
        }
        LastError = error;
        return 2;
    }
    LastError = error;
    if (error == 0x31100 || executing->command == 5) {
        return 2;
    }
    return 3;
}

static inline BOOL CheckCancel(u32 resume) {
    DVDCommandBlock *finished;

    if (Canceling) {
        ResumeFromHere = resume;
        Canceling = FALSE;
        finished = executing;
        executing = &DummyCommandBlock;
        finished->state = 10;
        if (finished->callback) {
            (*finished->callback)(-3, finished);
        }
        if (CancelCallback) {
            (CancelCallback)(0, finished);
        }
        stateReady();
        return TRUE;
    }
    return FALSE;
}

void cbForStateGettingError(u32 intType) {
    u32 error;
    u32 status;
    u32 errorCategory;
    u32 resume;

    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 2) {
        executing->state = -1;
        stateError(0x01234567);
        return;
    }
    error = __DIRegs[8];
    status = error & 0xFF000000;
    errorCategory = CategorizeError(error);
    if (errorCategory == 1) {
        executing->state = -1;
        stateError(error);
        return;
    }
    if (errorCategory == 2 || errorCategory == 3) {
        resume = 0;
    } else {
        if (status == 0x01000000) {
            resume = 4;
        } else if (status == 0x02000000) {
            resume = 6;
        } else if (status == 0x03000000) {
            resume = 3;
        } else {
            resume = 5;
        }
    }
    if (CheckCancel(resume)) {
        return;
    }
    if (errorCategory == 2) {
        __DVDStoreErrorCode(error);
        stateGoToRetry();
        return;
    }
    if (errorCategory == 3) {
        if ((error & 0x00FFFFFF) == 0x00031100) {
            fn_800BCA04(executing->offset, cbForUnrecoveredError);
        } else {
            LastState(executing);
        }
        return;
    }
    if (status == 0x01000000) {
        executing->state = 5;
        stateMotorStopped();
        return;
    } else if (status == 0x02000000) {
        executing->state = 3;
        stateCoverClosed();
        return;
    } else if (status == 0x03000000) {
        executing->state = 4;
        stateMotorStopped();
        return;
    } else {
        executing->state = -1;
        stateError(0x01234567);
        return;
    }
}

void cbForUnrecoveredError(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 1) {
        stateGoToRetry();
        return;
    }
    fn_800BCBF4(cbForUnrecoveredErrorRetry);
}

void cbForUnrecoveredErrorRetry(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    executing->state = -1;
    if (intType & 2) {
        stateError(0x01234567);
        return;
    }
    stateError(__DIRegs[8]);
}

void stateGoToRetry() {
    DVDLowStopMotor(cbForStateGoToRetry);
}

void cbForStateGoToRetry(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 2) {
        executing->state = -1;
        stateError(0x01234567);
        return;
    }
    NumInternalRetry = 0;
    if (CurrCommand == 4 || CurrCommand == 5 || CurrCommand == 13 || CurrCommand == 15) {
        ResetRequired = TRUE;
    }
    if (CheckCancel(2)) {
        return;
    }
    executing->state = 11;
    stateMotorStopped();
}

void stateCheckID() {
    switch (CurrCommand) {
    case 3:
        if (fn_800C04F8(&CurrDiskID, executing->id)) {
            memcpy(IDShouldBe, &CurrDiskID, sizeof(DVDDiskID));
            executing->state = 1;
            DCInvalidateRange(&BB2, sizeof(DVDBB2));
            LastState = (void (*)(DVDCommandBlock *))stateCheckID2a;
            stateCheckID2a(executing);
        } else {
            DVDLowStopMotor(cbForStateCheckID1);
        }
        break;
    default:
        if (memcmp(&CurrDiskID, IDShouldBe, sizeof(DVDDiskID))) {
            DVDLowStopMotor(cbForStateCheckID1);
        } else {
            LastState = (void (*)(DVDCommandBlock *))stateCheckID3;
            stateCheckID3(executing);
        }
        break;
    }
}

void stateCheckID3() {
    fn_800BCE40(IDShouldBe->streaming, 10, cbForStateCheckID3);
}

void stateCheckID2a() {
    fn_800BCE40(IDShouldBe->streaming, 10, cbForStateCheckID2a);
}

void cbForStateCheckID2a(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 1) {
        NumInternalRetry = 0;
        stateCheckID2(executing);
        return;
    }
    stateGettingError();
}

void stateCheckID2() {
    fn_800BC76C(&BB2, OSRoundUp32B(sizeof(BB2)), 0x420, cbForStateCheckID2);
}

void cbForStateCheckID1(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 2) {
        executing->state = -1;
        stateError(0x01234567);
        return;
    }
    NumInternalRetry = 0;
    if (CheckCancel(1)) {
        return;
    }
    executing->state = 6;
    stateMotorStopped();
}

void cbForStateCheckID2(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 1) {
        NumInternalRetry = 0;
        stateReadingFST();
    } else {
        stateGettingError();
    }
}

void cbForStateCheckID3(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 1) {
        NumInternalRetry = 0;
        if (CheckCancel(0)) {
            return;
        }
        executing->state = 1;
        stateBusy(executing);
    } else {
        stateGettingError();
    }
}

static void AlarmHandler(OSAlarm *alarm, OSContext *context) {
    DVDReset();
    DCInvalidateRange(&CurrDiskID, sizeof(DVDDiskID));
    LastState = (void (*)(DVDCommandBlock *))stateCoverClosed_CMD;
    stateCoverClosed_CMD(executing);
}

void stateCoverClosed() {
    DVDCommandBlock *finished;

    switch (CurrCommand) {
    case 5:
    case 4:
    case 13:
    case 15:
        __DVDClearWaitingQueue();
        finished = executing;
        executing = &DummyCommandBlock;
        if (finished->callback) {
            (finished->callback)(-4, finished);
        }
        stateReady();
        break;
    default:
        DVDReset();
        OSCreateAlarm(&ResetAlarm);
        OSSetAlarm(&ResetAlarm, OSMillisecondsToTicks(1150), AlarmHandler);
        break;
    }
}

void stateCoverClosed_CMD() {
    fn_800BCAC4(&CurrDiskID, cbForStateCoverClosed);
}

void cbForStateCoverClosed(u32 intType) {
    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (intType & 1) {
        NumInternalRetry = 0;
        stateCheckID();
        return;
    }
    stateGettingError();
}

void stateMotorStopped() {
    DVDLowWaitCoverClose(cbForStateMotorStopped);
}

static void cbForStateMotorStopped(u32 intType) {
    __DIRegs[1] = 0;
    executing->state = 3;
    stateCoverClosed();
}

static void stateReady() {
    DVDCommandBlock *finished;

    if (!__DVDCheckWaitingQueue()) {
        executing = NULL;
        return;
    }
    if (PauseFlag) {
        PausingFlag = TRUE;
        executing = NULL;
        return;
    }
    executing = __DVDPopWaitingQueue();
    if (FatalErrorFlag) {
        executing->state = -1;
        finished = executing;
        executing = &DummyCommandBlock;
        if (finished->callback) {
            (finished->callback)(-1, finished);
        }
        stateReady();
        return;
    }
    CurrCommand = executing->command;
    if (ResumeFromHere) {
        switch (ResumeFromHere) {
        case 2:
            executing->state = 11;
            stateMotorStopped();
            break;
        case 3:
            executing->state = 4;
            stateMotorStopped();
            break;
        case 4:
            executing->state = 5;
            stateMotorStopped();
            break;
        case 1:
        case 7:
        case 6:
            executing->state = 3;
            stateCoverClosed();
            break;
        case 5:
            executing->state = -1;
            stateError(CancelLastError);
            break;
        }
        ResumeFromHere = 0;
    } else {
        executing->state = 1;
        stateBusy(executing);
    }
}

#define MIN(a, b) (((a) > (b)) ? (b) : (a))

static void stateBusy(DVDCommandBlock *block) {
    DVDCommandBlock *finished;

    LastState = stateBusy;
    switch (block->command) {
    case 5:
        __DIRegs[1] = __DIRegs[1];
        block->currTransferSize = sizeof(DVDDiskID);
        fn_800BCAC4(block->addr, cbForStateBusy);
        break;
    case 1:
    case 4:
        if (!block->length) {
            finished = executing;
            executing = &DummyCommandBlock;
            finished->state = 0;
            if (finished->callback) {
                (finished->callback)(0, finished);
            }
            stateReady();
        } else {
            __DIRegs[1] = __DIRegs[1];
            block->currTransferSize = MIN(block->length - block->transferredSize, 0x80000);
            fn_800BC76C((void *)((u8 *)block->addr + block->transferredSize), block->currTransferSize,
                        block->offset + block->transferredSize, cbForStateBusy);
        }
        break;
    case 2:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCA04(block->offset, cbForStateBusy);
        break;
    case 3:
        DVDLowStopMotor(cbForStateBusy);
        break;
    case 15:
        DVDLowStopMotor(cbForStateBusy);
        break;
    case 6:
        __DIRegs[1] = __DIRegs[1];
        if (AutoFinishing) {
            executing->currTransferSize = 0;
            fn_800BCDB4(0, cbForStateBusy);
        } else {
            executing->currTransferSize = 1;
            fn_800BCD1C(0, block->length, block->offset, cbForStateBusy);
        }
        break;
    case 7:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCD1C(0x10000, 0, 0, cbForStateBusy);
        break;
    case 8:
        __DIRegs[1] = __DIRegs[1];
        AutoFinishing = TRUE;
        fn_800BCD1C(0, 0, 0, cbForStateBusy);
        break;
    case 9:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCDB4(0, cbForStateBusy);
        break;
    case 10:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCDB4(0x10000, cbForStateBusy);
        break;
    case 11:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCDB4(0x20000, cbForStateBusy);
        break;
    case 12:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCDB4(0x30000, cbForStateBusy);
        break;
    case 13:
        __DIRegs[1] = __DIRegs[1];
        fn_800BCE40(block->offset, block->length, cbForStateBusy);
        break;
    case 14:
        __DIRegs[1] = __DIRegs[1];
        block->currTransferSize = sizeof(DVDDriveInfo);
        fn_800BCC80(block->addr, cbForStateBusy);
        break;
    default:
        checkOptionalCommand(block, cbForStateBusy);
        break;
    }
}

static u32 DmaCommand[] = {0xFFFFFFFF};
static u32 ImmCommand[] = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
/* literal of DVDChangeDiskAsync (dead-stripped from this program) */
static char ChangeDiskMsg[] = "DVDChangeDiskAsync(): You can't specify NULL to company name.  \n";

static inline BOOL IsImmCommandWithResult(u32 command) {
    u32 i;

    if (command == 9 || command == 10 || command == 11 || command == 12) {
        return TRUE;
    }
    for (i = 0; i < sizeof(ImmCommand) / sizeof(ImmCommand[0]); i++) {
        if (command == ImmCommand[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL IsDmaCommand(u32 command) {
    u32 i;

    if (command == 1 || command == 4 || command == 5 || command == 14) {
        return TRUE;
    }
    for (i = 0; i < sizeof(DmaCommand) / sizeof(DmaCommand[0]); i++) {
        if (command == DmaCommand[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

void cbForStateBusy(u32 intType) {
    DVDCommandBlock *finished;

    if (intType == 16) {
        executing->state = -1;
        stateTimeout();
        return;
    }
    if (CurrCommand == 3 || CurrCommand == 15) {
        if (intType & 2) {
            executing->state = -1;
            stateError(0x01234567);
            return;
        }
        NumInternalRetry = 0;
        if (CurrCommand == 15) {
            ResetRequired = TRUE;
        }
        if (CheckCancel(7)) {
            return;
        }
        executing->state = 7;
        stateMotorStopped();
        return;
    }
    if (IsDmaCommand(CurrCommand)) {
        executing->transferredSize += executing->currTransferSize - __DIRegs[6];
    }
    if (intType & 8) {
        Canceling = FALSE;
        finished = executing;
        executing = &DummyCommandBlock;
        finished->state = 10;
        if (finished->callback) {
            (*finished->callback)(-3, finished);
        }
        if (CancelCallback) {
            (CancelCallback)(0, finished);
        }
        stateReady();
        return;
    }
    if (intType & 1) {
        NumInternalRetry = 0;
        if (CheckCancel(0)) {
            return;
        }
        if (IsDmaCommand(CurrCommand)) {
            if (executing->transferredSize != executing->length) {
                stateBusy(executing);
                return;
            }
            finished = executing;
            executing = &DummyCommandBlock;
            finished->state = 0;
            if (finished->callback) {
                (finished->callback)((s32)finished->transferredSize, finished);
            }
            stateReady();
        } else if (IsImmCommandWithResult(CurrCommand)) {
            s32 result;

            if (CurrCommand == 11 || CurrCommand == 10) {
                result = (s32)(__DIRegs[8] << 2);
            } else {
                result = (s32)__DIRegs[8];
            }
            finished = executing;
            executing = &DummyCommandBlock;
            finished->state = 0;
            if (finished->callback) {
                (finished->callback)(result, finished);
            }
            stateReady();
        } else if (CurrCommand == 6) {
            if (executing->currTransferSize == 0) {
                if (__DIRegs[8] & 1) {
                    finished = executing;
                    executing = &DummyCommandBlock;
                    finished->state = 9;
                    if (finished->callback) {
                        (finished->callback)(-2, finished);
                    }
                    stateReady();
                } else {
                    AutoFinishing = FALSE;
                    executing->currTransferSize = 1;
                    fn_800BCD1C(0, executing->length, executing->offset, cbForStateBusy);
                }
            } else {
                finished = executing;
                executing = &DummyCommandBlock;
                finished->state = 0;
                if (finished->callback) {
                    (finished->callback)(0, finished);
                }
                stateReady();
            }
        } else {
            finished = executing;
            executing = &DummyCommandBlock;
            finished->state = 0;
            if (finished->callback) {
                (finished->callback)(0, finished);
            }
            stateReady();
        }
    } else {
        if (CurrCommand == 14) {
            executing->state = -1;
            stateError(0x01234567);
            return;
        }
        if ((CurrCommand == 1 || CurrCommand == 4 || CurrCommand == 5 || CurrCommand == 14) &&
            (executing->transferredSize == executing->length)) {
            if (CheckCancel(0)) {
                return;
            }
            finished = executing;
            executing = &DummyCommandBlock;
            finished->state = 0;
            if (finished->callback) {
                (finished->callback)((s32)finished->transferredSize, finished);
            }
            stateReady();
            return;
        }
        stateGettingError();
    }
}

static inline BOOL issueCommand(s32 prio, DVDCommandBlock *block) {
    BOOL level;
    BOOL result;

    if (autoInvalidation && (block->command == 1 || block->command == 4 || block->command == 5 || block->command == 14)) {
        DCInvalidateRange(block->addr, block->length);
    }
    level = OSDisableInterrupts();
    block->state = 2;
    result = __DVDPushWaitingQueue(prio, block);
    if ((executing == NULL) && (PauseFlag == FALSE)) {
        stateReady();
    }
    OSRestoreInterrupts(level);
    return result;
}

BOOL DVDReadAbsAsyncPrio(DVDCommandBlock *block, void *addr, s32 length, s32 offset, DVDCBCallback callback, s32 prio) {
    BOOL idle;

    block->command = 1;
    block->addr = addr;
    block->length = length;
    block->offset = offset;
    block->transferredSize = 0;
    block->callback = callback;
    idle = issueCommand(prio, block);
    return idle;
}

BOOL DVDReadAbsAsyncForBS(DVDCommandBlock *block, void *addr, s32 length, s32 offset, DVDCBCallback callback) {
    BOOL idle;

    block->command = 4;
    block->addr = addr;
    block->length = length;
    block->offset = offset;
    block->transferredSize = 0;
    block->callback = callback;
    idle = issueCommand(2, block);
    return idle;
}

BOOL DVDReadDiskID(DVDCommandBlock *block, DVDDiskID *diskID, DVDCBCallback callback) {
    BOOL idle;

    block->command = 5;
    block->addr = diskID;
    block->length = sizeof(DVDDiskID);
    block->offset = 0;
    block->transferredSize = 0;
    block->callback = callback;
    idle = issueCommand(2, block);
    return idle;
}

BOOL DVDCancelStreamAsync(DVDCommandBlock *block, DVDCBCallback callback) {
    BOOL idle;

    block->command = 7;
    block->callback = callback;
    idle = issueCommand(1, block);
    return idle;
}

BOOL DVDInquiryAsync(DVDCommandBlock *block, DVDDriveInfo *info, DVDCBCallback callback) {
    BOOL idle;

    block->command = 14;
    block->addr = (void *)info;
    block->length = sizeof(DVDDriveInfo);
    block->transferredSize = 0;
    block->callback = callback;
    idle = issueCommand(2, block);
    return idle;
}

void DVDReset(void) {
    DVDLowReset();
    __DIRegs[0] = 0x2A;
    __DIRegs[1] = __DIRegs[1];
    ResetRequired = FALSE;
    ResumeFromHere = 0;
}

s32 DVDGetCommandBlockStatus(const DVDCommandBlock *block) {
    BOOL enabled;
    s32 retVal;

    enabled = OSDisableInterrupts();
    if (block->state == 3) {
        retVal = 1;
    } else {
        retVal = block->state;
    }
    OSRestoreInterrupts(enabled);
    return retVal;
}

s32 DVDGetDriveStatus(void) {
    BOOL enabled;
    s32 retVal;

    enabled = OSDisableInterrupts();
    if (FatalErrorFlag) {
        retVal = -1;
    } else if (PausingFlag) {
        retVal = 8;
    } else {
        if (executing == NULL) {
            retVal = 0;
        } else if (executing == &DummyCommandBlock) {
            retVal = 0;
        } else {
            retVal = DVDGetCommandBlockStatus(executing);
        }
    }
    OSRestoreInterrupts(enabled);
    return retVal;
}

BOOL DVDSetAutoInvalidation(BOOL autoInval) {
    BOOL prev;

    prev = autoInvalidation;
    autoInvalidation = autoInval;
    return prev;
}

static inline void DVDPause(void) {
    BOOL level;

    level = OSDisableInterrupts();
    PauseFlag = TRUE;
    if (executing == NULL) {
        PausingFlag = TRUE;
    }
    OSRestoreInterrupts(level);
}

void DVDResume(void) {
    BOOL level;

    level = OSDisableInterrupts();
    PauseFlag = FALSE;
    if (PausingFlag) {
        PausingFlag = FALSE;
        stateReady();
    }
    OSRestoreInterrupts(level);
}

BOOL DVDCancelAsync(DVDCommandBlock *block, DVDCBCallback callback) {
    BOOL enabled;
    DVDLowCallback old;
    DVDCommandBlock *finished; /* unused; keeps the original frame size */

    enabled = OSDisableInterrupts();
    switch (block->state) {
    case -1:
    case 0:
    case 10:
        if (callback) {
            (*callback)(0, block);
        }
        break;
    case 1:
        if (Canceling) {
            OSRestoreInterrupts(enabled);
            return FALSE;
        }
        Canceling = TRUE;
        CancelCallback = callback;
        if (block->command == 4 || block->command == 1) {
            fn_800BCF98();
        }
        break;
    case 2:
        fn_800C0300(block);
        block->state = 10;
        if (block->callback) {
            (block->callback)(-3, block);
        }
        if (callback) {
            (*callback)(0, block);
        }
        break;
    case 3:
        switch (block->command) {
        case 5:
        case 4:
        case 13:
        case 15:
            if (callback) {
                (*callback)(0, block);
            }
            break;
        default:
            if (Canceling) {
                OSRestoreInterrupts(enabled);
                return FALSE;
            }
            Canceling = TRUE;
            CancelCallback = callback;
            break;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 11:
        old = fn_800BCFAC();
        if (old != cbForStateMotorStopped) {
            OSRestoreInterrupts(enabled);
            return FALSE;
        }
        if (block->state == 4) {
            ResumeFromHere = 3;
        }
        if (block->state == 5) {
            ResumeFromHere = 4;
        }
        if (block->state == 6) {
            ResumeFromHere = 1;
        }
        if (block->state == 11) {
            ResumeFromHere = 2;
        }
        if (block->state == 7) {
            ResumeFromHere = 7;
        }
        executing = &DummyCommandBlock;
        block->state = 10;
        if (block->callback) {
            (block->callback)(-3, block);
        }
        if (callback) {
            (callback)(0, block);
        }
        stateReady();
        break;
    }
    OSRestoreInterrupts(enabled);
    return TRUE;
}

s32 DVDCancel(DVDCommandBlock *block) {
    BOOL result;
    s32 state;
    u32 command;
    BOOL enabled;

    result = DVDCancelAsync(block, cbForCancelSync);
    if (result == FALSE) {
        return -1;
    }
    enabled = OSDisableInterrupts();
    for (;;) {
        state = ((volatile DVDCommandBlock *)block)->state;
        if (state == 0 || state == -1 || state == 10) {
            break;
        }
        if (state == 3) {
            command = ((volatile DVDCommandBlock *)block)->command;
            if (command == 4 || command == 5 || command == 13 || command == 15) {
                break;
            }
        }
        fn_800BA2C8(&__DVDThreadQueue);
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

void cbForCancelSync(s32 result, DVDCommandBlock *block) {
    fn_800BA3B4(&__DVDThreadQueue);
}

DVDDiskID *DVDGetCurrentDiskID(void) {
    return (DVDDiskID *)0x80000000;
}

BOOL DVDCheckDisk(void) {
    BOOL enabled;
    s32 retVal;
    s32 state;
    u32 coverReg;

    enabled = OSDisableInterrupts();
    if (FatalErrorFlag) {
        state = -1;
    } else if (PausingFlag) {
        state = 8;
    } else {
        if (executing == NULL) {
            state = 0;
        } else if (executing == &DummyCommandBlock) {
            state = 0;
        } else {
            state = executing->state;
        }
    }
    switch (state) {
    case 1:
    case 9:
    case 10:
    case 2:
        retVal = TRUE;
        break;
    case -1:
    case 11:
    case 7:
    case 3:
    case 4:
    case 5:
    case 6:
        retVal = FALSE;
        break;
    case 0:
    case 8:
        coverReg = __DIRegs[1];
        if (((coverReg >> 2) & 1) || (coverReg & 1)) {
            retVal = FALSE;
        } else {
            if (ResumeFromHere) {
                retVal = FALSE;
            } else {
                retVal = TRUE;
            }
        }
        break;
    }
    OSRestoreInterrupts(enabled);
    return retVal;
}

static inline BOOL DVDCancelAllAsync(DVDCBCallback callback) {
    BOOL enabled;
    DVDCommandBlock *p;
    BOOL retVal;

    enabled = OSDisableInterrupts();
    DVDPause();
    while ((p = __DVDPopWaitingQueue()) != 0) {
        DVDCancelAsync(p, NULL);
    }
    if (executing) {
        retVal = DVDCancelAsync(executing, callback);
    } else {
        retVal = TRUE;
        if (callback) {
            (*callback)(0, NULL);
        }
    }
    DVDResume();
    OSRestoreInterrupts(enabled);
    return retVal;
}

void __DVDPrepareResetAsync(DVDCBCallback callback) {
    BOOL enabled;

    enabled = OSDisableInterrupts();
    __DVDClearWaitingQueue();
    if (Canceling) {
        CancelCallback = callback;
    } else {
        if (executing) {
            executing->callback = NULL;
        }
        DVDCancelAllAsync(callback);
    }
    OSRestoreInterrupts(enabled);
}
