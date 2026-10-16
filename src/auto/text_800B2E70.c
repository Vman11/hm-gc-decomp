/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
typedef struct OSResetFunctionInfo {
    s32 (*func)(s32);
    u32 priority;
    struct OSResetFunctionInfo *next;
    struct OSResetFunctionInfo *prev;
} OSResetFunctionInfo;
typedef struct OSResetFunctionQueue {
    OSResetFunctionInfo *head;
    OSResetFunctionInfo *tail;
} OSResetFunctionQueue;
extern OSResetFunctionQueue ResetFunctionQueue_8035A5B8;
typedef struct UnkEntry_800BAA78 {
    s32 type;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 *unk18;
} UnkEntry_800BAA78;
typedef struct UnkHeader_800BAA78 {
    u32 count;
    UnkEntry_800BAA78 entries[1];
} UnkHeader_800BAA78;
typedef struct GXRenderModeObj {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    u32 xFBmode;
    u8 field_rendering;
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
} GXRenderModeObj;
u32 VIGetTvFormat(void);
typedef struct DVDDiskID {
    char gameName[4];
    char company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
} DVDDiskID;
typedef union PPCWGPipe {
    u8 u8;
    u16 u16;
    u32 u32;
    u64 u64;
    s8 s8;
    s16 s16;
    s32 s32;
    s64 s64;
    f32 f32;
    f64 f64;
} PPCWGPipe;
volatile PPCWGPipe GXWGFifo : 0xCC008000;
typedef struct GXDataHead {
    u16 vNumNot;
    u16 bpSentNot;
    u16 vNum;
    u16 vLim;
} GXDataHead;
#define SETF(reg, size, shift, v) \
    ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | (((u32)(v) << (shift)) & (((1 << (size)) - 1) << (shift))))
typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char reserved[2];
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];
typedef struct UnkVoice80321D60 {
    s32 unk0;
    u32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad14[0x4C];
} UnkVoice80321D60;
extern UnkVoice80321D60 lbl_80321D60[];
typedef __va_list va_list;
extern int vprintf(const char* fmt, va_list args);
extern u16 lbl_80359550;
extern u32 lbl_8035A7A8;
extern u32 lbl_8035A7AC;
extern void (*lbl_8035A7A0)(void);
void fn_800C69D8();
void OSClearContext(u8 *ctx);
void OSSetCurrentContext(u8 *ctx);
typedef struct ColorBits {
    u32 unk0;
    u32 a : 16;
    u32 b : 8;
    u32 c : 8;
} ColorBits;
static inline f32 ClampF(f32 v, f32 lo, f32 hi) {
    if (v < lo) {
        return lo;
    } else if (v > hi) {
        return hi;
    }
    return v;
}
typedef struct Anim {
    f32 *data;
    u32 count;
    f32 speed;
    u32 idx;
    f32 t;
    f32 prev;
    f32 cur;
    f32 out;
} Anim;
typedef struct AnimInit {
    s32 unk0;
    s32 unk4;
    void *unk8;
    s32 unkC;
    f32 unk10;
    s32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    s32 unk28;
} AnimInit;
typedef struct SramControlBlock {
    u8 pad0[0x13];
    u8 flags;
    u8 pad14[0x30];
    s32 enabled;
    s32 locked;
    s32 sync;
} SramControlBlock;
extern s32 fn_800E2584();
extern f32 lbl_80363088;
extern f32 lbl_80363068;
extern u8 lbl_802D8F60[];
typedef struct HeapCell {
    struct HeapCell *prev;
    struct HeapCell *next;
    int size;
} HeapCell;
typedef struct HeapDesc {
    int size;
    HeapCell *free;
    HeapCell *allocated;
} HeapDesc;
extern int lbl_8035A568;
typedef struct TrkBuf {
    u32 mutex;
    s32 isInUse;
    s32 count;
    u32 pos;
    u8 data[0x880];
} TrkBuf;
typedef struct TRKFramingState {
    s32 msgBufID;
    TrkBuf *buffer;
    u8 receiveState;
    s32 isEscape;
} TRKFramingState;
extern TRKFramingState lbl_803257B4;
extern TrkBuf lbl_80323E00[3];
static inline s32 TRKAppendBuffer1_ui8(TrkBuf *buf, u8 data) {
    if (buf->pos >= 0x880) {
        return 0x301;
    }
    buf->data[buf->pos++] = data;
    buf->count++;
    return 0;
}
static inline s32 TRKReadBuffer_inline(TrkBuf *buf, void *data, u32 length) {
    extern void *fn_80003488(void *, const void *, u32);
    s32 error = 0;
    u32 bytesLeft;
    if (length == 0) {
        return 0;
    }
    bytesLeft = buf->count - buf->pos;
    if (length > bytesLeft) {
        error = 0x302;
        length = bytesLeft;
    }
    fn_80003488(data, buf->data + buf->pos, length);
    buf->pos += length;
    return error;
}
static inline s32 TRKAppendBuffer_inline(TrkBuf *buf, const void *data, u32 length) {
    extern void *fn_80003488(void *, const void *, u32);
    s32 error = 0;
    u32 bytesLeft;
    bytesLeft = 0x880 - buf->pos;
    if (bytesLeft < length) {
        error = 0x301;
        length = bytesLeft;
    }
    if (length == 1) {
        buf->data[buf->pos] = *(u8 *)data;
    } else {
        fn_80003488(buf->data + buf->pos, data, length);
    }
    buf->pos += length;
    buf->count = buf->pos;
    return error;
}
static inline s32 TRKAppendBuffer1_ui32(TrkBuf *buf, u32 data) {
    extern s32 gTRKBigEndian[];
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[4];
    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)&data;
    } else {
        byteData = (u8 *)&data;
        bigEndianData = swapBuffer;
        bigEndianData[0] = byteData[3];
        bigEndianData[1] = byteData[2];
        bigEndianData[2] = byteData[1];
        bigEndianData[3] = byteData[0];
    }
    return TRKAppendBuffer_inline(buf, bigEndianData, 4);
}
s32 fn_800DF2F0(void *mutex);
s32 fn_800DF2F8(void *mutex);
s32 fn_800DF300(void *mutex);
extern s32 lbl_803257D0[];
extern u32 lbl_803257C8[];
void fn_800DEA14(s32 arg0);
typedef s32 (*TrkDispatchFunc)(TrkBuf *);
extern TrkDispatchFunc lbl_802E00D8[];
extern void fn_800DBAD0(TrkBuf*, s32);
extern s32 fn_800DAF24(TrkBuf*);
s32 fn_800DEA20(void);
s32 fn_800DF4D0();
typedef struct DBCommTable {
    s32 (*initialize)(void *, void *);
    void (*initInterrupts)(void);
    s32 (*peek)(void);
    s32 (*read)(void *, s32);
    s32 (*write)(const void *, s32);
    s32 (*open)(void);
    s32 (*close)(void);
} DBCommTable;
extern DBCommTable gDBCommTable;
void TRKEXICallBack(s16 chan, void *ctx);
s32 TRKGetNextEvent(void *event);
void TRKDestructEvent(void *event);
TrkBuf *TRKGetBuffer(s32 idx);
s32 TRKDispatchMessage(TrkBuf *buf);
void TRKGetInput(void);
s32 TRKTargetStopped(void);
s32 TRKTargetContinue(void);
s32 TRKTargetInterrupt(void *event);
s32 TRKTargetSupportRequest(void);
extern u8 *gTRKInputPendingPtr[];
extern u8 lbl_80323560[];
extern u16 lbl_8035A8F0;
s32 fn_800CDBD8(s32 chan, void *out);
extern const char *lbl_80359600;
extern u8 lbl_802DF308[];
void OSRegisterResetFunction(void *);
void fn_800CC160(void);
void fn_800CDBA0(u32 arg);
extern char* lbl_803595E8;
void OSRegisterVersion(const char*);
void fn_800C9744(void);
void fn_800C8C68(void);
void fn_800C74DC(void);
void fn_800C8058(void);
void fn_800C8464(s32);
void fn_800C6EEC(s32);
void fn_800C6FF8(void);

extern s32 lbl_80308680[32];
extern s32 lbl_80308700[32];
extern s32 lbl_8035A7E8;
void fn_800C70AC(void);
void fn_800C9944(void);
void fn_800C8C94(void);
void fn_800C75C0(void);
void fn_800C807C(void);
void fn_800C8804(void);
void* fn_800C7190(void);
void fn_800C71AC(void*);
void fn_800C7160(void*);

extern u8 lbl_80308780[][0x780];
extern u8 lbl_80309E00[][0x780];
extern s32 lbl_8035A814;
extern s32 lbl_8035A810;
extern u32 lbl_8035A7F0;

typedef struct TRKState_unk {
    u8 pad0[0x8C];
    s32 unk8C;
    u8 pad90[0x8];
    s32 unk98;
} TRKState_unk;

typedef struct TRKCPUState_unk {
    u32 gpr[32];
    u32 unk80;
    u8 pad84[0x14];
    u64 fpr[32];
    u8 pad198[0xA0];
    u32 unk238;
} TRKCPUState_unk;

typedef struct TRKStepStatus {
    s32 active;
    u8 type;
    u32 count;
    u32 rangeStart;
    u32 rangeEnd;
} TRKStepStatus;
extern TRKStepStatus lbl_802E01B4;

typedef struct UnkInterp {
    f32* unk0;
    u32 unk4;
    f32 unk8;
    u32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} UnkInterp;

typedef struct UnkStep {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} UnkStep;

typedef struct UnkU16 {
    u16 v;
} UnkU16;

typedef struct FSTEntry {
    u32 isDirAndStringOff;
    u32 parentOrPosition;
    u32 nextEntryOrLength;
} FSTEntry;

typedef struct DVDDir {
    u32 entryNum;
    u32 location;
    u32 next;
} DVDDir;

typedef struct DVDDirEntry {
    u32 entryNum;
    BOOL isDir;
    char* name;
} DVDDirEntry;

extern FSTEntry* FstStart_8035A65C;
extern char* FstStringStart_8035A660;

#define entryIsDir(i) (((FstStart_8035A65C[i].isDirAndStringOff & 0xff000000) == 0) ? FALSE : TRUE)
#define stringOff(i) (FstStart_8035A65C[i].isDirAndStringOff & ~0xff000000)
#define nextDir(i) (FstStart_8035A65C[i].nextEntryOrLength)

extern f32 lbl_80363088;
s32 fn_800E2584(void);

typedef struct TRKExceptionStatus {
    u32 exceptionAddress;
    u32 unk4;
    u16 exceptionID;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 exceptionDetected;
} TRKExceptionStatus;

extern TRKState_unk gTRKState;
extern TRKCPUState_unk gTRKCPUState;
extern u32 lbl_80325D58[];

typedef struct DBInterface {
    u32 bAllocated;
    u32 exceptionMask;
} DBInterface;

extern DBInterface* __DBInterface;
void OSReport(const char* msg, ...);
void OSDumpContext(void* context);

extern s32 __OSArenaHi_8035A578;
s32 PPCMfmsr(void) { return __MFMSR(); }

void PPCMtmsr(u32 value) { __MTMSR(value); }

void PPCMtl2cr(u32 value) { __mtspr(1017, value); }

void PPCMtdec(u32 value) { __mtspr(22, value); }

void fn_800B2EA8(void) { __sc(); }

void PPCHalt(void) { __sync(); for (;;) {} }

void PPCMtmmcr0(u32 value) { __mtspr(952, value); }

void PPCMtmmcr1(u32 value) { __mtspr(956, value); }

s32 PPCMffpscr(void) {
    union { f64 f; u32 u[2]; } data;
    register f64 fpscr;
    fpscr = __mffs();
    data.f = fpscr;
    return data.u[1];
}

s32 PPCMfhid2(void) { return __mfspr(920); }

void PPCMthid2(u32 value) { __mtspr(920, value); }

#pragma scheduling on
void DBInit(void) {
    extern s32 DBVerbose;
    extern void __DBExceptionDestination(void);
    __DBInterface = (DBInterface*)0x80000040;
    *(u32*)0x80000048 = (u32)__DBExceptionDestination + 0x80000000;
    DBVerbose = 1;
}
void fn_800B2FB8(void) {
    u32* contextAddr = (u32*)0x00C0;
    void* context = (void*)(0x80000000 + *contextAddr);
    OSReport("DBExceptionDestination\n");
    OSDumpContext(context);
    PPCHalt();
}

void __DBExceptionDestination(void) {
    __MTMSR(__MFMSR() | 0x30);
    fn_800B2FB8();
}

u32 __DBIsExceptionMarked(u8 exception) {
    return __DBInterface->exceptionMask & (1 << exception);
}

void DBPrintf(char* str, ...) {
}

#pragma push
#pragma peephole off
u32 fn_800B31A4(void) {
    extern u32* BootInfo_8035A520;
    u32 result;
    if (BootInfo_8035A520 == NULL || (result = BootInfo_8035A520[11]) == 0) {
        result = 0x10000002;
    }
    return result;
}
#pragma pop
void InquiryCallback(s32 result, s32* block) {
    extern u16 DriveInfo_80307500[];
    switch (block[3]) {
    case 0:
        *(u16*)0x800030E6 = DriveInfo_80307500[1] | 0x8000;
        break;
    default:
        *(u16*)0x800030E6 = 1;
        break;
    }
}

extern s32* OSExceptionTable_8035A544;
s32 __OSSetExceptionHandler(u8 exception, s32 handler) {
    s32* entry = (s32*)((u32)OSExceptionTable_8035A544 + (exception * 4));
    s32 oldHandler = *entry;
    *entry = handler;
    return oldHandler;
}

#pragma peephole off
s32 __OSGetExceptionHandler(u8 exception) {
    return OSExceptionTable_8035A544[exception];
}

volatile u32 __DIRegs[16] : 0xCC006000;
u32 fn_800B3B28(void) {
    return (__DIRegs[9] & 0x000000FF);
}

void OSRegisterVersion(const char* id) {
    extern char lbl_8035952C[];
    OSReport(lbl_8035952C, id);
}

typedef struct OSAlarm OSAlarm;
struct OSAlarm {
    void *handler;
    u32 tag;
    s64 fire;
    OSAlarm *prev;
    OSAlarm *next;
    s64 period;
    s64 start;
};

void OSInitAlarm(void) {
    extern void DecrementerExceptionHandler(void);
    extern void* __OSGetExceptionHandler(u8);
    extern void* __OSSetExceptionHandler(u8, void*);
    extern struct { void* head; void* tail; } AlarmQueue_8035A560;
    if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
        AlarmQueue_8035A560.head = AlarmQueue_8035A560.tail = 0;
        __OSSetExceptionHandler(8, DecrementerExceptionHandler);
    }
}

#pragma peephole on
void OSCreateAlarm(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
}

long long fn_800BA5E8(long long arg0);
void InsertAlarm(void *alarm, long long fire, void *handler);
void fn_800B3E7C(int *alarm, long long start, long long period, void *handler) {
    int enabled = OSDisableInterrupts();
    *(long long *)(alarm + 6) = period;
    *(long long *)(alarm + 8) = fn_800BA5E8(start);
    InsertAlarm(alarm, 0, handler);
    OSRestoreInterrupts(enabled);
}

u64 __OSGetSystemTime(void);
#pragma push
#pragma dont_inline on
#pragma peephole off
void fn_800B3EF8(void *arg0) {
    extern struct { OSAlarm *head; OSAlarm *tail; } AlarmQueue_8035A560;
    OSAlarm *alarm = arg0;
    OSAlarm *next;
    BOOL enabled = OSDisableInterrupts();
    s64 delta;

    if (alarm->handler == 0) {
        OSRestoreInterrupts(enabled);
        return;
    }

    next = alarm->next;
    if (next == 0) {
        AlarmQueue_8035A560.tail = alarm->prev;
    } else {
        next->prev = alarm->prev;
    }
    if (alarm->prev) {
        alarm->prev->next = next;
    } else {
        AlarmQueue_8035A560.head = next;
        if (next) {
            delta = next->fire - __OSGetSystemTime();
            if (delta < 0) {
                PPCMtdec(0);
            } else if (delta < 0x80000000) {
                PPCMtdec((u32)delta);
            } else {
                PPCMtdec(0x7fffffff);
            }
        }
    }
    alarm->handler = 0;
    OSRestoreInterrupts(enabled);
}
#pragma pop
static HeapCell *DLAddFront(HeapCell *list, HeapCell *cell) {
    cell->next = list;
    cell->prev = NULL;
    if (list) {
        list->prev = cell;
    }
    return cell;
}

static HeapCell *DLExtract(HeapCell *list, HeapCell *cell) {
    if (cell->next) {
        cell->next->prev = cell->prev;
    }
    if (cell->prev == NULL) {
        return cell->next;
    } else {
        cell->prev->next = cell->next;
    }
    return list;
}

HeapCell *fn_800B4294(HeapCell *list, HeapCell *cell) {
    HeapCell *prev = 0;
    HeapCell *next = list;
    for (; next; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }
    cell->next = next;
    cell->prev = prev;
    if (next) {
        next->prev = cell;
        if ((char *)cell + cell->size == (char *)next) {
            cell->size += next->size;
            next = next->next;
            cell->next = next;
            if (next) {
                next->prev = cell;
            }
        }
    }
    if (prev) {
        prev->next = cell;
        if ((char *)prev + prev->size == (char *)cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next) {
                next->prev = prev;
            }
        }
        return list;
    }
    return cell;
}

void *fn_800B4340(int heap, u32 size) {
    HeapDesc *hd;
    HeapCell *cell;
    HeapCell *newCell;
    u32 leftoverSize;
    HeapCell *list;

    hd = &((HeapDesc *)lbl_8035A568)[heap];
    size = (size + 0x20 + 0x20 - 1) & ~(0x20 - 1);

    for (cell = hd->free; cell != NULL; cell = cell->next) {
        if ((int)size <= cell->size) {
            break;
        }
    }

    if (cell == NULL) {
        return NULL;
    }

    leftoverSize = cell->size - size;
    if (leftoverSize < 0x40) {
        list = hd->free;
        if (cell->next) {
            cell->next->prev = cell->prev;
        }
        if (cell->prev == NULL) {
            list = cell->next;
        } else {
            cell->prev->next = cell->next;
        }
        hd->free = list;
    } else {
        cell->size = size;
        newCell = (HeapCell *)((char *)cell + size);
        newCell->size = leftoverSize;
        newCell->prev = cell->prev;
        newCell->next = cell->next;
        if (newCell->next != NULL) {
            newCell->next->prev = newCell;
        }
        if (newCell->prev != NULL) {
            newCell->prev->next = newCell;
        } else {
            hd->free = newCell;
        }
    }

    list = hd->allocated;
    cell->next = list;
    cell->prev = NULL;
    if (list) {
        list->prev = cell;
    }
    hd->allocated = cell;
    return (char *)cell + 0x20;
}

extern int lbl_80359530;
extern int lbl_8035A568;
extern int lbl_8035A56C;
extern int lbl_8035A570;
extern int lbl_8035A574;
int fn_800B44B8(int arg0) { int old = lbl_80359530; lbl_80359530 = arg0; return old; }

int fn_800B44C8(int arg0, int arg1, int arg2) {
    unsigned int arraySize = arg2 * 12;
    int i;
    lbl_8035A568 = arg0;
    lbl_8035A56C = arg2;
    for (i = 0; i < lbl_8035A56C; i++) {
        int *entry = (int *)(lbl_8035A568 + i * 12);
        entry[0] = -1;
        entry[1] = entry[2] = 0;
    }
    lbl_80359530 = -1;
    arg0 = lbl_8035A568 + arraySize;
    arg0 = (arg0 + 31) & ~31;
    lbl_8035A570 = arg0;
    lbl_8035A574 = arg1 & ~31;
    return arg0;
}

int fn_800B4538(int arg0, int arg1) {
    int *entry = (int *)lbl_8035A568;
    int aligned = (arg0 + 31) & ~31;
    int end = arg1 & ~31;
    int count = lbl_8035A56C;
    int i = 0;
    while (count-- > 0) {
        if (entry[0] < 0) {
            entry[0] = end - aligned;
            ((int *)aligned)[0] = 0;
            ((int *)aligned)[1] = 0;
            ((int *)aligned)[2] = entry[0];
            entry[1] = aligned;
            entry[2] = 0;
            return i;
        }
        entry += 3;
        i++;
    }
    return -1;
}

s32 OSGetArenaHi(void) {
    return __OSArenaHi_8035A578;
}

extern s32 __OSArenaLo_80359538;
s32 OSGetArenaLo(void) {
    return __OSArenaLo_80359538;
}

void OSSetArenaHi(s32 arg0) {
    __OSArenaHi_8035A578 = arg0;
}

extern s32 __OSArenaLo_80359538;
void OSSetArenaLo(s32 arg0) {
    __OSArenaLo_80359538 = arg0;
}

s32 fn_800B45C4(s32 size, s32 align) {
    s32 ptr;
    s32 arenaLo;

    arenaLo = ptr = (__OSArenaLo_80359538 + align - 1) & ~(align - 1);
    arenaLo += size;
    arenaLo = (arenaLo + align - 1) & ~(align - 1);
    __OSArenaLo_80359538 = arenaLo;
    return ptr;
}

void __OSCacheInit(void) {
    extern u32 PPCMfhid0(void);
    extern u32 PPCMfl2cr(void);
    extern void PPCMtl2cr(u32);
    extern u32 PPCMfmsr(void);
    extern void PPCMtmsr(u32);
    extern void ICEnable(void);
    extern void DCEnable(void);
    extern void L2GlobalInvalidate(void);
    extern void DBPrintf(char *, ...);
    extern void *OSSetErrorHandler(u16, void *);
    extern void DMAErrorHandler();
    u32 oldMSR;

    if (!(PPCMfhid0() & 0x8000)) {
        ICEnable();
        DBPrintf("L1 i-caches initialized\n");
    }
    if (!(PPCMfhid0() & 0x4000)) {
        DCEnable();
        DBPrintf("L1 d-caches initialized\n");
    }
    if (!(PPCMfl2cr() & 0x80000000)) {
        oldMSR = PPCMfmsr();
        __sync();
        PPCMtmsr(0x30);
        __sync();
        __sync();
        PPCMtl2cr(PPCMfl2cr() & ~0x80000000);
        __sync();
        L2GlobalInvalidate();
        PPCMtmsr(oldMSR);
        PPCMtl2cr((PPCMfl2cr() | 0x80000000) & ~0x00200000);
        DBPrintf("L2 cache initialized\n");
    }
    OSSetErrorHandler(1, DMAErrorHandler);
    DBPrintf("Locked cache machine check handler installed\n");
}

s32 fn_800B4F6C(void) {
    return *(s32 *)0x800000D4;
}

void OSClearContext(u8 *ctx) {
    u32 *cur = (u32 *)0x800000D8;
    *(u16 *)(ctx + 0x1A0) = 0;
    *(u16 *)(ctx + 0x1A2) = 0;
    if ((u32)ctx == *cur) {
        *cur = 0;
    }
}

void __OSContextInit(void) {
    extern void OSSwitchFPUContext(void);
    extern void* __OSSetExceptionHandler(u8, void*);
    extern char lbl_802D7BEC[];
    __OSSetExceptionHandler(7, OSSwitchFPUContext);
    *(s32*)0x800000D8 = 0;
    DBPrintf(lbl_802D7BEC);
}

void OSReport(const char* msg, ...) {
    struct __va_list_struct args;
    __builtin_va_info(&args);
    vprintf(msg, &args);
}

void fn_800B5520(char* file, int line, char* msg, ...) {
    struct __va_list_struct marker;
    u32 i;
    u32* p;

    OSDisableInterrupts();
    __builtin_va_info(&marker);
    vprintf(msg, &marker);
    OSReport(" in \"%s\" on line %d.\n", file, line);

    OSReport("\nAddress:      Back Chain    LR Save\n");
    for (i = 0, p = (u32*)fn_800B50D0(); p && (u32)p != 0xffffffff && i++ < 16; p = (u32*)*p) {
        OSReport("0x%08x:   0x%08x    0x%08x\n", p, p[0], p[1]);
    }
    PPCHalt();
}

void fn_800C182C(GXRenderModeObj *rmode);
void fn_800C2054(u32 a, u32 b, u32 c, u32 d);
void fn_800B5F28(u16 fbWidth, u16 height) {
    GXRenderModeObj rmode;

    rmode.fbWidth = fbWidth;
    rmode.efbHeight = 0x1E0;
    rmode.xfbHeight = height;
    rmode.viXOrigin = 0x28;
    rmode.viWidth = 0x280;
    rmode.viHeight = height;
    switch (VIGetTvFormat()) {
    case 0:
    case 2:
        if (*(volatile u16 *)0xCC00206C & 1) {
            rmode.viTVmode = 2;
            rmode.viYOrigin = 0;
            rmode.xFBmode = 0;
        } else {
            rmode.viTVmode = 0;
            rmode.viYOrigin = 0;
            rmode.xFBmode = 1;
        }
        break;
    case 5:
        rmode.viTVmode = 0x14;
        rmode.viYOrigin = 0;
        rmode.xFBmode = 1;
        break;
    case 1:
        rmode.viTVmode = 4;
        rmode.viYOrigin = 0x2F;
        rmode.xFBmode = 1;
        break;
    }
    fn_800C182C(&rmode);
    fn_800C2054(0, 0, 0x280, 0x1E0);
}

extern u16 fn_800B6B0C();
extern u16 lbl_802D7F30[];
extern u16 lbl_802D80B0[];
u16 fn_800B67FC(u16 code) {
    if (fn_800B6B0C() == 1) {
        if (code >= 0x20 && code <= 0xDF) {
            return lbl_802D7F30[code - 0x20];
        }
        if (code > 0x889E && code <= 0x9872) {
            u8 lo = code;
            int base = ((code >> 8) - 0x88) * 0xBC;
            int r = 0;
            int ok = 0;
            int idx;
            if (lo >= 0x40 && lo <= 0xFC) {
                ok = 1;
            }
            if (ok && lo != 0x7F) {
                r = 1;
            }
            if (!r) {
                return 0;
            }
            idx = lo - 0x40;
            if (idx >= 0x40) {
                idx--;
            }
            return base + (idx + 0x2BE);
        }
        if (code >= 0x8140 && code < 0x879E) {
            u8 lo = code;
            int base = ((code >> 8) - 0x81) * 0xBC;
            int r = 0;
            int ok = 0;
            int idx;
            if (lo >= 0x40 && lo <= 0xFC) {
                ok = 1;
            }
            if (ok && lo != 0x7F) {
                r = 1;
            }
            if (!r) {
                return 0;
            }
            idx = lo - 0x40;
            if (idx >= 0x40) {
                idx--;
            }
            return lbl_802D80B0[base + idx];
        }
    } else if (code > 0x20 && code <= 0xFF) {
        return code - 0x20;
    }
    return 0;
}

void fn_800B6998(u8 *src, u8 *dst) {
    u32 *flags = (u32 *)(src + 0x10);
    s32 dstPos = 0;
    u32 bits = 0;
    u32 code;
    s32 size = *(s32 *)(src + 4);
    s32 linkOfs = *(s32 *)(src + 8);
    s32 chunkOfs = *(s32 *)(src + 0xC);
    s32 link;
    s32 back;
    s32 count;
    s32 i;
    u8 *p;

    do {
        if (bits == 0) {
            code = *flags++;
            bits = 32;
        }
        if (code & 0x80000000) {
            dst[dstPos++] = src[chunkOfs++];
        } else {
            p = src + linkOfs;
            linkOfs += 2;
            link = (p[0] << 8) | p[1];
            back = dstPos - (link & 0xFFF);
            count = link >> 12;
            if (count == 0) {
                count = src[chunkOfs++] + 0x12;
            } else {
                count += 2;
            }
            for (i = 0; i < count; i++) {
                dst[dstPos++] = dst[back++ - 1];
            }
        }
        code <<= 1;
        bits--;
    } while (dstPos < size);
}

u16 fn_800B6B0C(void) {
    if (lbl_80359550 > 1) {
        if (*(s32*)0x800000CC == 0) {
            lbl_80359550 = (*(u16*)0xCC00206E & 2) ? 1 : 0;
        } else {
            lbl_80359550 = 0;
        }
    }
    return lbl_80359550;
}

extern s32 fn_800B9094(s32, s32, s32);
void fn_800B6B64(s32 arg0, s32 arg1, s32 arg2) {
    s32 n;
    while (arg1 > 0) {
        if (arg1 <= 0x100) {
            n = arg1;
        } else {
            n = 0x100;
        }
        arg1 -= n;
        if (fn_800B9094(arg0, n, arg2) != 0) {
            arg2 += n;
            arg0 += n;
        }
    }
}

extern void **InterruptHandlerTable_8035A590;
void *__OSSetInterruptHandler(short type, void *handler) {
    void **p = (void **)((char *)InterruptHandlerTable_8035A590 + (type << 2));
    void *old = *p;
    *p = handler;
    return old;
}

extern void ExternalInterruptHandler(void);
extern void *memset(void *, int, unsigned long);
extern u32 __OSMaskInterrupts(u32);
void *fn_800B7290(s16 type) {
    return InterruptHandlerTable_8035A590[type];
}

