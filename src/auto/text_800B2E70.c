/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
#include "trk_priv.h"
#include "trk_ppc_inline.h"
/* Typed views used so the same C matches with GC/1.2.5n (the SDK's compiler) and GC/1.3.2. */
typedef struct GXDataCP { u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim; u32 cpEnable; u32 cpStatus; u32 cpClr; } GXDataCP;
typedef struct GXData7 { u8 pad[0x1EC]; u32 r1EC; u8 pad1F0[0xC]; u32 r1FC; } GXData7;
typedef struct GXData8 { u8 pad[0x204]; u32 r204; u8 pad208[0x5AC - 0x208]; u32 dirty; } GXData8;
typedef struct ThreadQ5 { struct Thread5 *head; struct Thread5 *tail; } ThreadQ5;
typedef struct Thread5 {
    u8 pad[0x2D0];
    s32 priority;
    u8 pad2D4[8];
    ThreadQ5 *queue;
    struct Thread5 *next;
    struct Thread5 *prev;
} Thread5;
typedef struct Alarm6 {
    u32 pad0;
    u32 fire;
    u8 pad8[0x30];
    struct Alarm6 *next;
    struct Alarm6 *prev;
} Alarm6;
extern void (*lbl_8035A940)();
extern void (*lbl_8035A7A0)();
extern void (*lbl_8035A69C)();
s32 fn_800E0C4C(void *, u32, u32 *, s32, s32);
#define __DSPRegs ((volatile u16 *)0xCC005000)
#define __ARDMA(mmem, aram, len, dir)                                                    \
    {                                                                                    \
        __DSPRegs[16] = (u16)((__DSPRegs[16] & ~0x03ff) | (u16)((mmem) >> 16));          \
        __DSPRegs[17] = (u16)((__DSPRegs[17] & ~0xffe0) | (u16)(0xffff & (mmem)));       \
        __DSPRegs[18] = (u16)((__DSPRegs[18] & ~0x03ff) | (u16)((aram) >> 16));          \
        __DSPRegs[19] = (u16)((__DSPRegs[19] & ~0xffe0) | (u16)(0xffff & (aram)));       \
        if (dir) {                                                                       \
            __DSPRegs[20] = (u16)(__DSPRegs[20] | 0x8000);                               \
        } else {                                                                         \
            __DSPRegs[20] = (u16)(__DSPRegs[20] & ~0x8000);                              \
        }                                                                                \
        __DSPRegs[20] = (u16)((__DSPRegs[20] & ~0x03ff) | (u16)((len) >> 16));           \
        __DSPRegs[21] = (u16)((__DSPRegs[21] & ~0xffe0) | (u16)(0xffff & (len)));        \
        while (__DSPRegs[5] & 0x0200) {                                                  \
        }                                                                                \
        __DSPRegs[5] = (u16)((__DSPRegs[5] & ~(0x80 | 0x08)) | 0x20);                    \
    }
