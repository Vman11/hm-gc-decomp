/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
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
extern s32 fn_800E2584();
extern f32 lbl_80363088;
extern f32 lbl_80363068;
extern u8 lbl_802D8F60[];
typedef struct HeapCell {
    struct HeapCell *prev;
    struct HeapCell *next;
    int size;
} HeapCell;
typedef struct TrkBuf {
    u8 pad0[8];
    s32 count;
    u32 pos;
    u8 data[0x880];
} TrkBuf;
extern s32 lbl_803257D0[];
extern void fn_800DBAD0(TrkBuf*, s32);
extern s32 fn_800DAF24(TrkBuf*);
s32 fn_800DF4D0(void*);
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
    u8 pad0[0x238];
    u32 unk238;
} TRKCPUState_unk;

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

extern s32 lbl_8035A5B0;
void fn_800BA3B4(void* arg0);
void fn_800B7E04(void) {
    lbl_8035A5B0 = 1;
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

void fn_800BB788(s32 *p) {
    p[1] = 8;
    p[2] = 0;
}

void fn_800BB79C(s32 *p) {
    extern u8 lbl_802D8F60[];
    extern f32 lbl_80363068;
    f32 *f = (f32 *)p;
    p[1] = 0xE;
    p[10] = 0;
    p[2] = (s32)lbl_802D8F60;
    p[3] = 0x40;
    f[4] = lbl_80363068;
    p[5] = 0;
    f[9] = lbl_80363068;
    f[8] = lbl_80363068;
    f[7] = lbl_80363068;
    f[6] = lbl_80363068;
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
    a->t = a->t + a->speed;
    if (a->t >= lbl_80363088) {
        a->t = a->t - a->t;
        a->idx = a->idx + fn_800E2584();
        a->idx = a->idx % a->count;
        a->prev = a->cur;
        a->cur = a->data[a->idx];
    }
    a->out = a->prev - a->t * (a->prev - a->cur);
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
    s32 idx;

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
        *(u16*)(arg1 + 0x1F6) = lbl_802D9DD8[idx];
        *(u16*)(arg1 + 0x1F8) = lbl_802D9DD8[idx + 1];
        arg0[4] = 0;
    }
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

s32 fn_800C4768(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_800C4858(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

s32 fn_800C4940(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

u8 fn_800C496C(void) {
    return (u8) *(s32 *)0xCC006C04;
}

u8 fn_800C4998(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
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

extern s32 lbl_8035A8C8;
void fn_800CA090(s32 arg0) {
    lbl_8035A8C8 = arg0;
}

extern s32 lbl_8035A8C8;
s32 fn_800CA098(void) {
    return lbl_8035A8C8;
}

s32 fn_800CC114(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_800CC124(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

extern s32 lbl_8035A8D0;
s32 fn_800CC224(void) {
    return lbl_8035A8D0;
}

void fn_800CC3A4(char* str, ...) {
}

void fn_800CCC78(void) {

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

void fn_800D4CB8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

extern s32 lbl_8035A920;
s32 fn_800D51D0(void) {
    return lbl_8035A920;
}

extern s32 lbl_8035A924;
s32 fn_800D51D8(void) {
    return lbl_8035A924;
}

void fn_800D5F10(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_800D665C(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_800D746C(s32 arg0) {
    extern void *__GXData;
    M2C_FIELD(__GXData, s32 *, 0x1EC) = (s32) ((M2C_FIELD(__GXData, s32 *, 0x1EC) & ~0x180) | ((arg0 << 7) & 0x180));
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

void fn_800D8238(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

s32 fn_800D8318(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}

u8 fn_800D8320(void *arg0) {
    return (u8) (((M2C_FIELD(arg0, u8 *, 0x1F) & 1) - 1) == 0);
}

void fn_800D8F00(void) {

}

void fn_800DAA70(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
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

s32 fn_800DBCDC(void) {
    return 0;
}

void usr_put_initialize(void) {

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

s32 fn_800DF2F0(void) {
    return 0;
}

s32 fn_800DF2F8(void) {
    return 0;
}

s32 fn_800DF300(void) {
    return 0;
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

s32 fn_800DFAF0(void) {
    return M2C_FIELD(&gTRKCPUState, s32 *, 0x80);
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
s32 fn_800DF4D0(void*);
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

s32 TRKTargetContinue(void) {
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}

u8 fn_800E1AC8(void) {
    return *lbl_80327F90;
}

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