#pragma peephole off
void __OSInterruptInit(void) {
    extern void ExternalInterruptHandler(void);
    extern void *memset(void *, int, unsigned long);
    extern u32 __OSMaskInterrupts(u32);
    extern void *__OSSetExceptionHandler(u8, void *);
    u8 *base = (u8 *)0x80000000;
    InterruptHandlerTable_8035A590 = (void **)(base + 0x3040);
    memset(InterruptHandlerTable_8035A590, 0, 0x80);
    *(u32 *)(base + 0xC4) = 0;
    *(u32 *)(base + 0xC8) = 0;
    *(u32 *)0xCC003004 = 0xF0;
    __OSMaskInterrupts(0xFFFFFFE0);
    __OSSetExceptionHandler(4, ExternalInterruptHandler);
}

extern u32 fn_800B7318(u32);
u32 __OSMaskInterrupts(u32 mask) {
    u32 prev;
    u32 oldMask;
    u32 pending;
    u32 hw;
    prev = OSDisableInterrupts();
    oldMask = *(u32 *)0x800000C4;
    pending = *(u32 *)0x800000C8;
    hw = mask & ~(oldMask | pending);
    mask |= oldMask;
    *(u32 *)0x800000C4 = mask;
    mask |= pending;
    while (hw != 0) {
        hw = fn_800B7318(mask);
    }
    OSRestoreInterrupts(prev);
    return oldMask;
}

u32 __OSUnmaskInterrupts(u32 mask) {
    u32 prev;
    u32 oldMask;
    u32 pending;
    u32 hw;
    prev = OSDisableInterrupts();
    oldMask = *(u32 *)0x800000C4;
    pending = *(u32 *)0x800000C8;
    hw = mask & (oldMask | pending);
    mask = oldMask & ~mask;
    *(u32 *)0x800000C4 = mask;
    mask |= pending;
    while (hw != 0) {
        hw = fn_800B7318(mask);
    }
    OSRestoreInterrupts(prev);
    return oldMask;
}

void __OSModuleInit(void) {
    void** list = (void**)0x800030C8;
    list[1] = 0;
    list[0] = 0;
    *(void**)0x800030D0 = 0;
}

#pragma peephole on
extern s32 lbl_8035A5B0;
void fn_800BA3B4(void* arg0);
void fn_800B7E04(void) {
    lbl_8035A5B0 = 1;
}

void OSRegisterResetFunction(void *arg0) {
    OSResetFunctionInfo *info = arg0;
    OSResetFunctionInfo *iter;
    OSResetFunctionInfo *prev;
    iter = ResetFunctionQueue_8035A5B8.head;
    while (iter != NULL && iter->priority <= info->priority) iter = iter->next;
    if (iter == NULL) {
        prev = ResetFunctionQueue_8035A5B8.tail;
        if (prev == NULL) ResetFunctionQueue_8035A5B8.head = info;
        else prev->next = info;
        info->prev = prev;
        info->next = NULL;
        ResetFunctionQueue_8035A5B8.tail = info;
        return;
    }
    info->next = iter;
    prev = iter->prev;
    iter->prev = info;
    info->prev = prev;
    if (prev == NULL) ResetFunctionQueue_8035A5B8.head = info;
    else prev->next = info;
}

s32 fn_800B81D4(s32 arg0) {
    extern s32 __OSSyncSram(void);
    OSResetFunctionInfo *iter;
    s32 failed;
    failed = 0;
    for (iter = ResetFunctionQueue_8035A5B8.head; iter != NULL && failed == 0; iter = iter->next) {
        failed |= iter->func(arg0) == 0;
    }
    failed |= __OSSyncSram() == 0;
    if (failed) return 0;
    return 1;
}

u32 OSGetResetCode(void) {
    u32 code;
    if (*(u8 *)0x800030E2 != 0) {
        code = 0x80000000;
    } else {
        code = (*(volatile u32 *)(0xCC003000 + 0x24) & ~7) >> 3;
    }
    return code;
}

void *__OSLockSram(void) {
    extern SramControlBlock Scb_803078A0;
    SramControlBlock *scb = &Scb_803078A0;
    s32 enabled = OSDisableInterrupts();
    if (scb->locked != 0) {
        OSRestoreInterrupts(enabled);
        scb = NULL;
    } else {
        scb->enabled = enabled;
        scb->locked = 1;
    }
    return scb;
}

void *__OSLockSramEx(void) {
    extern SramControlBlock Scb_803078A0;
    SramControlBlock *scb = &Scb_803078A0;
    s32 enabled = OSDisableInterrupts();
    if (scb->locked != 0) {
        OSRestoreInterrupts(enabled);
        return NULL;
    }
    scb->enabled = enabled;
    scb->locked = 1;
    return (u8 *)scb + 0x14;
}

void __OSUnlockSram(s32 commit) {
    fn_800B8D00(commit, 0);
}

void __OSUnlockSramEx(s32 commit) {
    fn_800B8D00(commit, 0x14);
}

extern SramControlBlock Scb_803078A0;
s32 __OSSyncSram(void) {
    return Scb_803078A0.sync;
}

s32 fn_800B91B8(void) {
    SramControlBlock *scb = &Scb_803078A0;
    s32 enabled;
    s32 ret;

    enabled = OSDisableInterrupts();
    if (scb->locked != 0) {
        OSRestoreInterrupts(enabled);
        scb = NULL;
        ret = 0;
    } else {
        scb->enabled = enabled;
        scb->locked = 1;
        if (scb->flags & 4) {
            ret = 1;
        } else {
            ret = 0;
        }
    }
    fn_800B8D00(0, 0);
    return ret;
}

void fn_800B9238(s32 arg0) {
    SramControlBlock *scb = &Scb_803078A0;
    u32 flag = (arg0 & 1) << 2;
    s32 enabled = OSDisableInterrupts();
    if (scb->locked != 0) {
        OSRestoreInterrupts(enabled);
        scb = NULL;
    } else {
        scb->enabled = enabled;
        scb->locked = 1;
    }
    if (flag == (scb->flags & 4)) {
        fn_800B8D00(0, 0);
    } else {
        scb->flags &= ~4;
        scb->flags |= flag;
        fn_800B8D00(1, 0);
    }
}

u8 fn_800B92DC(void) {
    SramControlBlock *scb = &Scb_803078A0;
    s32 enabled = OSDisableInterrupts();
    u8 value;
    if (scb->locked != 0) {
        OSRestoreInterrupts(enabled);
        scb = NULL;
    } else {
        scb->enabled = enabled;
        scb->locked = 1;
    }
    value = scb->pad0[0x12];
    fn_800B8D00(0, 0);
    return value;
}

u16 fn_800B9348(s32 arg0) {
    extern SramControlBlock Scb_803078A0;
    s32 enabled;
    u8 *sram;
    u16 value;
    enabled = OSDisableInterrupts();
    if (Scb_803078A0.locked) {
        OSRestoreInterrupts(enabled);
        sram = 0;
    } else {
        Scb_803078A0.enabled = enabled;
        Scb_803078A0.locked = 1;
        sram = (u8 *)&Scb_803078A0 + 0x14;
    }
    value = ((u16 *)(sram + 0x1C))[arg0];
    fn_800B8D00(0, 0x14);
    return value;
}

void fn_800B93CC(s32 arg0, u16 arg1) {
    extern SramControlBlock Scb_803078A0;
    s32 enabled;
    u8 *sram;
    u16 *value;
    enabled = OSDisableInterrupts();
    if (Scb_803078A0.locked) {
        OSRestoreInterrupts(enabled);
        sram = 0;
    } else {
        Scb_803078A0.enabled = enabled;
        Scb_803078A0.locked = 1;
        sram = (u8 *)&Scb_803078A0 + 0x14;
    }
    value = (u16 *)(sram + 0x1C) + arg0;
    if (*value != arg1) {
        *value = arg1;
        fn_800B8D00(1, 0x14);
    } else {
        fn_800B8D00(0, 0x14);
    }
}

extern u8 __OSSystemCallVectorStart[];
extern u8 __OSSystemCallVectorEnd[];
extern void *memcpy(void *, const void *, unsigned long);
extern void DCFlushRangeNoSync(void *, u32);
extern void ICInvalidateRange(void *, u32);
void __OSInitSystemCall(void) {
    void *addr = (void *)0x80000C00;
    memcpy(addr, __OSSystemCallVectorStart, __OSSystemCallVectorEnd - __OSSystemCallVectorStart);
    DCFlushRangeNoSync(addr, 0x100);
    __sync();
    ICInvalidateRange(addr, 0x100);
}

void fn_800B9624(void) {

}

void OSInitThreadQueue(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

s32 fn_800B9790(void) {
    return *(s32 *)0x800000E4;
}

s32 OSDisableScheduler(void) {
    extern s32 Reschedule_8035A5F0;
    s32 previous;
    s32 enabled = OSDisableInterrupts();
    previous = Reschedule_8035A5F0;
    Reschedule_8035A5F0 = previous + 1;
    OSRestoreInterrupts(enabled);
    return previous;
}

void fn_800B981C(void *arg0) {
    extern s32 RunQueueBits_8035A5E8;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2E0);
    temp_r5 = M2C_FIELD(arg0, void **, 0x2DC);
    temp_r6 = M2C_FIELD(arg0, void **, 0x2E4);
    if (temp_r4 == NULL) {
        M2C_FIELD(temp_r5, void **, 4) = temp_r6;
    } else {
        M2C_FIELD(temp_r4, void **, 0x2E4) = temp_r6;
    }
    if (temp_r6 == NULL) {
        M2C_FIELD(temp_r5, void **, 0) = temp_r4;
    } else {
        M2C_FIELD(temp_r6, void **, 0x2E0) = temp_r4;
    }
    if ((void *) M2C_FIELD(temp_r5, void **, 0) == NULL) {
        RunQueueBits_8035A5E8 &= ~(1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0)));
    }
    M2C_FIELD(arg0, void **, 0x2DC) = NULL;
}

s32 fn_800B9884(void *arg0) {
    s32 p;
    s32 priority;
    void *thread;
    void *mutex;
    priority = M2C_FIELD(arg0, s32 *, 0x2D4);
    mutex = M2C_FIELD(arg0, void **, 0x2F4);
    while (mutex != NULL) {
        thread = M2C_FIELD(mutex, void **, 0);
        if (thread != NULL) {
            p = M2C_FIELD(thread, s32 *, 0x2D0);
            if (p < priority) priority = p;
        }
        mutex = M2C_FIELD(mutex, void **, 0x10);
    }
    return priority;
}

void fn_800B9CD8(void) {
    s32 enabled;

    enabled = OSDisableInterrupts();
    SelectThread(1);
    OSRestoreInterrupts(enabled);
}

void OSClearStack(u32 arg0) {
    u32 value = ((arg0 & 255) << 16) | (arg0 << 24) | ((arg0 << 8) & 0xFF00) | (arg0 & 255);
    u32 end = fn_800B50D0();
    u32 *p = (u32*)(*(u32*)(*(u32*)0x800000E4 + 0x308) + 4);
    while ((u32)p < end) *p++ = value;
}

#pragma push
#pragma auto_inline off
u64 OSGetTime(void) {
    u32 high1;
    u32 low;
    u32 high2;

    do {
        high1 = __mftbu();
        low = __mftb();
        high2 = __mftbu();
    } while (high1 != high2);
    return ((u64)high1 << 32) | low;
}
#pragma pop

u32 OSGetTick(void) {
    return __mftb();
}

u64 __OSGetSystemTime(void) {
    u32 enabled;
    u64 time;

    enabled = OSDisableInterrupts();
    time = OSGetTime();
    time += *(volatile u64*)0x800030D8;
    OSRestoreInterrupts(enabled);
    return time;
}

long long fn_800BA5E8(long long arg0) {
    long long result;
    OSDisableInterrupts();
    result = *(long long *)0x800030D8 + arg0;
    OSRestoreInterrupts();
    return result;
}

extern s32 lbl_802D8A80[];
extern s32 lbl_802D8AB0[];
void fn_800BA640(s32 days, s32* td) {
    s32 year;
    s32 n;
    s32 month;
    s32* p_days;

    td[6] = (days + 6) % 7;
    for (year = days / 365; days < (n = year * 365 + (year < 1 ? 0 : (year + 3) / 4 - (year - 1) / 100 + (year - 1) / 400)); year--) {
    }
    days -= n;
    td[5] = year;
    td[7] = days;
    p_days = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? lbl_802D8AB0 : lbl_802D8A80;
    for (month = 12; days < p_days[--month];) {
    }
    td[4] = month;
    td[3] = days - p_days[month] + 1;
}

void InitMetroTRK_BBA(void) {

}

typedef void (*voidfunctionptr)(void);
extern voidfunctionptr _ctors[];
void __init_user(void) { __init_cpp(); }

void *fn_800BAC18(u32 *arg0, u32 arg1) {
    if (*arg0 > arg1) {
        return (u8 *)arg0 + arg1 * 0x1C + 4;
    }
    return NULL;
}

void fn_800BB284(void) {
    extern void *lbl_8035A600;
    extern f32 lbl_80363048;
    extern f32 lbl_8036304C;
    void fn_800BBD48(f32);
    void fn_800BBD40(f32);
    lbl_8035A600 = 0;
    fn_800BBD48(lbl_80363048);
    fn_800BBD40(lbl_8036304C);
}

int fn_800B50D0();
extern void *lbl_8035A600;
extern f32 lbl_80363048, lbl_8036304C;
void fn_800BBD48(f32);
void fn_800BBD40(f32);
void fn_800BB7E0(void*);
void fn_800BB2B8(void) {
    void *p = lbl_8035A600;
    while (p != NULL) {
        fn_800BB7E0(p);
        p = *(void**)p;
    }
}

void fn_800BB2F8(void *arg0, s32 arg1, u32 arg2) {
    f32 f;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = arg1;
    f = arg2;
    *(f32 *)((u8 *)arg0 + 0xC) = f;
}

void fn_800BB678(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    extern f32 lbl_80363068;
    *(s32 *)((u8 *)arg0 + 0x0) = arg1;
    *(s32 *)((u8 *)arg0 + 0x4) = arg2;
    *(f32 *)((u8 *)arg0 + 0x8) = farg0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(f32 *)((u8 *)arg0 + 0x10) = *(f32 *)((u8 *)arg0 + 0x14) = *(f32 *)((u8 *)arg0 + 0x18) = *(f32 *)((u8 *)arg0 + 0x1C) = lbl_80363068;
}

void fn_800BB6A4(void *arg0) {
    extern f32 lbl_8036306C;
    u32 zero = 0;
    f32 temp_f0;

    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = zero;
    temp_f0 = (f32) zero;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f0;
    M2C_FIELD(arg0, f32 *, 8) = temp_f0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0x40;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0x7F;
    M2C_FIELD(arg0, u8 *, 0x1E) = 1;
    M2C_FIELD(arg0, s16 *, 0x22) = zero;
    M2C_FIELD(arg0, s16 *, 0x20) = zero;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_8036306C;
    M2C_FIELD(arg0, s32 *, 0x28) = 0xFC400000;
}

void fn_800BB714(void *arg0) {
    u8 a = 0x40;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, u8 *, 8) = a;
    M2C_FIELD(arg0, u8 *, 9) = 0x7F;
}

void fn_800BB730(s32 *p) {
    p[1] = 5;
    p[2] = 0;
}

void fn_800BB744(s32 *p) {
    f32 f;
    p[1] = 7;
    p[10] = 0;
    p[2] = (s32)lbl_802D8F60;
    p[3] = 0x40;
    f = lbl_80363068;
    *(f32 *)&p[4] = f;
    p[5] = 0;
    *(f32 *)&p[9] = f;
    *(f32 *)&p[8] = f;
    *(f32 *)&p[7] = f;
    *(f32 *)&p[6] = f;
}

void fn_800BB788(AnimInit *p) {
    p->unk4 = 8;
    p->unk8 = 0;
}

void fn_800BB79C(AnimInit *p) {
    p->unk4 = 0xE;
    p->unk28 = 0;
    p->unk8 = lbl_802D8F60;
    p->unkC = 0x40;
    p->unk10 = lbl_80363068;
    p->unk14 = 0;
    p->unk24 = lbl_80363068;
    p->unk20 = lbl_80363068;
    p->unk1C = lbl_80363068;
    p->unk18 = lbl_80363068;
}

void fn_800BBAC8(void **arg0, void **arg1) {
    *arg1 = arg0[4];
    arg0[4] = arg1;
}

extern f32 lbl_802D8B70[];
extern f32 lbl_80363080;
f32 fn_800BBAD8(s32 cents) {
    f32 *table = lbl_802D8B70;
    s32 fine;
    s32 semi;

    if (cents > 0) {
        return table[cents % 100] * (table[100 + cents / 1200] * table[112 + (cents % 1200) / 100]);
    } else if (cents < 0) {
        fine = cents % 100;
        semi = cents / 100;
        if (fine != 0) {
            fine += 100;
            semi -= 1;
        }
        return table[124 + -semi] * table[fine];
    } else {
        return lbl_80363080;
    }
}

#pragma dont_inline reset

void fn_800BBBD4(UnkStep* arg0) {
    if (arg0->unk10 != arg0->unkC) {
        arg0->unk10 += arg0->unk8;
        if (arg0->unk8 > 0) {
            if (arg0->unk10 > arg0->unkC) {
                arg0->unk10 = arg0->unkC;
            }
        } else if (arg0->unk8 < 0) {
            if (arg0->unk10 < arg0->unkC) {
                arg0->unk10 = arg0->unkC;
            }
        }
    }
}

void fn_800BBC30(UnkStep* arg0) {
    if (arg0->unk10 != arg0->unkC) {
        arg0->unk10 += arg0->unk8;
        if (arg0->unk8 > 0) {
            if (arg0->unk10 > arg0->unkC) {
                arg0->unk10 = arg0->unkC;
            }
        } else if (arg0->unk8 < 0) {
            if (arg0->unk10 < arg0->unkC) {
                arg0->unk10 = arg0->unkC;
            }
        }
    }
}

extern s32 fn_800E2584();
void fn_800BBC8C(Anim *a) {
    f32 d;
    a->t = a->t + a->speed;
    if (a->t >= lbl_80363088) {
        a->t = a->t - a->t;
        a->idx = a->idx + fn_800E2584();
        a->idx = a->idx % a->count;
        a->prev = a->cur;
        a->cur = a->data[a->idx];
    }
    d = a->prev - a->cur;
    d = a->t * d;
    a->out = a->prev - d;
}

extern f32 lbl_8035A608;
extern f32 lbl_80363088;
extern u16 lbl_802D9DD8[];
s32 fn_800E2584(void);
void fn_800BBD40(f32 arg0) {
    lbl_8035A608 = arg0;
}

extern f32 lbl_8035A60C;
void fn_800BBD48(f32 arg0) {
    lbl_8035A60C = arg0;
}

void fn_800BBED4(u32* arg0, u8* arg1) {
    u32 idx;

    if (arg0[4] != 0) {
        if (arg0[2] != 0) {
            arg0[2] = 0;
            *(u16*)(arg1 + 0x1F2) = 1;
            *(u16*)(arg1 + 0x1F4) = 0;
            *(u32*)(arg1 + 0x1C) |= 0x200000;
        } else {
            *(u32*)(arg1 + 0x1C) |= 0x400000;
        }
        idx = arg0[3] * 2;
        *(u16*)(arg1 + 0x1F6) = ((u16*)lbl_802D9DD8)[idx];
        *(u16*)(arg1 + 0x1F8) = ((u16*)lbl_802D9DD8)[idx + 1];
        arg0[4] = 0;
    }
}

extern f32 lbl_803630A0, lbl_803630A4, lbl_803630A8, lbl_803630AC;
void fn_800BC02C(f32 m[4][4], f32 t, f32 b, f32 l, f32 r, f32 n, f32 f) {
    f32 tmp;
    tmp = 1.0f / (r - l);
    m[0][0] = 2.0f * tmp;
    m[0][1] = 0.0f;
    m[0][2] = 0.0f;
    m[0][3] = tmp * -(r + l);
    tmp = 1.0f / (t - b);
    m[1][0] = 0.0f;
    m[1][1] = 2.0f * tmp;
    m[1][2] = 0.0f;
    m[1][3] = tmp * -(t + b);
    tmp = 1.0f / (f - n);
    m[2][0] = 0.0f;
    m[2][1] = 0.0f;
    m[2][2] = -1.0f * tmp;
    m[2][3] = -f * tmp;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;
}

s32 DVDLowWaitCoverClose(s32 callback) {
    extern s32 Callback_8035A618;
    extern s32 WaitingCoverClose_8035A62C;
    extern s32 StopAtNextInt_8035A610;
    Callback_8035A618 = callback;
    WaitingCoverClose_8035A62C = 1;
    StopAtNextInt_8035A610 = 0;
    ((volatile u32*)0xCC006000)[1] = 2;
    return 1;
}

s32 fn_800BCF98(void) {
    extern s32 StopAtNextInt_8035A610;
    extern s32 lbl_8035A630;
    lbl_8035A630 = StopAtNextInt_8035A610 = 1;
    return 1;
}

s32 fn_800BCFAC(void) {
#pragma scheduling off
    extern s32 Callback_8035A618;
    extern s32 WaitingCoverClose_8035A62C;
    s32 callback;
    *(volatile s32*)0xCC006004 = 0;
    callback = Callback_8035A618;
    WaitingCoverClose_8035A62C = 0;
    Callback_8035A618 = 0;
    return callback;
#pragma scheduling on
}

void __DVDLowSetWAType(s32 arg0, s32 arg1) {
    extern s32 WorkAroundType_8035A634;
    extern s32 WorkAroundSeekLocation_8035A638;
    int enabled = OSDisableInterrupts();
    WorkAroundType_8035A634 = arg0;
    WorkAroundSeekLocation_8035A638 = arg1;
    OSRestoreInterrupts(enabled);
}

void __DVDFSInit(void) {
    extern u8* BootInfo_8035A658;
    extern u32 MaxEntryNum_8035A664;
    FSTEntry* fst;
    BootInfo_8035A658 = (u8*)0x80000000;
    *(FSTEntry* volatile*)&FstStart_8035A65C = *(FSTEntry**)(BootInfo_8035A658 + 0x38);
    fst = *(FSTEntry* volatile*)&FstStart_8035A65C;
    if (fst != NULL) {
        *(volatile u32*)&MaxEntryNum_8035A664 = fst->nextEntryOrLength;
        FstStringStart_8035A660 = (char*)(fst + *(volatile u32*)&MaxEntryNum_8035A664);
    }
}

s32 fn_800BD338(s32 arg0, void *arg1) {
    extern u32 MaxEntryNum_8035A664;
    if (arg0 < 0 || (u32)arg0 >= MaxEntryNum_8035A664 || entryIsDir(arg0)) {
        return 0;
    }
    *(u32 *)((u8 *)arg1 + 0x30) = FstStart_8035A65C[arg0].parentOrPosition;
    *(u32 *)((u8 *)arg1 + 0x34) = FstStart_8035A65C[arg0].nextEntryOrLength;
    *(u32 *)((u8 *)arg1 + 0x38) = 0;
    *(u32 *)((u8 *)arg1 + 0xC) = 0;
    return 1;
}

s32 fn_800BD474(void) {
    extern void fn_800BFE7C(void);
    fn_800BFE7C();
    return 1;
}

s32 fn_800BD810(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    extern void fn_800B5520(char *, int, char *, ...);
    extern char lbl_80359568[];
    extern char lbl_802D9F38[];
    extern void fn_800BD8D0(void);
    extern s32 fn_800BF658(void *, s32, s32, s32, void (*)(void), s32);
    s32 end;
    if (arg3 < 0 || (u32)arg3 >= *(u32 *)((u8 *)arg0 + 0x34))
        fn_800B5520(lbl_80359568, 0x2EA, lbl_802D9F38);
    end = arg3 + arg2;
    if (end < 0 || (u32)end >= *(u32 *)((u8 *)arg0 + 0x34) + 0x20)
        fn_800B5520(lbl_80359568, 0x2F0, lbl_802D9F38);
    *(s32 *)((u8 *)arg0 + 0x38) = arg4;
    fn_800BF658(arg0, arg1, arg2, *(s32 *)((u8 *)arg0 + 0x30) + arg3, fn_800BD8D0, arg5);
    return 1;
}

BOOL fn_800BD9C0(DVDDir* dir, DVDDirEntry* dirent) {
    u32 loc = dir->location;
    if ((loc <= dir->entryNum) || (dir->next <= loc)) {
        return FALSE;
    }
    dirent->entryNum = loc;
    dirent->isDir = entryIsDir(loc);
    dirent->name = FstStringStart_8035A660 + stringOff(loc);
    dir->location = entryIsDir(loc) ? nextDir(loc) : (loc + 1);
    return TRUE;
}

int fn_800BDA64(void) {
return 1;
}

void fn_800BDA6C(void) {

}

extern u8 DummyCommandBlock_80308400[];
extern s32 FatalErrorFlag_8035A690;
extern void *executing_8035A678;
extern u32 lbl_8035A698;
extern void (*lbl_8035A69C)(s32, void *);
extern u32 lbl_8035A6A8;
extern s32 lbl_8035A6AC;
void fn_800BDD08(void);
void fn_800C06EC(void);
void stateReady(void);
void DVDReset(void);
void __DVDStoreErrorCode(u32 code);
void fn_800BCBF4(void (*cb)(u32));
void fn_800BDE18(u32 intType);
void cbForStateError(u32 intType) {
    void *finished;
    void (*callback)(s32, void *);

    if (intType == 16) {
        *(s32 *)((u8 *)executing_8035A678 + 0xC) = -1;
        fn_800BDD08();
        return;
    }
    fn_800C06EC();
    finished = executing_8035A678;
    executing_8035A678 = DummyCommandBlock_80308400;
    FatalErrorFlag_8035A690 = 1;
    callback = *(void (**)(s32, void *))((u8 *)finished + 0x28);
    if (callback) {
        callback(-1, finished);
    }
    if (lbl_8035A698) {
        lbl_8035A698 = 0;
        if (lbl_8035A69C) {
            lbl_8035A69C(0, finished);
        }
    }
    stateReady();
}

void fn_800BDD08(void) {
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError(0);
}

void fn_800BDD3C(void) {
    fn_800BCBF4(fn_800BDE18);
}

s32 fn_800BDD64(u32 error) {
    if (error == 0x20400) {
        lbl_8035A6A8 = error;
        return 1;
    }
    error &= 0xFFFFFF;
    if (error == 0x62800 || error == 0x23A00 || error == 0xB5A01) {
        return 0;
    }
    (*(volatile s32 *)&lbl_8035A6AC)++;
    if (*(volatile s32 *)&lbl_8035A6AC == 2) {
        if (error == lbl_8035A6A8) {
            lbl_8035A6A8 = error;
            return 1;
        }
        lbl_8035A6A8 = error;
        return 2;
    }
    lbl_8035A6A8 = error;
    if (error == 0x31100 || *(u32 *)((u8 *)executing_8035A678 + 8) == 5) {
        return 2;
    }
    return 3;
}