#define __ARReadDMA(mmem, aram, len) __ARDMA(mmem, aram, len, 1)
#define __ARWriteDMA(mmem, aram, len) __ARDMA(mmem, aram, len, 0)
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
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    u16 unk38;
    u16 unk3A;
    u16 unk3C;
    u16 unk3E;
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u16 unk52;
    u16 unk54;
    u16 unk56;
    u16 unk58;
    u16 unk5A;
    u16 unk5C;
    u16 unk5E;
} UnkVoice80321D60;
extern UnkVoice80321D60 lbl_80321D60[];
extern u8 lbl_802DE540[];
static inline u16 __MIXGetVolume(s32 db) {
    if (db <= -904) {
        return 0;
    }
    if (db >= 60) {
        return 0xFF64;
    }
    return ((u16 *)(lbl_802DE540 + 0x710))[db];
}
typedef __va_list va_list;
extern int vprintf(const char* fmt, va_list args);
extern u16 lbl_80359550;
extern u32 lbl_8035A7A8;
extern u32 lbl_8035A7AC;
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
        hd->free = DLExtract(hd->free, cell);
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

    hd->allocated = DLAddFront(hd->allocated, cell);
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
    int heap;
    HeapDesc *hd;
    HeapCell *cell;
    u8 *start = (u8 *)((arg0 + 31) & ~31);
    u8 *end = (u8 *)(arg1 & ~31);

    for (heap = 0; heap < lbl_8035A56C; heap++) {
        hd = &((HeapDesc *)lbl_8035A568)[heap];
        if (hd->size < 0) {
            hd->size = end - start;
            cell = (HeapCell *)start;
            cell->prev = NULL;
            cell->next = NULL;
            cell->size = hd->size;
            hd->free = cell;
            hd->allocated = NULL;
            return heap;
        }
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

extern u32 fn_800B7318(u32 mask, u32 current);
u32 __OSMaskInterrupts(u32 global) {
    BOOL enabled;
    u32 prev;
    u32 local;
    u32 mask;

    enabled = OSDisableInterrupts();
    prev = *(u32 *)0x800000C4;
    local = *(u32 *)0x800000C8;
    mask = ~(prev | local) & global;
    global |= prev;
    *(u32 *)0x800000C4 = global;
    while (mask) {
        mask = fn_800B7318(mask, global | local);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

u32 __OSUnmaskInterrupts(u32 global) {
    BOOL enabled;
    u32 prev;
    u32 local;
    u32 mask;

    enabled = OSDisableInterrupts();
    prev = *(u32 *)0x800000C4;
    local = *(u32 *)0x800000C8;
    mask = (prev | local) & global;
    global = prev & ~global;
    *(u32 *)0x800000C4 = global;
    while (mask) {
        mask = fn_800B7318(mask, global | local);
    }
    OSRestoreInterrupts(enabled);
    return prev;
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

void fn_800B981C(Thread5 *thread) {
    extern s32 RunQueueBits_8035A5E8;
    Thread5 *next;
    ThreadQ5 *queue;
    Thread5 *prev;

    next = thread->next;
    queue = thread->queue;
    prev = thread->prev;
    if (next == NULL) {
        queue->tail = prev;
    } else {
        next->prev = prev;
    }
    if (prev == NULL) {
        queue->head = next;
    } else {
        prev->next = next;
    }
    if (queue->head == NULL) {
        RunQueueBits_8035A5E8 &= ~(1 << (0x1F - thread->priority));
    }
    thread->queue = NULL;
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

void OSClearStack(u8 val) {
    u32 value = ((u32)val << 24) | ((u32)val << 16) | ((u32)val << 8) | val;
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

void __init_user(void) { __init_cpp(); }

void fn_800BAA78(UnkHeader_800BAA78 *hdr, u32 x, u32 y) {
    u32 i;
    UnkEntry_800BAA78 *e;
    u8 *data;
    u32 xh;
    u32 y2;
    u32 yh;
    u32 x2;

    y2 = y * 2 + 2;
    x2 = x * 2;
    xh = x >> 1;
    yh = y >> 1;
    e = hdr->entries;
    data = (u8 *)&hdr->entries[hdr->count];
    for (i = 0; i < hdr->count; i++, e++) {
        switch (e->type) {
        case 0:
            e->unk8 = y2;
            e->unkC = 0;
            e->unk10 = x2 + e->unk10;
            e->unk14 = x2 + e->unk14;
            e->unk18 = data;
            data += 0x2E;
            break;
        case 1:
            e->unk8 = x2 + e->unk8;
            e->unkC = x2 + e->unkC;
            e->unk10 = x2 + e->unk10;
            e->unk14 = x2 + e->unk14;
            e->unk18 = data;
            data += 0x2E;
            break;
        case 2:
            e->unk8 = yh;
            e->unkC = 0;
            e->unk10 = xh + e->unk10;
            e->unk14 = xh + e->unk14;
            break;
        case 3:
            e->unk8 = xh + e->unk8;
            e->unkC = xh + e->unkC;
            e->unk10 = xh + e->unk10;
            e->unk14 = xh + e->unk14;
            break;
        case 4:
            e->unk8 = y;
            e->unkC = 0;
            e->unk10 = x + e->unk10;
            e->unk14 = x + e->unk14;
            break;
        case 5:
            e->unk8 = x + e->unk8;
            e->unkC = x + e->unkC;
            e->unk10 = x + e->unk10;
            e->unk14 = x + e->unk14;
            break;
        }
    }
}

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
    d = a->t * (a->prev - a->cur);
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

extern u16 lbl_803084E8[];
extern u64 lbl_8035A708;
void fn_800C168C(u16 dispPosY, u16 dispSizeY, u8 equ, u16 acv, u16 prbOdd, u16 prbEven, u16 psbOdd, u16 psbEven, BOOL black) {
    u16 actualPrbOdd, actualPrbEven, actualPsbOdd, actualPsbEven, actualAcv, c, d;

    if (lbl_803084E8[0x36] & 1) {
        c = 1;
        d = 2;
    } else {
        c = 2;
        d = 1;
    }

    if (dispPosY % 2 == 0) {
        actualPrbOdd = (u16)(prbOdd + d * dispPosY);
        actualPsbOdd = (u16)(psbOdd + d * ((c * acv - dispSizeY) - dispPosY));
        actualPrbEven = (u16)(prbEven + d * dispPosY);
        actualPsbEven = (u16)(psbEven + d * ((c * acv - dispSizeY) - dispPosY));
    } else {
        actualPrbOdd = (u16)(prbEven + d * dispPosY);
        actualPsbOdd = (u16)(psbEven + d * ((c * acv - dispSizeY) - dispPosY));
        actualPrbEven = (u16)(prbOdd + d * dispPosY);
        actualPsbEven = (u16)(psbOdd + d * ((c * acv - dispSizeY) - dispPosY));
    }

    actualAcv = (u16)(dispSizeY / c);

    if (black) {
        actualPrbOdd += 2 * actualAcv - 2;
        actualPsbOdd += 2;
        actualPrbEven += 2 * actualAcv - 2;
        actualPsbEven += 2;
        actualAcv = 0;
    }

    lbl_803084E8[0] = (u16)(equ | (actualAcv << 4));
    lbl_8035A708 |= 0x8000000000000000ULL;
    lbl_803084E8[7] = actualPrbOdd;
    lbl_8035A708 |= 0x0100000000000000ULL;
    lbl_803084E8[6] = actualPsbOdd;
    lbl_8035A708 |= 0x0200000000000000ULL;
    lbl_803084E8[9] = actualPrbEven;
    lbl_8035A708 |= 0x0040000000000000ULL;
    lbl_803084E8[8] = actualPsbEven;
    lbl_8035A708 |= 0x0080000000000000ULL;
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

void fn_800C2AC4(s32 chan) {
    extern u8 lbl_80308640[][0xC];
    extern u32 lbl_803595B8;
    extern u32 lbl_803595BC;
    u32 SIGetType(s32 siChan);
    u8 *origin;
    u32 chanBit;

    origin = lbl_80308640[chan];
    chanBit = 0x80000000 >> chan;
    switch (lbl_803595BC & 0x700) {
    case 0x000:
    case 0x500:
    case 0x600:
    case 0x700:
        origin[6] &= ~15;
        origin[7] &= ~15;
        origin[8] &= ~15;
        origin[9] &= ~15;
        break;
    case 0x100:
        origin[4] &= ~15;
        origin[5] &= ~15;
        origin[8] &= ~15;
        origin[9] &= ~15;
        break;
    case 0x200:
        origin[4] &= ~15;
        origin[5] &= ~15;
        origin[6] &= ~15;
        origin[7] &= ~15;
        break;
    case 0x300:
        break;
    case 0x400:
        break;
    }

    origin[2] -= 128;
    origin[3] -= 128;
    origin[4] -= 128;
    origin[5] -= 128;

    if (lbl_803595B8 & chanBit) {
        if (64 < (s8)origin[2] && (SIGetType(chan) & 0xFFFF0000) == 0x09000000) {
            origin[2] = 0;
        }
    }
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
    BOOL enabled;
    u32 chanBit;

    enabled = OSDisableInterrupts();
    chanBit = 0x80000000U >> chan;
    if ((lbl_8035A73C & chanBit) && !(SIGetType(chan) & 0x20000000)) {
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
    *(u16*)status = 0;
    *(u16*)status |= ((data[0] >> 16) & 0x0008) ? 0x0100 : 0;
    *(u16*)status |= ((data[0] >> 16) & 0x0020) ? 0x0200 : 0;
    *(u16*)status |= ((data[0] >> 16) & 0x0100) ? 0x0400 : 0;
    *(u16*)status |= ((data[0] >> 16) & 0x0001) ? 0x0800 : 0;
    *(u16*)status |= ((data[0] >> 16) & 0x0010) ? 0x1000 : 0;

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
    *(u16 *)status = 0;
    *(u16 *)status |= ((data[0] >> 16) & 0x80) ? 0x100 : 0;
    *(u16 *)status |= ((data[0] >> 16) & 0x100) ? 0x200 : 0;
    *(u16 *)status |= ((data[0] >> 16) & 0x20) ? 0x400 : 0;
    *(u16 *)status |= ((data[0] >> 16) & 0x10) ? 0x800 : 0;
    *(u16 *)status |= ((data[0] >> 16) & 0x200) ? 0x1000 : 0;
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

#pragma push
#pragma peephole off
void fn_800C3ED8(s32 chan, void *status, void *data) {
    extern u8 lbl_80308640[][0xC];
    extern u32 lbl_803595BC;
    u8 *s = status;
    u32 *d = data;
    u8 *origin;
    *(u16 *)s = (d[0] >> 16) & 0x3FFF;
    ((s8 *)s)[2] = (s8)(d[0] >> 8);
    ((s8 *)s)[3] = (s8)d[0];
    switch (lbl_803595BC & 0x700) {
    case 0: case 0x500: case 0x600: case 0x700:
        ((s8 *)s)[4] = (s8)(d[1] >> 24); ((s8 *)s)[5] = (s8)(d[1] >> 16);
        s[6] = (d[1] >> 8) & 0xF0; s[7] = (d[1] >> 4) & 0xF0;
        s[8] = d[1] & 0xF0; s[9] = (d[1] << 4) & 0xF0;
        break;
    case 0x100:
        ((s8 *)s)[4] = (s8)((d[1] >> 24) & 0xF0); ((s8 *)s)[5] = (s8)((d[1] >> 20) & 0xF0);
        s[6] = (d[1] >> 16) & 255; s[7] = (d[1] >> 8) & 255;
        s[8] = d[1] & 0xF0; s[9] = (d[1] << 4) & 0xF0;
        break;
    case 0x200:
        ((s8 *)s)[4] = (s8)((d[1] >> 24) & 0xF0); ((s8 *)s)[5] = (s8)((d[1] >> 20) & 0xF0);
        s[6] = (d[1] >> 16) & 0xF0; s[7] = (d[1] >> 12) & 0xF0;
        s[8] = (d[1] >> 8) & 255; s[9] = d[1] & 255;
        break;
    case 0x300:
        ((s8 *)s)[4] = (s8)(d[1] >> 24); ((s8 *)s)[5] = (s8)(d[1] >> 16);
        s[6] = (d[1] >> 8) & 255; s[7] = d[1] & 255; s[8] = 0; s[9] = 0;
        break;
    case 0x400:
        ((s8 *)s)[4] = (s8)(d[1] >> 24); ((s8 *)s)[5] = (s8)(d[1] >> 16);
        s[6] = 0; s[7] = 0; s[8] = (d[1] >> 8) & 255; s[9] = d[1] & 255;
        break;
    }
#pragma peephole on
    s[2] -= 128;
    origin = lbl_80308640[chan];
    s[3] -= 128; s[4] -= 128; s[5] -= 128;
    {
        u8 base = origin[2];
        u8 value = s[2];
        if ((s8)base > 0) {
            s8 limit = (s8)base - 128;
            if ((s8)value < limit) value = limit;
        } else if ((s8)base < 0) {
            s8 limit = (s8)base + 127;
            if (limit < (s8)value) value = limit;
        }
        s[2] = value - base;
    }
    {
        u8 base = origin[3];
        u8 value = s[3];
        if ((s8)base > 0) {
            s8 limit = (s8)base - 128;
            if ((s8)value < limit) value = limit;
        } else if ((s8)base < 0) {
            s8 limit = (s8)base + 127;
            if (limit < (s8)value) value = limit;
        }
        s[3] = value - base;
    }
    {
        u8 base = origin[4];
        u8 value = s[4];
        if ((s8)base > 0) {
            s8 limit = (s8)base - 128;
            if ((s8)value < limit) value = limit;
        } else if ((s8)base < 0) {
            s8 limit = (s8)base + 127;
            if (limit < (s8)value) value = limit;
        }
        s[4] = value - base;
    }
    {
        u8 base = origin[5];
        u8 value = s[5];
        if ((s8)base > 0) {
            s8 limit = (s8)base - 128;
            if ((s8)value < limit) value = limit;
        } else if ((s8)base < 0) {
            s8 limit = (s8)base + 127;
            if (limit < (s8)value) value = limit;
        }
        s[5] = value - base;
    }
    {
        u8 base = origin[6];
        u8 value = s[6];
        if (value < base) value = base;
        s[6] = value - base;
    }
    {
        u8 base = origin[7];
        u8 value = s[7];
        if (value < base) value = base;
        s[7] = value - base;
    }
}
#pragma pop
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

extern unsigned int lbl_8035A764;
unsigned int fn_800C4594(unsigned int arg0) {
    unsigned int old = lbl_8035A764;
    int enabled = OSDisableInterrupts();
    lbl_8035A764 = arg0;
    OSRestoreInterrupts(enabled);
    return old;
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
            fn_800C69D8(0, lbl_8035A7A8);
        }
        break;
    case 1:
        if (lbl_8035A7A8 != 0) {
            fn_800C69D8(0x4000, lbl_8035A7A8 - 0x4000);
        }
        break;
    case 2:
        if (lbl_8035A7A8 != 0 && lbl_8035A7AC != 0) {
            fn_800C69D8(lbl_8035A7A8, lbl_8035A7AC);
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

void fn_800C51E4(void) {
    extern u32 lbl_8035A7A4;
    extern void DCFlushRange(void *, u32);
    extern void DCInvalidateRange(void *, u32);
    extern void *memset(void *, int, unsigned long);
    extern void fn_800B2EA8(void);
    u8 test_data_pad[0x20 + 31];
    u8 dummy_data_pad[0x20 + 31];
    u8 buffer_pad[0x20 + 31];
    u8 save_pad_1[0x20 + 31];
    u8 save_pad_2[0x20 + 31];
    u8 save_pad_3[0x20 + 31];
    u8 save_pad_4[0x20 + 31];
    u8 save_pad_5[0x20 + 31];
    u32 *test_data;
    u32 *dummy_data;
    u32 *buffer;
    u32 *save1;
    u32 *save2;
    u32 *save3;
    u32 *save4;
    u32 *save5;
    u16 ARAM_mode = 0;
    u32 ARAM_size = 0;
    u32 i;

    while (!(__DSPRegs[11] & 1)) {
    }

    ARAM_mode = 3;
    ARAM_size = lbl_8035A7A8 = 0x1000000;
    __DSPRegs[9] = (u16)((__DSPRegs[9] & ~(0x00000007 | 0x00000038)) | 0x20 | 2 | 1);

    test_data = (u32 *)(((u32)test_data_pad + 31) & ~31);
    dummy_data = (u32 *)(((u32)dummy_data_pad + 31) & ~31);
    buffer = (u32 *)(((u32)buffer_pad + 31) & ~31);
    save1 = (u32 *)(((u32)save_pad_1 + 31) & ~31);
    save2 = (u32 *)(((u32)save_pad_2 + 31) & ~31);
    save3 = (u32 *)(((u32)save_pad_3 + 31) & ~31);
    save4 = (u32 *)(((u32)save_pad_4 + 31) & ~31);
    save5 = (u32 *)(((u32)save_pad_5 + 31) & ~31);

    for (i = 0; i < 8; i++) {
        *(test_data + i) = 0xdeadbeef;
        *(dummy_data + i) = 0xbad0bad0;
    }

    DCFlushRange((void *)test_data, 0x20);
    DCFlushRange((void *)dummy_data, 0x20);

    lbl_8035A7AC = 0;

    DCInvalidateRange((void *)save1, 0x20);
    __ARReadDMA((u32)save1, ARAM_size + 0, 0x20);
    fn_800B2EA8();

    __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

    memset((void *)buffer, 0, 0x20);
    DCFlushRange((void *)buffer, 0x20);

    __ARReadDMA((u32)buffer, ARAM_size + 0x0000000, 0x20);
    fn_800B2EA8();

    if (buffer[0] == test_data[0]) {
        DCInvalidateRange((void *)save2, 0x20);
        __ARReadDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
        fn_800B2EA8();

        DCInvalidateRange((void *)save3, 0x20);
        __ARReadDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
        fn_800B2EA8();

        DCInvalidateRange((void *)save4, 0x20);
        __ARReadDMA((u32)save4, ARAM_size + 0x0000200, 0x20);
        fn_800B2EA8();

        DCInvalidateRange((void *)save5, 0x20);
        __ARReadDMA((u32)save5, ARAM_size + 0x0400000, 0x20);
        fn_800B2EA8();

        __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0200000, 0x20);
        __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

        memset((void *)buffer, 0, 0x20);
        DCFlushRange((void *)buffer, 0x20);

        __ARReadDMA((u32)buffer, ARAM_size + 0x0200000, 0x20);
        fn_800B2EA8();

        if (buffer[0] == test_data[0]) {
            __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);

            ARAM_mode |= 0 << 1;
            ARAM_size += 0x0200000;
            lbl_8035A7AC = 0x0200000;
        } else {
            __ARWriteDMA((u32)dummy_data, ARAM_size + 0x1000000, 0x20);
            __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

            memset((void *)buffer, 0, 0x20);
            DCFlushRange((void *)buffer, 0x20);

            __ARReadDMA((u32)buffer, ARAM_size + 0x1000000, 0x20);
            fn_800B2EA8();

            if (buffer[0] == test_data[0]) {
                __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);

                ARAM_mode |= 4 << 1;
                ARAM_size += 0x0400000;
                lbl_8035A7AC = 0x0400000;
            } else {
                __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0000200, 0x20);
                __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

                memset((void *)buffer, 0, 0x20);
                DCFlushRange((void *)buffer, 0x20);

                __ARReadDMA((u32)buffer, ARAM_size + 0x0000200, 0x20);
                fn_800B2EA8();

                if (buffer[0] == test_data[0]) {
                    __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                    __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                    __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);

                    ARAM_mode |= 8 << 1;
                    ARAM_size += 0x0800000;
                    lbl_8035A7AC = 0x0800000;
                } else {
                    __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0400000, 0x20);
                    __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

                    memset((void *)buffer, 0, 0x20);
                    DCFlushRange((void *)buffer, 0x20);

                    __ARReadDMA((u32)buffer, ARAM_size + 0x0400000, 0x20);
                    fn_800B2EA8();

                    if (buffer[0] == test_data[0]) {
                        __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                        __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                        __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
                        __ARWriteDMA((u32)save4, ARAM_size + 0x0000200, 0x20);

                        ARAM_mode |= 12 << 1;
                        ARAM_size += 0x1000000;
                        lbl_8035A7AC = 0x1000000;
                    } else {
                        __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                        __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                        __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
                        __ARWriteDMA((u32)save4, ARAM_size + 0x0000200, 0x20);
                        __ARWriteDMA((u32)save5, ARAM_size + 0x0400000, 0x20);

                        ARAM_mode |= 16 << 1;
                        ARAM_size += 0x2000000;
                        lbl_8035A7AC = 0x2000000;
                    }
                }
            }
        }
        __DSPRegs[9] = (u16)((__DSPRegs[9] & ~(0x07 | 0x38)) | ARAM_mode);
    }

    *(u32 *)0xC00000D0 = ARAM_size;
    lbl_8035A7A4 = ARAM_size;
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
    lbl_8035A7E8 = 0;
    for (i = 0; i < 32; i++) {
        lbl_80308700[i] = 0;
        lbl_80308680[i] = 0;
    }
}

void fn_800C70AC(void) {
    u32 i;
    lbl_8035A7E8 = 0;
    for (i = 0; i < 32; i++) {
        lbl_80308700[i] = 0;
        lbl_80308680[i] = 0;
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
    s32 idx = *(s32*)((u8*)arg0 + 0xC);
    void** head = &((void**)lbl_80308680)[idx];
    void** tail = &((void**)lbl_80308700)[idx];

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
    u8 *ret = lbl_8030B480 + lbl_8035A828++ * 0x300;
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

extern void fn_800C9480(u32 arg);
extern void fn_800C8870(void);
extern s32 fn_800CC114(void);
extern void fn_800CC14C(u32 value);
extern void fn_800C7728(void);
extern void fn_800C79A8(void *, void *);
extern s32 fn_800C8D2C(void);
extern void *fn_800C9EC4(void);
extern void fn_800C45D8(void *buf, u32 len);
extern u8 lbl_8030BA80[0x5000];
extern u32 lbl_8035A840;
void fn_800C8094(u32 arg0) {
    typedef struct { u8 b[0x38]; } Unk38;
    extern void (*lbl_8035A858)(void);
    extern u32 lbl_8035A870;
    u8 *base = lbl_8030BA80;
    u8 *r;
    Unk38 *dst;

    *(u64 *)(base + 0x4A50) = OSGetTime();
    fn_800C9480(arg0);
    fn_800C8870();
    r = fn_800C796C();
    fn_800CC14C(0xBABE0180);
    while (fn_800CC114() != 0) {
    }
    fn_800CC14C((u32)r);
    while (fn_800CC114() != 0) {
    }
    fn_800C6F84();
    *(u64 *)(base + 0x4A58) = OSGetTime();
    fn_800C7728();
    *(u64 *)(base + 0x4A60) = OSGetTime();
    *(u64 *)(base + 0x4A68) = OSGetTime();
    if (lbl_8035A858 != NULL) {
        lbl_8035A858();
    }
    *(u64 *)(base + 0x4A70) = OSGetTime();
    fn_800C79A8(base + 0x780, base + lbl_8035A840 * 0x280);
    lbl_8035A840++;
    if (lbl_8035A870 == 1) {
        lbl_8035A840 = lbl_8035A840 % 3;
    } else {
        lbl_8035A840 = lbl_8035A840 & 1;
        fn_800C45D8(base + lbl_8035A840 * 0x280, 0x280);
    }
    *(u64 *)(base + 0x4A78) = OSGetTime();
    *(s32 *)(base + 0x4A80) = fn_800C8D2C();
    dst = fn_800C9EC4();
    if (dst != NULL) {
        *dst = *(Unk38 *)(base + 0x4A50);
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

typedef struct { u32 w[0x34]; } AXPBAll;
typedef struct { u32 w[4]; } AXPBAddrCopy;
typedef struct { u32 w[10]; } AXPBAdpcmCopy;
extern u8 lbl_80310560[];

extern s32 lbl_8035A8A8;
s32 fn_800C8D2C(void) {
    return lbl_8035A8A8;
}

void fn_800C8D34(u8 *pvpb) {
    u8 *dsp;
    u8 *user;
    u32 sync;

    lbl_8035A8A8++;
    user = pvpb + 0x138;
    sync = *(u32 *)(pvpb + 0x1C);
    dsp = lbl_80310560 + *(u32 *)(pvpb + 0x18) * 0xF4;

    if (sync == 0) {
        *(u16 *)(user + 0xE) = *(u16 *)(dsp + 0xE);
        *(u16 *)(user + 0x64) = *(u16 *)(dsp + 0x64);
        *(u16 *)(user + 0x7A) = *(u16 *)(dsp + 0x7A);
        *(u16 *)(user + 0x7C) = *(u16 *)(dsp + 0x7C);
        return;
    }

    if (sync & 0x80000000) {
        u32 *s = (u32 *)user;
        u32 *d = (u32 *)dsp;
        d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; d[3] = s[3];
        d[4] = s[4]; d[5] = s[5]; d[6] = s[6]; d[7] = s[7];
        d[8] = s[8]; d[9] = s[9]; d[10] = s[10]; d[11] = s[11];
        d[12] = s[12]; d[13] = s[13]; d[14] = s[14]; d[15] = s[15];
        d[16] = s[16]; d[17] = s[17]; d[18] = s[18]; d[19] = s[19];
        d[20] = s[20]; d[21] = s[21]; d[22] = s[22]; d[23] = s[23];
        d[24] = s[24]; d[25] = s[25]; d[26] = s[26]; d[27] = s[27];
        d[28] = s[28]; d[29] = s[29]; d[30] = s[30]; d[31] = s[31];
        d[32] = s[32]; d[33] = s[33]; d[34] = s[34]; d[35] = s[35];
        d[36] = s[36]; d[37] = s[37]; d[38] = s[38]; d[39] = s[39];
        d[40] = s[40]; d[41] = s[41]; d[42] = s[42]; d[43] = s[43];
        d[44] = s[44]; d[45] = s[45]; d[46] = s[46]; d[47] = s[47];
        d[48] = s[48]; d[49] = s[49]; d[50] = s[50]; d[51] = s[51];
        if (*(u32 *)(pvpb + 0x28) != 0) {
            u32 count;
            u32 *dst = (u32 *)(pvpb + 0x34);
            u32 *src = (u32 *)(lbl_80310560 + 0x4D00 + (*(u32 *)(pvpb + 0x18) << 8));
            for (count = *(u32 *)(pvpb + 0x28); count != 0; count--) {
                *dst++ = *src++;
            }
        }
    } else {
        if (sync & 0x1) {
            *(u16 *)(dsp + 0x8) = *(u16 *)(user + 0x8);
            *(u16 *)(dsp + 0xA) = *(u16 *)(user + 0xA);
        }
        if (sync & 0x2) {
            *(u16 *)(dsp + 0xC) = *(u16 *)(user + 0xC);
        }
        if (sync & 0x4) {
            *(u16 *)(dsp + 0xE) = *(u16 *)(user + 0xE);
        } else {
            *(u16 *)(user + 0xE) = *(u16 *)(dsp + 0xE);
        }
        if (sync & 0x8) {
            *(u16 *)(dsp + 0x10) = *(u16 *)(user + 0x10);
        }
        if (sync & 0x10) {
            *(u16 *)(dsp + 0x12) = *(u16 *)(user + 0x12);
            *(u16 *)(dsp + 0x14) = *(u16 *)(user + 0x14);
            *(u16 *)(dsp + 0x16) = *(u16 *)(user + 0x16);
            *(u16 *)(dsp + 0x18) = *(u16 *)(user + 0x18);
            *(u16 *)(dsp + 0x1A) = *(u16 *)(user + 0x1A);
            *(u16 *)(dsp + 0x1C) = *(u16 *)(user + 0x1C);
            *(u16 *)(dsp + 0x1E) = *(u16 *)(user + 0x1E);
            *(u16 *)(dsp + 0x20) = *(u16 *)(user + 0x20);
            *(u16 *)(dsp + 0x22) = *(u16 *)(user + 0x22);
            *(u16 *)(dsp + 0x24) = *(u16 *)(user + 0x24);
            *(u16 *)(dsp + 0x26) = *(u16 *)(user + 0x26);
            *(u16 *)(dsp + 0x28) = *(u16 *)(user + 0x28);
            *(u16 *)(dsp + 0x2A) = *(u16 *)(user + 0x2A);
            *(u16 *)(dsp + 0x2C) = *(u16 *)(user + 0x2C);
            *(u16 *)(dsp + 0x2E) = *(u16 *)(user + 0x2E);
            *(u16 *)(dsp + 0x30) = *(u16 *)(user + 0x30);
            *(u16 *)(dsp + 0x32) = *(u16 *)(user + 0x32);
            *(u16 *)(dsp + 0x34) = *(u16 *)(user + 0x34);
        }
        if (sync & 0x40) {
            *(u16 *)(dsp + 0x40) = *(u16 *)(user + 0x40);
            *(u16 *)(dsp + 0x42) = *(u16 *)(user + 0x42);
        } else if (sync & 0x20) {
            u32 *itd;
            *(u16 *)(dsp + 0x36) = *(u16 *)(user + 0x36);
            *(u16 *)(dsp + 0x38) = *(u16 *)(user + 0x38);
            *(u16 *)(dsp + 0x3A) = *(u16 *)(user + 0x3A);
            *(u16 *)(dsp + 0x3C) = *(u16 *)(user + 0x3C);
            *(u16 *)(dsp + 0x3E) = *(u16 *)(user + 0x3E);
            *(u16 *)(dsp + 0x40) = *(u16 *)(user + 0x40);
            *(u16 *)(dsp + 0x42) = *(u16 *)(user + 0x42);
            itd = *(u32 **)(pvpb + 0x134);
            itd[0] = 0;
            itd[1] = 0;
            itd[2] = 0;
            itd[3] = 0;
            itd[4] = 0;
            itd[5] = 0;
            itd[6] = 0;
            itd[7] = 0;
            itd[8] = 0;
            itd[9] = 0;
            itd[10] = 0;
            itd[11] = 0;
            itd[12] = 0;
            itd[13] = 0;
            itd[14] = 0;
            itd[15] = 0;
        }
        if (sync & 0x80) {
            *(u16 *)(dsp + 0x44) = *(u16 *)(user + 0x44);
            *(u16 *)(dsp + 0x46) = *(u16 *)(user + 0x46);
            *(u16 *)(dsp + 0x48) = *(u16 *)(user + 0x48);
            *(u16 *)(dsp + 0x4A) = *(u16 *)(user + 0x4A);
            *(u16 *)(dsp + 0x4C) = *(u16 *)(user + 0x4C);
            if (*(u32 *)(pvpb + 0x28) != 0) {
                u32 count;
                u32 *src = (u32 *)(pvpb + 0x34);
                u32 *dst = (u32 *)(lbl_80310560 + 0x4D00 + (*(u32 *)(pvpb + 0x18) << 8));
                for (count = *(u32 *)(pvpb + 0x28); count != 0; count--) {
                    *dst++ = *src++;
                }
            }
        }
        if (sync & 0x100) {
            *(u16 *)(dsp + 0x52) = *(u16 *)(user + 0x52);
            *(u16 *)(dsp + 0x54) = *(u16 *)(user + 0x54);
            *(u16 *)(dsp + 0x56) = *(u16 *)(user + 0x56);
            *(u16 *)(dsp + 0x58) = *(u16 *)(user + 0x58);
            *(u16 *)(dsp + 0x5A) = *(u16 *)(user + 0x5A);
            *(u16 *)(dsp + 0x5C) = *(u16 *)(user + 0x5C);
            *(u16 *)(dsp + 0x5E) = *(u16 *)(user + 0x5E);
            *(u16 *)(dsp + 0x60) = *(u16 *)(user + 0x60);
            *(u16 *)(dsp + 0x62) = *(u16 *)(user + 0x62);
        }
        if (sync & 0x400) {
            *(u16 *)(user + 0x64) = *(u16 *)(dsp + 0x64);
            *(s16 *)(dsp + 0x66) = *(s16 *)(user + 0x66);
        } else if (sync & 0x200) {
            *(u16 *)(dsp + 0x64) = *(u16 *)(user + 0x64);
            *(s16 *)(dsp + 0x66) = *(s16 *)(user + 0x66);
        }
        if (sync & 0x800) {
            *(u16 *)(dsp + 0x68) = *(u16 *)(user + 0x68);
            *(u16 *)(dsp + 0x6A) = *(u16 *)(user + 0x6A);
            *(u16 *)(dsp + 0x6C) = *(u16 *)(user + 0x6C);
        }
        if (sync & 0x1E000) {
            if (sync & 0x2000) {
                *(u16 *)(dsp + 0x6E) = *(u16 *)(user + 0x6E);
            }
            if (sync & 0x4000) {
                *(u32 *)(dsp + 0x72) = *(u32 *)(user + 0x72);
            }
            if (sync & 0x8000) {
                *(u32 *)(dsp + 0x76) = *(u32 *)(user + 0x76);
            }
            if (sync & 0x10000) {
                *(u32 *)(dsp + 0x7A) = *(u32 *)(user + 0x7A);
            } else {
                *(u32 *)(user + 0x7A) = *(u32 *)(dsp + 0x7A);
            }
        } else if (sync & 0x1000) {
            *(AXPBAddrCopy *)(dsp + 0x6E) = *(AXPBAddrCopy *)(user + 0x6E);
        } else {
            *(u16 *)(user + 0x7A) = *(u16 *)(dsp + 0x7A);
            *(u16 *)(user + 0x7C) = *(u16 *)(dsp + 0x7C);
        }
        if (sync & 0x20000) {
            *(AXPBAdpcmCopy *)(dsp + 0x7E) = *(AXPBAdpcmCopy *)(user + 0x7E);
        }
        if (sync & 0x80000) {
            *(u16 *)(dsp + 0xA6) = *(u16 *)(user + 0xA6);
            *(u16 *)(dsp + 0xA8) = *(u16 *)(user + 0xA8);
        } else if (sync & 0x40000) {
            *(u16 *)(dsp + 0xA6) = *(u16 *)(user + 0xA6);
            *(u16 *)(dsp + 0xA8) = *(u16 *)(user + 0xA8);
            *(u16 *)(dsp + 0xAA) = *(u16 *)(user + 0xAA);
            *(u16 *)(dsp + 0xAC) = *(u16 *)(user + 0xAC);
            *(u16 *)(dsp + 0xAE) = *(u16 *)(user + 0xAE);
            *(u16 *)(dsp + 0xB0) = *(u16 *)(user + 0xB0);
            *(u16 *)(dsp + 0xB2) = *(u16 *)(user + 0xB2);
        }
        if (sync & 0x100000) {
            *(u16 *)(dsp + 0xB4) = *(u16 *)(user + 0xB4);
            *(u16 *)(dsp + 0xB6) = *(u16 *)(user + 0xB6);
            *(u16 *)(dsp + 0xB8) = *(u16 *)(user + 0xB8);
        }
        if (sync & 0x400000) {
            *(u16 *)(dsp + 0xBE) = *(u16 *)(user + 0xBE);
            *(u16 *)(dsp + 0xC0) = *(u16 *)(user + 0xC0);
        } else if (sync & 0x200000) {
            *(u16 *)(dsp + 0xBA) = *(u16 *)(user + 0xBA);
            *(u16 *)(dsp + 0xBC) = *(u16 *)(user + 0xBC);
            *(u16 *)(dsp + 0xBE) = *(u16 *)(user + 0xBE);
            *(u16 *)(dsp + 0xC0) = *(u16 *)(user + 0xC0);
        }
    }
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
 u32 ratio;
 s32 enabled;
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

void fn_800CA0A0(u8 *arg0, u32 mode, s32 input, s32 auxA, s32 auxB, s32 pan, s32 span, s32 fader) {
    void fn_800C9F0C(void *);
    s32 old;
    UnkVoice80321D60 *c;
    u16 mixerCtrl;
    u16 *p;

    c = &lbl_80321D60[*(s32 *)(arg0 + 0x18)];
    c->unk0 = (s32)arg0;
    c->unk4 = mode & 7;
    c->unk8 = input;
    c->unkC = auxA;
    c->unk10 = auxB;
    c->unk14 = pan;
    c->unk18 = span;
    c->unk1C = fader;

    fn_800C9F0C(c);

    if (c->unk4 & 4) {
        c->unk38 = 0;
    } else {
        c->unk38 = __MIXGetVolume(input);
    }

    mixerCtrl = 0;

    switch (lbl_8035A8C8) {
    case 0:
        c->unk3C = __MIXGetVolume(c->unk1C + c->unk28);
        c->unk40 = __MIXGetVolume(c->unk1C + c->unk28);
        c->unk44 = __MIXGetVolume(c->unk1C + (c->unk2C - 30));
        if (c->unk4 & 1) {
            c->unk48 = __MIXGetVolume(c->unkC + c->unk28);
            c->unk4C = __MIXGetVolume(c->unkC + c->unk28);
            c->unk50 = __MIXGetVolume(c->unkC + (c->unk2C - 30));
        } else {
            c->unk48 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk28));
            c->unk4C = __MIXGetVolume(c->unk1C + (c->unkC + c->unk28));
            c->unk50 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk2C - 30));
        }
        if (c->unk4 & 2) {
            c->unk54 = __MIXGetVolume(c->unk10 + c->unk28);
            c->unk58 = __MIXGetVolume(c->unk10 + c->unk28);
            c->unk5C = __MIXGetVolume(c->unk10 + (c->unk2C - 30));
        } else {
            c->unk54 = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk28));
            c->unk58 = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk28));
            c->unk5C = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk2C - 30));
        }
        break;
    case 1:
    case 2:
        c->unk3C = __MIXGetVolume(c->unk1C + (c->unk20 + c->unk28));
        c->unk40 = __MIXGetVolume(c->unk1C + (c->unk24 + c->unk28));
        c->unk44 = __MIXGetVolume(c->unk1C + (c->unk2C - 30));
        if (c->unk4 & 1) {
            c->unk48 = __MIXGetVolume(c->unkC + (c->unk20 + c->unk28));
            c->unk4C = __MIXGetVolume(c->unkC + (c->unk24 + c->unk28));
            c->unk50 = __MIXGetVolume(c->unkC + (c->unk2C - 30));
        } else {
            c->unk48 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk20 + c->unk28));
            c->unk4C = __MIXGetVolume(c->unk1C + (c->unkC + c->unk24 + c->unk28));
            c->unk50 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk2C - 30));
        }
        if (c->unk4 & 2) {
            c->unk54 = __MIXGetVolume(c->unk10 + (c->unk20 + c->unk28));
            c->unk58 = __MIXGetVolume(c->unk10 + (c->unk24 + c->unk28));
            c->unk5C = __MIXGetVolume(c->unk10 + (c->unk2C - 30));
        } else {
            c->unk54 = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk20 + c->unk28));
            c->unk58 = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk24 + c->unk28));
            c->unk5C = __MIXGetVolume(c->unk1C + (c->unk10 + c->unk2C - 30));
        }
        break;
    case 3:
        c->unk3C = __MIXGetVolume(c->unk1C + (c->unk20 + c->unk28));
        c->unk40 = __MIXGetVolume(c->unk1C + (c->unk24 + c->unk28));
        c->unk54 = __MIXGetVolume(c->unk1C + (c->unk30 + c->unk2C));
        c->unk58 = __MIXGetVolume(c->unk1C + (c->unk34 + c->unk2C));
        if (c->unk4 & 1) {
            c->unk48 = __MIXGetVolume(c->unkC + (c->unk20 + c->unk28));
            c->unk4C = __MIXGetVolume(c->unkC + (c->unk24 + c->unk28));
            c->unk50 = __MIXGetVolume(c->unkC + (c->unk30 + c->unk2C));
            c->unk5C = __MIXGetVolume(c->unkC + (c->unk34 + c->unk2C));
        } else {
            c->unk48 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk20 + c->unk28));
            c->unk4C = __MIXGetVolume(c->unk1C + (c->unkC + c->unk24 + c->unk28));
            c->unk50 = __MIXGetVolume(c->unk1C + (c->unkC + c->unk30 + c->unk2C));
            c->unk5C = __MIXGetVolume(c->unk1C + (c->unkC + c->unk34 + c->unk2C));
        }
        mixerCtrl = 0x4000;
        break;
    }

    old = OSDisableInterrupts();
    *(u16 *)(arg0 + 0x19C) = c->unk38;
    *(u16 *)(arg0 + 0x19E) = 0;
    p = (u16 *)(arg0 + 0x14A);
    if ((*p++ = c->unk3C)) mixerCtrl |= 0x1;
    *p++ = 0;
    if ((*p++ = c->unk40)) mixerCtrl |= 0x2;
    *p++ = 0;
    if ((*p++ = c->unk48)) mixerCtrl |= 0x10;
    *p++ = 0;
    if ((*p++ = c->unk4C)) mixerCtrl |= 0x20;
    *p++ = 0;
    if ((*p++ = c->unk54)) mixerCtrl |= 0x200;
    *p++ = 0;
    if ((*p++ = c->unk58)) mixerCtrl |= 0x400;
    *p++ = 0;
    if ((*p++ = c->unk5C)) mixerCtrl |= 0x1000;
    *p++ = 0;
    if ((*p++ = c->unk44)) mixerCtrl |= 0x4;
    *p++ = 0;
    if ((*p++ = c->unk50)) mixerCtrl |= 0x80;
    *p++ = 0;
    *(u16 *)(arg0 + 0x144) = mixerCtrl;
    *(u32 *)(arg0 + 0x1C) |= 0x212;
    OSRestoreInterrupts(old);
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

void fn_800CCB44(Alarm6 *arg0) {
    extern Alarm6 *lbl_8035A8E4;
    extern Alarm6 *lbl_8035A8E8;
    extern Alarm6 *lbl_8035A8EC;
    Alarm6 *q;

    if (lbl_8035A8E8 == NULL) {
        lbl_8035A8EC = arg0;
        lbl_8035A8E4 = arg0;
        lbl_8035A8E8 = arg0;
        arg0->prev = NULL;
        arg0->next = NULL;
        return;
    }
    for (q = lbl_8035A8E8; q != NULL; q = q->next) {
        if (arg0->fire < q->fire) {
            arg0->prev = q->prev;
            q->prev = arg0;
            arg0->next = q;
            if (arg0->prev == NULL) {
                lbl_8035A8E8 = arg0;
            } else {
                arg0->prev->next = arg0;
            }
            break;
        }
    }
    if (q == NULL) {
        lbl_8035A8E4->next = arg0;
        arg0->next = NULL;
        arg0->prev = lbl_8035A8E4;
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
    cmd = enable ? 0x81010000 : 0x81000000;
    err = !EXIImm(chan, &cmd, 2, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) return -3;
    return 0;
}

s32 fn_800CD17C(s32 chan) {
    s32 EXISelect(s32, s32, s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXISync(s32);
    s32 EXIDeselect(s32);
    u32 cmd;
    s32 err;
    if (!EXISelect(chan, 0, 4)) return -3;
    cmd = 0x89000000;
    err = !EXIImm(chan, &cmd, 1, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) return -3;
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

u32 fn_800CDFE0(u32 data) {
    u32 wk;
    u32 i;
    u32 k = 0;
    u32 j = 1;

    wk = 0;
    for (i = 0; i < 32; i++) {
        if (i > 15) {
            if (i == 31) {
                wk |= (((data & (0x01 << 31)) >> 31) & 0x01);
            } else {
                wk |= ((data & (0x01 << i)) >> j);
                j += 2;
            }
        } else {
            wk |= ((data & (0x01 << i)) << (31 - i - k));
            k++;
        }
    }
    return wk;
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

void fn_800CFB28(void *ptr, int length, u16 *checksum, u16 *checksumInv) {
    u16 *p;
    int i;

    length /= sizeof(u16);
    *checksum = *checksumInv = 0;
    for (i = 0, p = ptr; i < length; i++, p++) {
        *checksum += *p;
        *checksumInv += ~*p;
    }
    if (*checksum == 0xFFFF) {
        *checksum = 0;
    }
    if (*checksumInv == 0xFFFF) {
        *checksumInv = 0;
    }
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
    if ((size * 1024 * 1024 / 8) / sectorSize < 8) {
        return 0;
    }
    return 1;
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
    u8 buf[4];

    result = fn_800CDBD8(chan, buf);
    if (result < 0) {
        return result;
    }
    fn_800D1440(chan, -3);
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
    if (*name == 0) {
        return 1;
    }
    return 0;
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

void fn_800D31A4(u8* arg0, u8* arg1) {
    u32 offset;
    s32 flag;
    s32 i;

    offset = *(u32*)(arg0 + 0x2C);
    if (offset == 0xFFFFFFFF) {
        *(u8*)(arg1 + 0x2E) = 0;
        offset = 0;
        *(u16*)(arg1 + 0x34) = 0;
        *(u16*)(arg1 + 0x36) = 0;
    }
    flag = 0;
    switch (arg0[7] & 3) {
    case 1:
        *(u32*)(arg1 + 0x3C) = offset;
        *(u32*)(arg1 + 0x40) = offset + 0xC00;
        offset += 0xE00;
        break;
    case 2:
        *(u32*)(arg1 + 0x3C) = offset;
        *(u32*)(arg1 + 0x40) = 0xFFFFFFFF;
        offset += 0x1800;
        break;
    default:
        *(u32*)(arg1 + 0x3C) = 0xFFFFFFFF;
        *(u32*)(arg1 + 0x40) = 0xFFFFFFFF;
        break;
    }
    for (i = 0; i < 8; i++) {
        switch ((*(u16*)(arg0 + 0x30) >> (i * 2)) & 3) {
        case 1:
            *(u32*)(arg1 + i * 4 + 0x44) = offset;
            flag = 1;
            offset += 0x400;
            break;
        case 2:
            *(u32*)(arg1 + i * 4 + 0x44) = offset;
            offset += 0x800;
            break;
        default:
            *(u32*)(arg1 + i * 4 + 0x44) = 0xFFFFFFFF;
            break;
        }
    }
    if (flag) {
        *(u32*)(arg1 + 0x64) = offset;
        offset += 0x200;
    } else {
        *(u32*)(arg1 + 0x64) = 0xFFFFFFFF;
    }
    *(u32*)(arg1 + 0x68) = offset;
}

s32 fn_800D34B0(s32 chan, void *buf, s32 len, void *cb);
s32 fn_800D3624(s32 chan, void *buf, s32 len) {
    s32 result = fn_800D34B0(chan, buf, len, fn_800CCC7C);
    if (result < 0) return result;
    return fn_800CDEF8(chan);
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
    extern GXDataCP *__GXData;
    extern volatile u16 *__cpReg;
    GXDataCP *gx = __GXData;
    gx->cpEnable = __rlwimi(gx->cpEnable, 1, 0, 31, 31);
    __cpReg[1] = gx->cpEnable;
}

void fn_800D5018(void) {
    extern GXDataCP *__GXData;
    extern volatile u16 *__cpReg;
    GXDataCP *gx = __GXData;
    gx->cpEnable = __rlwimi(gx->cpEnable, 0, 0, 31, 31);
    __cpReg[1] = gx->cpEnable;
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
    extern GXDataCP *__GXData;
    extern volatile u16 *__cpReg;
    GXDataCP *gx = __GXData;
    gx->cpEnable = __rlwimi(gx->cpEnable, arg0, 2, 29, 29);
    gx->cpEnable = __rlwimi(gx->cpEnable, arg1, 3, 28, 28);
    __cpReg[1] = gx->cpEnable;
}

void fn_800D50A0(s32 arg0, u8 arg1) {
    extern GXDataCP *__GXData;
    extern volatile u16 *__cpReg;
    GXDataCP *gx = __GXData;
    gx->cpClr = __rlwimi(gx->cpClr, arg0, 0, 31, 31);
    gx->cpClr = __rlwimi(gx->cpClr, arg1, 1, 30, 30);
    __cpReg[2] = gx->cpClr;
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

void fn_800D5488(u32 attr, s32 type) {
extern GXDataHead *const __GXData;
switch(attr) {
case 0: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 0, 31, 31); break;
case 1: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 1, 30, 30); break;
case 2: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 2, 29, 29); break;
case 3: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 3, 28, 28); break;
case 4: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 4, 27, 27); break;
case 5: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 5, 26, 26); break;
case 6: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 6, 25, 25); break;
case 7: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 7, 24, 24); break;
case 8: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 8, 23, 23); break;
case 9: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 9, 21, 22); break;
case 10:
if(type) { M2C_FIELD(__GXData, u8 *, 0x4D4)=1; M2C_FIELD(__GXData, u8 *, 0x4D5)=0; M2C_FIELD(__GXData, s32 *, 0x4D0)=type; }
else M2C_FIELD(__GXData, u8 *, 0x4D4)=0;
break;
case 25:
if(type) { M2C_FIELD(__GXData, u8 *, 0x4D5)=1; M2C_FIELD(__GXData, u8 *, 0x4D4)=0; M2C_FIELD(__GXData, s32 *, 0x4D0)=type; }
else M2C_FIELD(__GXData, u8 *, 0x4D5)=0;
break;
case 11: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 13, 17, 18); break;
case 12: M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 15, 15, 16); break;
case 13: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 0, 30, 31); break;
case 14: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 2, 28, 29); break;
case 15: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 4, 26, 27); break;
case 16: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 6, 24, 25); break;
case 17: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 8, 22, 23); break;
case 18: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 10, 20, 21); break;
case 19: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 12, 18, 19); break;
case 20: M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 14, 16, 17); break;
}
if(M2C_FIELD(__GXData, u8 *, 0x4D4) || M2C_FIELD(__GXData, u8 *, 0x4D5)) {
    M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), M2C_FIELD(__GXData, s32 *, 0x4D0), 11, 19, 20);
} else { M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), 0, 11, 19, 20); }
M2C_FIELD(__GXData, u32 *, 0x5AC) |= 8;
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