extern u8 BB2_803083C0[];
extern u8 *bootInfo_8035A680;
extern void (*lbl_8035A6BC)(void);
extern char lbl_802D9FFC[];
extern char lbl_8035957C[];
void __DVDFSInit(void);
void fn_800B5520(char *file, int line, char *msg, ...);
void fn_800BC76C(void *addr, u32 len, u32 offset, void (*cb)(u32));
void fn_800BE1AC(void);
void fn_800BE114(u32 intType);
void fn_800BE0AC(u32 intType) {
    if (intType == 16) {
        *(s32 *)((u8 *)executing_8035A678 + 0xC) = -1;
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    if (intType & 1) {
        fn_800BE1AC();
        return;
    }
    fn_800BCBF4(fn_800BE114);
}

void DVDLowStopMotor(void (*cb)(u32));
void fn_800BCE40(u8 enable, u32 size, void (*cb)(u32));
void fn_800BE718(u32 intType);
void fn_800BE634(u32 intType);
void fn_800BE4E8(void *command);
extern u8 *IDShouldBe_8035A67C;
void fn_800BE40C(void *command) {
    fn_800BCE40(IDShouldBe_8035A67C[8], 10, fn_800BE718);
}

void fn_800BE474(u32 intType) {
    if (intType == 16) {
        *(s32 *)((u8 *)executing_8035A678 + 0xC) = -1;
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    if (intType & 1) {
        lbl_8035A6AC = 0;
        fn_800BE4E8(executing_8035A678);
        return;
    }
    fn_800BCBF4(fn_800BDE18);
}

void fn_800BE4E8(void *command) {
    fn_800BC76C(BB2_803083C0, 0x20, 0x420, fn_800BE634);
}

void fn_800BE954(u32 arg0) {
 if (arg0 == 0x10) { *(s32 *)((u8 *)executing_8035A678 + 0xC) = -1; __DVDStoreErrorCode(0x01234568); DVDReset(); cbForStateError(0); return; }
 if (arg0 & 1) { lbl_8035A6AC = 0; fn_800BE32C(); return; }
 fn_800BCBF4(fn_800BDE18);
}

typedef struct { u8 r, g, b, a; } GXColor;

extern unsigned int lbl_8035A6F0;
extern unsigned int lbl_8035A6C0;
extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern void fn_800C05F0(void);
extern char lbl_802DA610[];
extern GXColor lbl_803630B8;
extern GXColor lbl_803630BC;
extern u32 lbl_80359588;
extern u32 lbl_8035958C;
extern u32 lbl_8029BDC0[];
u32 VIGetTvFormat(void);
u16 fn_800B6B0C(void);
u8 fn_800B92DC(void);
void fn_800B6024(GXColor a, GXColor b, u32 c);

extern int autoInvalidation_80359574;
int fn_800BFBA0(int arg0) { int old = autoInvalidation_80359574; autoInvalidation_80359574 = arg0; return old; }

void fn_800BFF28(void) {
    extern M2C_UNK __DVDThreadQueue;
    fn_800BA3B4(&__DVDThreadQueue);
}

int fn_800BFF4C(void) {
return (int)0x80000000;
}

void __DVDClearWaitingQueue(void) {
    extern void *WaitingQueue_80308458[4][2];
    u32 i;
    for (i = 0; i < 4; i++) {
        void **q = WaitingQueue_80308458[i];
        q[0] = q;
        q[1] = q;
    }
}

s32 fn_800C0300(void **node) {
 int enabled = OSDisableInterrupts();
 void **prev = node[1];
 void **next = node[0];
 if(prev == 0 || next == 0) {
 OSRestoreInterrupts(enabled);
 return 0;
 }
 prev[0] = next;
 next[1] = prev;
 OSRestoreInterrupts(enabled);
 return 1;
}

extern u32 lbl_802DA128[18];
extern u32 lbl_802DA128[];
u8 ErrorCode2Num(u32 errorCode) {
    int i;

    for (i = 0; i < 18; i++) {
        if (lbl_802DA128[i] == errorCode) {
            return (u8)i;
        }
    }

    if ((errorCode >= 0x00100000) && (errorCode <= 0x00100008)) {
        return 17;
    }

    return 29;
}

void __DVDStoreErrorCode(u32 code) {
 extern u8 ErrorCode2Num(u32);
 extern void *__OSLockSramEx(void);
 extern int __OSUnlockSramEx(int);
 u32 value;
 u32 status;
 u8 error;
 if(code == 0x01234567) value = 0xFF;
 else if(code == 0x01234568) value = 0xFE;
 else {
 status = code >> 24;
 error = ErrorCode2Num(code & 0xFFFFFF);
 if(status >= 6) status = 6;
 value = error + status * 30;
 }
 ((u8 *)__OSLockSramEx())[0x24] = value;
 __OSUnlockSramEx(1);
}

s32 fn_800EB540(const char *, const char *, u32);
BOOL fn_800C04F8(DVDDiskID *id1, DVDDiskID *id2) {
    if (id1->gameName[0] && id2->gameName[0] && fn_800EB540(id1->gameName, id2->gameName, 4)) {
        return FALSE;
    }
    if (!id1->company[0] || !id2->company[0] || fn_800EB540(id1->company, id2->company, 2)) {
        return FALSE;
    }
    if (id1->diskNumber != 0xff && id2->diskNumber != 0xff && id1->diskNumber != id2->diskNumber) {
        return FALSE;
    }
    if (id1->gameVersion != 0xff && id2->gameVersion != 0xff && id1->gameVersion != id2->gameVersion) {
        return FALSE;
    }
    return TRUE;
}

void fn_800C05F0(void) {
    GXColor c0 = lbl_803630B8;
    GXColor c1 = lbl_803630BC;
    u32 v;
    if (VIGetTvFormat() == 0) {
        if (fn_800B6B0C() == 1) {
            v = lbl_80359588;
        } else {
            v = lbl_8035958C;
        }
    } else {
        v = lbl_8029BDC0[fn_800B92DC()];
    }
    fn_800B6024(c1, c0, v);
}

int fn_800C067C(int arg0) {
    int enabled = OSDisableInterrupts();
    int old = lbl_8035A6C0 != 0 ? 1 : 0;
    lbl_8035A6C0 = arg0 ? (unsigned int)fn_800C05F0 : 0;
    OSRestoreInterrupts(enabled);
    return old;
}

void fn_800C06EC(void) {
    if ((void (*)(void))lbl_8035A6C0 != 0) {
        ((void (*)(void))lbl_8035A6C0)();
    }
}

unsigned int fn_800C0BD0(unsigned int arg0) {
    unsigned int old = lbl_8035A6F0;
    int enabled = OSDisableInterrupts();
    lbl_8035A6F0 = arg0;
    OSRestoreInterrupts(enabled);
    return old;
}

char *fn_800C0C14(unsigned int arg0) {
    switch (arg0) {
    case 0: return lbl_802DA610 + 0x44;
    case 1: return lbl_802DA610 + 0x6A;
    case 2: return lbl_802DA610 + 0x90;
    case 3: return lbl_802DA610 + 0xB6;
    case 4: return lbl_802DA610 + 0x44;
    case 5: return lbl_802DA610 + 0x6A;
    case 6: return lbl_802DA610 + 0xDC;
    case 7: return lbl_802DA610 + 0x102;
    case 8: return lbl_802DA610 + 0x128;
    case 9: return lbl_802DA610 + 0x14E;
    case 10: return lbl_802DA610 + 0x90;
    case 11: return lbl_802DA610 + 0xB6;
    case 12: return lbl_802DA610 + 0x174;
    case 13: return lbl_802DA610 + 0x19A;
    case 14: case 15: case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23: case 24: case 25: case 26:
        return 0;
    default: return 0;
    }
}

void fn_800C1364(void) {
 extern s32 lbl_8035A6DC;
 extern u32 lbl_8035A6E4[2];
 extern void fn_800BA2C8(void *);
 int enabled = OSDisableInterrupts();
 u32 count = lbl_8035A6DC;
 do {
 fn_800BA2C8(lbl_8035A6E4);
 } while(count == (u32)lbl_8035A6DC);
 OSRestoreInterrupts(enabled);
}

extern s32 lbl_8035A6DC;
s32 fn_800C2600(void) {
    return lbl_8035A6DC;
}

void fn_800C2608(s32 *arg0, u32 *arg1) {
    u32 a;
    u32 b;
    u32 c;
    b = *(volatile u16 *)0xCC00202C & 0x7FF;
    do {
        a = b;
        b = *(volatile u16 *)0xCC00202C & 0x7FF;
        c = *(volatile u16 *)0xCC00202E & 0x7FF;
    } while (a != b);
    *arg0 = c;
    *arg1 = b;
}

s32 fn_800C2644(void) {
    extern u8 *lbl_8035A720;
    u32 hct;
    u32 vct;
    u32 vct2;

    vct = *(volatile u16 *)0xCC00202C & 0x7FF;
    do {
        vct2 = vct;
        hct = *(volatile u16 *)0xCC00202E & 0x7FF;
        vct = *(volatile u16 *)0xCC00202C & 0x7FF;
    } while (vct2 != vct);
    if ((vct - 1) * 2 + (hct - 1) / *(u16 *)(lbl_8035A720 + 0x1A) < *(u16 *)(lbl_8035A720 + 0x18)) {
        return 1;
    }
    return 0;
}

u32 fn_800C2748(void) {
    extern u8 *lbl_8035A720;
    u8 *timing = lbl_8035A720;
    u32 line;
    u32 previous;
    u32 vertical;
    u32 horizontal;
    s32 enabled = OSDisableInterrupts();
    vertical = *(volatile u16 *)0xCC00202C & 0x7FF;
    do {
        previous = vertical;
        vertical = *(volatile u16 *)0xCC00202C & 0x7FF;
        horizontal = *(volatile u16 *)0xCC00202E & 0x7FF;
    } while (previous != vertical);
    line = (vertical - 1) * 2 + (horizontal - 1) / *(u16 *)(lbl_8035A720 + 0x1A);
    OSRestoreInterrupts(enabled);
    if (line >= *(u16 *)(timing + 0x18))
        line -= *(u16 *)(timing + 0x18);
    return line >> 1;
}

void fn_800C2A64(s32 arg0, s32 arg1) {
    void fn_800C2848(u32, u32, s32, s32);
    u32 previous;
    u32 vertical;
    u32 horizontal;
    vertical = *(volatile u16 *)0xCC00202C & 0x7FF;
    do {
        previous = vertical;
        vertical = *(volatile u16 *)0xCC00202C & 0x7FF;
        horizontal = *(volatile u16 *)0xCC00202E & 0x7FF;
    } while (previous != vertical);
    fn_800C2848(horizontal, vertical, arg0, arg1);
}

void fn_800C2C68(s32 arg0, u32 arg1) {
    void fn_800C2AC4(s32);
    void fn_800F49B0(s32, u32);
    void fn_800F4A40(u32);
    void fn_800F4C1C(s32, void *);
    void fn_800F5334(s32, void *);
    void *memset(void *, int, unsigned long);
    void fn_800C2EC4();
    extern u8 lbl_80308640[][0xC];
    extern s32 lbl_803595B4;
    extern u32 lbl_803595BC;
    extern u32 lbl_8035A73C;
    extern u32 lbl_8035A740;
    u8 ctx[0x10];
    s32 chan;

    if (!(arg1 & 0xF)) {
        fn_800C2AC4(lbl_803595B4);
        chan = lbl_803595B4;
        lbl_8035A73C |= 0x80000000U >> chan;
        fn_800F4C1C(chan, ctx);
        fn_800F49B0(chan, lbl_803595BC | 0x400000);
        fn_800F4A40(lbl_8035A73C);
    }
    lbl_803595B4 = __cntlzw(lbl_8035A740);
    if (lbl_803595B4 != 32) {
        lbl_8035A740 &= ~(0x80000000U >> lbl_803595B4);
        memset(lbl_80308640[lbl_803595B4], 0, 0xC);
        fn_800F5334(lbl_803595B4, fn_800C2EC4);
    }
}

void fn_800C2D2C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800B93CC(s32, M2C_UNK, s32, s32, s32, s32);
    M2C_UNK fn_800C2AC4(s32);
    M2C_UNK fn_800F4ADC(u32);
    extern s32 lbl_8035A73C;
    extern s32 lbl_8035A748;
    extern s32 lbl_8035A74C;
    extern s32 lbl_8035A750;
    s32 temp_r31;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    u32 temp_r30;

    temp_r30 = 0x80000000U >> arg0;
    if (lbl_8035A73C & temp_r30) {
        if (!(arg1 & 0xF)) {
            fn_800C2AC4(arg0);
        }
        if (arg1 & 8) {
            temp_r31 = OSDisableInterrupts();
            fn_800F4ADC(temp_r30);
            temp_r8 = ~(temp_r30 | temp_r30);
            temp_r7 = lbl_8035A73C & temp_r8;
            temp_r6 = lbl_8035A748 & temp_r8;
            lbl_8035A73C = temp_r7;
            temp_r5 = lbl_8035A74C & temp_r8;
            lbl_8035A748 = temp_r6;
            lbl_8035A74C = temp_r5;
            lbl_8035A750 &= temp_r8;
            fn_800B93CC(arg0, 0, temp_r5, temp_r6, temp_r7, temp_r8);
            OSRestoreInterrupts(temp_r31);
        }
    }
}

s32 fn_800C3424(u32 mask) {
    void fn_800F4ADC(u32);
    void fn_800F5334(s32, void *);
    void *memset(void *, int, unsigned long);
    void fn_800C2EC4();
    extern u8 lbl_80308640[][0xC];
    extern s32 lbl_803595B4;
    extern u32 lbl_8035A73C;
    extern u32 lbl_8035A740;
    extern u32 lbl_8035A744;
    extern u32 lbl_8035A748;
    extern u32 lbl_8035A74C;
    extern u32 lbl_8035A750;
    s32 enabled;
    u32 disableBits;

    enabled = OSDisableInterrupts();
    mask |= lbl_8035A750;
    lbl_8035A750 = 0;
    mask &= ~(lbl_8035A748 | lbl_8035A74C);
    lbl_8035A740 |= mask;
    disableBits = lbl_8035A740 & lbl_8035A73C;
    lbl_8035A73C &= ~mask;
    if (!(*(u8 *)0x800030E3 & 0x40)) {
        lbl_8035A744 |= mask;
    }
    fn_800F4ADC(disableBits);
    if (lbl_803595B4 == 32) {
        lbl_803595B4 = __cntlzw(lbl_8035A740);
        if (lbl_803595B4 != 32) {
            lbl_8035A740 &= ~(0x80000000U >> lbl_803595B4);
            memset(lbl_80308640[lbl_803595B4], 0, 0xC);
            fn_800F5334(lbl_803595B4, fn_800C2EC4);
        }
    }
    OSRestoreInterrupts(enabled);
    return 1;
}

void fn_800C3AEC(s32 chan, u32 command) {
    s32 SIGetType(s32);
    void fn_800F49B0(s32, u32);
    void fn_800F49C4(void);
    extern u32 lbl_803595BC;
    extern u32 lbl_803595C0;
    extern u32 lbl_8035A73C;
    s32 enabled = OSDisableInterrupts();
    if ((lbl_8035A73C & (0x80000000U >> chan)) && !(SIGetType(chan) & 0x20000000)) {
        if (lbl_803595C0 < 2 && command == 2) {
            command = 0;
        }
        fn_800F49B0(chan, lbl_803595BC | 0x400000 | (command & 3));
        fn_800F49C4();
    }
    OSRestoreInterrupts(enabled);
}

void fn_800C3B90(s32 spec) {
    extern s32 __PADSpec;
    extern u32 lbl_803595C0;
    extern void (*lbl_803595C4)(void);
    void fn_800C3BF0(void);
    void fn_800C3D64(void);
    void fn_800C3ED8(void);
    __PADSpec = 0;
    switch (spec) {
    case 0:
        lbl_803595C4 = fn_800C3BF0;
        break;
    case 1:
        lbl_803595C4 = fn_800C3D64;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        lbl_803595C4 = fn_800C3ED8;
        break;
    }
    lbl_803595C0 = spec;
}

void fn_800C3BF0(s32 chan, u8* status, u32* data) {
    u16 b;
    *(u16*)status = 0;
    if ((data[0] >> 16) & 0x0008) b = 0x0100; else b = 0;
    *(u16*)status |= b;
    if ((data[0] >> 16) & 0x0020) b = 0x0200; else b = 0;
    *(u16*)status |= b;
    if ((data[0] >> 16) & 0x0100) b = 0x0400; else b = 0;
    *(u16*)status |= b;
    if ((data[0] >> 16) & 0x0001) b = 0x0800; else b = 0;
    *(u16*)status |= b;
    if ((data[0] >> 16) & 0x0010) b = 0x1000; else b = 0;
    *(u16*)status |= b;

    *(s8*)(status + 2) = (s8)(data[1] >> 16);
    *(s8*)(status + 3) = (s8)(data[1] >> 24);
    *(s8*)(status + 4) = (s8)(data[1]);
    *(s8*)(status + 5) = (s8)(data[1] >> 8);
    status[6] = (u8)(data[0] >> 8 & 0xff);
    status[7] = (u8)(data[0] & 0xff);
    status[8] = 0;
    status[9] = 0;

    if (170 <= status[6]) {
        *(u16*)status |= 0x0040;
    }
    if (170 <= status[7]) {
        *(u16*)status |= 0x0020;
    }

    *(s8*)(status + 2) -= 128;
    *(s8*)(status + 3) -= 128;
    *(s8*)(status + 4) -= 128;
    *(s8*)(status + 5) -= 128;
}

void fn_800C3D64(s32 chan, u8 *status, u32 *data) {
    u16 b;
    *(u16 *)status = 0;
    if (data[0] & 0x800000) b = 0x100; else b = 0;
    *(u16 *)status |= b;
    if (data[0] & 0x1000000) b = 0x200; else b = 0;
    *(u16 *)status |= b;
    if (data[0] & 0x200000) b = 0x400; else b = 0;
    *(u16 *)status |= b;
    if (data[0] & 0x100000) b = 0x800; else b = 0;
    *(u16 *)status |= b;
    if (data[0] & 0x2000000) b = 0x1000; else b = 0;
    *(u16 *)status |= b;
    *(s8 *)(status + 2) = (s8)(data[1] >> 16);
    *(s8 *)(status + 3) = (s8)(data[1] >> 24);
    *(s8 *)(status + 4) = (s8)(data[1]);
    *(s8 *)(status + 5) = (s8)(data[1] >> 8);
    status[6] = (u8)(data[0] >> 8);
    status[7] = (u8)(data[0] & 0xff);
    status[8] = 0;
    status[9] = 0;
    if (170 <= status[6]) {
        *(u16 *)status |= 0x40;
    }
    if (170 <= status[7]) {
        *(u16 *)status |= 0x20;
    }
    *(s8 *)(status + 2) -= 128;
    *(s8 *)(status + 3) -= 128;
    *(s8 *)(status + 4) -= 128;
    *(s8 *)(status + 5) -= 128;
}

#pragma inline_depth(0)
void fn_800C4464(s32 interrupt, u8 *context) {
    extern void (*lbl_8035A754)(void);
    u8 current[0x2C8];
    if (lbl_8035A754 != 0) {
        OSClearContext(current);
        OSSetCurrentContext(current);
        lbl_8035A754();
        OSClearContext(current);
        OSSetCurrentContext(context);
    }
}
#pragma inline_depth()
void fn_800C4660(void) {
    u16 *p = (u16 *)0xCC005000;
    p[0x1B] |= 0x8000;
}

void fn_800C4678(void) {
    u16 *p = (u16 *)0xCC005000;
    p[0x1B] &= ~0x8000;
}

s32 fn_800C4768(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_800C4858(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

s32 fn_800C4940(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

void fn_800C4950(s32 arg0) {
    M2C_FIELD((void *)0xCC006C00, s32 *, 4) = (s32) ((M2C_FIELD((void *)0xCC006C00, s32 *, 4) & 0xFFFFFF00 & ~0xFF) | (arg0 & 0xFF));
}

u8 fn_800C496C(void) {
    return (u8) *(s32 *)0xCC006C04;
}

void fn_800C497C(u8 vol) {
    volatile u32 *regs = (volatile u32 *)0xCC006C00;
    regs[1] = (regs[1] & ~0xFF00) | ((vol << 8) & 0xFF00);
}

u8 fn_800C4998(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

u32 fn_800C4FE8(u32 arg0, u32 arg1) {
    extern s32 lbl_8035A7BC;
    extern u32 lbl_8035A7B0;
    extern u32 lbl_8035A7B4;
    extern u32 lbl_8035A7B8;
    extern char* lbl_803595D8;
    extern void (*lbl_8035A7A0)(void);
    void fn_800C513C(u8 *ctx);
    void fn_800C51E4(void);
    void *__OSSetInterruptHandler(short type, void *handler);
    u32 __OSUnmaskInterrupts(u32 mask);
    int OSRestoreInterrupts(int);
    int enabled;
    u16 refresh;

    if (lbl_8035A7BC == 1) {
        return 0x4000;
    }
    OSRegisterVersion(lbl_803595D8);
    enabled = OSDisableInterrupts();
    lbl_8035A7A0 = 0;
    __OSSetInterruptHandler(6, fn_800C513C);
    __OSUnmaskInterrupts(0x2000000);
    lbl_8035A7B4 = arg1;
    lbl_8035A7B0 = 0x4000;
    lbl_8035A7B8 = arg0;
    refresh = *(u16 *)0xCC00501A & 0xFF;
    *(u16 *)0xCC00501A = (*(u16 *)0xCC00501A & ~0xFF) | (refresh & 0xFF);
    fn_800C51E4();
    lbl_8035A7BC = 1;
    OSRestoreInterrupts(enabled);
    return lbl_8035A7B0;
}

void fn_800C50AC(s32 a) {
    switch (a) {
    case 0:
        if (lbl_8035A7A8 != 0) {
            fn_800C69D8(0);
        }
        break;
    case 1:
        if (lbl_8035A7A8 != 0) {
            fn_800C69D8(0x4000, lbl_8035A7A8 - 0x4000);
        }
        break;
    case 2:
        if (lbl_8035A7A8 != 0 && lbl_8035A7AC != 0) {
            fn_800C69D8();
        }
        break;
    }
}

void fn_800C513C(u8 *ctx) {
    u8 tmp[0x2C8];
    u16 *p = (u16 *)0xCC005000;
    p[5] = (p[5] & ~0x88) | 0x20;
    OSClearContext(tmp);
    OSSetCurrentContext(tmp);
    if (lbl_8035A7A0 != 0) {
        lbl_8035A7A0();
    }
    OSClearContext(tmp);
    OSSetCurrentContext(ctx);
}

void fn_800C51B4(void) {
    u16 *p = (u16 *)0xCC005000;
    p[5] = (p[5] & ~0x88) | 0x20;
}

s32 fn_800C51D4(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_800C6C2C(void) {

}

void fn_800C6EC8(void) { fn_800C6EEC(0); }

void fn_800C6EEC(s32 arg0) {
    OSRegisterVersion(lbl_803595E8);
    fn_800C6FF8();
    fn_800C9744();
    fn_800C8C68();
    fn_800C74DC();
    fn_800C8058();
    fn_800C8464(arg0);
}

void fn_800C6F38(void) {
    fn_800C70AC();
    fn_800C9944();
    fn_800C8C94();
    fn_800C75C0();
    fn_800C807C();
    fn_800C8804();
}

s32 fn_800C6F6C(s32 arg0) {
    s32* p = lbl_80308680 + arg0;
    return *p;
}

void fn_800C6F84(void) {
    u8* p;

    for (p = fn_800C7190(); p != NULL; p = fn_800C7190()) {
        if (*(u32*)(p + 0xC) != 0) {
            void (*cb)(void*) = *(void (**)(void*))(p + 0x10);
            if (cb != NULL) {
                cb(p);
            }
            fn_800C71AC(p);
            fn_800C7160(p);
        }
    }
}

extern s32 lbl_80308680[32];
extern s32 lbl_80308700[32];
extern s32 lbl_8035A7E8;
void fn_800C70AC(void);
void fn_800C9944(void);
void fn_800C8C94(void);
void fn_800C75C0(void);
void fn_800C807C(void);
void fn_800C8804(void);
void* fn_800C7190(void);
void fn_800C71AC(void*);
void fn_800C7160(void*);
extern char* lbl_803595E8;
void OSRegisterVersion(const char*);
void fn_800C9744(void);
void fn_800C8C68(void);
void fn_800C74DC(void);
void fn_800C8058(void);
void fn_800C8464(s32);
void fn_800C6EEC(s32);
void fn_800C6FF8(void) {
    u32 i;
    s32 *head;
    s32 *tail;
    lbl_8035A7E8 = 0;
    head = lbl_80308700;
    tail = lbl_80308680;
    for (i = 0; i < 32; i++) {
        *head++ = 0;
        *tail++ = 0;
    }
}

#pragma scheduling on
void fn_800C7160(void* arg0) {
    s32* p = lbl_80308680;
    *(s32*)arg0 = *p;
    *p = (s32)arg0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
}

void fn_800C7180(void* arg0) {
    *(s32*)((u8*)arg0 + 0x8) = lbl_8035A7E8;
    lbl_8035A7E8 = (s32)arg0;
}

void* fn_800C7190(void) {
    void* p = (void*)lbl_8035A7E8;
    if (p != NULL) {
        lbl_8035A7E8 = *(s32*)((u8*)p + 0x8);
    }
    return p;
}

void fn_800C71AC(void* arg0) {
    s32 offs = *(s32*)((u8*)arg0 + 0xC) * 4;
    void** head = (void**)((u8*)lbl_80308680 + offs);
    void** tail = (void**)((u8*)lbl_80308700 + offs);

    if (*head == *tail) {
        *tail = NULL;
        *head = NULL;
    } else if (arg0 == *head) {
        *head = *(void**)arg0;
        *(void**)((u8*)*head + 0x4) = NULL;
    } else if (arg0 == *tail) {
        *tail = *(void**)((u8*)arg0 + 0x4);
        *(void**)*tail = NULL;
    } else {
        void** prev = *(void***)((u8*)arg0 + 0x4);
        void* next = *(void**)arg0;
        *prev = next;
        *(void***)((u8*)next + 0x4) = prev;
    }
}

void fn_800C74DC(void) {
    extern u32 lbl_8035A7F4;
    extern u32 lbl_8035A7F8;
    extern u32 lbl_8035A7FC;
    extern s32 lbl_8035A818;
    extern s32 lbl_8035A81C;
    extern s32 lbl_8035A820;
    u32 i;
    u32 *a;
    u32 *b;

    lbl_8035A7F0 = 0;
    lbl_8035A7F4 = 0;
    lbl_8035A7F8 = 0;
    lbl_8035A7FC = 0;
    lbl_8035A810 = 0;
    lbl_8035A814 = 1;
    lbl_8035A818 = 0;
    lbl_8035A81C = 1;
    lbl_8035A820 = 2;
    a = (u32 *)lbl_80308780;
    b = (u32 *)lbl_80309E00;
    for (i = 0; i < 0x1E0; i++) {
        *a++ = 0;
        *b++ = 0;
    }
}

void fn_800C75C0(void) {
    extern u32 lbl_8035A7F4;
    lbl_8035A7F0 = 0;
    lbl_8035A7F4 = 0;
}

#pragma scheduling reset
void fn_800C75D0(void** arg0) {
    if (lbl_8035A7F0 != 0) {
        *arg0 = lbl_80308780[lbl_8035A810];
        return;
    }
    *arg0 = NULL;
}

void fn_800C7604(void** arg0) {
    *arg0 = lbl_80309E00[lbl_8035A810] + 0x500;
}

extern u8 lbl_80308780[][0x780];
extern u8 lbl_80309E00[][0x780];
extern s32 lbl_8035A814;
extern s32 lbl_8035A810;
extern u32 lbl_8035A7F0;

void fn_800C7624(void** arg0) {
    *arg0 = lbl_80308780[lbl_8035A814];
}

void fn_800C7640(void** arg0) {
    *arg0 = lbl_80308780[lbl_8035A814] + 0x280;
}

void fn_800C7660(void** arg0) {
    *arg0 = lbl_80308780[lbl_8035A814] + 0x500;
}

void fn_800C7680(void** arg0) {
    *arg0 = lbl_80309E00[lbl_8035A814] + 0x500;
}

extern u32 lbl_8035A7F4;
void fn_800C76A0(void** arg0) {
    if (lbl_8035A7F4 != 0) {
        *arg0 = lbl_80309E00[lbl_8035A810];
        return;
    }
    *arg0 = NULL;
}

void fn_800C76D4(void** arg0) {
    *arg0 = lbl_80309E00[lbl_8035A814];
}

extern s32 lbl_8035A818;
void fn_800C76F0(void** arg0) {
    *arg0 = lbl_80309E00[lbl_8035A818];
}

extern s32 lbl_8035A81C;
void fn_800C770C(void** arg0) {
    *arg0 = lbl_80309E00[lbl_8035A81C];
}

extern s32 lbl_8035A830;
s32 fn_800C7964(void) {
    return lbl_8035A830;
}

extern u8 lbl_8030B480[];
extern u32 lbl_8035A828;
extern u8 *lbl_8035A82C;
u8 *fn_800C796C(void) {
    u32 old = lbl_8035A828++;
    u8 *ret = lbl_8030B480 + old * 0x300;
    lbl_8035A828 &= 1;
    lbl_8035A82C = lbl_8030B480 + lbl_8035A828 * 0x300;
    return ret;
}

void fn_800C8058(void) {
    extern u8 lbl_8030B480[];
    extern u32 lbl_8035A828;
    extern u8 *lbl_8035A82C;
    extern u32 lbl_8035A834;
    extern u32 lbl_8035A838;
    lbl_8035A838 = 0;
    lbl_8035A828 = 0;
    lbl_8035A82C = lbl_8030B480;
    lbl_8035A834 = 1;
}

void fn_800C807C(void) {

}

void fn_800C8080(u32 arg0) {
    extern u32 lbl_8035A838;
    if ((u32) lbl_8035A838 != arg0) {
        lbl_8035A838 = arg0;
    }
}

extern void fn_800C8094(u32);
extern void fn_800C45D8(void *, u32);
extern void fn_800CC2DC(void *);
extern u8 lbl_8030BA80[];
extern u8 lbl_80310480[];
extern u32 lbl_8035A844;
extern u32 lbl_8035A848;
extern u64 lbl_8035A850;
extern u32 lbl_8035A870;
void fn_800C824C(void) {
    if (lbl_8035A848 == 0) {
        lbl_8035A850 = OSGetTime();
    }
    if (lbl_8035A848 == 1) {
        lbl_8035A848 = 0;
        fn_800C8094(0);
    } else {
        lbl_8035A848 = 2;
        fn_800CC2DC(lbl_80310480);
    }
    if (lbl_8035A870 == 1) {
        fn_800C45D8(lbl_8030BA80 + lbl_8035A844 * 0x280, 0x280);
        lbl_8035A844 = lbl_8035A844 + 1;
        lbl_8035A844 = lbl_8035A844 % 3;
    }
}

extern s32 lbl_8035A85C;
void fn_800C8308(void) {
    lbl_8035A85C = 1;
}

void fn_800C8314(void) {
    if (lbl_8035A848 == 2) {
        lbl_8035A848 = 0;
        fn_800C8094((u32)(OSGetTime() - lbl_8035A850) >> 2);
    } else {
        lbl_8035A848 = 1;
    }
}

extern s32 lbl_8035A860;
extern s32 lbl_8035A868;
void fn_800C836C(void) {
    lbl_8035A860 = 1;
    fn_800BA3B4(&lbl_8035A868);
}

void fn_800C8804(void) {
    extern u8 lbl_80310480[];
    extern u32 lbl_8035A858;
    extern s32 lbl_8035A868;
    extern void fn_800C4678(void);
    extern void fn_800CC29C(void *);
    extern void fn_800BA2C8(void *);
    int enabled = OSDisableInterrupts();
    lbl_8035A858 = 0;
    fn_800CC29C(lbl_80310480);
    fn_800BA2C8(&lbl_8035A868);
    fn_800C4678();
    OSRestoreInterrupts(enabled);
}

extern s32 lbl_8035A858;
void fn_800C885C(s32 arg0) {
    lbl_8035A858 = arg0;
}

extern u8 lbl_80310520[];
u8 *fn_800C8864(void) {
    return lbl_80310520;
}

void fn_800C8C68(void) {
    extern s32 lbl_8035A878;
    extern s32 lbl_8035A87C;
    extern s32 lbl_8035A880;
    extern s32 lbl_8035A884;
    extern s32 lbl_8035A888;
    extern s32 lbl_8035A88C;
    extern s32 lbl_8035A890;
    extern s32 lbl_8035A894;
    extern s32 lbl_8035A898;
    lbl_8035A898 = 0;
    lbl_8035A894 = 0;
    lbl_8035A890 = 0;
    lbl_8035A88C = 0;
    lbl_8035A888 = 0;
    lbl_8035A884 = 0;
    lbl_8035A880 = 0;
    lbl_8035A87C = 0;
    lbl_8035A878 = 0;
}

void fn_800C8C94(void) {

}

void fn_800C8C98(s16 *arg0) {
    extern s32 lbl_8035A878;
    extern s32 lbl_8035A87C;
    extern s32 lbl_8035A880;
    extern s32 lbl_8035A884;
    extern s32 lbl_8035A888;
    extern s32 lbl_8035A88C;
    extern s32 lbl_8035A890;
    extern s32 lbl_8035A894;
    extern s32 lbl_8035A898;
    lbl_8035A878 += arg0[0x52 / 2];
    lbl_8035A884 += arg0[0x54 / 2];
    lbl_8035A890 += arg0[0x56 / 2];
    lbl_8035A87C += arg0[0x58 / 2];
    lbl_8035A888 += arg0[0x5A / 2];
    lbl_8035A894 += arg0[0x5C / 2];
    lbl_8035A880 += arg0[0x5E / 2];
    lbl_8035A88C += arg0[0x60 / 2];
    lbl_8035A898 += arg0[0x62 / 2];
}

extern s32 lbl_8035A8A8;
s32 fn_800C8D2C(void) {
    return lbl_8035A8A8;
}

extern u8 lbl_80310560[];
u8 *fn_800C96F8(void) {
    return lbl_80310560;
}

void fn_800C9704(char *p) {
    *(u16 *)(p + 0x146) = 0;
    *(u16 *)(p + 0x16e) = 0;
    *(s32 *)(p + 0x1c) = 0xa4;
    *(s32 *)(p + 0x28) = 0;
    *(s32 *)(p + 0x24) = 0;
    *(char **)(p + 0x30) = p + 0x34;
    *(u16 *)(p + 0x184) = 0;
    *(u16 *)(p + 0x182) = 0;
    *(u16 *)(p + 0x180) = 0;
    *(u16 *)(p + 0x17e) = 0;
    *(u16 *)(p + 0x17c) = 0;
    *(u16 *)(p + 0x1f2) = 0;
}

void fn_800C9944(void) {

}

int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void fn_800C9948(u8 *arg0, s32 arg1) {
    int enabled;
    u8 *p;

    enabled = OSDisableInterrupts();
    p = arg0 + 0x138;
    switch (arg1) {
    case 0:
        *(u16 *)(p + 8) = 2;
        break;
    case 1:
        *(u16 *)(p + 8) = 1;
        break;
    case 2:
        *(u16 *)(p + 8) = 0;
        *(u16 *)(p + 0xA) = 0;
        break;
    case 3:
        *(u16 *)(p + 8) = 0;
        *(u16 *)(p + 0xA) = 1;
        break;
    case 4:
        *(u16 *)(p + 8) = 0;
        *(u16 *)(p + 0xA) = 2;
        break;
    }
    *(u32 *)(arg0 + 0x1C) |= 1;
    OSRestoreInterrupts(enabled);
}

void fn_800C9A0C(void *arg0, u16 arg1) {
    int enabled = OSDisableInterrupts();
    M2C_FIELD(arg0, u16 *, 0x146) = arg1;
    M2C_FIELD(arg0, u32 *, 0x1C) |= 4;
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
    OSRestoreInterrupts(enabled);
}

void fn_800C9A68(void *arg0, s16 arg1) {
    int enabled = OSDisableInterrupts();
    M2C_FIELD(arg0, s16 *, 0x148) = arg1;
    M2C_FIELD(arg0, u32 *, 0x1C) |= 8;
    OSRestoreInterrupts(enabled);
}

void fn_800C9AB4(void *arg0) {
    int enabled = OSDisableInterrupts();
    M2C_FIELD(arg0, u16 *, 0x16E) = 1;
    M2C_FIELD(arg0, u16 *, 0x17A) = 0;
    M2C_FIELD(arg0, u16 *, 0x178) = 0;
    M2C_FIELD(arg0, u16 *, 0x176) = 0;
    M2C_FIELD(arg0, u16 *, 0x174) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) &= ~0x40;
    M2C_FIELD(arg0, u32 *, 0x1C) |= 0x20;
    OSRestoreInterrupts(enabled);
}

void fn_800C9B18(void *p, u16 a, u16 b) {
    BOOL old = OSDisableInterrupts();
    M2C_FIELD(p, u16 *, 0x178) = a;
    M2C_FIELD(p, u16 *, 0x17A) = b;
    M2C_FIELD(p, u32 *, 0x1C) |= 0x40;
    OSRestoreInterrupts(old);
}

int OSRestoreInterrupts(int level);
void fn_800C9B74(unsigned char *voice, unsigned int *src)
{
    unsigned int *dst;
    int old;

    dst = (unsigned int *)(voice + 0x1a6);
    old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    switch (((unsigned short *)src)[1]) {
    case 0:
        break;
    case 10:
        dst[4] = 0;
        dst[5] = 0;
        dst[6] = 0;
        dst[7] = 0;
        dst[8] = 0;
        dst[9] = 0;
        dst[10] = 0;
        dst[11] = 0;
        dst[12] = 0x08000000;
        dst[13] = 0;
        break;
    case 25:
        dst[4] = 0;
        dst[5] = 0;
        dst[6] = 0;
        dst[7] = 0;
        dst[8] = 0;
        dst[9] = 0;
        dst[10] = 0;
        dst[11] = 0;
        dst[12] = 0x01000000;
        dst[13] = 0;
        break;
    }
    *(unsigned int *)(voice + 0x1c) &= ~0x1e000;
    *(unsigned int *)(voice + 0x1c) |= 0x20000 | 0x1000;
    OSRestoreInterrupts(old);
}

void fn_800C9C84(void *p, u32 *src) {
    u32 *dst = (u32 *)((u8 *)p + 0x1B6);
    BOOL old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    M2C_FIELD(p, u32 *, 0x1C) |= 0x20000;
    OSRestoreInterrupts(old);
}

void fn_800C9D28(void *p, u16 *src) {
    u16 *dst = (u16 *)((u8 *)p + 0x1DE);
    BOOL old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    M2C_FIELD(p, u32 *, 0x1C) &= ~0x80000;
    M2C_FIELD(p, u32 *, 0x1C) |= 0x40000;
    OSRestoreInterrupts(old);
}

void fn_800C9DC0(u8 *arg0, f32 value) {
 extern f32 lbl_803630C0;
 s32 enabled;
 u32 ratio;
 enabled = OSDisableInterrupts();
 value = lbl_803630C0 * value;
 ratio = (u32)value;
 if ((u32)value > 0x40000U) ratio = 0x40000;
 *(u16 *)(arg0 + 0x1de) = ratio >> 16;
 *(u16 *)(arg0 + 0x1e0) = ratio;
 *(u32 *)(arg0 + 0x1c) |= 0x80000;
 OSRestoreInterrupts(enabled);
}

void fn_800C9E58(u8 *arg0, u16 *arg1) {
 u16 *dest = (u16 *)(arg0 + 0x1ec);
 s32 enabled = OSDisableInterrupts();
 dest[0] = arg1[0];
 dest[1] = arg1[1];
 dest[2] = arg1[2];
 *(u32 *)(arg0 + 0x1c) |= 0x100000;
 OSRestoreInterrupts(enabled);
}

void *fn_800C9EC4(void) {
 extern u8 (*lbl_8035A8B0)[0x38];
 extern u32 lbl_8035A8B4, lbl_8035A8B8, lbl_8035A8BC;
 void *result;
 if (lbl_8035A8BC) {
 result = lbl_8035A8B0[lbl_8035A8B8++];
 lbl_8035A8B8 %= lbl_8035A8B4;
 return result;
 }
 return 0;
}

void fn_800C9F0C(s32 *arg0) {
 extern u8 lbl_802DE540[];
 extern u32 lbl_8035A8C8;
 s32 left = arg0[5];
 s32 right = arg0[6];
 s32 invLeft = 127 - left;
 s32 invRight = 127 - right;
 if (lbl_8035A8C8 == 3) {
  arg0[8] = *(s16 *)(lbl_802DE540 + 0x98c + left * 2);
  arg0[9] = *(s16 *)(lbl_802DE540 + 0x98c + invLeft * 2);
  arg0[10] = *(s16 *)(lbl_802DE540 + 0x98c + invRight * 2);
  arg0[11] = *(s16 *)(lbl_802DE540 + 0x98c + right * 2);
  arg0[12] = *(s16 *)(lbl_802DE540 + 0xa8c + invLeft * 2);
  arg0[13] = *(s16 *)(lbl_802DE540 + 0xa8c + left * 2);
 } else {
  arg0[8] = *(s32 *)(lbl_802DE540 + 0x78c + left * 4);
  arg0[9] = *(s32 *)(lbl_802DE540 + 0x78c + invLeft * 4);
  arg0[10] = *(s32 *)(lbl_802DE540 + 0x78c + invRight * 4);
  arg0[11] = *(s32 *)(lbl_802DE540 + 0x78c + right * 4);
 }
}

extern s32 lbl_8035A8C8;
void fn_800CA090(s32 arg0) {
    lbl_8035A8C8 = arg0;
}

extern s32 lbl_8035A8C8;
s32 fn_800CA098(void) {
    return lbl_8035A8C8;
}

void fn_800CAF1C(char *arg0) {
    s32 *p = &lbl_80321D60[*(s32 *)(arg0 + 0x18)].unk0;
    *p = 0;
}

void fn_800CAF3C(char *arg0, s32 arg1) {
    UnkVoice80321D60 *v = &lbl_80321D60[*(s32 *)(arg0 + 0x18)];
    v->unk8 = arg1;
    v->unk4 |= 0x10000000;
}

void fn_800CAF64(char *arg0, s32 arg1) {
    UnkVoice80321D60 *v = &lbl_80321D60[*(s32 *)(arg0 + 0x18)];
    v->unkC = arg1;
    v->unk4 |= 0x40000000;
}

void fn_800CAF8C(char *arg0, s32 arg1) {
    UnkVoice80321D60 *v;
    if ((u32)lbl_8035A8C8 != 3) {
        v = &lbl_80321D60[*(s32 *)(arg0 + 0x18)];
        v->unk10 = arg1;
        v->unk4 |= 0x40000000;
    }
}

void fn_800CAFC0(void *arg0, s32 arg1) {
    void fn_800C9F0C(void *);
    UnkVoice80321D60 *voice = &lbl_80321D60[M2C_FIELD(arg0, s32 *, 0x18)];
    if (arg1 < 0) arg1 = 0;
    else if (arg1 > 127) arg1 = 127;
    M2C_FIELD(voice, s32 *, 0x14) = arg1;
    fn_800C9F0C(voice);
    voice->unk4 |= 0x40000000;
}

void fn_800CB02C(void *arg0, s32 arg1) {
    void fn_800C9F0C(void *);
    UnkVoice80321D60 *voice = &lbl_80321D60[M2C_FIELD(arg0, s32 *, 0x18)];
    if (arg1 < 0) arg1 = 0;
    else if (arg1 > 127) arg1 = 127;
    M2C_FIELD(voice, s32 *, 0x18) = arg1;
    fn_800C9F0C(voice);
    voice->unk4 |= 0x40000000;
}

s32 fn_800CC114(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_800CC124(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

u32 fn_800CC134(void) {
    return (*(u16 *)0xCC005004 << 16) | *(u16 *)0xCC005006;
}

void fn_800CC14C(u32 arg0) {
    volatile u16 *p = (volatile u16 *)0xCC005000;
    p[0] = arg0 >> 16;
    p[1] = arg0;
}

extern s32 lbl_8035A8D0;
s32 fn_800CC224(void) {
    return lbl_8035A8D0;
}

void fn_800CC3A4(char* str, ...) {
}

extern char lbl_802DF180[];
void fn_800CC9B8(u8 *arg0) {
    char *str = lbl_802DF180;
    u32 status;

    while (fn_800CC124() == 0) {}
    status = fn_800CC134();
    fn_800CC14C(0x80F3A001);
    while (fn_800CC114() != 0) {}
    fn_800CC14C(*(u32 *)(arg0 + 0xC));
    while (fn_800CC114() != 0) {}
    fn_800CC14C(0x80F3C002);
    while (fn_800CC114() != 0) {}
    fn_800CC14C((u16)*(u32 *)(arg0 + 0x14));
    while (fn_800CC114() != 0) {}
    fn_800CC14C(0x80F3A002);
    while (fn_800CC114() != 0) {}
    fn_800CC14C(*(u32 *)(arg0 + 0x10));
    while (fn_800CC114() != 0) {}
    fn_800CC14C(0x80F3B002);
    while (fn_800CC114() != 0) {}
    fn_800CC14C(0);
    while (fn_800CC114() != 0) {}
    fn_800CC14C(0x80F3D001);
    while (fn_800CC114() != 0) {}
    fn_800CC14C(*(u16 *)(arg0 + 0x24));
    while (fn_800CC114() != 0) {}
    fn_800CC3A4(str, arg0);
    fn_800CC3A4(str + 0x20, *(u32 *)(arg0 + 0xC));
    fn_800CC3A4(str + 0x50, *(u32 *)(arg0 + 0x14));
    fn_800CC3A4(str + 0x80, *(u32 *)(arg0 + 0x10));
    fn_800CC3A4(str + 0xB0, *(u32 *)(arg0 + 0x1C));
    fn_800CC3A4(str + 0xE0, *(u16 *)(arg0 + 0x24));
}

void fn_800CCB44(void *arg0) {
    extern void *lbl_8035A8E4;
    extern void *lbl_8035A8E8;
    extern void *lbl_8035A8EC;
    void *q;

    if (lbl_8035A8E8 == NULL) {
        lbl_8035A8EC = arg0;
        lbl_8035A8E4 = arg0;
        lbl_8035A8E8 = arg0;
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        return;
    }
    for (q = lbl_8035A8E8; q != NULL; q = M2C_FIELD(q, void **, 0x38)) {
        if (M2C_FIELD(arg0, u32 *, 4) < M2C_FIELD(q, u32 *, 4)) {
            M2C_FIELD(arg0, void **, 0x3C) = M2C_FIELD(q, void **, 0x3C);
            M2C_FIELD(q, void **, 0x3C) = arg0;
            M2C_FIELD(arg0, void **, 0x38) = q;
            if (M2C_FIELD(arg0, void **, 0x3C) == NULL) {
                lbl_8035A8E8 = arg0;
            } else {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = arg0;
            }
            break;
        }
    }
    if (q == NULL) {
        M2C_FIELD(lbl_8035A8E4, void **, 0x38) = arg0;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        M2C_FIELD(arg0, void **, 0x3C) = lbl_8035A8E4;
        lbl_8035A8E4 = arg0;
    }
}

void fn_800CCBE4(void *arg0) {
    extern void *lbl_8035A8E4;
    extern void *lbl_8035A8EC;
    extern void *lbl_8035A8E8;
    void *temp_r0;

    M2C_FIELD((unsigned short)arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 3;
    if ((void *) lbl_8035A8E8 == arg0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r0 != NULL) {
            lbl_8035A8E8 = temp_r0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = NULL;
            return;
        }
        lbl_8035A8EC = NULL;
        lbl_8035A8E4 = NULL;
        lbl_8035A8E8 = NULL;
        return;
    }
    if ((void *) lbl_8035A8E4 == arg0) {
        lbl_8035A8E4 = M2C_FIELD(arg0, void **, 0x3C);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = NULL;
        lbl_8035A8EC = lbl_8035A8E8;
        return;
    }
    lbl_8035A8EC = M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
}

void fn_800CCC78(void) {

}

s32 fn_800CCFCC(s32 chan, s32 enable) {
    s32 EXISelect(s32, s32, s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXISync(s32);
    s32 EXIDeselect(s32);
    u32 cmd;
    s32 err;
    if (!EXISelect(chan, 0, 4)) return -3;
    if (enable) cmd = 0x81010000;
    else cmd = 0x81000000;
    err = !EXIImm(chan, &cmd, 2, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) return -3;
    return 0;
}

s32 fn_800CD17C(s32 arg0) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 EXISelect(M2C_UNK, M2C_UNK);
    s32 EXISync(s32);
    s32 spC;
    s32 temp_r31;
    s32 temp_r31_2;

    if (EXISelect(0, 4) == 0) {
        return -3;
    }
    spC = 0x89000000;
    temp_r31 = EXIImm(arg0, &spC, 1, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    if ((temp_r31_2 | (EXIDeselect(arg0) == 0)) != 0) {
        return -3;
    }
    return 0;
}

void fn_800CD228(void *arg0) {
    extern void fn_800F2540(s32, s32);
    s32 chan = 0;
    u8 *p = lbl_80323560;
    void (*callback)(s32, s32);
    if (arg0 != p + 0xE0) {
        p += 0x110;
        chan = 1;
        if (arg0 != p + 0xE0) {
            chan = 2;
        }
    }
    if (*(s32 *)p != 0) {
        fn_800F2540(chan, 0);
        callback = *(void (**)(s32, s32))(p + 0xCC);
        if (callback != 0) {
            *(void (**)(s32, s32))(p + 0xCC) = 0;
            callback(chan, -5);
        }
    }
}

#pragma push
#pragma dont_inline on
void fn_800CDAEC(void) {
    u8 *p = lbl_80323560;
    int i;
    if (*(u32 *)(p + 0x10c) == 0 || *(u32 *)(p + 0x21c) == 0) {
        lbl_8035A8F0 = fn_800B6B0C();
        OSRegisterVersion(lbl_80359600);
        fn_800CC160();
        OSInitAlarm();
        for (i = 0; i < 2; i++) {
            *(s32 *)(p + 4) = -3;
            OSInitThreadQueue(p + 0x8c);
            OSCreateAlarm((s32 *)(p + 0xe0));
            p += 0x110;
        }
        fn_800CDBA0(0x80000000);
        OSRegisterResetFunction(lbl_802DF308);
    }
}

s32 fn_800CDB98(void) {
    return lbl_8035A8F0;
}

#pragma pop
void fn_800CDBA0(u32 arg) {
    u8 *p = lbl_80323560;
    *(u32 *)(p + 0x10c) = arg ? arg : (u32)(p + 0x220);
    *(u32 *)(p + 0x21c) = arg ? arg : (u32)(p + 0x220);
}

int fn_800CDCF4(int chan) {
    if (chan < 0 || chan >= 2) {
        return -128;
    }
    return *(int *)(lbl_80323560 + chan * 0x110 + 4);
}

s32 fn_800CDE74(s32 chan, s32 *arg1) {
    u8 *card;
    s32 result = fn_800CDBD8(chan, &card);
    int enabled;
    s32 *p;
    if (result < 0) {
        return result;
    }
    *arg1 = *(s32 *)(card + 0xC);
    p = (s32 *)card;
    enabled = OSDisableInterrupts();
    if (p[0] != 0) {
        p[1] = 0;
    } else if (p[1] == -1) {
        p[1] = 0;
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

s32 fn_800CDF90(s32 arg0) {
    extern s32 fn_800D14DC(s32);
    if (arg0 == 0 && (fn_800D14DC(0) == -1 || fn_800D14DC(1) == -1)) {
        return 0;
    }
    return 1;
}

s32 fn_800CDFE0(u32 arg0) {
    s32 var_ctr;
    s32 var_r10;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r9;
    u32 temp_r6;
    u32 temp_r8;
    u32 temp_r8_2;
    u32 temp_r8_3;
    u32 var_r8;

    var_ctr = 8;
    temp_r6 = arg0 >> 0x1FU;
    var_r9 = 0;
    var_r10 = 1;
    var_r7 = 0;
    var_r8 = 0;
    do {
        if (var_r8 > 0xFU) {
            if (var_r8 == 0x1F) {
                var_r7_2 = var_r7 | temp_r6;
            } else {
                var_r7_2 = var_r7 | ((u32) (arg0 & (1 << var_r8)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_2 = var_r7 | ((arg0 & (1 << var_r8)) << ((0x1F - var_r8) - var_r9));
            var_r9 += 1;
        }
        temp_r8 = var_r8 + 1;
        if (temp_r8 > 0xFU) {
            if (temp_r8 == 0x1F) {
                var_r7_3 = var_r7_2 | temp_r6;
            } else {
                var_r7_3 = var_r7_2 | ((u32) (arg0 & (1 << temp_r8)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_3 = var_r7_2 | ((arg0 & (1 << temp_r8)) << ((0x1F - temp_r8) - var_r9));
            var_r9 += 1;
        }
        temp_r8_2 = temp_r8 + 1;
        if (temp_r8_2 > 0xFU) {
            if (temp_r8_2 == 0x1F) {
                var_r7_4 = var_r7_3 | temp_r6;
            } else {
                var_r7_4 = var_r7_3 | ((u32) (arg0 & (1 << temp_r8_2)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_4 = var_r7_3 | ((arg0 & (1 << temp_r8_2)) << ((0x1F - temp_r8_2) - var_r9));
            var_r9 += 1;
        }
        temp_r8_3 = temp_r8_2 + 1;
        if (temp_r8_3 > 0xFU) {
            if (temp_r8_3 == 0x1F) {
                var_r7 = var_r7_4 | temp_r6;
            } else {
                var_r7 = var_r7_4 | ((u32) (arg0 & (1 << temp_r8_3)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7 = var_r7_4 | ((arg0 & (1 << temp_r8_3)) << ((0x1F - temp_r8_3) - var_r9));
            var_r9 += 1;
        }
        var_r8 = temp_r8_3 + 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return var_r7;
}

void fn_800CEEAC(void *arg0) {
    u8 *p = lbl_80323560;
    s32 value;
    if (p + 0x30 != arg0) {
        p += 0x110;
    }
    value = *(s32 *)(p + 0x80);
    fn_800CC14C(0xFF000000);
    while ((u32)fn_800CC114() != 0U) {}
    fn_800CC14C(value);
    while ((u32)fn_800CC114() != 0U) {}
}

s32 fn_800CF4C0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_800CF8C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_800D0420(s32 chan) {
    extern s32 fn_800CFCD8(s32);
    extern s32 fn_800CFF5C(s32, s32);
    extern s32 fn_800D019C(s32, s32);
    s32 result = fn_800CFCD8(chan);
    s32 first;
    if (result < 0) return result;
    first = fn_800CFF5C(chan, 0);
    switch (first + fn_800D019C(chan, 0)) {
    case 0: return 0;
    case 1: return -6;
    default: return -6;
    }
}

s32 fn_800D0A3C(s32 chan) {
    extern void fn_800CCC7C(void);
    extern s32 fn_800D04AC(s32, void *, void *);
    extern s32 fn_800CDEF8(s32);
    s32 value;
    s32 result = fn_800D04AC(chan, &value, fn_800CCC7C);
    if (result < 0 || &value == 0) return result;
    return fn_800CDEF8(chan);
}

s32 fn_800D0A90(u32 id) {
    extern s32 lbl_802DF480[];
    extern u16 lbl_80359610;
    u32 size;
    s32 sectorSize;
    s32* p;

    if ((id & 0xFFFF0000) && (id != 0x80000004 || lbl_80359610 == 0xFFFF)) {
        return 0;
    }
    if ((id & 3) != 0) {
        return 0;
    }
    size = id & 0xFC;
    switch (size) {
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
        break;
    default:
        return 0;
    }
    p = &lbl_802DF480[(id & 0x3800) >> 11];
    sectorSize = *p;
    if (sectorSize == 0) {
        return 0;
    }
    if ((size * 1024 * 1024 / 8) / sectorSize >= 8) {
        return 1;
    }
    return 0;
}

extern u8 lbl_80323560[];
s32 fn_800D1258(s32 chan, void *buf, s32 len, void *cb);
s32 fn_800CDEF8(s32 chan);
void fn_800CCC7C(void);
void fn_800F2540(s32, s32);
void fn_800F2970(s32);
void fn_800B3EF8(void *);
s32 fn_800CDBD8(s32 chan, void *out);
s32 fn_800F2730(s32 chan);
s32 fn_800CDB98(void);
s32 fn_800D16CC(s32, s32, void *);
s32 fn_800D04AC(s32, void *, void *);
s32 fn_800D13F8(s32 chan, void *buf, s32 len) {
    s32 result = fn_800D1258(chan, buf, len, fn_800CCC7C);
    if (result < 0) return result;
    return fn_800CDEF8(chan);
}

void fn_800D1440(s32 chan, s32 arg1) {
    u8 *p = lbl_80323560 + chan * 0x110;
    int enabled = OSDisableInterrupts();
    if (*(s32 *)(p + 0x0) != 0) {
        fn_800F2540(chan, 0);
        fn_800F2970(chan);
        fn_800B3EF8(p + 0xE0);
        *(s32 *)(p + 0x0) = 0;
        *(s32 *)(p + 0x4) = arg1;
        *(s32 *)(p + 0x24) = 0;
    }
    OSRestoreInterrupts(enabled);
}

s32 fn_800D14DC(s32 chan) {
    s32 result;
    u8 *p;
    int enabled;
    u8 buf[4];

    result = fn_800CDBD8(chan, buf);
    if (result < 0) {
        return result;
    }
    p = lbl_80323560 + chan * 0x110;
    enabled = OSDisableInterrupts();
    if (*(s32 *)(p + 0x0) != 0) {
        fn_800F2540(chan, 0);
        fn_800F2970(chan);
        fn_800B3EF8(p + 0xE0);
        *(s32 *)(p + 0x0) = 0;
        *(s32 *)(p + 0x4) = -3;
        *(s32 *)(p + 0x24) = 0;
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

s32 fn_800D1D24(s32 chan) {
    s32 result = fn_800D16CC(chan, fn_800CDB98(), fn_800CCC7C);
    if (result < 0) return result;
    return fn_800CDEF8(chan);
}

s32 fn_800CDEF8(s32);
s32 fn_800D1D78(void *arg0, char *name) {
    char *p = (char *)arg0 + 8;
    char a, b;
    s32 n = 32;
    while (--n >= 0) {
        a = *p++;
        b = *name++;
        if (a != b) return 0;
        if (b == 0) return 1;
    }
    if (*name == 0) goto equal;
    return 0;
equal:
    return 1;
}

s32 fn_800D1DE0(void *arg0, u8 *arg1) {
    extern u8 lbl_80323780[];
    extern s32 fn_800E8B1C(const void *, const void *, u32);
    u8 *id = *(u8 **)((u8 *)arg0 + 0x10C);
    if (*arg1 == 0xFF) return -4;
    if (id == lbl_80323780 ||
        (fn_800E8B1C(arg1, id, 4) == 0 &&
         fn_800E8B1C(arg1 + 4, id + 4, 2) == 0)) {
        return 0;
    }
    return -10;
}

s32 fn_800D21EC(s32 chan, s32 fileNo, s32 *fileInfo) {
    extern s32 fn_800CDC90(s32, s32);
    extern s32 fn_800D1E74(s32, u8 *);
    s32 card;
    u8 *ent;
    s32 result;

    if (fileNo < 0 || fileNo >= 127) {
        return -128;
    }
    fileInfo[0] = -1;
    result = fn_800CDBD8(chan, &card);
    if (result < 0) {
        return result;
    }
    ent = (u8 *)fn_800CF8C4((void *)card) + fileNo * 0x40;
    result = fn_800D1E74(card, ent);
    if (result == -10 && (ent[0x34] & 4)) {
        result = 0;
    }
    if (result >= 0) {
        u16 block = *(u16 *)(ent + 0x36);
        if (block < 5 || block >= *(u16 *)(card + 0x10)) {
            result = -6;
        } else {
            fileInfo[0] = chan;
            fileInfo[1] = fileNo;
            fileInfo[2] = 0;
            *(u16 *)(fileInfo + 4) = *(u16 *)(ent + 0x36);
        }
    }
    return fn_800CDC90(card, result);
}

s32 fn_800D240C(s32 *arg0) {
    extern s32 fn_800CDC90(s32, s32);
    s32 control;
    s32 result = fn_800CDBD8(*arg0, &control);
    if (result < 0) return result;
    *arg0 = -1;
    return fn_800CDC90(control, 0);
}

s32 fn_800D2460(void) {
    return 0;
}

s32 fn_800D8318(void *);
u8 fn_800D8320(void *);
void *fn_800D3730(void *obj, s32 id)
{
    extern void *__GXData;
    s32 fmt;
    u8 mipmap;

    fmt = fn_800D8318(obj);
    mipmap = fn_800D8320(obj);
    id = id % 8;
    switch (fmt) {
    case 6:
        if (mipmap) {
            return (u8 *)__GXData + 0x308 + id * 0x10;
        }
        return (u8 *)__GXData + 0x288 + id * 0x10;
    case 8:
    case 9:
    case 10:
        return (u8 *)__GXData + 0x208 + id * 0x10;
    default:
        if (mipmap) {
            return (u8 *)__GXData + 0x288 + id * 0x10;
        }
        return (u8 *)__GXData + 0x208 + id * 0x10;
    }
}

void *fn_800D382C(u32 id) {
    extern void *__GXData;
    return (id >= 20) ? 0 : (u8 *)__GXData + 0x388 + id * 0x10;
}

extern volatile u16 *__memReg;

static inline u32 __GXReadMEMCounterU32(u32 addrHi, u32 addrLo) {
    u32 ctrH0, ctrH1, ctrL;
    ctrH0 = __memReg[addrHi];
    do {
        ctrH1 = ctrH0;
        ctrH0 = __memReg[addrHi];
        ctrL = __memReg[addrLo];
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}


void fn_800D4F64(void *);
void fn_800D6908(void *);
void fn_800D69D4(void *);
void fn_800D62CC(void);
#pragma push
#pragma inline_depth(4)
BOOL fn_800D3850(BOOL final) {
    extern void *__cpReg;
    extern void *__GXData;
    extern u32 lbl_8035A908;
    extern s64 lbl_8035A910;
    extern u32 lbl_8035A918;
    u32 peCountNew;
    s64 timeNew;

    if (!final) {
        if (!lbl_8035A918) {
            lbl_8035A908 = __GXReadMEMCounterU32(0x27, 0x28);
            lbl_8035A910 = OSGetTime();
            lbl_8035A918 = 1;
            return FALSE;
        }
        timeNew = OSGetTime();
        peCountNew = __GXReadMEMCounterU32(0x27, 0x28);
        if (timeNew - lbl_8035A910 < 10) {
            return FALSE;
        }
        if (peCountNew != lbl_8035A908) {
            lbl_8035A908 = peCountNew;
            lbl_8035A910 = timeNew;
            return FALSE;
        }
    } else {
        fn_800D4F64(NULL);
        fn_800D6908(NULL);
        fn_800D69D4(NULL);
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        fn_800B2EA8();
        M2C_FIELD(__cpReg, u16 *, 2) = 0;
        M2C_FIELD(__cpReg, u16 *, 4) = 3;
        M2C_FIELD(__GXData, u8 *, 0x5AA) = 1;
        fn_800D62CC();
    }
    return TRUE;
}
#pragma pop
void fn_800D4C48(void *fifo, s32 rd, s32 wr) {
    BOOL enabled = OSDisableInterrupts();
    M2C_FIELD(fifo, s32 *, 0x14) = rd;
    M2C_FIELD(fifo, s32 *, 0x18) = wr;
    M2C_FIELD(fifo, s32 *, 0x1C) = wr - rd;
    if (M2C_FIELD(fifo, s32 *, 0x1C) < 0) {
        M2C_FIELD(fifo, s32 *, 0x1C) += M2C_FIELD(fifo, s32 *, 0x8);
    }
    OSRestoreInterrupts(enabled);
}

void fn_800D4CB8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

void fn_800D4FF4(void) {
    extern void *__GXData;
    extern void *__cpReg;
    void *gx = __GXData;
    M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), 1, 0, 31, 31);
    M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
}

void fn_800D5018(void) {
    extern void *__GXData;
    extern void *__cpReg;
    void *gx = __GXData;
    M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), 0, 0, 31, 31);
    M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
}

void fn_800D503C(u8 arg0) {
    extern void *__GXData;
    extern void *__cpReg;
    void *gx;
    u32 v;
    if (arg0) {
        v = 1;
    } else {
        v = 0;
    }
    gx = __GXData;
    M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), v, 4, 27, 27);
    M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
}

void fn_800D5070(s32 arg0, u8 arg1) {
    extern void *__GXData;
    extern void *__cpReg;
    void *gx = __GXData;
    M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), arg0, 2, 29, 29);
    M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), arg1, 3, 28, 28);
    M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
}

void fn_800D50A0(s32 arg0, u8 arg1) {
    extern void *__GXData;
    extern void *__cpReg;
    void *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x10) = __rlwimi(M2C_FIELD(gx, u32 *, 0x10), arg0, 0, 31, 31);
    M2C_FIELD(gx, u32 *, 0x10) = __rlwimi(M2C_FIELD(gx, u32 *, 0x10), arg1, 1, 30, 30);
    M2C_FIELD(__cpReg, u16 *, 4) = M2C_FIELD(gx, u32 *, 0x10);
}

void GXSetGPFifo(void *fifo);
void GXSetCPUFifo(void *fifo);
s32 fn_800D51D0(void);
s32 fn_800D51D8(void);
void fn_800D50D0(void) {
    struct GXFifoObj { u8 pad[0x80]; } tmp;
    void *cpu;
    s32 base;
    void *fifo;

    fifo = (void *)fn_800D51D8();
    if (fifo != NULL) {
        base = M2C_FIELD(fifo, s32 *, 0x0);
        cpu = (void *)fn_800D51D0();
        tmp = *(struct GXFifoObj *)fifo;
        fn_800D4C48(&tmp, base, base);
        GXSetGPFifo(&tmp);
        if (cpu == fifo) {
            GXSetCPUFifo(&tmp);
        }
        fn_800D4C48(fifo, base, base);
        GXSetGPFifo(fifo);
        if (cpu == fifo) {
            GXSetCPUFifo(cpu);
        }
    }
}

extern s32 lbl_8035A920;
s32 fn_800D51D0(void) {
    return lbl_8035A920;
}

extern s32 lbl_8035A924;
s32 fn_800D51D8(void) {
    return lbl_8035A924;
}

extern u8 lbl_8035A92C;
s32 fn_800B2F4C(void);
void PPCMtwpar(u32 val);
void fn_800D6270(void);
void fn_800B2EA8(void);
void *fn_800D51E0(void *ptr) {
    extern void *__GXData;
    extern void *__cpReg;
    extern void *__piReg;
    BOOL enabled;
    void *gx;
    u32 reg = 0;
    enabled = OSDisableInterrupts();
    fn_800D6270();
    while (fn_800B2F4C() & 1) {
    }
    PPCMtwpar(0x0C008000);
    if (lbl_8035A92C) {
        gx = __GXData;
        M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), 0, 4, 27, 27);
        M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
        M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), 0, 2, 29, 29);
        M2C_FIELD(gx, u32 *, 8) = __rlwimi(M2C_FIELD(gx, u32 *, 8), 0, 3, 28, 28);
        M2C_FIELD(__cpReg, u16 *, 2) = M2C_FIELD(gx, u32 *, 8);
    }
    reg = __rlwimi(reg, (u32)ptr, 0, 6, 26);
    M2C_FIELD(lbl_8035A920, u32 *, 0x18) = (M2C_FIELD(__piReg, u32 *, 0x14) & 0xFBFFFFFF) + 0x80000000;
    M2C_FIELD(__piReg, u32 *, 0xC) = 0;
    M2C_FIELD(__piReg, u32 *, 0x10) = 0x04000000;
    reg = __rlwimi(reg, 0, 26, 5, 5);
    M2C_FIELD(__piReg, u32 *, 0x14) = reg;
    fn_800B2EA8();
    OSRestoreInterrupts(enabled);
    return (void *)0xCC008000;
}

static inline void __GXXfVtxSpecs(void) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 nCols, nNrm, nTex, reg;
    if (M2C_FIELD(gx, u8 *, 0x4D5)) {
        nNrm = 2;
    } else if (M2C_FIELD(gx, u8 *, 0x4D4)) {
        nNrm = 1;
    } else {
        nNrm = 0;
    }
    nCols = 33 - __cntlzw((M2C_FIELD(gx, u32 *, 0x14) >> 13) & 0xF);
    nCols /= 2;
    nTex = 33 - __cntlzw(M2C_FIELD(gx, u32 *, 0x18) & 0xFFFF);
    nTex /= 2;
    reg = nCols | (nNrm << 2) | (nTex << 4);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1008;
    GXWGFifo.u32 = reg;
    gx->bpSentNot = 1;
}

void fn_800D56F4(void) {
    extern GXDataHead *__GXData;
    u32 nCols, nNrm, nTex, reg;
    GXWGFifo.u8 = 0x08;
    GXWGFifo.u8 = 0x50;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x14);
    GXWGFifo.u8 = 0x08;
    GXWGFifo.u8 = 0x60;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x18);
    if (M2C_FIELD(__GXData, u8 *, 0x4D5)) {
        nNrm = 2;
    } else if (M2C_FIELD(__GXData, u8 *, 0x4D4)) {
        nNrm = 1;
    } else {
        nNrm = 0;
    }
    nCols = 33 - __cntlzw((M2C_FIELD(__GXData, u32 *, 0x14) >> 13) & 0xF);
    nCols /= 2;
    nTex = 33 - __cntlzw(M2C_FIELD(__GXData, u32 *, 0x18) & 0xFFFF);
    nTex /= 2;
    reg = nCols | (nNrm << 2) | (nTex << 4);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1008;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 1;
}

extern u8 lbl_80359620[];
extern u8 lbl_80359624[];
extern u8 lbl_80359628[];
extern u8 lbl_80359620[4];
extern u8 lbl_80359624[4];
extern u8 lbl_80359628[4];
void fn_800D57B0(void) {
    extern GXDataHead *const __GXData;
    static u8 tbl1[] = { 0, 4, 1, 2 };
    static u8 tbl2[] = { 0, 8, 1, 2 };
    static u8 tbl3[] = { 0, 12, 1, 2 };
    u32 vlm;
    u32 vl, vh;
    s32 va;

    if (__GXData->vNum == 0) {
        return;
    }
    vl = M2C_FIELD(__GXData, u32 *, 0x14);
    vh = M2C_FIELD(__GXData, u32 *, 0x18);
    va = (M2C_FIELD(__GXData, u32 *, 0x1C) >> 9) & 1;

    vlm = vl & 1;
    vlm += (vl >> 1) & 1;
    vlm += (vl >> 2) & 1;
    vlm += (vl >> 3) & 1;
    vlm += (vl >> 4) & 1;
    vlm += (vl >> 5) & 1;
    vlm += (vl >> 6) & 1;
    vlm += (vl >> 7) & 1;
    vlm += (vl >> 8) & 1;
    vlm += tbl3[(vl >> 9) & 3];
    vlm += tbl3[(vl >> 11) & 3] * ((va == 1) ? 3 : 1);
    vlm += tbl1[(vl >> 13) & 3];
    vlm += tbl1[(vl >> 15) & 3];
    vlm += tbl2[vh & 3];
    vlm += tbl2[(vh >> 2) & 3];
    vlm += tbl2[(vh >> 4) & 3];
    vlm += tbl2[(vh >> 6) & 3];
    vlm += tbl2[(vh >> 8) & 3];
    vlm += tbl2[(vh >> 10) & 3];
    vlm += tbl2[(vh >> 12) & 3];
    vlm += tbl2[(vh >> 14) & 3];
    __GXData->vLim = vlm;
}

void fn_800D58D4(void) {
    extern GXDataHead *const __GXData;
    M2C_FIELD(__GXData, u32 *, 0x14) = 0;
    M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), 1, 9, 21, 22);
    M2C_FIELD(__GXData, u32 *, 0x18) = 0;
    M2C_FIELD(__GXData, u8 *, 0x4D4) = 0;
    M2C_FIELD(__GXData, u8 *, 0x4D5) = 0;
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 8;
}

void fn_800D5DE8(void) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u8 i;
    for (i = 0; i < 8; i++) {
        if (M2C_FIELD(gx, u8 *, 0x5AB) & (1 << i)) {
            (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x08;
            (*(volatile PPCWGPipe *)0xCC008000).u8 = i | 0x70;
            (*(volatile PPCWGPipe *)0xCC008000).u32 = *(u32 *)((u8 *)gx + i * 4 + 0x1C);
            (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x08;
            (*(volatile PPCWGPipe *)0xCC008000).u8 = i | 0x80;
            (*(volatile PPCWGPipe *)0xCC008000).u32 = *(u32 *)((u8 *)gx + i * 4 + 0x3C);
            (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x08;
            (*(volatile PPCWGPipe *)0xCC008000).u8 = i | 0x90;
            (*(volatile PPCWGPipe *)0xCC008000).u32 = *(u32 *)((u8 *)gx + i * 4 + 0x5C);
        }
    }
    M2C_FIELD(__GXData, u8 *, 0x5AB) = 0;
}

void fn_800D5E84(s32 attr, u32 base_ptr, u8 stride) {
    extern GXDataHead *__GXData;
    s32 cpAttr;
    u32 phyAddr;
    s32 idx;
    if (attr == 0x19) {
        attr = 0xA;
    }
    cpAttr = attr - 9;
    phyAddr = base_ptr & 0x3FFFFFFF;
    GXWGFifo.u8 = 0x08;
    GXWGFifo.u8 = cpAttr | 0xA0;
    GXWGFifo.u32 = phyAddr;
    idx = cpAttr - 12;
    if (idx >= 0 && idx < 4) {
        ((u32 *)((u8 *)__GXData + 0x88))[idx] = phyAddr;
    }
    GXWGFifo.u8 = 0x08;
    GXWGFifo.u8 = cpAttr | 0xB0;
    GXWGFifo.u32 = stride;
    idx = cpAttr - 12;
    if (idx >= 0 && idx < 4) {
        ((u32 *)((u8 *)__GXData + 0x98))[idx] = stride;
    }
}

void fn_800D5F10(void) {
    *(s8 *)0xCC008000 = 0x48;
}

void fn_800D61A0(u8 nTexGens) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x204) = __rlwimi(M2C_FIELD(gx, u32 *, 0x204), nTexGens, 0, 28, 31);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x103F;
    GXWGFifo.u32 = nTexGens;
    M2C_FIELD(gx, u32 *, 0x5AC) |= 4;
}

void GXSetMisc(s32 token, u32 val) {
    extern GXDataHead *const __GXData;
    switch (token) {
    case 0:
        break;
    case 1:
        __GXData->vNum = val;
        __GXData->vNumNot = !__GXData->vNum;
        __GXData->bpSentNot = 1;
        if (__GXData->vNum) {
            M2C_FIELD(__GXData, u32 *, 0x5AC) |= 8;
        }
        break;
    case 2:
        M2C_FIELD(__GXData, u8 *, 0x5A9) = (val > 0);
        break;
    case 3:
        M2C_FIELD(__GXData, u8 *, 0x5AA) = (u8)(val != 0);
        break;
    }
}

extern void fn_800D6B0C(void);
extern void fn_800B2EA8(void);
void fn_800D6270(void) {
    extern GXDataHead *__GXData;
    if (M2C_FIELD(__GXData, u32 *, 0x5AC)) {
        fn_800D6B0C();
    }
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    fn_800B2EA8();
}

void fn_800D65A8(u16 token) {
    extern GXDataHead *__GXData;
    BOOL enabled;
    u32 reg;
    enabled = OSDisableInterrupts();
    reg = token | 0x48000000;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    reg = __rlwimi(reg, token, 0, 16, 31);
    reg = __rlwimi(reg, 0x47, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    fn_800D6270();
    OSRestoreInterrupts(enabled);
    __GXData->bpSentNot = 0;
}

u16 fn_800D665C(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_800D6668(void) {
    extern u8 lbl_8035A948;
    BOOL enabled;
    enabled = OSDisableInterrupts();
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = 0x45000002;
    fn_800D6270();
    lbl_8035A948 = 0;
    OSRestoreInterrupts(enabled);
}

void fn_800D6700(void) {
    extern u8 lbl_8035A948;
    extern u8 lbl_8035A94C[];
    extern void fn_800BA2C8(void *);
    BOOL enabled;
    enabled = OSDisableInterrupts();
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = 0x45000002;
    fn_800D6270();
    lbl_8035A948 = 0;
    OSRestoreInterrupts(enabled);
    enabled = OSDisableInterrupts();
    while (!lbl_8035A948) {
        fn_800BA2C8(lbl_8035A94C);
    }
    OSRestoreInterrupts(enabled);
}

extern u16 *__peReg;
void fn_800D6780(u32 a, u32 b) {
    u16 v = 0;
    v = (v & ~0xFF) | (b & 0xFF);
    v = (v & 0xFF) | (a << 8);
    __peReg[3] = v;
}

void fn_800D6794(u32 a) {
    u16 v = 0;
    v = __rlwimi(v, a, 0, 30, 31);
    v = __rlwimi(v, 1, 2, 29, 29);
    __peReg[4] = v;
}

void fn_800D67B4(u32 a) {
    u16 v = __peReg[1];
    v = __rlwimi(v, (u8)a, 4, 27, 27);
    __peReg[1] = v;
}

void fn_800D67CC(s32 a, u32 b, u32 c, u32 d) {
    u32 v = __peReg[1];
    v = __rlwimi(v, (a == 1 || a == 3), 0, 31, 31);
    v = __rlwimi(v, (a == 3), 11, 20, 20);
    v = __rlwimi(v, (a == 2), 1, 30, 30);
    v = __rlwimi(v, d, 12, 16, 19);
    v = __rlwimi(v, b, 8, 21, 23);
    v = __rlwimi(v, c, 5, 24, 26);
    v = __rlwimi(v, 0x41, 24, 0, 7);
    __peReg[1] = v;
}

void fn_800D6830(u32 a) {
    u8 b = a;
    u32 v = __peReg[1];
    v = __rlwimi(v, b, 3, 28, 28);
    __peReg[1] = v;
}

void fn_800D6848(u8 arg0, u8 arg1) {
    M2C_FIELD(__peReg, s16 *, 4) = (s16) ((((0 & ~0xFF) | (arg1 & 0xFF)) & ~0x100) | ((arg0 << 8) & 0x100));
}

void fn_800D686C(u8 a) {
    u32 v = __peReg[1];
    v = __rlwimi(v, a & 0xFF, 2, 29, 29);
    __peReg[1] = v;
}

void fn_800D6884(u8 arg0, s32 arg1, s32 arg2) {
    *__peReg = (((((0 & ~1) | (arg0 & 1)) & ~0xE) | ((arg1 << 1) & 0xE)) & ~0x10) | ((arg2 << 4) & 0x10);
}

void fn_800D68A4(u32 x, u32 y, u32 *color) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, (u16)x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 0, 22, 8, 9);
    *color = *(u32 *)addr;
}

void fn_800D68C8(u32 x, u32 y, u32 color) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, (u16)x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 0, 22, 8, 9);
    *(u32 *)addr = color;
}

void fn_800D68E8(u32 x, u32 y, u32 z) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, (u16)x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 1, 22, 8, 9);
    *(u32 *)addr = z;
}

extern void (*lbl_8035A940)(u16);
void fn_800D694C(s16 interrupt, u8 *context) {
    u8 exceptionContext[0x2C8];
    u16 token = __peReg[7];

    if (lbl_8035A940) {
        OSClearContext(exceptionContext);
        OSSetCurrentContext(exceptionContext);
        lbl_8035A940(token);
        OSClearContext(exceptionContext);
        OSSetCurrentContext(context);
    }
    __peReg[5] = __rlwimi(__peReg[5], 1, 2, 29, 29);
}

void __GXPEInit(void) {
    extern void fn_800D6A18(s16 interrupt, u8 *context);
    extern u8 lbl_8035A94C[];
    u16 v;
    __OSSetInterruptHandler(0x12, fn_800D694C);
    __OSSetInterruptHandler(0x13, fn_800D6A18);
    OSInitThreadQueue(lbl_8035A94C);
    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);
    v = __peReg[5];
    v = __rlwimi(v, 1, 2, 29, 29);
    v = __rlwimi(v, 1, 3, 28, 28);
    v = __rlwimi(v, 1, 0, 31, 31);
    v = __rlwimi(v, 1, 1, 30, 30);
    __peReg[5] = v;
}

void fn_800D6B0C(void) {
    extern GXDataHead *__GXData;
    extern void fn_800D8814(void);
    extern void fn_800D8F00(void);
    extern void fn_800D6E24(void);
    extern void fn_800D56F4(void);
    extern void fn_800D5DE8(void);
    extern void fn_800D57B0(void);
    u32 dirty = M2C_FIELD(__GXData, u32 *, 0x5AC);
    if (dirty & 1) {
        fn_800D8814();
    }
    if (dirty & 2) {
        fn_800D8F00();
    }
    if (dirty & 4) {
        fn_800D6E24();
    }
    if (dirty & 8) {
        fn_800D56F4();
    }
    if (dirty & 0x10) {
        fn_800D5DE8();
    }
    if (dirty & 0x18) {
        fn_800D57B0();
    }
    M2C_FIELD(__GXData, u32 *, 0x5AC) = 0;
}

void fn_800D6C5C(void) {
    extern GXDataHead *__GXData;
    u32 i;
    u32 vNum = __GXData->vNum;
    u32 numD = vNum * __GXData->vLim;
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x98;
    (*(volatile PPCWGPipe *)0xCC008000).u16 = vNum;
    for (i = 0; i < numD; i += 4) {
        (*(volatile PPCWGPipe *)0xCC008000).u32 = 0;
    }
    __GXData->bpSentNot = 1;
}

void fn_800D6CE4(u8 width, s32 texOffsets) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    SETF(M2C_FIELD(gx, u32 *, 0x7C), 8, 0, width);
    SETF(M2C_FIELD(gx, u32 *, 0x7C), 3, 16, texOffsets);
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x61;
    (*(volatile PPCWGPipe *)0xCC008000).u32 = M2C_FIELD(gx, u32 *, 0x7C);
    gx->bpSentNot = 0;
}