void fn_800D590C(s32 vtxfmt, s32 attr, s32 cnt, s32 type, u8 frac) {
    extern GXDataHead *__GXData;
    u32 *va;
    u32 *vb;
    u32 *vc;
    va = (u32 *)((u8 *)__GXData + vtxfmt * 4 + 0x1C);
    vb = (u32 *)((u8 *)__GXData + vtxfmt * 4 + 0x3C);
    vc = (u32 *)((u8 *)__GXData + vtxfmt * 4 + 0x5C);
    switch (attr) {
    case 9:
        *va = __rlwimi(*va, cnt, 0, 31, 31);
        *va = __rlwimi(*va, type, 1, 28, 30);
        *va = __rlwimi(*va, frac, 4, 23, 27);
        break;
    case 10:
    case 25:
        *va = __rlwimi(*va, type, 10, 19, 21);
        if (cnt == 2) {
            *va = __rlwimi(*va, 1, 9, 22, 22);
            *va = __rlwimi(*va, 1, 31, 0, 0);
        } else {
            *va = __rlwimi(*va, cnt, 9, 22, 22);
            *va = __rlwimi(*va, 0, 31, 0, 0);
        }
        break;
    case 11:
        *va = __rlwimi(*va, cnt, 13, 18, 18);
        *va = __rlwimi(*va, type, 14, 15, 17);
        break;
    case 12:
        *va = __rlwimi(*va, cnt, 17, 14, 14);
        *va = __rlwimi(*va, type, 18, 11, 13);
        break;
    case 13:
        *va = __rlwimi(*va, cnt, 21, 10, 10);
        *va = __rlwimi(*va, type, 22, 7, 9);
        *va = __rlwimi(*va, frac, 25, 2, 6);
        break;
    case 14:
        *vb = __rlwimi(*vb, cnt, 0, 31, 31);
        *vb = __rlwimi(*vb, type, 1, 28, 30);
        *vb = __rlwimi(*vb, frac, 4, 23, 27);
        break;
    case 15:
        *vb = __rlwimi(*vb, cnt, 9, 22, 22);
        *vb = __rlwimi(*vb, type, 10, 19, 21);
        *vb = __rlwimi(*vb, frac, 13, 14, 18);
        break;
    case 16:
        *vb = __rlwimi(*vb, cnt, 18, 13, 13);
        *vb = __rlwimi(*vb, type, 19, 10, 12);
        *vb = __rlwimi(*vb, frac, 22, 5, 9);
        break;
    case 17:
        *vb = __rlwimi(*vb, cnt, 27, 4, 4);
        *vb = __rlwimi(*vb, type, 28, 1, 3);
        *vc = __rlwimi(*vc, frac, 0, 27, 31);
        break;
    case 18:
        *vc = __rlwimi(*vc, cnt, 5, 26, 26);
        *vc = __rlwimi(*vc, type, 6, 23, 25);
        *vc = __rlwimi(*vc, frac, 9, 18, 22);
        break;
    case 19:
        *vc = __rlwimi(*vc, cnt, 14, 17, 17);
        *vc = __rlwimi(*vc, type, 15, 14, 16);
        *vc = __rlwimi(*vc, frac, 18, 9, 13);
        break;
    case 20:
        *vc = __rlwimi(*vc, cnt, 23, 8, 8);
        *vc = __rlwimi(*vc, type, 24, 5, 7);
        *vc = __rlwimi(*vc, frac, 27, 0, 4);
        break;
    }
    {
        u8 *gx = (u8 *)__GXData;
        *(u32 *)(gx + 0x5AC) |= 0x10;
        *(gx + 0x5AB) |= (u8)(1 << (u8)vtxfmt);
    }
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
    extern GXData8 *const __GXData;
    __GXData->r204 = __rlwimi(__GXData->r204, nTexGens, 0, 28, 31);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x103F;
    GXWGFifo.u32 = nTexGens;
    __GXData->dirty |= 4;
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
    u32 pad[2];
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
    u32 v = 0;
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

void fn_800D6848(u32 a, u32 b) {
    u32 v = 0;
    v = __rlwimi(v, (u8)b, 0, 24, 31);
    v = __rlwimi(v, (u8)a, 8, 23, 23);
    __peReg[2] = v;
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
    extern GXDataHead *const __GXData;
    M2C_FIELD(__GXData, u32 *, 0x7C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x7C), width, 0, 24, 31);
    M2C_FIELD(__GXData, u32 *, 0x7C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x7C), texOffsets, 16, 13, 15);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x7C);
    __GXData->bpSentNot = 0;
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
    extern GXData8 *const __GXData;
    switch (arg0) {
    case 1:
        arg0 = 2;
        break;
    case 2:
        arg0 = 1;
        break;
    }
    __GXData->r204 = __rlwimi(__GXData->r204, arg0, 14, 16, 17);
    __GXData->dirty |= 4;
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
    extern GXDataHead *__GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x204);
    __GXData->bpSentNot = 0;
}

void fn_800D6E48(u16 left, u16 top, u16 wd, u16 ht) {
    extern GXDataHead *const __GXData;
    M2C_FIELD(__GXData, u32 *, 0x1E0) = 0;
    M2C_FIELD(__GXData, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E0), left, 0, 22, 31);
    M2C_FIELD(__GXData, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E0), top, 10, 12, 21);
    M2C_FIELD(__GXData, u32 *, 0x1E0) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E0), 0x49, 24, 0, 7);
    M2C_FIELD(__GXData, u32 *, 0x1E4) = 0;
    M2C_FIELD(__GXData, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E4), wd - 1, 0, 22, 31);
    M2C_FIELD(__GXData, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E4), ht - 1, 10, 12, 21);
    M2C_FIELD(__GXData, u32 *, 0x1E4) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E4), 0x4A, 24, 0, 7);
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
    extern GXData7 *__GXData;
    GXData7 *gx = __GXData;
    gx->r1EC = __rlwimi(gx->r1EC, frame2field, 12, 18, 19);
    gx->r1FC = __rlwimi(gx->r1FC, 0, 12, 18, 19);
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
    u32 reg;
    reg = 0;
    reg = __rlwimi(reg, clear_clr.r, 0, 24, 31);
    reg = __rlwimi(reg, clear_clr.a, 8, 16, 23);
    reg = __rlwimi(reg, 0x4F, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    reg = 0;
    reg = __rlwimi(reg, clear_clr.b, 0, 24, 31);
    reg = __rlwimi(reg, clear_clr.g, 8, 16, 23);
    reg = __rlwimi(reg, 0x50, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    reg = 0;
    reg = __rlwimi(reg, clear_z, 0, 8, 31);
    reg = __rlwimi(reg, 0x51, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
}

void fn_800D7264(u8 aa, u8 sample_pattern[12][2], u8 vf, u8 vfilter[7]) {
    extern GXDataHead *__GXData;
    u32 msLoc[4];
    u32 coeff0;
    u32 coeff1;

    if (aa) {
        msLoc[0] = __rlwimi(0, sample_pattern[0][0], 0, 28, 31);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[0][1], 4, 24, 27);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[1][0], 8, 20, 23);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[1][1], 12, 16, 19);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[2][0], 16, 12, 15);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[2][1], 20, 8, 11);
        msLoc[0] = __rlwimi(msLoc[0], 1, 24, 0, 7);
        msLoc[1] = __rlwimi(0, sample_pattern[3][0], 0, 28, 31);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[3][1], 4, 24, 27);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[4][0], 8, 20, 23);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[4][1], 12, 16, 19);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[5][0], 16, 12, 15);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[5][1], 20, 8, 11);
        msLoc[1] = __rlwimi(msLoc[1], 2, 24, 0, 7);
        msLoc[2] = __rlwimi(0, sample_pattern[6][0], 0, 28, 31);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[6][1], 4, 24, 27);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[7][0], 8, 20, 23);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[7][1], 12, 16, 19);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[8][0], 16, 12, 15);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[8][1], 20, 8, 11);
        msLoc[2] = __rlwimi(msLoc[2], 3, 24, 0, 7);
        msLoc[3] = __rlwimi(0, sample_pattern[9][0], 0, 28, 31);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[9][1], 4, 24, 27);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[10][0], 8, 20, 23);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[10][1], 12, 16, 19);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[11][0], 16, 12, 15);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[11][1], 20, 8, 11);
        msLoc[3] = __rlwimi(msLoc[3], 4, 24, 0, 7);
    } else {
        msLoc[0] = 0x01666666;
        msLoc[1] = 0x02666666;
        msLoc[2] = 0x03666666;
        msLoc[3] = 0x04666666;
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[0];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[1];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[2];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[3];

    coeff0 = __rlwimi(0, 0x53, 24, 0, 7);
    coeff1 = __rlwimi(0, 0x54, 24, 0, 7);
    if (vf) {
        coeff0 = __rlwimi(coeff0, vfilter[0], 0, 26, 31);
        coeff0 = __rlwimi(coeff0, vfilter[1], 6, 20, 25);
        coeff0 = __rlwimi(coeff0, vfilter[2], 12, 14, 19);
        coeff0 = __rlwimi(coeff0, vfilter[3], 18, 8, 13);
        coeff1 = __rlwimi(coeff1, vfilter[4], 0, 26, 31);
        coeff1 = __rlwimi(coeff1, vfilter[5], 6, 20, 25);
        coeff1 = __rlwimi(coeff1, vfilter[6], 12, 14, 19);
    } else {
        coeff0 = __rlwimi(coeff0, 0, 0, 26, 31);
        coeff0 = __rlwimi(coeff0, 0, 6, 20, 25);
        coeff0 = __rlwimi(coeff0, 21, 12, 14, 19);
        coeff0 = __rlwimi(coeff0, 22, 18, 8, 13);
        coeff1 = __rlwimi(coeff1, 21, 0, 26, 31);
        coeff1 = __rlwimi(coeff1, 0, 6, 20, 25);
        coeff1 = __rlwimi(coeff1, 0, 12, 14, 19);
    }
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = coeff0;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = coeff1;
    __GXData->bpSentNot = 0;
}