void fn_800D6D24(u8 pointSize, s32 texOffsets) {
    extern GXDataHead *const __GXData;
    M2C_FIELD(__GXData, u32 *, 0x7C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x7C), pointSize, 8, 16, 23);
    M2C_FIELD(__GXData, u32 *, 0x7C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x7C), texOffsets, 19, 10, 12);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x7C);
    __GXData->bpSentNot = 0;
}

void fn_800D6D64(s32 coord, u8 line_enable, u8 point_enable) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 *reg = (u32 *)((u8 *)gx + coord * 4);
    reg[0x2E] = __rlwimi(reg[0x2E], line_enable, 18, 13, 13);
    reg[0x2E] = __rlwimi(reg[0x2E], point_enable, 19, 12, 12);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg[0x2E];
    gx->bpSentNot = 0;
}

void fn_800D6DAC(s32 arg0) {
    extern GXDataHead *const __GXData;
    switch (arg0) {
    case 1:
        arg0 = 2;
        break;
    case 2:
        arg0 = 1;
        break;
    }
    SETF(M2C_FIELD(__GXData, u32 *, 0x204), 2, 14, arg0);
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 4;
}

void fn_800D6DF0(u8 arg0) {
    extern GXDataHead *const __GXData;
    SETF(M2C_FIELD(__GXData, u32 *, 0x204), 1, 19, arg0);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0xFE080000;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = M2C_FIELD(__GXData, u32 *, 0x204);
}