void fn_800D746C(s32 arg0) {
    extern GXData7 *const __GXData;
    __GXData->r1EC = __rlwimi(__GXData->r1EC, arg0, 7, 23, 24);
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
    extern GXData8 *const __GXData;
    __GXData->r204 = __rlwimi(__GXData->r204, nChans, 4, 25, 27);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1009;
    GXWGFifo.u32 = nChans;
    __GXData->dirty |= 4;
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

void fn_800D7E24(u32* t, u32 image_ptr, u16 width, u16 height, u32 format, u32 wrap_s, u32 wrap_t, u8 mipmap)
{
    extern f32 lbl_80363128;
    u16 maxLOD;
    u16 rowT, colT;
    u32 rowC, colC;

    memset(t, 0, 0x20);
    t[0] = __rlwimi(t[0], wrap_s, 0, 30, 31);
    t[0] = __rlwimi(t[0], wrap_t, 2, 28, 29);
    t[0] = __rlwimi(t[0], 1, 4, 27, 27);
    if (mipmap) {
        ((u8*)t)[0x1f] |= 1;
        if (format - 8 <= 2) {
            t[0] = __rlwimi(t[0], 5, 5, 24, 26);
        } else {
            t[0] = __rlwimi(t[0], 6, 5, 24, 26);
        }
        if (width > height) {
            maxLOD = 31 - __cntlzw(width);
        } else {
            maxLOD = 31 - __cntlzw(height);
        }
        t[1] = __rlwimi(t[1], (u8)(lbl_80363128 * (f32)maxLOD), 8, 16, 23);
    } else {
        t[0] = __rlwimi(t[0], 4, 5, 24, 26);
    }
    t[5] = format;
    t[2] = __rlwimi(t[2], width - 1, 0, 22, 31);
    t[2] = __rlwimi(t[2], height - 1, 10, 12, 21);
    t[2] = __rlwimi(t[2], format, 20, 8, 11);
    t[3] = __rlwimi(t[3], image_ptr, 27, 11, 31);
    switch (format & 0xF) {
    case 0: case 8:
        ((u8*)t)[0x1e] = 1; rowT = 3; colT = 3; break;
    case 1: case 2: case 9:
        ((u8*)t)[0x1e] = 2; rowT = 3; colT = 2; break;
    case 3: case 4: case 5: case 10:
        ((u8*)t)[0x1e] = 2; rowT = 2; colT = 2; break;
    case 6:
        ((u8*)t)[0x1e] = 3; rowT = 2; colT = 2; break;
    case 14:
        ((u8*)t)[0x1e] = 0; rowT = 3; colT = 3; break;
    default:
        ((u8*)t)[0x1e] = 2; rowT = 2; colT = 2; break;
    }
    rowC = (width + (1 << rowT) - 1) >> rowT;
    colC = (height + (1 << colT) - 1) >> colT;
    *(u16*)((u8*)t + 0x1c) = (rowC * colC) & 0x7FFF;
    ((u8*)t)[0x1f] |= 2;
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
    *arg0 = __rlwimi(*arg0, arg1, 0, 30, 31);
    *arg0 = __rlwimi(*arg0, arg2, 2, 28, 29);
}

void fn_800D8238(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

void fn_800D8240(u32 *arg0, s32 arg1, s32 arg2) {
    SETF(*arg0, 1, 4, (arg2 == 1) ? 1 : 0);
    SETF(*arg0, 3, 5, lbl_80359668[arg1]);
}

void fn_800D8278(void *arg0, f32 farg0) {
    extern f32 lbl_80363148;
    extern f32 lbl_80363128;
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
    return (u32)__cntlzw((M2C_FIELD(arg0, u8 *, 0x1F) & 1) - 1) >> 5;
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

void __GXSetTmemConfig(s32 arg0) {
 switch(arg0) {
case 2:
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8C0D8000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x900DC000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8D0D8800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x910DC800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8E0D9000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x920DD000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8F0D9800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x930DD800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAC0DA000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB00DC400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAD0DA800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB10DCC00;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAE0DB000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB20DD400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAF0DB800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB30DDC00;
 break;
case 1:
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8C0D8000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x900DC000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8D0D8800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x910DC800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8E0D9000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x920DD000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8F0D9800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x930DD800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAC0DA000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB00DE000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAD0DA800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB10DE800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAE0DB000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB20DF000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAF0DB800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB30DF800;
 break;
case 0:
default:
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8C0D8000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x900DC000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8D0D8400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x910DC400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8E0D8800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x920DC800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x8F0D8C00;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0x930DCC00;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAC0D9000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB00DD000;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAD0D9400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB10DD400;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAE0D9800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB20DD800;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xAF0D9C00;
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = 0xB30DDC00;
 break;
 }
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
    switch (indStage) {
    case 0:
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), scaleS, 0, 28, 31);
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), scaleT, 4, 24, 27);
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), 0x25, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x128);
        break;
    case 1:
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), scaleS, 8, 20, 23);
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), scaleT, 12, 16, 19);
        M2C_FIELD(__GXData, u32 *, 0x128) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x128), 0x25, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x128);
        break;
    case 2:
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), scaleS, 0, 28, 31);
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), scaleT, 4, 24, 27);
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), 0x26, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x12C);
        break;
    case 3:
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), scaleS, 8, 20, 23);
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), scaleT, 12, 16, 19);
        M2C_FIELD(__GXData, u32 *, 0x12C) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x12C), 0x26, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x12C);
        break;
    }
    __GXData->bpSentNot = 0;
}