void fn_800D6E24(void) {
    extern GXDataHead *const __GXData;
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x61;
    (*(volatile PPCWGPipe *)0xCC008000).u32 = M2C_FIELD(__GXData, u32 *, 0x204);
    __GXData->bpSentNot = 0;
}

void fn_800D6E48(u16 left, u16 top, u16 wd, u16 ht) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x1E0) = 0;
    M2C_FIELD(gx, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E0), left, 0, 22, 31);
    M2C_FIELD(gx, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E0), top, 10, 12, 21);
    M2C_FIELD(gx, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E0), 0x49, 24, 0, 7);
    M2C_FIELD(gx, u32 *, 0x1E4) = 0;
    M2C_FIELD(gx, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E4), wd - 1, 0, 22, 31);
    M2C_FIELD(gx, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E4), ht - 1, 10, 12, 21);
    M2C_FIELD(gx, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E4), 0x4A, 24, 0, 7);
}

void fn_800D6EC4(u16 left, u16 top, u16 wd, u16 ht) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x1F0) = 0;
    M2C_FIELD(gx, u32 *, 0x1F0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F0), left, 0, 22, 31);
    M2C_FIELD(gx, u32 *, 0x1F0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F0), top, 10, 12, 21);
    M2C_FIELD(gx, u32 *, 0x1F0) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F0), 0x49, 24, 0, 7);
    M2C_FIELD(gx, u32 *, 0x1F4) = 0;
    M2C_FIELD(gx, u32 *, 0x1F4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F4), wd - 1, 0, 22, 31);
    M2C_FIELD(gx, u32 *, 0x1F4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F4), ht - 1, 10, 12, 21);
    M2C_FIELD(gx, u32 *, 0x1F4) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1F4), 0x4A, 24, 0, 7);
}

void fn_800D6F40(u16 wd, u16 ht) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u16 stride;
    stride = (u16)(wd * 2);
    M2C_FIELD(gx, u32 *, 0x1E8) = 0;
    SETF(M2C_FIELD(gx, u32 *, 0x1E8), 10, 0, stride >> 5);
    M2C_FIELD(gx, u32 *, 0x1E8) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1E8), 0x4D, 24, 0, 7);
}

void fn_800D70A4(u32 frame2field) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1EC), frame2field, 12, 18, 19);
    M2C_FIELD(gx, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1FC), 0, 12, 18, 19);
}

void fn_800D70C8(u32 clamp) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u8 clmpT = (clamp & 1) == 1;
    u8 clmpB = (clamp & 2) == 2;
    M2C_FIELD(gx, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1EC), clmpT, 0, 31, 31);
    M2C_FIELD(gx, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1EC), clmpB, 1, 30, 30);
    M2C_FIELD(gx, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1FC), clmpT, 0, 31, 31);
    M2C_FIELD(gx, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1FC), clmpB, 1, 30, 30);
}

void fn_800D71EC(GXColor clear_clr, u32 clear_z) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg;
    u32 reg2;
    u32 reg3;
    reg = 0;
    reg = __rlwimi(reg, clear_clr.r, 0, 24, 31);
    reg = __rlwimi(reg, clear_clr.a, 8, 16, 23);
    reg = __rlwimi(reg, 0x4F, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    reg2 = 0;
    reg2 = __rlwimi(reg2, clear_clr.b, 0, 24, 31);
    reg2 = __rlwimi(reg2, clear_clr.g, 8, 16, 23);
    reg2 = __rlwimi(reg2, 0x50, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg2;
    reg3 = 0;
    reg3 = __rlwimi(reg3, clear_z, 0, 8, 31);
    reg3 = __rlwimi(reg3, 0x51, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg3;
    gx->bpSentNot = 0;
}

void fn_800D746C(s32 arg0) {
    extern void *__GXData;
    M2C_FIELD(__GXData, s32 *, 0x1EC) = (s32) ((M2C_FIELD(__GXData, s32 *, 0x1EC) & ~0x180) | ((arg0 << 7) & 0x180));
}

void fn_800D75E8(void *dest, u8 clear) {
    extern GXDataHead *const __GXData;
    u32 reg;
    u32 tempPeCtrl;
    u8 changePeCtrl;

    if (clear) {
        reg = M2C_FIELD(__GXData, u32 *, 0x1D8);
        reg = __rlwimi(reg, 1, 0, 31, 31);
        reg = __rlwimi(reg, 7, 1, 28, 30);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;
        reg = M2C_FIELD(__GXData, u32 *, 0x1D0);
        reg = __rlwimi(reg, 0, 0, 31, 31);
        reg = __rlwimi(reg, 0, 1, 30, 30);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;
    }
    changePeCtrl = 0;
    tempPeCtrl = M2C_FIELD(__GXData, u32 *, 0x1DC);
    if (M2C_FIELD(__GXData, u8 *, 0x200) && (tempPeCtrl & 7) != 3) {
        SETF(tempPeCtrl, 3, 0, 3);
        changePeCtrl = 1;
    }
    if ((clear || (tempPeCtrl & 7) == 3) && ((tempPeCtrl >> 6) & 1) == 1) {
        SETF(tempPeCtrl, 1, 6, 0);
        changePeCtrl = 1;
    }
    if (changePeCtrl) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = tempPeCtrl;
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F0);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F4);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F8);
    reg = 0;
    reg = __rlwimi(reg, (u32)dest, 27, 11, 31);
    reg = __rlwimi(reg, 0x4B, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), clear, 11, 20, 20);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), 0, 14, 17, 17);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), 0x52, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1FC);
    if (clear) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D8);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D0);
    }
    if (changePeCtrl) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1DC);
    }
    __GXData->bpSentNot = 0;
}

void fn_800D7774(void) {
    extern GXDataHead *__GXData;
    u32 reg;
    reg = 0x550003FF;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    reg = 0x560003FF;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D77AC(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_800D77C8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    M2C_FIELD(arg0, f32 *, 0x24) = farg2;
}

void fn_800D77D8(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x20);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x24);
}

f32 fn_800F0588(f32 x);
void fn_800D77F4(void *lt_obj, f32 cutoff, u32 spot_func) {
    f32 a0, a1, a2, r, d, cr;

    if (cutoff <= 0.0f || cutoff > 90.0f) {
        spot_func = 0;
    }
    r = (3.1415927f * cutoff) / 180.0f;
    cr = fn_800F0588(r);
    switch (spot_func) {
    case 1:
        a0 = -1000.0f * cr;
        a1 = 1000.0f;
        a2 = 0.0f;
        break;
    case 2:
        d = 1.0f / (1.0f - cr);
        a0 = -cr * d;
        a1 = d;
        a2 = 0.0f;
        break;
    case 3:
        d = 1.0f / (1.0f - cr);
        a0 = 0.0f;
        a1 = -cr * d;
        a2 = d;
        break;
    case 4:
        d = 1.0f / ((1.0f - cr) * (1.0f - cr));
        a0 = (cr * (cr - 2.0f)) * d;
        a1 = 2.0f * d;
        a2 = -d;
        break;
    case 5:
        d = 1.0f / ((1.0f - cr) * (1.0f - cr));
        a2 = -4.0f * d;
        a0 = a2 * cr;
        a1 = 4.0f * (1.0f + cr) * d;
        break;
    case 6:
        d = 1.0f / ((1.0f - cr) * (1.0f - cr));
        a0 = 1.0f - 2.0f * cr * cr * d;
        a1 = 4.0f * cr * d;
        a2 = -2.0f * d;
        break;
    case 0:
    default:
        a0 = 1.0f;
        a1 = 0.0f;
        a2 = 0.0f;
        break;
    }
    M2C_FIELD(lt_obj, f32 *, 0x10) = a0;
    M2C_FIELD(lt_obj, f32 *, 0x14) = a1;
    M2C_FIELD(lt_obj, f32 *, 0x18) = a2;
}

void fn_800D7984(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_800D7994(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x28);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x2C);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x30);
}

void fn_800D79B0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -farg2;
}

void fn_800D79CC(void *lt_obj, f32 *nx, f32 *ny, f32 *nz) {
    *nx = -*(f32 *)((u8 *)lt_obj + 0x34);
    *ny = -*(f32 *)((u8 *)lt_obj + 0x38);
    *nz = -*(f32 *)((u8 *)lt_obj + 0x3C);
}

void fn_800D79F4(void *lt_obj, u32 *color) {
    *(u32 *)((u8 *)lt_obj + 0xC) = *color;
}

void fn_800D7A00(void *lt_obj, u32 *color) {
    *color = *(u32 *)((u8 *)lt_obj + 0xC);
}

void fn_800D7A88(s32 chan, GXColor amb_color) {
    extern GXDataHead *const __GXData;
    u32 reg;
    u32 colIdx;

    switch (chan) {
    case 0:
        reg = *(u32 *)&amb_color & ~0xFF;
        reg = __rlwimi(reg, M2C_FIELD(__GXData, u32 *, 0xA8), 0, 24, 31);
        colIdx = 0;
        break;
    case 1:
        reg = *(u32 *)&amb_color & ~0xFF;
        reg = __rlwimi(reg, M2C_FIELD(__GXData, u32 *, 0xAC), 0, 24, 31);
        colIdx = 1;
        break;
    case 2:
        reg = M2C_FIELD(__GXData, u32 *, 0xA8);
        reg = __rlwimi(reg, amb_color.a, 0, 24, 31);
        colIdx = 0;
        break;
    case 3:
        reg = M2C_FIELD(__GXData, u32 *, 0xAC);
        reg = __rlwimi(reg, amb_color.a, 0, 24, 31);
        colIdx = 1;
        break;
    case 4:
        reg = *(u32 *)&amb_color;
        colIdx = 0;
        break;
    case 5:
        reg = *(u32 *)&amb_color;
        colIdx = 1;
        break;
    default:
        return;
    }
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = colIdx + 0x100A;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 1;
    ((u32 *)((u8 *)__GXData + 0xA8))[colIdx] = reg;
}

void fn_800D7B78(s32 chan, u32 *color) {
    extern GXDataHead *__GXData;
    u32 reg;
    u32 idx;

    switch (chan) {
    case 0:
        idx = 0;
        reg = (*color & ~0xFF) | (M2C_FIELD(__GXData, u32 *, 0xB0) & 0xFF);
        break;
    case 1:
        idx = 1;
        reg = (*color & ~0xFF) | (M2C_FIELD(__GXData, u32 *, 0xB4) & 0xFF);
        break;
    case 2:
        idx = 0;
        reg = (M2C_FIELD(__GXData, u32 *, 0xB0) & ~0xFF) | ((u8 *)color)[3];
        break;
    case 3:
        idx = 1;
        reg = (M2C_FIELD(__GXData, u32 *, 0xB4) & ~0xFF) | ((u8 *)color)[3];
        break;
    case 4:
        reg = *color;
        idx = 0;
        break;
    case 5:
        reg = *color;
        idx = 1;
        break;
    default:
        return;
    }
    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = idx + 0x100C;
    *(volatile u32 *)0xCC008000 = reg;
    __GXData->bpSentNot = 1;
    ((u32 *)((u8 *)__GXData + 0xB0))[idx] = reg;
}

void fn_800D7C68(u8 nChans) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x204) = __rlwimi(M2C_FIELD(gx, u32 *, 0x204), nChans, 4, 25, 27);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1009;
    GXWGFifo.u32 = nChans;
    M2C_FIELD(gx, u32 *, 0x5AC) |= 4;
}

void fn_800D7CA4(s32 chan, u8 enable, s32 amb_src, s32 mat_src, u32 light_mask, s32 diff_fn, s32 attn_fn) {
    extern GXDataHead *__GXData;
    u32 reg;
    u32 idx;
    idx = chan & 3;
    reg = 0;
    reg = __rlwimi(reg, enable, 1, 30, 30);
    reg = __rlwimi(reg, mat_src, 0, 31, 31);
    reg = __rlwimi(reg, amb_src, 6, 25, 25);
    if (attn_fn == 0) {
        diff_fn = 0;
    }
    reg = __rlwimi(reg, diff_fn, 7, 23, 24);
    reg = __rlwimi(reg, (attn_fn != 2), 9, 22, 22);
    reg = __rlwimi(reg, (attn_fn != 0), 10, 21, 21);
    reg &= ~0x3C;
    reg = __rlwimi(reg, light_mask, 2, 26, 29);
    reg &= ~0x7800;
    reg = __rlwimi(reg, light_mask, 7, 17, 20);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = idx + 0x100E;
    GXWGFifo.u32 = reg;
    if (chan == 4) {
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1010;
        GXWGFifo.u32 = reg;
    } else if (chan == 5) {
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1011;
        GXWGFifo.u32 = reg;
    }
    __GXData->bpSentNot = 1;
}

void fn_800D7D5C(int fmt, u16 wd, u16 ht, u32* rowTiles, u32* colTiles, u32* cmpTiles) {
    u32 texRowShift;
    u32 texColShift;

    switch (fmt) {
    case 0x0:
    case 0x8:
    case 0xE:
    case 0x20:
    case 0x30:
        texRowShift = 3;
        texColShift = 3;
        break;
    case 0x1:
    case 0x2:
    case 0x9:
    case 0x11:
    case 0x22:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x39:
    case 0x3A:
        texRowShift = 3;
        texColShift = 2;
        break;
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0xA:
    case 0x13:
    case 0x16:
    case 0x23:
    case 0x2B:
    case 0x2C:
    case 0x3C:
        texRowShift = 2;
        texColShift = 2;
        break;
    default:
        texRowShift = texColShift = 0;
        break;
    }

    if (wd == 0) {
        wd = 1;
    }
    if (ht == 0) {
        ht = 1;
    }

    *rowTiles = (wd + (1 << texRowShift) - 1) >> texRowShift;
    *colTiles = (ht + (1 << texColShift) - 1) >> texColShift;
    *cmpTiles = (fmt == 0x6 || fmt == 0x16) ? 2 : 1;
}

void fn_800D80B8(u32 *obj, s32 min_filt, s32 mag_filt, f32 min_lod, f32 max_lod, f32 lod_bias, u8 bias_clamp, u8 do_edge_lod, s32 max_aniso) {
    extern u8 lbl_80359668[];
    extern f32 lbl_80363128;
    extern f32 lbl_80363138;
    extern f32 lbl_8036313C;
    extern f32 lbl_80363140;
    extern f32 lbl_80363144;
    extern f32 lbl_80363148;
    extern f32 lbl_8036314C;
    u8 lbias;
    u8 lmin;
    u8 lmax;

    if (lod_bias < lbl_80363138) {
        lod_bias = lbl_80363138;
    } else if (lod_bias >= lbl_8036313C) {
        lod_bias = lbl_80363140;
    }
    lbias = (u8)(lbl_80363144 * lod_bias);
    obj[0] = (obj[0] & ~0x1FE00) | ((u32)lbias << 9);
    obj[0] = (obj[0] & ~0x10) | ((mag_filt == 1 ? 1 : 0) << 4);
    obj[0] = (obj[0] & ~0xE0) | ((u32)lbl_80359668[min_filt] << 5);
    obj[0] = (obj[0] & ~0x100) | ((do_edge_lod ? 0 : 1) << 8);
    obj[0] = (obj[0] & ~0x20000);
    obj[0] = (obj[0] & ~0x40000);
    obj[0] = (obj[0] & ~0x180000) | ((max_aniso << 19) & 0x180000);
    obj[0] = (obj[0] & ~0x200000) | ((bias_clamp << 21) & 0x200000);
    if (min_lod < lbl_80363148) {
        min_lod = lbl_80363148;
    } else if (min_lod > lbl_8036314C) {
        min_lod = lbl_8036314C;
    }
    lmin = (u8)(lbl_80363128 * min_lod);
    if (max_lod < lbl_80363148) {
        max_lod = lbl_80363148;
    } else if (max_lod > lbl_8036314C) {
        max_lod = lbl_8036314C;
    }
    lmax = (u8)(lbl_80363128 * max_lod);
    obj[1] = (obj[1] & ~0xFF) | lmin;
    obj[1] = (obj[1] & ~0xFF00) | ((u32)lmax << 8);
}

extern u8 lbl_80359668[8];
void fn_800D821C(u32 *arg0, u32 arg1, u32 arg2) {
    *arg0 = (arg1 & 3) | (*arg0 & ~3);
    SETF(*arg0, 2, 2, arg2);
}

void fn_800D8238(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

void fn_800D8240(u32 *arg0, s32 arg1, s32 arg2) {
    SETF(*arg0, 1, 4, (arg2 == 1) ? 1 : 0);
    SETF(*arg0, 3, 5, lbl_80359668[arg1]);
}

void fn_800D8278(void *arg0, f32 farg0) {
    extern f32 lbl_80363128;
    extern f32 lbl_80363148;
    extern f32 lbl_8036314C;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80363148) {
        var_f1 = lbl_80363148;
    } else if (var_f1 > lbl_8036314C) {
        var_f1 = lbl_8036314C;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0xFF00) | (((s32) (lbl_80363128 * var_f1) << 8) & 0xFF00));
}

void fn_800D82C8(u32 *arg0, f32 arg1) {
    extern f32 lbl_80363128;
    extern f32 lbl_80363148;
    extern f32 lbl_8036314C;
    f32 var_f1;

    var_f1 = arg1;
    if (var_f1 < lbl_80363148) {
        var_f1 = lbl_80363148;
    } else if (var_f1 > lbl_8036314C) {
        var_f1 = lbl_8036314C;
    }
    SETF(arg0[1], 8, 0, (s32)(lbl_80363128 * var_f1));
}

s32 fn_800D8318(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}

u8 fn_800D8320(void *arg0) {
    return (u8) (((M2C_FIELD(arg0, u8 *, 0x1F) & 1) - 1) == 0);
}

void fn_800D8508(void *tlut_obj, u32 lut, s32 fmt, u16 n_entries) {
    M2C_FIELD(tlut_obj, u32 *, 0) = 0;
    M2C_FIELD(tlut_obj, u32 *, 0) = __rlwimi(M2C_FIELD(tlut_obj, u32 *, 0), fmt, 10, 20, 21);
    M2C_FIELD(tlut_obj, u32 *, 4) = __rlwimi(M2C_FIELD(tlut_obj, u32 *, 4), lut, 27, 11, 31);
    M2C_FIELD(tlut_obj, u32 *, 4) = __rlwimi(M2C_FIELD(tlut_obj, u32 *, 4), 0x64, 24, 0, 7);
    M2C_FIELD(tlut_obj, u16 *, 8) = n_entries;
}

void GXInitTexCacheRegion(void *arg0, s8 arg1, u32 arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg6) {
    s32 var_r9;

    var_r9 = arg6;
    switch (arg3) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r9 = 3;
        break;
    case 1:                                         /* switch 1 */
        var_r9 = 4;
        break;
    case 2:                                         /* switch 1 */
        var_r9 = 5;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x7FFF) | ((arg2 >> 5U) & 0x7FFF));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x38000) | ((var_r9 << 0xF) & 0x38000));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x1C0000) | ((var_r9 << 0x12) & 0x1C0000));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x200000);
    switch (arg5) {                                 /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_r9 = 3;
        break;
    case 1:                                         /* switch 2 */
        var_r9 = 4;
        break;
    case 2:                                         /* switch 2 */
        var_r9 = 5;
        break;
    case 3:                                         /* switch 2 */
        var_r9 = 0;
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x7FFF) | ((arg4 >> 5U) & 0x7FFF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x38000) | ((var_r9 << 0xF) & 0x38000));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x1C0000) | ((var_r9 << 0x12) & 0x1C0000));
    M2C_FIELD(arg0, s8 *, 0xC) = arg1;
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
}

void GXInitTlutRegion(u32 *region, u32 tmem_addr, u32 tlut_size) {
    *region = 0;
    *region = __rlwimi(*region, tmem_addr - 0x80000, 23, 22, 31);
    *region = __rlwimi(*region, tlut_size, 10, 11, 21);
    *region = __rlwimi(*region, 0x65, 24, 0, 7);
}

s32 fn_800D874C(s32 arg0) {
    extern GXDataHead *const __GXData;
    GXDataHead *gx = __GXData;
    s32 old = M2C_FIELD(gx, s32 *, 0x4C8);
    M2C_FIELD(gx, s32 *, 0x4C8) = arg0;
    return old;
}

s32 fn_800D8760(s32 arg0) {
    extern GXDataHead *const __GXData;
    s32 *p = &M2C_FIELD(__GXData, s32 *, 0x4CC);
    s32 old;
    old = *p;
    *p = arg0;
    return old;
}

void fn_800D8774(u32 tmap, u32 tcoord) {
    extern GXDataHead *const __GXData;
    GXDataHead *gx = __GXData;
    u32 *tImage0 = (u32 *)((u8 *)gx + 0x514);
    u32 *tMode0 = (u32 *)((u8 *)gx + 0x534);
    u32 *suTs0 = (u32 *)((u8 *)gx + 0xB8);
    u32 *suTs1 = (u32 *)((u8 *)gx + 0xD8);
    u16 w, h;
    u8 s_bias, t_bias;

    w = tImage0[tmap] & 0x3FF;
    h = (tImage0[tmap] >> 10) & 0x3FF;
    SETF(suTs0[tcoord], 16, 0, w);
    SETF(suTs1[tcoord], 16, 0, h);
    s_bias = (tMode0[tmap] & 3) == 1;
    t_bias = ((tMode0[tmap] >> 2) & 3) == 1;
    SETF(suTs0[tcoord], 1, 16, s_bias);
    SETF(suTs1[tcoord], 1, 16, t_bias);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = suTs0[tcoord];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = suTs1[tcoord];
    gx->bpSentNot = 0;
}

void fn_800D8CE4(u32 tevStage, u32 indStage, u32 format, u32 biasSel, u32 mtxSel, u32 wrapS, u32 wrapT, u32 addPrev, u8 utcLod, u32 alphaSel) {
    extern GXDataHead *const __GXData;
    u32 reg = 0;
    reg = __rlwimi(reg, indStage, 0, 30, 31);
    reg = __rlwimi(reg, format, 2, 28, 29);
    reg = __rlwimi(reg, biasSel, 4, 25, 27);
    reg = __rlwimi(reg, alphaSel, 7, 23, 24);
    reg = __rlwimi(reg, mtxSel, 9, 19, 22);
    reg = __rlwimi(reg, wrapS, 13, 16, 18);
    reg = __rlwimi(reg, wrapT, 16, 13, 15);
    reg = __rlwimi(reg, utcLod, 19, 12, 12);
    reg = __rlwimi(reg, addPrev, 20, 11, 11);
    reg = __rlwimi(reg, tevStage + 0x10, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D8D50(s32 indStage, s32 scaleS, s32 scaleT) {
    extern GXDataHead *const __GXData;
    u32 *reg;
    switch (indStage) {
    case 0:
        reg = &M2C_FIELD(__GXData, u32 *, 0x128);
        *reg = __rlwimi(*reg, scaleS, 0, 28, 31);
        *reg = __rlwimi(*reg, scaleT, 4, 24, 27);
        *reg = __rlwimi(*reg, 0x25, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = *reg;
        break;
    case 1:
        reg = &M2C_FIELD(__GXData, u32 *, 0x128);
        *reg = __rlwimi(*reg, scaleS, 8, 20, 23);
        *reg = __rlwimi(*reg, scaleT, 12, 16, 19);
        *reg = __rlwimi(*reg, 0x25, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = *reg;
        break;
    case 2:
        reg = &M2C_FIELD(__GXData, u32 *, 0x12C);
        *reg = __rlwimi(*reg, scaleS, 0, 28, 31);
        *reg = __rlwimi(*reg, scaleT, 4, 24, 27);
        *reg = __rlwimi(*reg, 0x26, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = *reg;
        break;
    case 3:
        reg = &M2C_FIELD(__GXData, u32 *, 0x12C);
        *reg = __rlwimi(*reg, scaleS, 8, 20, 23);
        *reg = __rlwimi(*reg, scaleT, 12, 16, 19);
        *reg = __rlwimi(*reg, 0x26, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = *reg;
        break;
    }
    __GXData->bpSentNot = 0;
}

void fn_800D8E94(u8 nIndStages) {
    extern GXDataHead *const __GXData;
    SETF(M2C_FIELD(__GXData, u32 *, 0x204), 3, 16, nIndStages);
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 6;
}

void fn_800D8EB8(void) {
    M2C_UNK fn_800D8CE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 spC;
    s32 sp8;

    sp8 = 0;
    spC = 0;
    fn_800D8CE4(0, 0, 0, 0, 0, 0, 0);
}

void fn_800D8F00(void) {

}

void __GXFlushTextureState(void) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x124);
    gx->bpSentNot = 0;
}

void fn_800D8F28(s32 arg0, s32 arg1) {
    extern GXDataHead *__GXData;
    extern u32 lbl_802DFF50[4][5];
    GXDataHead *gx;
    u32 *a;
    u32 *b;
    u32 reg;

    if (arg0 == 0) {
        a = &lbl_802DFF50[0][arg1];
        b = &lbl_802DFF50[2][arg1];
    } else {
        a = &lbl_802DFF50[1][arg1];
        b = &lbl_802DFF50[3][arg1];
    }
    gx = __GXData;
    reg = M2C_FIELD(gx, u32 *, 0x130 + arg0 * 4);
    SETF(reg, 24, 0, *a);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(gx, u32 *, 0x130 + arg0 * 4) = reg;
    reg = M2C_FIELD(gx, u32 *, 0x170 + arg0 * 4);
    SETF(reg, 20, 4, *b >> 4);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(gx, u32 *, 0x170 + arg0 * 4) = reg;
    gx->bpSentNot = 0;
}

void fn_800D8FB4(s32 stage, s32 a, s32 b, s32 c, s32 d) {
    extern GXDataHead *const __GXData;
    u32 *pTevReg = &M2C_FIELD(__GXData, u32 *, 0x130 + stage * 4);
    u32 reg = *pTevReg;
    reg = __rlwimi(reg, a, 12, 16, 19);
    reg = __rlwimi(reg, b, 8, 20, 23);
    reg = __rlwimi(reg, c, 4, 24, 27);
    reg = __rlwimi(reg, d, 0, 28, 31);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    *pTevReg = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D8FF8(s32 stage, s32 a, s32 b, s32 c, s32 d) {
    extern GXDataHead *const __GXData;
    u32 *pTevReg = &M2C_FIELD(__GXData, u32 *, 0x170 + stage * 4);
    u32 reg = *pTevReg;
    reg = __rlwimi(reg, a, 13, 16, 18);
    reg = __rlwimi(reg, b, 10, 19, 21);
    reg = __rlwimi(reg, c, 7, 22, 24);
    reg = __rlwimi(reg, d, 4, 25, 27);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    *pTevReg = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D903C(s32 stage, s32 op, s32 bias, s32 scale, u8 clamp, s32 out_reg) {
    extern GXDataHead *__GXData;
    u32 reg = M2C_FIELD(__GXData, u32 *, 0x130 + stage * 4);
    reg = __rlwimi(reg, op, 18, 13, 13);
    if (op <= 1) {
        reg = __rlwimi(reg, scale, 20, 10, 11);
        reg = __rlwimi(reg, bias, 16, 14, 15);
    } else {
        reg = __rlwimi(reg, op, 19, 10, 11);
        reg = __rlwimi(reg, 3, 16, 14, 15);
    }
    reg = __rlwimi(reg, clamp, 19, 12, 12);
    reg = __rlwimi(reg, out_reg, 22, 8, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u32 *, 0x130 + stage * 4) = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D90A4(s32 stage, s32 op, s32 bias, s32 scale, u8 clamp, s32 out_reg) {
    extern GXDataHead *__GXData;
    u32 reg = M2C_FIELD(__GXData, u32 *, 0x170 + stage * 4);
    reg = __rlwimi(reg, op, 18, 13, 13);
    if (op <= 1) {
        reg = __rlwimi(reg, scale, 20, 10, 11);
        reg = __rlwimi(reg, bias, 16, 14, 15);
    } else {
        reg = __rlwimi(reg, op, 19, 10, 11);
        reg = __rlwimi(reg, 3, 16, 14, 15);
    }
    reg = __rlwimi(reg, clamp, 19, 12, 12);
    reg = __rlwimi(reg, out_reg, 22, 8, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u32 *, 0x170 + stage * 4) = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D910C(s32 id, u8 *color) {
 extern GXDataHead *const __GXData;
 u32 lo=0, hi=0;
 SETF(lo,11,0,color[0]); SETF(lo,11,12,color[3]);
 SETF(hi,11,0,color[2]); SETF(hi,11,12,color[1]);
 SETF(lo,8,24,id*2+0xE0); SETF(hi,8,24,id*2+0xE1);
 GXWGFifo.u8=0x61; GXWGFifo.u32=lo;
 GXWGFifo.u8=0x61; GXWGFifo.u32=hi;
 GXWGFifo.u8=0x61; GXWGFifo.u32=hi;
 GXWGFifo.u8=0x61; GXWGFifo.u32=hi;
 __GXData->bpSentNot=0;
}

void fn_800D9188(s32 arg0, u8 *arg1) {
    extern GXDataHead *const __GXData;
    u32 a = 0;
    u32 b = 0;
    SETF(a, 8, 0, arg1[0]);
    SETF(a, 8, 12, arg1[3]);
    SETF(b, 8, 0, arg1[2]);
    SETF(b, 8, 12, arg1[1]);
    SETF(a, 4, 20, 8);
    SETF(b, 4, 20, 8);
    SETF(a, 8, 24, arg0 * 2 + 0xE0);
    SETF(b, 8, 24, arg0 * 2 + 0xE1);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = a;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = b;
    __GXData->bpSentNot = 0;
}
#pragma optimize_for_size reset
void fn_800D91FC(s32 arg0, s32 arg1) {
    extern GXDataHead *__GXData;
    u32 *reg = (u32 *)((u32)__GXData + ((arg0 >> 1) * 4 + 0x1B0));
    if (arg0 & 1) {
        *reg = __rlwimi(*reg, arg1, 14, 13, 17);
    } else {
        *reg = __rlwimi(*reg, arg1, 4, 23, 27);
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *reg;
    __GXData->bpSentNot = 0;
}

void fn_800D9258(s32 arg0, s32 arg1) {
    extern GXDataHead *__GXData;
    u32 *reg = (u32 *)((u32)__GXData + ((arg0 >> 1) * 4 + 0x1B0));
    if (arg0 & 1) {
        *reg = __rlwimi(*reg, arg1, 19, 8, 12);
    } else {
        *reg = __rlwimi(*reg, arg1, 9, 18, 22);
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *reg;
    __GXData->bpSentNot = 0;
}

void fn_800D92B4(s32 arg0, s32 arg1, s32 arg2) {
    extern GXDataHead *const __GXData;
    u32 *reg = (u32 *)((u32)__GXData + (arg0 * 4 + 0x170));
    *reg = __rlwimi(*reg, arg1, 0, 30, 31);
    *reg = __rlwimi(*reg, arg2, 2, 28, 29);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *reg;
    __GXData->bpSentNot = 0;
}

void fn_800D92FC(s32 id, s32 red, s32 green, s32 blue, s32 alpha) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 *Kreg;
    Kreg = &((u32 *)((u8 *)gx + 0x1B0))[id * 2];
    *Kreg = __rlwimi(*Kreg, red, 0, 30, 31);
    *Kreg = __rlwimi(*Kreg, green, 2, 28, 29);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *Kreg;
    Kreg = &((u32 *)((u8 *)gx + 0x1B0))[id * 2 + 1];
    *Kreg = __rlwimi(*Kreg, blue, 0, 30, 31);
    *Kreg = __rlwimi(*Kreg, alpha, 2, 28, 29);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *Kreg;
    gx->bpSentNot = 0;
}

void fn_800D937C(s32 comp0, u8 ref0, s32 op, s32 comp1, u8 ref1) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg = 0xF3000000;
    reg = (reg & ~0xFF) | ((u32)ref0 & 0xFF);
    reg = (reg & ~0xFF00) | (((u32)ref1 << 8) & 0xFF00);
    reg = __rlwimi(reg, comp0, 16, 13, 15);
    reg = __rlwimi(reg, comp1, 19, 10, 12);
    reg = __rlwimi(reg, op, 22, 8, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    gx->bpSentNot = 0;
}

void fn_800D93C0(s32 op, s32 fmt, u32 bias) {
    extern GXDataHead *__GXData;
    GXDataHead *gx;
    u32 zenv0;
    u32 zenv1;
    u32 type;
    zenv0 = 0;
    zenv0 = __rlwimi(zenv0, bias, 0, 8, 31);
    zenv0 = __rlwimi(zenv0, 0xF4, 24, 0, 7);
    zenv1 = 0;
    switch (fmt) {
    case 0x11:
        type = 0;
        break;
    case 0x13:
        type = 1;
        break;
    case 0x16:
        type = 2;
        break;
    default:
        type = 2;
        break;
    }
    gx = __GXData;
    zenv1 = __rlwimi(zenv1, type, 0, 30, 31);
    zenv1 = __rlwimi(zenv1, op, 2, 28, 29);
    zenv1 = __rlwimi(zenv1, 0xF5, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = zenv0;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = zenv1;
    gx->bpSentNot = 0;
}

void fn_800D944C(s32 stage, s32 coord, u32 map, s32 color) {
    typedef struct {
        u8 pad0[0x100];
        u32 tref[8];
        u8 pad1[0x554 - 0x120];
        u32 texmapId[16];
        u32 tevTcEnab;
        u8 pad2[0x5AC - 0x598];
        u32 dirtyState;
    } GXTevData;
    extern GXDataHead *__GXData;
    extern s32 lbl_802DFFA0[];
    u32 *ptref;
    u32 tmap;
    u32 tcoord;

    ptref = &((GXTevData *)__GXData)->tref[stage / 2];
    ((GXTevData *)__GXData)->texmapId[stage] = map;
    tmap = map & ~0x100;
    tmap = (tmap >= 8) ? 0 : tmap;
    if (coord >= 8) {
        tcoord = 0;
        ((GXTevData *)__GXData)->tevTcEnab &= ~(1 << stage);
    } else {
        tcoord = coord;
        ((GXTevData *)__GXData)->tevTcEnab |= (1 << stage);
    }
    if (stage & 1) {
        SETF(*ptref, 3, 12, tmap);
        SETF(*ptref, 3, 15, tcoord);
        SETF(*ptref, 3, 19, (color == 0xFF) ? 7 : lbl_802DFFA0[color]);
        SETF(*ptref, 1, 18, (map != 0xFF && !(map & 0x100)));
    } else {
        SETF(*ptref, 3, 0, tmap);
        SETF(*ptref, 3, 3, tcoord);
        SETF(*ptref, 3, 7, (color == 0xFF) ? 7 : lbl_802DFFA0[color]);
        SETF(*ptref, 1, 6, (map != 0xFF && !(map & 0x100)));
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *ptref;
    __GXData->bpSentNot = 0;
    ((GXTevData *)__GXData)->dirtyState |= 1;
}

void fn_800D95E8(u8 nStages) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x204) = __rlwimi(M2C_FIELD(gx, u32 *, 0x204), nStages - 1, 10, 18, 21);
    M2C_FIELD(gx, u32 *, 0x5AC) |= 4;
}

void fn_800D9834(u8 enable, u16 center, u16 *table) {
    extern GXDataHead *__GXData;
    u32 i;
    u32 range_adj;
    u32 range_c;

    if (enable) {
        for (i = 0; i < 10; i += 2) {
            range_adj = 0;
            range_adj = (range_adj & ~0xFFF) | ((u32)table[i] & 0xFFF);
            range_adj = (range_adj & ~0xFFF000) | (((u32)table[i + 1] << 12) & 0xFFF000);
            range_adj = (range_adj & ~0xFF000000) | ((((i >> 1) + 0xE9) << 24) & 0xFF000000);
            GXWGFifo.u8 = 0x61;
            GXWGFifo.u32 = range_adj;
        }
    }
    range_c = 0;
    range_c = (range_c & ~0x3FF) | ((u32)(center + 342) & 0x3FF);
    range_c = (range_c & ~0x400) | (((u32)enable << 10) & 0x400);
    range_c = (range_c & ~0xFF000000) | ((0xE8 << 24) & 0xFF000000);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = range_c;
    __GXData->bpSentNot = 0;
}

void fn_800D9958(u32 type, u32 src_factor, u32 dst_factor, u32 op) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg = M2C_FIELD(gx, u32 *, 0x1D0);
    SETF(reg, 1, 11, (type == 3));
    SETF(reg, 1, 0, type);
    SETF(reg, 1, 1, (type == 2));
    SETF(reg, 4, 12, op);
    SETF(reg, 3, 8, src_factor);
    SETF(reg, 3, 5, dst_factor);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(gx, u32 *, 0x1D0) = reg;
    gx->bpSentNot = 0;
}

void fn_800D99AC(u8 update_enable) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg = M2C_FIELD(gx, u32 *, 0x1D0);
    reg = __rlwimi(reg, update_enable, 3, 28, 28);
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x61;
    (*(volatile PPCWGPipe *)0xCC008000).u32 = reg;
    M2C_FIELD(gx, u32 *, 0x1D0) = reg;
    gx->bpSentNot = 0;
}

void fn_800D99D8(u8 update_enable) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg = M2C_FIELD(gx, u32 *, 0x1D0);
    reg = __rlwimi(reg, update_enable, 4, 27, 27);
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x61;
    (*(volatile PPCWGPipe *)0xCC008000).u32 = reg;
    M2C_FIELD(gx, u32 *, 0x1D0) = reg;
    gx->bpSentNot = 0;
}

void fn_800D9A04(u32 compare_enable, u32 func, u32 update_enable) {
    extern GXDataHead *__GXData;
    u32 reg;
    reg = M2C_FIELD(__GXData, u32 *, 0x1D8);
    SETF(reg, 1, 0, compare_enable);
    SETF(reg, 3, 1, func);
    SETF(reg, 1, 4, update_enable);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u32 *, 0x1D8) = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D9A38(u8 before_tex) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x1DC) = __rlwimi(M2C_FIELD(gx, u32 *, 0x1DC), (u32)before_tex, 6, 25, 25);
    (*(volatile PPCWGPipe *)0xCC008000).u8 = 0x61;
    (*(volatile PPCWGPipe *)0xCC008000).u32 = M2C_FIELD(gx, u32 *, 0x1DC);
    gx->bpSentNot = 0;
}

void fn_800D9A6C(s32 pix_fmt, u32 z_fmt) {
    extern GXDataHead *const __GXData;
    extern u32 lbl_802DFFC8[];
    u32 oldPeCtrl;
    u8 aa;

    oldPeCtrl = M2C_FIELD(__GXData, u32 *, 0x1DC);
    SETF(M2C_FIELD(__GXData, u32 *, 0x1DC), 3, 0, lbl_802DFFC8[pix_fmt]);
    SETF(M2C_FIELD(__GXData, u32 *, 0x1DC), 3, 3, z_fmt);
    if (oldPeCtrl != M2C_FIELD(__GXData, u32 *, 0x1DC)) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1DC);
        aa = (pix_fmt == 2) ? 1 : 0;
        SETF(M2C_FIELD(__GXData, u32 *, 0x204), 1, 9, aa);
        M2C_FIELD(__GXData, u32 *, 0x5AC) |= 4;
    }
    if (lbl_802DFFC8[pix_fmt] == 4) {
        SETF(M2C_FIELD(__GXData, u32 *, 0x1D4), 2, 9, (pix_fmt - 4) & 3);
        SETF(M2C_FIELD(__GXData, u32 *, 0x1D4), 8, 24, 0x42);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D4);
    }
    __GXData->bpSentNot = 0;
}

void fn_800D9B40(s32 dither) {
    extern GXDataHead *__GXData;
    SETF(M2C_FIELD(__GXData, u32 *, 0x1D0), 1, 2, dither);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D0);
    __GXData->bpSentNot = 0;
}