void fn_800D8E94(u8 nIndStages) {
    extern GXDataHead *const __GXData;
    SETF(M2C_FIELD(__GXData, u32 *, 0x204), 3, 16, nIndStages);
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 6;
}

void fn_800D8EB8(u32 stage) {
    void fn_800D8CE4(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
    fn_800D8CE4(stage, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void fn_800D8F00(void) {

}

void __GXFlushTextureState(void) {
    extern GXDataHead *const __GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x124);
    __GXData->bpSentNot = 0;
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
    extern GXDataHead *__GXData;
    u32 *pTevReg;
    u32 reg;
    GXDataHead *gx;
    gx = __GXData;
    pTevReg = &((u32 *)((u8 *)gx + 0x170))[stage];
    reg = *pTevReg;
    reg = __rlwimi(reg, a, 13, 16, 18);
    reg = __rlwimi(reg, b, 10, 19, 21);
    reg = __rlwimi(reg, c, 7, 22, 24);
    reg = __rlwimi(reg, d, 4, 25, 27);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    *pTevReg = reg;
    gx->bpSentNot = 0;
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
 lo=__rlwimi(lo,color[0],0,21,31);
 lo=__rlwimi(lo,color[3],12,9,19);
 hi=__rlwimi(hi,color[2],0,21,31);
 hi=__rlwimi(hi,color[1],12,9,19);
 lo=__rlwimi(lo,id*2+0xE0,24,0,7);
 hi=__rlwimi(hi,id*2+0xE1,24,0,7);
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
    u32 *reg = (u32 *)((u8 *)__GXData + (arg0 >> 1) * 4 + 0x1B0);
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
    u32 *reg = (u32 *)((u8 *)__GXData + (arg0 >> 1) * 4 + 0x1B0);
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
    u32 *reg = (u32 *)((u8 *)__GXData + arg0 * 4 + 0x170);
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
    u32 reg = 0xF3000000;
    reg = __rlwimi(reg, ref0, 0, 24, 31);
    reg = __rlwimi(reg, ref1, 8, 16, 23);
    reg = __rlwimi(reg, comp0, 16, 13, 15);
    reg = __rlwimi(reg, comp1, 19, 10, 12);
    reg = __rlwimi(reg, op, 22, 8, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData->bpSentNot = 0;
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
    extern GXDataHead *__GXData;
    extern s32 lbl_802DFFA0[];
    u32 *ptref;
    u32 tmap;
    u32 tcoord;

    ptref = (u32 *)((u8 *)__GXData + 0x100) + stage / 2;
    ((u32 *)((u8 *)__GXData + 0x554))[stage] = map;
    tmap = map & ~0x100;
    tmap = (tmap >= 8) ? 0 : tmap;
    if (coord >= 8) {
        tcoord = 0;
        M2C_FIELD(__GXData, u32 *, 0x598) &= ~(1 << stage);
    } else {
        tcoord = coord;
        M2C_FIELD(__GXData, u32 *, 0x598) |= (1 << stage);
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
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 1;
}

void fn_800D95E8(u8 nStages) {
    extern GXData8 *const __GXData;
    __GXData->r204 = __rlwimi(__GXData->r204, nStages - 1, 10, 18, 21);
    __GXData->dirty |= 4;
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
    extern GXDataHead *const __GXData;
    M2C_FIELD(__GXData, u32 *, 0x1DC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1DC), (u32)before_tex, 6, 25, 25);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1DC);
    __GXData->bpSentNot = 0;
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
    extern struct { u8 pad[0x7C]; u32 lpSize; } *const __GXData;
    extern void __GXFlushTextureState(void);
    __GXData->lpSize = __rlwimi(__GXData->lpSize, half_aspect_ratio, 22, 9, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = __GXData->lpSize;
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

void fn_800DA228(s32 perf0, s32 perf1) {
    extern GXDataHead *const __GXData;
    extern void *__cpReg;

#define GPM_FIFO_U8 (*(volatile u8 *)0xCC008000)
#define GPM_FIFO_U32 (*(volatile u32 *)0xCC008000)
#define GPM_RAS(v) do { GPM_FIFO_U8 = 0x61; GPM_FIFO_U32 = (v); } while (0)
#define GPM_XF(v) do { GPM_FIFO_U8 = 0x10; GPM_FIFO_U32 = 0x1006; GPM_FIFO_U32 = (v); } while (0)
#define GPM_PERFSEL(v) do { \
        M2C_FIELD(__GXData, u32 *, 0x5A4) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x5A4), (v), 4, 24, 27); \
        GPM_FIFO_U8 = 0x08; GPM_FIFO_U8 = 0x20; GPM_FIFO_U32 = M2C_FIELD(__GXData, u32 *, 0x5A4); } while (0)

    switch (M2C_FIELD(__GXData, s32 *, 0x59C)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
    case 0x22:
        GPM_XF(0);
        break;
    case 0xB: case 0xC: case 0xD: case 0xE: case 0xF: case 0x10: case 0x11: case 0x12:
    case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x19: case 0x1A:
        GPM_RAS(0x23000000);
        break;
    case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x21:
        GPM_RAS(0x24000000);
        break;
    case 0x23:
        break;
    }

    switch (M2C_FIELD(__GXData, s32 *, 0x5A0)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    case 0x15:
        GPM_RAS(0x67000000);
        break;
    case 9: case 0xA: case 0xB: case 0xC: case 0xD: case 0xE: case 0xF: case 0x10:
        GPM_PERFSEL(0);
        break;
    case 0x11: case 0x12: case 0x13: case 0x14:
        M2C_FIELD(__cpReg, u16 *, 6) = 0;
        break;
    case 0x16:
        break;
    }

    M2C_FIELD(__GXData, s32 *, 0x59C) = perf0;
    switch (M2C_FIELD(__GXData, s32 *, 0x59C)) {
    case 0: GPM_XF(0x273); break;
    case 1: GPM_XF(0x14A); break;
    case 2: GPM_XF(0x16B); break;
    case 3: GPM_XF(0x84); break;
    case 4: GPM_XF(0xC6); break;
    case 5: GPM_XF(0x210); break;
    case 6: GPM_XF(0x252); break;
    case 7: GPM_XF(0x231); break;
    case 8: GPM_XF(0x1AD); break;
    case 9: GPM_XF(0x1CE); break;
    case 10: GPM_XF(0x21); break;
    case 0x22: GPM_XF(0x153); break;
    case 0xB: GPM_RAS(0x2300AE7F); break;
    case 0xC: GPM_RAS(0x23008E7F); break;
    case 0xD: GPM_RAS(0x23009E7F); break;
    case 0xE: GPM_RAS(0x23001E7F); break;
    case 0xF: GPM_RAS(0x2300AC3F); break;
    case 0x10: GPM_RAS(0x2300AC7F); break;
    case 0x11: GPM_RAS(0x2300ACBF); break;
    case 0x12: GPM_RAS(0x2300ACFF); break;
    case 0x13: GPM_RAS(0x2300AD3F); break;
    case 0x14: GPM_RAS(0x2300AD7F); break;
    case 0x15: GPM_RAS(0x2300ADBF); break;
    case 0x16: GPM_RAS(0x2300ADFF); break;
    case 0x17: GPM_RAS(0x2300AE3F); break;
    case 0x18: GPM_RAS(0x2300A27F); break;
    case 0x19: GPM_RAS(0x2300A67F); break;
    case 0x1A: GPM_RAS(0x2300AA7F); break;
    case 0x1B: GPM_RAS(0x2402C0C6); break;
    case 0x1C: GPM_RAS(0x2402C16B); break;
    case 0x1D: GPM_RAS(0x2402C0E7); break;
    case 0x1E: GPM_RAS(0x2402C108); break;
    case 0x1F: GPM_RAS(0x2402C129); break;
    case 0x20: GPM_RAS(0x2402C14A); break;
    case 0x21: GPM_RAS(0x2402C1AD); break;
    case 0x23: break;
    }

    M2C_FIELD(__GXData, s32 *, 0x5A0) = perf1;
    switch (M2C_FIELD(__GXData, s32 *, 0x5A0)) {
    case 0: GPM_RAS(0x67000042); break;
    case 1: GPM_RAS(0x67000084); break;
    case 2: GPM_RAS(0x67000063); break;
    case 3: GPM_RAS(0x67000129); break;
    case 4: GPM_RAS(0x67000252); break;
    case 5: GPM_RAS(0x67000021); break;
    case 6: GPM_RAS(0x6700014B); break;
    case 7: GPM_RAS(0x6700018D); break;
    case 8: GPM_RAS(0x670001CF); break;
    case 0x15: GPM_RAS(0x67000211); break;
    case 9: GPM_PERFSEL(2); break;
    case 0xA: GPM_PERFSEL(3); break;
    case 0xB: GPM_PERFSEL(4); break;
    case 0xC: GPM_PERFSEL(5); break;
    case 0xD: GPM_PERFSEL(6); break;
    case 0xE: GPM_PERFSEL(7); break;
    case 0xF: GPM_PERFSEL(9); break;
    case 0x10: GPM_PERFSEL(8); break;
    case 0x11: M2C_FIELD(__cpReg, u16 *, 6) = 2; break;
    case 0x12: M2C_FIELD(__cpReg, u16 *, 6) = 3; break;
    case 0x13: M2C_FIELD(__cpReg, u16 *, 6) = 4; break;
    case 0x14: M2C_FIELD(__cpReg, u16 *, 6) = 5; break;
    case 0x16: break;
    }

    __GXData->bpSentNot = 0;

#undef GPM_FIFO_U8
#undef GPM_FIFO_U32
#undef GPM_RAS
#undef GPM_XF
#undef GPM_PERFSEL
}

void fn_800DAA70(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

extern u8 lbl_80327F90[];

#include "trk_ppc_inline.h"

void PPCMtmsr(u32 msr);

extern u32 lbl_8029BE18[][4];

s32 PPCMfmsr();

extern s32 TRK_mainError_80325D60[];

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

void OSEnableScheduler(void);

extern u8 lbl_80327F90[];