void fn_800D9B6C(u8 enable, u8 alpha) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 reg = M2C_FIELD(gx, u32 *, 0x1D4);
    reg = (reg & ~0xFF) | ((u32)alpha & 0xFF);
    GXWGFifo.u8 = 0x61;
    reg = (reg & ~0x100) | (((u32)enable << 8) & 0x100);
    GXWGFifo.u32 = reg;
    M2C_FIELD(gx, u32 *, 0x1D4) = reg;
    gx->bpSentNot = 0;
}

void fn_800D9BA8(s32 odd_mask, u8 even_mask) {
    extern GXDataHead *__GXData;
    u32 reg = 0;
    SETF(reg, 1, 0, even_mask);
    SETF(reg, 1, 1, odd_mask);
    SETF(reg, 8, 24, 0x44);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D9BE0(u8 field_mode, u8 half_aspect_ratio) {
    extern GXDataHead *__GXData;
    extern void __GXFlushTextureState(void);
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x7C) = __rlwimi(M2C_FIELD(gx, u32 *, 0x7C), half_aspect_ratio, 22, 9, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x7C);
    __GXFlushTextureState();
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = 0x68000000 | field_mode;
    __GXFlushTextureState();
}

void fn_800D9E98(u32 id) {
    extern GXDataHead *__GXData;
    extern void fn_800DA1A4(s32, ...);
    GXDataHead *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x80) = __rlwimi(M2C_FIELD(gx, u32 *, 0x80), id, 0, 26, 31);
    fn_800DA1A4(0);
}

#pragma push
#pragma fp_contract off
void fn_800D9F80(void) {
 extern GXDataHead *__GXData;
 extern f32 lbl_80363190, lbl_80363194;
 GXDataHead *gx=__GXData;
 f32 sx, sy, sz, tx, ty, tz;
 f32 z;
 sx=M2C_FIELD(gx,f32 *,0x4FC)*lbl_80363190;
 sy=-M2C_FIELD(gx,f32 *,0x500)*lbl_80363190;
 z=M2C_FIELD(gx,f32 *,0x508)*M2C_FIELD(gx,f32 *,0x510);
 sz=z-M2C_FIELD(gx,f32 *,0x504)*M2C_FIELD(gx,f32 *,0x510);
 tx=lbl_80363194+(M2C_FIELD(gx,f32 *,0x4F4)+sx);
 ty=lbl_80363194+(M2C_FIELD(gx,f32 *,0x4F8)+M2C_FIELD(gx,f32 *,0x500)*lbl_80363190);
 tz=z+M2C_FIELD(gx,f32 *,0x50C);
 GXWGFifo.u8=0x10; GXWGFifo.u32=0x5101A;
 GXWGFifo.f32=sx; GXWGFifo.f32=sy; GXWGFifo.f32=sz;
 GXWGFifo.f32=tx; GXWGFifo.f32=ty; GXWGFifo.f32=tz;
}
#pragma pop
void fn_800DA010(f32 x, f32 y, f32 width, f32 height, f32 nearZ, f32 farZ) {
 extern GXDataHead *__GXData;
 extern void fn_800D9F80(void);
 GXDataHead *gx = __GXData;
 M2C_FIELD(gx,f32 *,0x4F4)=x;
 M2C_FIELD(gx,f32 *,0x4F8)=y;
 M2C_FIELD(gx,f32 *,0x4FC)=width;
 M2C_FIELD(gx,f32 *,0x500)=height;
 M2C_FIELD(gx,f32 *,0x504)=nearZ;
 M2C_FIELD(gx,f32 *,0x508)=farZ;
 fn_800D9F80();
 __GXData->bpSentNot=1;
}

void fn_800DA058(f32 scale, f32 offset) {
    extern GXDataHead *__GXData;
    extern f32 lbl_80363198;
    extern f32 lbl_8036318C;
    GXDataHead *gx = __GXData;
    f32 zmin;
    f32 zmax;
    f32 zScale;
    f32 zs;
    f32 zOffset;
    zOffset = lbl_80363198 * offset;
    zs = lbl_80363198 * scale;
    M2C_FIELD(gx, f32 *, 0x50C) = zOffset;
    zScale = lbl_8036318C + zs;
    M2C_FIELD(gx, f32 *, 0x510) = zScale;
    zmax = M2C_FIELD(gx, f32 *, 0x508) * zScale;
    zmin = M2C_FIELD(gx, f32 *, 0x504) * zScale;
    zOffset = zOffset + zmax;
    zmin = zmax - zmin;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x101C;
    GXWGFifo.f32 = zmin;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x101F;
    GXWGFifo.f32 = zOffset;
    gx->bpSentNot = 1;
}

void fn_800DA0C4(s32 left, s32 top, s32 wd, s32 ht) {
    extern GXDataHead *__GXData;
    GXDataHead *gx = __GXData;
    u32 tp;
    u32 lf;
    u32 bm;
    u32 rt;
    tp = top + 342;
    bm = tp + ht - 1;
    lf = left + 342;
    rt = lf + wd - 1;
    M2C_FIELD(gx, u32 *, 0xF8) = __rlwimi(M2C_FIELD(gx, u32 *, 0xF8), tp, 0, 21, 31);
    M2C_FIELD(gx, u32 *, 0xF8) = __rlwimi(M2C_FIELD(gx, u32 *, 0xF8), lf, 12, 9, 19);
    M2C_FIELD(gx, u32 *, 0xFC) = __rlwimi(M2C_FIELD(gx, u32 *, 0xFC), bm, 0, 21, 31);
    M2C_FIELD(gx, u32 *, 0xFC) = __rlwimi(M2C_FIELD(gx, u32 *, 0xFC), rt, 12, 9, 19);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0xF8);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0xFC);
    gx->bpSentNot = 0;
}

void fn_800DA13C(s32 x_off, s32 y_off) {
    extern GXDataHead *const __GXData;
    u32 reg;
    u32 hx = x_off + 342;
    u32 hy = y_off + 342;
    reg = 0;
    reg = __rlwimi(reg, hx, 31, 22, 31);
    reg = __rlwimi(reg, hy, 9, 12, 21);
    reg = __rlwimi(reg, 0x59, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
}

void fn_800DA17C(u32 arg0) {
    extern GXDataHead *const __GXData;
    GXDataHead *gx = __GXData;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1005;
    GXWGFifo.u32 = arg0;
    gx->bpSentNot = 1;
}

void fn_800DA1A4(s32 attr) {
    extern GXDataHead *const __GXData;
    u32 reg;
    if (attr < 5) {
        GXWGFifo.u8 = 0x08;
        GXWGFifo.u8 = 0x30;
        reg = M2C_FIELD(__GXData, u32 *, 0x80);
        GXWGFifo.u32 = reg;
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1018;
        GXWGFifo.u32 = reg;
    } else {
        GXWGFifo.u8 = 0x08;
        GXWGFifo.u8 = 0x40;
        reg = M2C_FIELD(__GXData, u32 *, 0x84);
        GXWGFifo.u32 = reg;
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1019;
        GXWGFifo.u32 = reg;
    }
    __GXData->bpSentNot = 1;
}

void fn_800DAA70(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void TRKNubMainLoop(void) {
    struct {
        u8 eventType;
        s32 eventID;
        s32 msgBufID;
    } event;
    s32 isShutdownRequested;
    s32 isNewInput;

    isShutdownRequested = 0;
    isNewInput = 0;
    while (isShutdownRequested == 0) {
        if (TRKGetNextEvent(&event) != 0) {
            isNewInput = 0;
            switch (event.eventType) {
            case 0:
                break;
            case 2:
                TRKDispatchMessage(TRKGetBuffer(event.msgBufID));
                break;
            case 1:
                isShutdownRequested = 1;
                break;
            case 3:
            case 4:
                TRKTargetInterrupt(&event);
                break;
            case 5:
                TRKTargetSupportRequest();
                break;
            }
            TRKDestructEvent(&event);
            continue;
        }
        if (isNewInput == 0 || *gTRKInputPendingPtr[0] != 0) {
            isNewInput = 1;
            TRKGetInput();
            continue;
        }
        if (TRKTargetStopped() == 0) {
            TRKTargetContinue();
        }
        isNewInput = 0;
    }
}

void TRKDestructEvent(void *arg0) {
    M2C_UNK fn_800DBB10(s32);
    fn_800DBB10(M2C_FIELD(arg0, s32 *, 8));
}

void fn_800DAB9C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}

s32 fn_800DABB4(void *event) {
    extern struct {
        s32 mutex;
        s32 count;
        s32 first;
        struct {
            s32 type;
            u32 eventID;
            s32 msgBufID;
        } events[2];
        u32 eventID;
    } lbl_80323DD0;
    extern void *fn_80003488(void *, const void *, u32);
    s32 result = 0;
    s32 nextEventID;
    fn_800DF2F8(&lbl_80323DD0);
    if (lbl_80323DD0.count == 2) {
        result = 0x100;
    } else {
        nextEventID = (lbl_80323DD0.first + lbl_80323DD0.count) % 2;
        fn_80003488(&lbl_80323DD0.events[nextEventID], event, 0xC);
        lbl_80323DD0.events[nextEventID].eventID = lbl_80323DD0.eventID;
        lbl_80323DD0.eventID++;
        if (lbl_80323DD0.eventID < 0x100) {
            lbl_80323DD0.eventID = 0x100;
        }
        lbl_80323DD0.count++;
    }
    fn_800DF2F0(&lbl_80323DD0);
    return result;
}

s32 TRKGetNextEvent(void *event) {
    extern struct {
        s32 mutex;
        s32 count;
        s32 first;
        u8 events[2][0xC];
        s32 eventID;
    } lbl_80323DD0;
    s32 result = 0;
    fn_800DF2F8(&lbl_80323DD0);
    if (lbl_80323DD0.count > 0) {
        memcpy(event, lbl_80323DD0.events[lbl_80323DD0.first], 0xC);
        lbl_80323DD0.count--;
        if (++lbl_80323DD0.first == 2) {
            lbl_80323DD0.first = 0;
        }
        result = 1;
    }
    fn_800DF2F0(&lbl_80323DD0);
    return result;
}

s32 TRKInitializeEventQueue(void) {
    extern struct {
        s32 mutex;
        s32 count;
        s32 first;
        u8 events[2][0xC];
        s32 eventID;
    } lbl_80323DD0;
    fn_800DF300(&lbl_80323DD0);
    fn_800DF2F8(&lbl_80323DD0);
    lbl_80323DD0.count = 0;
    lbl_80323DD0.first = 0;
    lbl_80323DD0.eventID = 0x100;
    fn_800DF2F0(&lbl_80323DD0);
    return 0;
}

void TRKNubWelcome(void) {
    void TRK_board_display(char *);
    TRK_board_display("MetroTRK for GAMECUBE v2.0");
}

s32 TRKTerminateNub(void) {
    s32 fn_800DBCDC(void);
    fn_800DBCDC();
    return 0;
}

s32 TRKInitializeNub(void) {
    extern s32 gTRKBigEndian[];
    extern u8 *gTRKInputPendingPtr[];
    extern void usr_put_initialize(void);
    extern s32 TRKInitializeMessageBuffers(void);
    extern s32 TRKInitializeDispatcher(void);
    extern void InitializeProgramEndTrap(void);
    extern s32 TRKInitializeIntDrivenUART(s32 a0, s32 a1, s32 a2, void *a3);
    extern void TRKTargetSetInputPendingPtr(s32 arg0);
    extern s32 TRKInitializeSerialHandler(void);
    extern s32 TRKInitializeTarget(void);
    s32 result;
    s32 resultTemp;
    u8 bendian[4];

    result = 0;
    gTRKBigEndian[0] = 1;
    bendian[0] = 0x12;
    bendian[1] = 0x34;
    bendian[2] = 0x56;
    bendian[3] = 0x78;
    if (*(u32*)bendian == 0x12345678) {
        gTRKBigEndian[0] = 1;
    } else if (*(u32*)bendian == 0x78563412) {
        gTRKBigEndian[0] = 0;
    } else {
        result = 1;
    }

    if (result == 0) usr_put_initialize();
    if (result == 0) result = TRKInitializeEventQueue();
    if (result == 0) result = TRKInitializeMessageBuffers();
    if (result == 0) result = TRKInitializeDispatcher();
    InitializeProgramEndTrap();
    if (result == 0) {
        resultTemp = TRKInitializeIntDrivenUART(0xE100, 1, 0, gTRKInputPendingPtr);
        TRKTargetSetInputPendingPtr((s32)gTRKInputPendingPtr[0]);
        if (resultTemp != 0) result = resultTemp;
    }
    if (result == 0) result = TRKInitializeSerialHandler();
    if (result == 0) result = TRKInitializeTarget();
    return result;
}

#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
s32 fn_800DB100(TrkBuf *buf, u32 *data, s32 count) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    s32 result;
    s32 i;

    for (i = 0, result = 0; result == 0 && i < count; i++, data++) {
        s32 err;
        u8 *bigEndianData;
        u32 length;
        u32 bytesLeft;
        u8 *byteData;
        u8 swapBuffer[sizeof(*data)];
        if (gTRKBigEndian[0]) {
            bigEndianData = (u8 *)data;
        } else {
            bigEndianData = swapBuffer;
        }
        length = sizeof(*data);
        err = 0;
        bytesLeft = buf->count - buf->pos;
        if (length > bytesLeft) {
            err = 0x302;
            length = bytesLeft;
        }
        fn_80003488(bigEndianData, buf->data + buf->pos, length);
        buf->pos += length;
        if (!gTRKBigEndian[0] && err == 0) {
            byteData = (u8 *)data;
            byteData[0] = bigEndianData[3];
            byteData[1] = bigEndianData[2];
            byteData[2] = bigEndianData[1];
            byteData[3] = bigEndianData[0];
        }
        result = err;
    }
    return result;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole off
s32 fn_800DB1F0(TrkBuf *buf, u8 *data, s32 length) {
 s32 result;
 extern void *fn_80003488(void *,const void *,u32);
 register unsigned int n;
 s32 i;
 s32 error;
 i=0; error=0;
 while (error==0 && i<length) {
  u32 left=buf->count-buf->pos;
  n=1;
  result=0;
  if(n>left) {result=0x302; n=left;}
  fn_80003488(data+i,buf->data+buf->pos,n);
  buf->pos+=(unsigned)n;
  error=result;
  i += 1;
 }
 return error;
}

#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
s32 fn_800DB288(TrkBuf *buf, u64 *data) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    s32 err;
    u32 length;
    u32 bytesLeft;
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[sizeof(*data)];
    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)data;
    } else {
        bigEndianData = swapBuffer;
    }
    length = sizeof(*data);
    err = 0;
    bytesLeft = buf->count - buf->pos;
    if (length > bytesLeft) {
        err = 0x302;
        length = bytesLeft;
    }
    fn_80003488(bigEndianData, buf->data + buf->pos, length);
    buf->pos += length;
    if (!gTRKBigEndian[0] && err == 0) {
        byteData = (u8 *)data;
        byteData[0] = bigEndianData[7];
        byteData[1] = bigEndianData[6];
        byteData[2] = bigEndianData[5];
        byteData[3] = bigEndianData[4];
        byteData[4] = bigEndianData[3];
        byteData[5] = bigEndianData[2];
        byteData[6] = bigEndianData[1];
        byteData[7] = bigEndianData[0];
    }
    return err;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
s32 fn_800DB970(TrkBuf *buf, void *data, u32 length);
#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
s32 fn_800DB370(TrkBuf *buf, u32 *data) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    s32 err;
    u32 length;
    u32 bytesLeft;
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[sizeof(data)];
    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)data;
    } else {
        bigEndianData = swapBuffer;
    }
    length = sizeof(*data);
    err = 0;
    bytesLeft = buf->count - buf->pos;
    if (length > bytesLeft) {
        err = 0x302;
        length = bytesLeft;
    }
    fn_80003488(bigEndianData, buf->data + buf->pos, length);
    buf->pos += length;
    if (!gTRKBigEndian[0] && err == 0) {
        byteData = (u8 *)data;
        byteData[0] = bigEndianData[3];
        byteData[1] = bigEndianData[2];
        byteData[2] = bigEndianData[1];
        byteData[3] = bigEndianData[0];
    }
    return err;
}
s32 fn_800DB438(TrkBuf *buf, u16 *data) {
    extern s32 gTRKBigEndian[];
    s32 err;
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[sizeof(data)];
    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)data;
    } else {
        bigEndianData = swapBuffer;
    }
    err = TRKReadBuffer_inline(buf, (void *)bigEndianData, sizeof(*data));
    if (!gTRKBigEndian[0] && err == 0) {
        byteData = (u8 *)data;
        byteData[0] = bigEndianData[1];
        byteData[1] = bigEndianData[0];
    }
    return err;
}
#pragma peephole off
s32 fn_800DB4F0(TrkBuf *buf, u8 *data) {
    return TRKReadBuffer_inline(buf, data, 1);
}

#pragma opt_propagation on
#pragma peephole on
s32 fn_800DB570(TrkBuf *buf, u32 *data, s32 count) {
    s32 err, i;

    for (i = 0, err = 0; err == 0 && i < count; i++) {
        err = TRKAppendBuffer1_ui32(buf, data[i]);
    }
    return err;
}
s32 fn_800DB66C(TrkBuf *buf, u8 *data, s32 count) {
    s32 err, i;
    for (i = 0, err = 0; err == 0 && i < count; i++) {
        err = TRKAppendBuffer1_ui8(buf, data[i]);
    }
    return err;
}

s32 fn_800DB6D4(TrkBuf *buf, u64 data) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[8];
    s32 error;
    u32 length;
    u32 bytesLeft;

    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)&data;
    } else {
        byteData = (u8 *)&data;
        bigEndianData = swapBuffer;
        bigEndianData[0] = byteData[7];
        bigEndianData[1] = byteData[6];
        bigEndianData[2] = byteData[5];
        bigEndianData[3] = byteData[4];
        bigEndianData[4] = byteData[3];
        bigEndianData[5] = byteData[2];
        bigEndianData[6] = byteData[1];
        bigEndianData[7] = byteData[0];
    }
    length = 8;
    error = 0;
    bytesLeft = 0x880 - buf->pos;
    if (bytesLeft < length) {
        error = 0x301;
        length = bytesLeft;
    }
    if (length == 1) {
        buf->data[buf->pos] = *bigEndianData;
    } else {
        fn_80003488(buf->data + buf->pos, bigEndianData, length);
    }
    buf->pos += length;
    buf->count = buf->pos;
    return error;
}

s32 fn_800DB7D0(TrkBuf *buf, u32 data) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[4];
    s32 error;
    u32 length;
    u32 bytesLeft;

    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)&data;
    } else {
        byteData = (u8 *)&data;
        bigEndianData = swapBuffer;
        bigEndianData[0] = byteData[3];
        bigEndianData[1] = byteData[2];
        bigEndianData[2] = byteData[1];
        bigEndianData[3] = byteData[0];
    }
    length = 4;
    error = 0;
    bytesLeft = 0x880 - buf->pos;
    if (bytesLeft < length) {
        error = 0x301;
        length = bytesLeft;
    }
    if (length == 1) {
        buf->data[buf->pos] = *bigEndianData;
    } else {
        fn_80003488(buf->data + buf->pos, bigEndianData, length);
    }
    buf->pos += length;
    buf->count = buf->pos;
    return error;
}

s32 fn_800DB8A8(TrkBuf *buf, u16 data) {
    extern s32 gTRKBigEndian[];
    extern void *fn_80003488(void *, const void *, u32);
    u8 *bigEndianData;
    u8 *byteData;
    u8 swapBuffer[2];
    s32 error;
    u32 length;
    u32 bytesLeft;

    if (gTRKBigEndian[0]) {
        bigEndianData = (u8 *)&data;
    } else {
        byteData = (u8 *)&data;
        bigEndianData = swapBuffer;
        bigEndianData[0] = byteData[1];
        bigEndianData[1] = byteData[0];
    }
    length = 2;
    error = 0;
    bytesLeft = 0x880 - buf->pos;
    if (bytesLeft < length) {
        error = 0x301;
        length = bytesLeft;
    }
    if (length == 1) {
        buf->data[buf->pos] = *bigEndianData;
    } else {
        fn_80003488(buf->data + buf->pos, bigEndianData, length);
    }
    buf->pos += length;
    buf->count = buf->pos;
    return error;
}

#pragma pop
s32 fn_800DB970(TrkBuf *buf, void *data, u32 length) {
    extern void *fn_80003488(void *, const void *, u32);
    s32 error = 0;
    u32 bytesLeft;
    if (length == 0) {
        return 0;
    }
    bytesLeft = buf->count - buf->pos;
    if (length > bytesLeft) {
        error = 0x302;
        length = bytesLeft;
    }
    fn_80003488(data, buf->data + buf->pos, length);
    buf->pos += length;
    return error;
}

s32 fn_800DB9FC(TrkBuf *buf, const void *data, u32 length) {
    extern void *fn_80003488(void *, const void *, u32);
    s32 error = 0;
    u32 bytesLeft;
    if (length == 0) {
        return 0;
    }
    bytesLeft = 0x880 - buf->pos;
    if (bytesLeft < length) {
        error = 0x301;
        length = bytesLeft;
    }
    if (length == 1) {
        buf->data[buf->pos] = *(u8 *)data;
    } else {
        fn_80003488(buf->data + buf->pos, data, length);
    }
    buf->pos += length;
    buf->count = buf->pos;
    return error;
}

s32 fn_800DBAA0(void *arg0, u32 arg1) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 > 0x880U) {
        var_r5 = 0x301;
    } else {
        M2C_FIELD(arg0, u32 *, 0xC) = arg1;
        if (arg1 > (u32) M2C_FIELD(arg0, u32 *, 8)) {
            M2C_FIELD(arg0, u32 *, 8) = arg1;
        }
    }
    return var_r5;
}

void fn_800DBAD0(TrkBuf *buf, s32 keepData) {
    buf->count = 0;
    buf->pos = 0;
    if (!(u8)keepData) {
        fn_80003458(buf->data, 0, 0x880);
    }
}

void fn_800DBB10(s32 idx) {
    TrkBuf *buf;
    if (idx != -1 && idx >= 0 && idx < 3) {
        buf = &lbl_80323E00[idx];
        fn_800DF2F8(buf);
        M2C_FIELD(buf, s32 *, 4) = 0;
        fn_800DF2F0(buf);
    }
}

TrkBuf *TRKGetBuffer(s32 idx) {
    TrkBuf *buf = NULL;
    if (idx >= 0 && idx < 3) {
        buf = &lbl_80323E00[idx];
    }
    return buf;
}

#pragma push
#pragma use_lmw_stmw on
s32 fn_800DBBA0(s32 *msgID, TrkBuf **outMsg) {
    extern void fn_800DC0AC(const char *);
    extern char lbl_8029BDF8[];
    TrkBuf *buf;
    s32 error = 0x300;
    s32 i;

    *outMsg = NULL;
    for (i = 0; i < 3; i++) {
        buf = NULL;
        if (i >= 0 && i < 3) {
            buf = &lbl_80323E00[i];
        }
        fn_800DF2F8(buf);
        if (buf->isInUse == 0) {
            buf->count = 0;
            buf->pos = 0;
            buf->isInUse = 1;
            error = 0;
            *outMsg = buf;
            *msgID = i;
            i = 3;
        }
        fn_800DF2F0(buf);
    }
    if (error == 0x300) {
        fn_800DC0AC(lbl_8029BDF8);
    }
    return error;
}
#pragma pop
s32 TRKInitializeMessageBuffers(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        fn_800DF300(&lbl_80323E00[i]);
        fn_800DF2F8(&lbl_80323E00[i]);
        M2C_FIELD(&lbl_80323E00[i], s32 *, 4) = 0;
        fn_800DF2F0(&lbl_80323E00[i]);
    }
    return 0;
}

s32 fn_800DBCDC(void) {
    return 0;
}

s32 TRKInitializeSerialHandler(void) {
    lbl_803257B4.msgBufID = -1;
    lbl_803257B4.receiveState = 0;
    lbl_803257B4.isEscape = 0;
    return 0;
}

#pragma push
#pragma dont_inline on
void fn_800DBD08(s32 bufferIdx) {
    void fn_800DABB4(void *);
    u8 event[0xC];

    fn_800DAB9C(event, 2);
    lbl_803257B4.msgBufID = -1;
    M2C_FIELD(event, s32 *, 8) = bufferIdx;
    fn_800DABB4(event);
}
#pragma push
#pragma dont_inline on
void TRKGetInput(void) {
    s32 fn_800DBDF0(void);
    TrkBuf *TRKGetBuffer(s32);
    s32 fn_800DB4F0(TrkBuf *, u8 *);
    TrkBuf *buf;
    s32 id;
    u8 command;
    u8 event[0xC];

    id = fn_800DBDF0();
    if (id != -1) {
        buf = TRKGetBuffer(id);
        fn_800DBAA0(buf, 0);
        fn_800DB4F0(buf, &command);
        if (command < 0x80) {
            fn_800DAB9C(event, 2);
            lbl_803257B4.msgBufID = -1;
            M2C_FIELD(event, s32 *, 8) = id;
            fn_800DABB4(event);
        } else {
            fn_800DBB10(id);
        }
    }
}
#pragma pop
void usr_put_initialize(void) {

}

#pragma push
#pragma dont_inline off
void fn_800DC0AC(const char *s) {
    BOOL done;
    char c;
    BOOL old;
    char buf[2];

    done = TRKPutsDone();
    while (!done && (c = *s++) != '\0') {
        old = fn_800DEA20();
        buf[0] = c;
        buf[1] = '\0';
        fn_800DEA14(FALSE);
        OSReport(buf);
        fn_800DEA14(old);
        done = TRKPutsDone();
    }
}
#pragma pop
s32 TRKDispatchMessage(TrkBuf *buf) {
    s32 fn_800DB4F0(TrkBuf *, u8 *);
    s32 err;
    u8 cmd;

    err = 0x500;
    fn_800DBAA0(buf, 0);
    fn_800DB4F0(buf, &cmd);
    if (cmd < lbl_803257C8[0]) {
        err = lbl_802E00D8[cmd](buf);
    }
    return err;
}

s32 TRKInitializeDispatcher(void) {
    lbl_803257C8[0] = 0x20;
    return 0;
}

s32 fn_800DF874(void);
void fn_800DC374(TrkBuf* buf) {
    s8 b;
    s32 n;
    s32 ok;
    switch (fn_800DF874()) {
    case 0:
        b = 0;
        break;
    case 0x704:
        b = 0x21;
        break;
    case 0x705:
        b = 0x22;
        break;
    case 0x706:
        b = 0x20;
        break;
    default:
        b = 1;
        break;
    }
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x80;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = b;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
}

void fn_800DC9A4(TrkBuf* buf) {
    s32 n;
    s32 ok;
    if (TRKTargetStopped() == 0) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x16;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
    } else {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x00;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        if (ok == 0) {
            TRKTargetContinue();
        }
    }
}

s32 fn_800DE654(TrkBuf* buf) {
    extern void fn_800053E0(void);
    s32 n;
    s32 ok;
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x80;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x00;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
    fn_800053E0();
    return 0;
}

s32 fn_800DE70C(TrkBuf* buf) {
    void fn_800DABB4(void *);
    s32 n;
    s32 ok;
    u8 event[0xC];
    lbl_803257D0[0] = 0;
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x80;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x00;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
    if (ok == 0) {
        fn_800DAB9C(event, 1);
        fn_800DABB4(event);
    }
    return ok;
}

void fn_800DE7F0(TrkBuf* buf) {
    s32 n;
    s32 ok;
    lbl_803257D0[0] = 1;
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x80;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x00;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
}

void fn_800DE8AC(TrkBuf* buf) {
    s32 n;
    s32 ok;
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x80;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = 0x10;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
}

void fn_800DE95C(TrkBuf* buf, s8 a, s8 b) {
    s32 n;
    s32 ok;
    fn_800DBAD0(buf, 1);
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = a;
        buf->count++;
    }
    if (buf->pos < 0x880) {
        buf->data[buf->pos++] = b;
        buf->count++;
    }
    n = 3;
    do {
        ok = fn_800DAF24(buf);
        n--;
    } while (ok != 0 && n > 0);
}

void fn_800DEA14(s32 arg0) {
    lbl_803257D0[0] = arg0;
}

s32 fn_800DEA30(u32 handle, u32 *position, u8 mode, u8 *ioResult) {
    s32 fn_800DEE88(TrkBuf *, s32 *, s32, s32, s32);
    s32 replyBufferId;
    s32 bufferId;
    TrkBuf *buffer;
    s32 error;
    TrkBuf *replyBuffer;
    s32 err;

    error = fn_800DBBA0(&bufferId, &buffer);
    if (error == 0) {
        TrkBuf *b = buffer;
        if (b->pos >= 0x880) {
            err = 0x301;
        } else {
            b->data[b->pos++] = 0xD4;
            err = 0;
            b->count++;
        }
        error = err;
    }
    if (error == 0) {
        error = fn_800DB7D0(buffer, handle);
    }
    if (error == 0) {
        error = fn_800DB7D0(buffer, *position);
    }
    if (error == 0) {
        TrkBuf *b = buffer;
        if (b->pos >= 0x880) {
            err = 0x301;
        } else {
            b->data[b->pos++] = mode;
            err = 0;
            b->count++;
        }
        error = err;
    }
    if (error == 0) {
        *ioResult = 0;
        error = fn_800DEE88(buffer, &replyBufferId, 3, 3, 0);
        if (error == 0) {
            replyBuffer = TRKGetBuffer(replyBufferId);
            fn_800DBAA0(replyBuffer, 2);
        }
        if (error == 0) {
            error = fn_800DB4F0(replyBuffer, ioResult);
        }
        if (error == 0) {
            error = fn_800DB370(replyBuffer, position);
        } else {
            *position = -1;
        }
        fn_800DBB10(replyBufferId);
    }
    fn_800DBB10(bufferId);
    return error;
}
s32 fn_800DEBC0(u32 replyError, u8 *ioResult) {
    s32 fn_800DEE88(TrkBuf *, s32 *, s32, s32, s32);
    s32 err;
    s32 replyBufferId;
    s32 bufferId;
    TrkBuf *buffer;
    s32 error;
    TrkBuf *replyBuffer;
    TrkBuf *b;

    error = fn_800DBBA0(&bufferId, &buffer);
    if (error == 0) {
        b = buffer;
        if (b->pos >= 0x880) {
            err = 0x301;
        } else {
            b->data[b->pos++] = 0xD3;
            err = 0;
            b->count++;
        }
        error = err;
    }
    if (error == 0) {
        error = fn_800DB7D0(buffer, replyError);
    }
    if (error == 0) {
        *ioResult = 0;
        error = fn_800DEE88(buffer, &replyBufferId, 3, 3, 0);
        if (error == 0) {
            replyBuffer = TRKGetBuffer(replyBufferId);
            fn_800DBAA0(replyBuffer, 2);
        }
        if (error == 0) {
            error = fn_800DB4F0(replyBuffer, ioResult);
        }
        fn_800DBB10(replyBufferId);
    }
    fn_800DBB10(bufferId);
    return error;
}
s32 fn_800DF2F0(void *mutex) {
    return 0;
}

s32 fn_800DF2F8(void *mutex) {
    return 0;
}

s32 fn_800DF300(void *mutex) {
    return 0;
}

#pragma push
#pragma dont_inline off
#pragma auto_inline off
s32 fn_800DF308(u8 cmd) {
    s32 fn_800DFC6C(void *);
    s32 fn_800DFBE8(void *);
    s32 fn_800DEE88(TrkBuf *, s32 *, s32, s32, s32);
    s32 replyID;
    s32 msgID;
    TrkBuf *buf;
    s32 result;
    s32 err;

    result = fn_800DBBA0(&msgID, &buf);
    if (result == 0) {
        TrkBuf *b = buf;
        if (b->pos >= 0x880) {
            err = 0x301;
        } else {
            b->data[b->pos++] = cmd;
            err = 0;
            b->count++;
        }
        if (err == 0) {
            if (cmd == 0x90) {
                fn_800DFC6C(buf);
            } else {
                fn_800DFBE8(buf);
            }
        }
        result = fn_800DEE88(buf, &replyID, 2, 3, 1);
        if (result == 0) {
            fn_800DBB10(replyID);
        }
        fn_800DBB10(msgID);
    }
    return result;
}
#pragma pop
void fn_800DF3E0(u32 addr, s32 length) {
    u32 p = addr & 0xFFFFFFF1;
    length += addr - p;
    do {
        __dcbst((void *)p, 0);
        __dcbf((void *)p, 0);
        __sync();
        __icbi((void *)p, 0);
        p += 8;
        length -= 8;
    } while (length >= 0);
    __isync();
}

void fn_800DF418(void *dest, int val, u32 count) {
    u32 v = (u8)val;
    u32 i;
    union {
        u8 *cpd;
        u32 *lpd;
    } dstu;

    dstu.cpd = ((u8 *)dest) - 1;

    if (count >= 32) {
        i = (~(u32)dstu.cpd) & 3;
        if (i) {
            count -= i;
            do {
                *++(dstu.cpd) = v;
            } while (--i);
        }

        if (v) {
            v |= v << 24 | v << 16 | v << 8;
        }

        dstu.lpd = ((u32 *)(dstu.cpd + 1)) - 1;

        i = count >> 5;
        if (i) {
            do {
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
                *++(dstu.lpd) = v;
            } while (--i);
        }

        i = (count & 31) >> 2;
        if (i) {
            do {
                *++(dstu.lpd) = v;
            } while (--i);
        }

        dstu.cpd = ((u8 *)(dstu.lpd + 1)) - 1;
        count &= 3;
    }

    if (count) {
        do {
            *++(dstu.cpd) = v;
        } while (--count);
    }
}

void TRKTargetSetInputPendingPtr(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0xA0) = arg0;
}

s32 fn_800DF874(void) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 1;
    return 0;
}

extern u8 lbl_80327F90[];
#pragma push
#pragma dont_inline on
void TRKTargetSetStopped(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = arg0;
}
#pragma pop

s32 TRKTargetStopped(void) {
    return M2C_FIELD(&gTRKState, s32 *, 0x98);
}

s32 fn_800DF8AC(u8 unused, u32 start, u32 end) {
    if (start < end) {
        fn_800DF3E0(start, end - start);
        return 0;
    }
    return 0x700;
}

s32 fn_800DFAF0(void) {
    return M2C_FIELD(&gTRKCPUState, s32 *, 0x80);
}

s32 fn_800DFB00(u32 rangeStart, u32 rangeEnd, s32 stepOver) {
    if (stepOver != 0) {
        return 0x703;
    }
    lbl_802E01B4.type = 1;
    lbl_802E01B4.rangeStart = rangeStart;
    lbl_802E01B4.rangeEnd = rangeEnd;
    lbl_802E01B4.active = 1;
    M2C_FIELD(&gTRKCPUState, u32 *, 0x1F8) |= 0x400;
    if (lbl_802E01B4.type == 0 || lbl_802E01B4.type == 0x10) {
        lbl_802E01B4.count--;
    }
    gTRKState.unk98 = 0;
    return 0;
}

s32 fn_800DFB7C(u32 count, s32 stepOver) {
    if (stepOver != 0) {
        return 0x703;
    }
    lbl_802E01B4.type = 0;
    lbl_802E01B4.count = count;
    lbl_802E01B4.active = 1;
    M2C_FIELD(&gTRKCPUState, u32 *, 0x1F8) |= 0x400;
    if (lbl_802E01B4.type == 0 || lbl_802E01B4.type == 0x10) {
        lbl_802E01B4.count--;
    }
    gTRKState.unk98 = 0;
    return 0;
}

s32 fn_800DFBE8(void *b) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    s32 fn_800DB7D0(void *, u32);
    s32 fn_800DB8A8(void *, u16);
    s32 fn_800E0C00(void *, u32);
    s32 error;
    u32 inst;

    error = fn_800DB7D0(b, gTRKExceptionStatus_802E01A4.exceptionAddress);
    if (error == 0) {
        error = fn_800E0C00(&inst, gTRKExceptionStatus_802E01A4.exceptionAddress);
    }
    if (error == 0) {
        error = fn_800DB7D0(b, inst);
    }
    if (error == 0) {
        error = fn_800DB8A8(b, gTRKExceptionStatus_802E01A4.exceptionID);
    }
    return error;
}

void fn_800DFC6C(TrkBuf *b) {
    s32 fn_800DB6D4(TrkBuf *, u64);
    s32 fn_800E0C00(void *, u32);
    s32 error;
    u32 inst;
    s32 i;

    error = fn_800DB7D0(b, gTRKCPUState.unk80);
    if (error == 0) {
        error = fn_800E0C00(&inst, gTRKCPUState.unk80);
    }
    if (error == 0) {
        error = fn_800DB7D0(b, inst);
    }
    if (error == 0) {
        error = fn_800DB8A8(b, M2C_FIELD(&gTRKCPUState, u32 *, 0x2F8));
    }
    if (error == 0) {
        for (i = 0; i < 32; i++) {
            fn_800DB7D0(b, (u16)gTRKCPUState.gpr[i]);
        }
        for (i = 0; i < 32; i++) {
            fn_800DB6D4(b, (u16)gTRKCPUState.fpr[i]);
        }
    }
}

s32 TRKTargetInterrupt(void *event) {
    s32 result = 0;
    switch (*(u8 *)event) {
    case 3:
    case 4:
        if (lbl_802E01B4.active != 0) {
            BOOL done = TRUE;
            M2C_FIELD(&gTRKCPUState, u32 *, 0x1F8) &= ~0x400;
            if (lbl_802E01B4.active != 0 && (u16)M2C_FIELD(&gTRKCPUState, u32 *, 0x2F8) == 0xD00) {
                switch (lbl_802E01B4.type) {
                case 0:
                    if (lbl_802E01B4.count > 0) {
                        done = FALSE;
                    }
                    break;
                case 1:
                    if (gTRKCPUState.unk80 >= lbl_802E01B4.rangeStart && gTRKCPUState.unk80 <= lbl_802E01B4.rangeEnd) {
                        done = FALSE;
                    }
                    break;
                }
            }
            if (done) {
                lbl_802E01B4.active = 0;
            } else {
                lbl_802E01B4.active = 1;
                M2C_FIELD(&gTRKCPUState, u32 *, 0x1F8) |= 0x400;
                if (lbl_802E01B4.type == 0 || lbl_802E01B4.type == 0x10) {
                    lbl_802E01B4.count--;
                }
                gTRKState.unk98 = 0;
            }
        }
        if (lbl_802E01B4.active == 0) {
            gTRKState.unk98 = 1;
            result = fn_800DF308(0x90);
        }
        break;
    }
    return result;
}

void TRKPostInterruptEvent(void) {
    void fn_800DAB9C(void *, s8);
    void fn_800DABB4(void *);
    s32 fn_800E0C00(void *, u32);
    s8 eventType;
    u32 inst;
    u8 event[0xC];

    if (M2C_FIELD(&gTRKState, s32 *, 0x9C) != 0) {
        M2C_FIELD(&gTRKState, s32 *, 0x9C) = 0;
    } else {
        switch (M2C_FIELD(&gTRKCPUState, u32 *, 0x2F8) & 0xFFFF) {
        case 0xD00:
        case 0x700:
            fn_800E0C00(&inst, M2C_FIELD(&gTRKCPUState, u32 *, 0x80));
            if (inst == 0x0FE00000) {
                eventType = 5;
            } else {
                eventType = 3;
            }
            break;
        default:
            eventType = 4;
            break;
        }
        fn_800DAB9C(event, eventType);
        fn_800DABB4(event);
    }
}

s32 fn_800DFF6C(u8 *cpuType) {
    extern s32 gTRKBigEndian[];
    u8 fn_800E1538(void);

    cpuType[0] = 0;
    cpuType[1] = fn_800E1538();
    cpuType[2] = gTRKBigEndian[0];
    cpuType[3] = 4;
    cpuType[4] = 8;
    cpuType[5] = 4;
    cpuType[6] = 8;
    return 0;
}

s32 fn_800DFFCC(u8 *mask) {
    mask[0] = 0x7A;
    mask[1] = 0;
    mask[2] = 0x4F;
    mask[3] = 7;
    mask[4] = 0;
    mask[5] = 0;
    mask[6] = 0;
    mask[7] = 0;
    mask[8] = 0;
    mask[9] = 0;
    mask[10] = 0;
    mask[11] = 0;
    mask[12] = 0;
    mask[13] = 0;
    mask[14] = 0;
    mask[15] = 0;
    mask[16] = 1;
    mask[17] = 0;
    mask[18] = 3;
    mask[19] = 0;
    mask[20] = 0;
    mask[21] = 0;
    mask[22] = 0;
    mask[23] = 0;
    mask[24] = 0;
    mask[25] = 0;
    mask[26] = 3;
    mask[27] = 0;
    mask[28] = 0;
    mask[29] = 0;
    mask[30] = 0;
    mask[31] = 0x80;
    return 0;
}

s32 fn_800E0070(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 2;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 1;
    M2C_FIELD(arg0, s8 *, 3) = 0xA;
    return 0;
}

s32 fn_800E04D0(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    extern struct { u8 TBR; u8 DEC; u8 linker_padding[7]; } gTRKRestoreFlags;
    s32 error;
    u32 *data;
    u32 count;
    TRKExceptionStatus tempExceptionStatus;

    if (lastRegister > 0x60) {
        return 0x701;
    }

    tempExceptionStatus = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    *registersLengthPtr = 0;

    if (firstRegister <= lastRegister) {
        count = (lastRegister - firstRegister) + 1;
        *registersLengthPtr += count * sizeof(u32);
        data = (u32 *)((u8 *)&gTRKCPUState + 0x1A8) + firstRegister;

        if (read) {
            error = fn_800DB570(b, data, count);
        } else {
            if (data <= (u32 *)((u8 *)&gTRKCPUState + 0x1EC) &&
                (u32 *)((u8 *)data + count * sizeof(u32) - sizeof(u32)) >= (u32 *)((u8 *)&gTRKCPUState + 0x1E8)) {
                gTRKRestoreFlags.TBR = 1;
            }
            if (data <= (u32 *)((u8 *)&gTRKCPUState + 0x278) &&
                (data + count - 1) >= (u32 *)((u8 *)&gTRKCPUState + 0x278)) {
                gTRKRestoreFlags.DEC = 1;
            }
            error = fn_800DB100(b, data, count);
        }
    }

    if (gTRKExceptionStatus_802E01A4.exceptionDetected) {
        error = 0x702;
        *registersLengthPtr = 0;
    }

    gTRKExceptionStatus_802E01A4 = tempExceptionStatus;
    return error;
}

s32 fn_800DB570(TrkBuf *buf, u32 *data, s32 count);
s32 fn_800E0B0C(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    u32 *data;
    u32 count;
    s32 error;
    TRKExceptionStatus savedException;

    if (lastRegister > 0x24) {
        return 0x701;
    }

    savedException = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    count = (lastRegister - firstRegister) + 1;
    data = (u32 *)&gTRKCPUState + firstRegister;
    *registersLengthPtr = count * sizeof(u32);

    if (read) {
        error = fn_800DB570(b, data, count);
    } else {
        error = fn_800DB100(b, data, count);
    }

    if (gTRKExceptionStatus_802E01A4.exceptionDetected) {
        *registersLengthPtr = 0;
        error = 0x702;
    }

    gTRKExceptionStatus_802E01A4 = savedException;
    return error;
}

s32 fn_800E0C00(void *data, u32 start) {
    s32 fn_800E0C4C(void *, u32, u32 *, s32, s32);
    u32 len;
    s32 error;

    len = 4;
    error = fn_800E0C4C(data, start, &len, 0, 1);
    if (error == 0 && len != 4) {
        error = 0x700;
    }
    return error;
}

u32 fn_800E1150(u32 addr);
s32 fn_800E0C4C(void *data, u32 start, u32 *length, s32 accessOptions, s32 read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    s32 fn_800E0D98(u32, u32, s32);
    void fn_800DF4E0(void *, void *, u32, u32, u32);
    s32 error;
    u32 trans_ptr;
    u32 target_msr;
    u32 user_msr;
    TRKExceptionStatus tempExceptionStatus = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    trans_ptr = fn_800E1150(start);
    error = fn_800E0D98(trans_ptr, *length, read == 0);
    if (error != 0) {
        *length = 0;
    } else {
        target_msr = fn_800DF4D0();
        user_msr = target_msr | (M2C_FIELD(&gTRKCPUState, u32 *, 0x1F8) & 0x10);
        if (read) {
            fn_800DF4E0(data, (void *)trans_ptr, *length, target_msr, user_msr);
        } else {
            fn_800DF4E0((void *)trans_ptr, data, *length, user_msr, target_msr);
            fn_800DF3E0(trans_ptr, *length);
            if (start != trans_ptr) {
                fn_800DF3E0(start, *length);
            }
        }
    }

    if (gTRKExceptionStatus_802E01A4.exceptionDetected) {
        *length = 0;
        error = 0x702;
    }

    gTRKExceptionStatus_802E01A4 = tempExceptionStatus;
    return error;
}

s32 TRKInitializeTarget(void) {
    gTRKState.unk98 = 1;
    gTRKState.unk8C = fn_800DF4D0(&gTRKState);
    lbl_80325D58[0] = 0xE0000000;
    return 0;
}

u32 fn_800E1150(u32 addr) {
    if (addr >= lbl_80325D58[0] && addr < lbl_80325D58[0] + 0x4000 && (gTRKCPUState.unk238 & 3)) {
        return addr;
    }
    if (addr >= 0x7E000000 && addr <= 0x80000000) {
        return addr;
    }
    return (addr & 0x3FFFFFFF) | 0x80000000;
}

void fn_800E18F0(void);
s32 fn_800DF4D0();
void EnableMetroTRKInterrupts(void) {
    fn_800E18F0();
}

s32 fn_800E1538(void) {
    return 0x54;
}

s32 TRKInitializeNub(void);
void TRKNubWelcome(void);
void TRKNubMainLoop(void);
s32 TRKTerminateNub(void);
extern s32 TRK_mainError_80325D60[];
void TRK_main(void) {
    s32 result = TRKInitializeNub();
    TRK_mainError_80325D60[0] = result;
    if (result == 0) {
        TRKNubWelcome();
        TRKNubMainLoop();
    }
    TRK_mainError_80325D60[0] = TRKTerminateNub();
}

void TRKUARTInterruptHandler(void) {

}

void InitializeProgramEndTrap(void) {
    extern void *fn_80003488(void *, const void *, u32);
    extern void DCFlushRange(void *, u32);
    extern u8 lbl_8029BEA0[];
    u8 *ppcHalt = (u8 *)PPCHalt;
    fn_80003488(ppcHalt + 4, lbl_8029BEA0, 4);
    ICInvalidateRange(ppcHalt + 4, 4);
    DCFlushRange(ppcHalt + 4, 4);
}

void TRK_board_display(char *str) {
    extern char lbl_8029BEA4[];
    OSReport(lbl_8029BEA4, str);
}

void UnreserveEXI2Port(void) {
    gDBCommTable.close();
}

void ReserveEXI2Port(void) {
    gDBCommTable.open();
}

s32 fn_800E16F8(u8 *c) {
    typedef struct {
        s32 writePos;
        s32 readPos;
        s32 readCount;
        s32 pad;
        u8 buf[0x110A];
    } TRKUARTBuf;
    extern s32 lbl_80325D68[];
    s32 readErr = 4;
    TRKUARTBuf *b = (TRKUARTBuf *)lbl_80325D68;

    if (b->readPos >= b->readCount) {
        b->readPos = 0;
        b->readCount = gDBCommTable.peek();
        if (b->readCount > 0) {
            if (b->readCount > 0x110A) {
                b->readCount = 0x110A;
            }
            readErr = gDBCommTable.read(b->buf, b->readCount) != 0 ? -1 : 0;
            if (readErr != 0) {
                b->readCount = 0;
            }
        }
    }
    if (b->readPos < b->readCount) {
        readErr = 0;
        *c = b->buf[b->readPos++];
    }
    return readErr;
}

s32 fn_800E17E8(u8 arg0) {
    extern s32 lbl_80325D68[];
    extern u8 lbl_80326E84[];
    lbl_80326E84[lbl_80325D68[0]++] = arg0;
    return 0;
}

s32 fn_800E1810(void) {
    extern s32 lbl_80325D68[];
    extern u8 lbl_80326E84[];
    s32 retval = 0;
    s32 result;

    while (lbl_80325D68[0] < 0x800) {
        lbl_80326E84[lbl_80325D68[0]] = 0;
        lbl_80325D68[0]++;
    }
    if (lbl_80325D68[0] != 0) {
        result = gDBCommTable.write(lbl_80326E84, lbl_80325D68[0]);
        retval = result != 0 ? -1 : 0;
        lbl_80325D68[0] = 0;
    }
    return retval;
}

void fn_800E18F0(void) {
    gDBCommTable.initInterrupts();
}

s32 TRKInitializeIntDrivenUART(s32 a0, s32 a1, s32 a2, void *a3) {
    gDBCommTable.initialize(a3, TRKEXICallBack);
    return 0;
}

s32 Hu_IsStub(void);
s32 AMC_IsStub(void);
void DBInitComm();
void DBInitInterrupts();
void DBQueryData();
void DBRead();
void DBWrite();
void DBOpen();
void DBClose();
void EXI2_Init();
void EXI2_EnableInterrupts();
void EXI2_Poll();
void EXI2_ReadN();
void EXI2_WriteN();
void EXI2_Reserve();
void EXI2_Unreserve();
s32 InitMetroTRKCommTable(s32 hwId) {
    s32 result;
    if (hwId == 1) {
        OSReport("MetroTRK : Set to GDEV hardware\n");
        result = Hu_IsStub();
        gDBCommTable.initialize = (void *)DBInitComm;
        gDBCommTable.initInterrupts = (void *)DBInitInterrupts;
        gDBCommTable.peek = (void *)DBQueryData;
        gDBCommTable.read = (void *)DBRead;
        gDBCommTable.write = (void *)DBWrite;
        gDBCommTable.open = (void *)DBOpen;
        gDBCommTable.close = (void *)DBClose;
    } else {
        OSReport("MetroTRK : Set to AMC DDH hardware\n");
        result = AMC_IsStub();
        gDBCommTable.initialize = (void *)EXI2_Init;
        gDBCommTable.initInterrupts = (void *)EXI2_EnableInterrupts;
        gDBCommTable.peek = (void *)EXI2_Poll;
        gDBCommTable.read = (void *)EXI2_ReadN;
        gDBCommTable.write = (void *)EXI2_WriteN;
        gDBCommTable.open = (void *)EXI2_Reserve;
        gDBCommTable.close = (void *)EXI2_Unreserve;
    }
    return result;
}

void OSEnableScheduler(void);
void TRKLoadContext(void *ctx, s32 v);
u8 fn_800E1050(s32, s32, s32 *, s32);
void TRKEXICallBack(s16 chan, void *ctx) {
    OSEnableScheduler();
    TRKLoadContext(ctx, 0x500);
}

s32 TRKTargetContinue(void) {
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}

#pragma push
#pragma dont_inline on
u8 fn_800E1AC8(void) {
    return *lbl_80327F90;
}
#pragma pop

extern u8 lbl_80327F90[];
void fn_800E1AD8(u8 v) {
    lbl_80327F90[0] = v;
}

s32 fn_800E1AE4(s32 arg0) {
    u8 r;
    if (fn_800DEA20() == 0) {
        return 1;
    }
    r = fn_800E1060(0xD3, arg0);
    switch (r) {
    case 0:
        return 0;
    case 2:
        return 2;
    default:
        return 1;
    }
}

void TRKEXICallBack(s16 chan, void *ctx);
s32 fn_800E1B68(s32 arg0, s32 arg1, s32 *arg2) {
    s32 tmp;
    u8 r;
    if (fn_800E1AC8() == 0) {
        return 1;
    }
    if (fn_800DEA20() == 0) {
        return 1;
    }
    tmp = *arg2;
    r = fn_800E1050(0xD0, 1, &tmp, arg1);
    *arg2 = tmp;
    switch (r) {
    case 0:
        return 0;
    case 2:
        return 2;
    default:
        return 1;
    }
}

s32 fn_800E1C24(s32 arg0, s32 arg1, s32 *arg2) {
    s32 tmp;
    u8 r;
    if (fn_800E1AC8() == 0) {
        return 1;
    }
    if (fn_800DEA20() == 0) {
        return 1;
    }
    tmp = *arg2;
    r = fn_800E1050(0xD1, 0, &tmp, arg1);
    *arg2 = tmp;
    switch (r) {
    case 0:
        return 0;
    case 2:
        return 2;
    default:
        return 1;
    }
}

void* __va_arg(struct __va_list_struct* list, int type) {
    char* addr;
    char* curr = &(list->gpr);
    int alignment = 1;
    int g_reg = list->gpr;
    int maxsize = 8;
    int size = 4;
    int increment = 1;
    int even = 0;
    int fpr_offset = 0;
    int regsize = 4;

    if (type == 3) {
        size = 8;
        g_reg = list->fpr;
        curr = &(list->fpr);
        fpr_offset = 32;
        regsize = 8;
    }
    if (type == 2) {
        size = 8;
        maxsize = 7;
        if (g_reg & 1)
            even = 1;
        increment = 2;
    }
    if (g_reg < maxsize) {
        g_reg += even;
        addr = list->reg_save_area + fpr_offset + (g_reg * regsize);
        *curr = g_reg + increment;
    } else {
        *curr = 8;
        addr = list->input_arg_area;
        addr = (char*)(((unsigned int)(addr) + ((size)-1)) & ~((size)-1));
        list->input_arg_area = addr + size;
    }
    if (type == 0)
        addr = *((char**)addr);
    return addr;
}

