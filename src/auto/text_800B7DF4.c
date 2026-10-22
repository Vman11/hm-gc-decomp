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
extern s32 __cvt_fp2unsigned();
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
s32 __cvt_fp2unsigned(void);

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




#pragma push
#pragma auto_inline off
#pragma pop







#pragma scheduling on




#pragma push
#pragma peephole off
#pragma pop

extern s32* OSExceptionTable_8035A544;

#pragma peephole off

volatile u32 __DIRegs[16] : 0xCC006000;


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


#pragma peephole on

long long fn_800BA5E8(long long arg0);
void InsertAlarm(void *alarm, long long fire, void *handler);

u64 __OSGetSystemTime(void);
#pragma push
#pragma dont_inline on
#pragma peephole off
#pragma pop



extern int lbl_80359530;
extern int lbl_8035A568;
extern int lbl_8035A56C;
extern int lbl_8035A570;
extern int lbl_8035A574;




extern s32 __OSArenaLo_80359538;


extern s32 __OSArenaLo_80359538;








void fn_800C182C(GXRenderModeObj *rmode);
void fn_800C2054(u32 a, u32 b, u32 c, u32 d);

extern u16 fn_800B6B0C();
extern u16 lbl_802D7F30[];
extern u16 lbl_802D80B0[];



extern s32 fn_800B9094(s32, s32, s32);

extern void **InterruptHandlerTable_8035A590;

extern void *memset(void *, int, unsigned long);
extern u32 __OSMaskInterrupts(u32);

#pragma peephole off

extern u32 fn_800B7318(u32 mask, u32 current);



#pragma peephole on
extern s32 lbl_8035A5B0;
void fn_800BA3B4(void* arg0);
void fn_800B7E04(void) {
    lbl_8035A5B0 = 1;
}

u32 wbBusClock : 0x800000F8;
u32 wbRegionStart : 0x812FDFF0;
u32 wbRegionEnd : 0x812FDFEC;
u32 wbOSResetCode : 0x817FFFFC;
u32 wbOSResetCode2 : 0x817FFFF8;
u8 wbFlag30E2 : 0x800030E2;

#pragma push
#pragma peephole off
void __OSReboot(u32 resetCode, BOOL forceMenu) {
    extern u8 lbl_80307880[];
    extern u32 lbl_8035A5A8;
    extern u32 lbl_8035A5AC;
    extern int __OSIsGcam;
    extern int OSDisableInterrupts(void);
    extern int OSEnableInterrupts(void);
    extern void OSClearContext(void *);
    extern void OSSetCurrentContext(void *);
    extern void DVDInit(void);
    extern void fn_800BFBA0(BOOL);
    extern void fn_800BFBB0(void);
    extern void fn_800C004C(void *);
    extern void __OSMaskInterrupts(u32);
    extern void __OSUnmaskInterrupts(u32);
    extern s64 OSGetTime(void);
    extern BOOL fn_800BFF54(void);
    extern u8 *fn_800BFF4C(void);
    extern void fn_800C4950(u8);
    extern void fn_800C497C(u8);
    extern void fn_800BF8D8(void *, void *);
    extern s32 fn_800BFAA8(void *);
    extern void fn_800C4690(u32);
    extern void fn_800BF658(void *, void *, s32, s32, void *, s32);
    extern void ICInvalidateRange(void *, u32);
    extern void ICFlashInvalidate(void);
    extern void fn_800B82D8(u32);
    extern void fn_800B7DF4(void *);
    u8 exceptionContext[0x2C8];
    u8 dvdCmd[0x30];
    u8 dvdCmd2[0x30];
    u8 dvdCmd3[0x30];
    u8 *header;
    u32 length;
    s64 start;

    header = lbl_80307880;
    OSDisableInterrupts();
    wbOSResetCode = 0;
    wbOSResetCode2 = 0;
    wbFlag30E2 = 1;
    wbRegionStart = lbl_8035A5A8;
    wbRegionEnd = lbl_8035A5AC;
    OSClearContext(exceptionContext);
    OSSetCurrentContext(exceptionContext);
    DVDInit();
    fn_800BFBA0(TRUE);
    fn_800BFBB0();
    lbl_8035A5B0 = 0;
    fn_800C004C(fn_800B7E04);
    __OSMaskInterrupts(~0x1F);
    __OSUnmaskInterrupts(0x400);
    OSEnableInterrupts();

    start = OSGetTime();
    while (lbl_8035A5B0 != 1) {
        if (!fn_800BFF54() || OSGetTime() - start > (s64)(wbBusClock / 4)) {
            fn_800B82D8(*(u32 *)0x817FFFFC);
        }
    }

    if (!__OSIsGcam && (fn_800BFF4C()[8] ? TRUE : FALSE)) {
        fn_800C4950(0);
        fn_800C497C(0);
        fn_800BF8D8(dvdCmd, NULL);
        start = OSGetTime();
        while (fn_800BFAA8(dvdCmd)) {
            if (!fn_800BFF54() || OSGetTime() - start > (s64)(wbBusClock / 4)) {
                fn_800B82D8(*(u32 *)0x817FFFFC);
            }
        }
        fn_800C4690(0);
    }

    fn_800BF658(dvdCmd2, header, 32, 0x2440, NULL, 0);
    start = OSGetTime();
    while (fn_800BFAA8(dvdCmd2)) {
        if (!fn_800BFF54() || OSGetTime() - start > (s64)(wbBusClock / 4)) {
            fn_800B82D8(*(u32 *)0x817FFFFC);
        }
    }

    { u32 offset = *(u32 *)(header + 20) + 0x20;
    length = (*(u32 *)(header + 24) + 0x1F) & ~0x1F;
    fn_800BF658(dvdCmd3, (void *)0x81300000, length, offset + 0x2440, NULL, 0); }
    start = OSGetTime();
    while (fn_800BFAA8(dvdCmd3)) {
        if (!fn_800BFF54() || OSGetTime() - start > (s64)(wbBusClock / 4)) {
            fn_800B82D8(*(u32 *)0x817FFFFC);
        }
    }

    ICInvalidateRange((void *)0x81300000, length);
    OSDisableInterrupts();
    ICFlashInvalidate();
    fn_800B7DF4((void *)0x81300000);
}
#pragma pop


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

volatile u16 __VIRegs[59] : 0xCC002000;
volatile u32 __PIRegs[12] : 0xCC003000;

s32 fn_800B81D4(s32 arg0) {
    extern s32 __OSSyncSram(void);
    OSResetFunctionInfo *iter;
    s32 failed;
    failed = 0;
    iter = ResetFunctionQueue_8035A5B8.head;
    while (iter != NULL && failed == 0) {
        failed |= !iter->func(arg0);
        iter = iter->next;
    }
    failed |= !__OSSyncSram();
    if (failed) return 0;
    return 1;
}

void Reset(u32 resetCode);

static inline BOOL wbCallResetFunctions(BOOL final) {
    extern s32 __OSSyncSram(void);
    OSResetFunctionInfo *iter;
    s32 failed;
    failed = 0;
    iter = ResetFunctionQueue_8035A5B8.head;
    while (iter != NULL && failed == 0) {
        failed |= !iter->func(final);
        iter = iter->next;
    }
    failed |= !__OSSyncSram();
    if (failed) return 0;
    return 1;
}

static inline void wbKillThreads(void) {
    extern void OSCancelThread(void *);
    u8 *thread;
    u8 *next;

    for (thread = *(u8 **)0x800000DC; thread; thread = next) {
        next = *(u8 **)(thread + 764);
        switch (*(u16 *)(thread + 712)) {
        case 1:
        case 4:
            OSCancelThread(thread);
            break;
        default:
            break;
        }
    }
}

#pragma push
#pragma peephole off
void OSResetSystem(int reset, u32 resetCode, BOOL forceMenu) {
    extern u32 bootThisDol_8035A5C0;
    extern void OSDisableScheduler(void);
    extern void OSEnableScheduler(void);
    extern void __OSStopAudioSystem(void);
    extern BOOL __PADDisableRecalibration(BOOL);
    extern u8 *__OSLockSram(void);
    extern BOOL __OSUnlockSram(BOOL);
    extern s32 __OSSyncSram(void);
    extern int OSDisableInterrupts(void);
    extern void LCDisable(void);
    extern void ICFlashInvalidate(void);
    extern void __OSReboot(u32, BOOL);
    extern void *memset(void *, int, unsigned long);
    BOOL disableRecalibration;
    u32 pad_[4]; /* the 2003 frame is 16 bytes larger (inlined helpers' locals) */

    OSDisableScheduler();
    __OSStopAudioSystem();
    if (reset == 2 || (reset == 0 && bootThisDol_8035A5C0)) {
        disableRecalibration = __PADDisableRecalibration(TRUE);
    }
    while (!wbCallResetFunctions(FALSE)) {
    }
    if (reset == 1 && forceMenu) {
        u8 *sram = __OSLockSram();
        sram[19] |= 0x40;
        __OSUnlockSram(TRUE);
        while (!__OSSyncSram()) {
        }
    }
    OSDisableInterrupts();
    wbCallResetFunctions(TRUE);
    LCDisable();
    if (reset == 1) {
        OSDisableInterrupts();
        __VIRegs[1] = 0;
        ICFlashInvalidate();
        Reset(resetCode * 8);
    } else if (reset == 0) {
        if ((*(u32 *)0x800030EC = bootThisDol_8035A5C0) != 0) {
            __PADDisableRecalibration(disableRecalibration);
        }
        wbKillThreads();
        OSEnableScheduler();
        __OSReboot(resetCode, forceMenu);
    }
    wbKillThreads();
    memset((void *)0x80000040, 0, 140);
    memset((void *)0x800000D4, 0, 20);
    memset((void *)0x800000F4, 0, 4);
    memset((void *)0x80003000, 0, 192);
    memset((void *)0x800030C8, 0, 12);
    memset((void *)0x800030E2, 0, 1);
    __PADDisableRecalibration(disableRecalibration);
}
#pragma pop

#pragma push
#pragma peephole off
u32 OSGetResetCode(void) {
    u32 code;
    if (*(u8 *)0x800030E2 != 0) {
        code = 0x80000000;
    } else {
        code = (__PIRegs[9] & ~7) >> 3;
    }
    return code;
}
#pragma pop





extern SramControlBlock Scb_803078A0;






extern u8 __OSSystemCallVectorStart[];
extern u8 __OSSystemCallVectorEnd[];
extern void *memcpy(void *, const void *, unsigned long);
extern void DCFlushRangeNoSync(void *, u32);
extern void ICInvalidateRange(void *, u32);









#pragma push
#pragma auto_inline off
#pragma pop




extern s32 lbl_802D8A80[];
extern s32 lbl_802D8AB0[];






int fn_800B50D0();
extern void *lbl_8035A600;
extern f32 lbl_80363048, lbl_8036304C;
void fn_800BBD48(f32);
void fn_800BBD40(f32);
void fn_800BB7E0(void*);










extern f32 lbl_802D8B70[];
extern f32 lbl_80363080;

#pragma dont_inline reset



extern s32 __cvt_fp2unsigned();

extern f32 lbl_8035A608;
extern f32 lbl_80363088;
extern u16 lbl_802D9DD8[];
s32 __cvt_fp2unsigned(void);

extern f32 lbl_8035A60C;


extern f32 lbl_803630A0, lbl_803630A4, lbl_803630A8, lbl_803630AC;












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




extern u8 BB2_803083C0[];
extern u8 *bootInfo_8035A680;
extern char lbl_802D9FFC[];
extern char lbl_8035957C[];
void __DVDFSInit(void);
void fn_800B5520(char *file, int line, char *msg, ...);
void fn_800BC76C(void *addr, u32 len, u32 offset, void (*cb)(u32));
void fn_800BE1AC(void);
void fn_800BE114(u32 intType);

void DVDLowStopMotor(void (*cb)(u32));
void fn_800BCE40(u8 enable, u32 size, void (*cb)(u32));
void fn_800BE718(u32 intType);
void fn_800BE634(u32 intType);
void fn_800BE4E8(void *command);
extern u8 *IDShouldBe_8035A67C;




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





extern u32 lbl_802DA128[18];
extern u32 lbl_802DA128[];


s32 fn_800EB540(const char *, const char *, u32);







extern u16 lbl_803084E8[];
extern u64 lbl_8035A708;

extern s32 lbl_8035A6DC;













#pragma push
#pragma peephole off
#pragma pop

extern unsigned int lbl_8035A764;

#pragma inline_depth()





















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


#pragma scheduling on






#pragma scheduling reset


extern u8 lbl_80308780[][0x780];
extern u8 lbl_80309E00[][0x780];
extern s32 lbl_8035A814;
extern s32 lbl_8035A810;
extern u32 lbl_8035A7F0;





extern u32 lbl_8035A7F4;


extern s32 lbl_8035A818;

extern s32 lbl_8035A81C;

extern s32 lbl_8035A830;

extern u8 lbl_8030B480[];
extern u32 lbl_8035A828;
extern u8 *lbl_8035A82C;




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

extern void fn_800C8094(u32);
extern void fn_800C45D8(void *, u32);
extern void fn_800CC2DC(void *);
extern u8 lbl_8030BA80[];
extern u8 lbl_80310480[];
extern u32 lbl_8035A844;
extern u32 lbl_8035A848;
extern u64 lbl_8035A850;
extern u32 lbl_8035A870;

extern s32 lbl_8035A85C;


extern s32 lbl_8035A860;
extern s32 lbl_8035A868;


extern s32 lbl_8035A858;

extern u8 lbl_80310520[];




typedef struct { u32 w[0x34]; } AXPBAll;
typedef struct { u32 w[4]; } AXPBAddrCopy;
typedef struct { u32 w[10]; } AXPBAdpcmCopy;
extern u8 lbl_80310560[];

extern s32 lbl_8035A8A8;


extern u8 lbl_80310560[];



int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);





int OSRestoreInterrupts(int level);







extern s32 lbl_8035A8C8;

extern s32 lbl_8035A8C8;












extern s32 lbl_8035A8D0;


extern char lbl_802DF180[];







#pragma push
#pragma dont_inline on


#pragma pop












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




s32 fn_800CDEF8(s32);






s32 fn_800D34B0(s32 chan, void *buf, s32 len, void *cb);

s32 fn_800D8318(void *);
u8 fn_800D8320(void *);


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
#pragma pop







void GXSetGPFifo(void *fifo);
void GXSetCPUFifo(void *fifo);
s32 fn_800D51D0(void);
s32 fn_800D51D8(void);

extern s32 lbl_8035A920;

extern s32 lbl_8035A924;

extern u8 lbl_8035A92C;
s32 fn_800B2F4C(void);
void PPCMtwpar(u32 val);
void fn_800D6270(void);
void fn_800B2EA8(void);


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


extern u8 lbl_80359620[];
extern u8 lbl_80359624[];
extern u8 lbl_80359628[];
extern u8 lbl_80359620[4];
extern u8 lbl_80359624[4];
extern u8 lbl_80359628[4];








extern void fn_800D6B0C(void);
extern void fn_800B2EA8(void);





extern u16 *__peReg;


































f32 fn_800F0588(f32 x);














extern u8 lbl_80359668[8];


























#pragma optimize_for_size reset




















#pragma push
#pragma fp_contract off
#pragma pop








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


volatile u16 __VIRegsA[64] : 0xCC002000;



static inline BOOL IsSjisTrailByteA(u8 c) {
    return 0x40 <= c && c <= 0xFC && c != 0x7F;
}


volatile u16 __MEMRegsB[64] : 0xCC004000;


asm void fn_800B7DF4(void) {
    nofralloc
    sync
    isync
    mtlr r3
    blr
}

typedef struct { void *head; void *tail; } OSModuleQueueE;
OSModuleQueueE __OSModuleListE : 0x800030C8;
void *__OSStringTableE : 0x800030D0;


#pragma push
#pragma peephole off
volatile u16 __MEMRegsD[64] : 0xCC004000;
typedef struct { void *func; u32 priority; void *next; void *prev; } OSResetFunctionInfoD;
extern OSResetFunctionInfoD ResetFunctionInfo_802D8A70;
void MEMIntrruptHandler(s16, void *);
void RealMode(u32);
void Config24MB(void);
void Config48MB(void);

#pragma pop

extern s32 RunQueueHint_8035A5EC;


#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
extern s32 lbl_802DFFA0[];
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
void fn_800D8338(void *obj, void *region, s32 id);
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
typedef struct WBTexRegion { u32 image1; u32 image2; u32 pad; u8 is32bMipmap; u8 isCached; } WBTexRegion;
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
typedef struct WBTlutObjI { u32 tlut; u32 loadTlut0; u32 numEntries; } WBTlutObjI;
typedef struct WBTlutRgn2 { u32 loadTlut1; WBTlutObjI tlutObj; } WBTlutRgn2;
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
inline void wbSetDirtyState(void) {
    extern WBGX *const __GXData;
    u32 dState = __GXData->dirtyState;
    if (dState == 0) {
        return;
    }
    if (dState & 1) {
        fn_800D8814();
    }
    if (dState & 2) {
        fn_800D8F00();
    }
    if (dState & 4) {
        fn_800D6E24();
    }
    if (dState & 8) {
        fn_800D56F4();
    }
    if (dState & 0x10) {
        fn_800D5DE8();
    }
    if (dState & 0x18) {
        fn_800D57B0();
    }
    __GXData->dirtyState = 0;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
typedef struct WBVatList { s32 attr; s32 cnt; s32 type; u8 frac; } WBVatList;
inline void wbSETVAT(u32 *va, u32 *vb, u32 *vc, s32 attr, s32 cnt, s32 type, u8 shft) {
    switch (attr) {
    case 9:
        WB_RI(*va, cnt, 0, 31, 31);
        WB_RI(*va, type, 1, 28, 30);
        WB_RI(*va, shft, 4, 23, 27);
        break;
    case 10:
    case 25:
        WB_RI(*va, type, 10, 19, 21);
        if (cnt == 2) {
            WB_RI(*va, 1, 9, 22, 22);
            WB_RI(*va, 1, 31, 0, 0);
        } else {
            WB_RI(*va, cnt, 9, 22, 22);
            WB_RI(*va, 0, 31, 0, 0);
        }
        break;
    case 11:
        WB_RI(*va, cnt, 13, 18, 18);
        WB_RI(*va, type, 14, 15, 17);
        break;
    case 12:
        WB_RI(*va, cnt, 17, 14, 14);
        WB_RI(*va, type, 18, 11, 13);
        break;
    case 13:
        WB_RI(*va, cnt, 21, 10, 10);
        WB_RI(*va, type, 22, 7, 9);
        WB_RI(*va, shft, 25, 2, 6);
        break;
    case 14:
        WB_RI(*vb, cnt, 0, 31, 31);
        WB_RI(*vb, type, 1, 28, 30);
        WB_RI(*vb, shft, 4, 23, 27);
        break;
    case 15:
        WB_RI(*vb, cnt, 9, 22, 22);
        WB_RI(*vb, type, 10, 19, 21);
        WB_RI(*vb, shft, 13, 14, 18);
        break;
    case 16:
        WB_RI(*vb, cnt, 18, 13, 13);
        WB_RI(*vb, type, 19, 10, 12);
        WB_RI(*vb, shft, 22, 5, 9);
        break;
    case 17:
        WB_RI(*vb, cnt, 27, 4, 4);
        WB_RI(*vb, type, 28, 1, 3);
        WB_RI(*vc, shft, 0, 27, 31);
        break;
    case 18:
        WB_RI(*vc, cnt, 5, 26, 26);
        WB_RI(*vc, type, 6, 23, 25);
        WB_RI(*vc, shft, 9, 18, 22);
        break;
    case 19:
        WB_RI(*vc, cnt, 14, 17, 17);
        WB_RI(*vc, type, 15, 14, 16);
        WB_RI(*vc, shft, 18, 9, 13);
        break;
    case 20:
        WB_RI(*vc, cnt, 23, 8, 8);
        WB_RI(*vc, type, 24, 5, 7);
        WB_RI(*vc, shft, 27, 0, 4);
        break;
    }
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif

#pragma auto_inline off
#pragma auto_inline reset


void fn_800B2E88(u32);




















#pragma push
#pragma peephole off
extern u32 *BootInfo_8035A520;

#pragma pop


#pragma push
#pragma peephole off
extern u16 DriveInfo_80307500[];

#pragma pop


void __OSUnhandledException(void);


void ICFlashInvalidate(void);


#pragma push
#pragma peephole off
extern char lbl_8035952C[8];

#pragma pop

#pragma push
#pragma peephole off

#pragma pop

extern f64 ZeroF_8035A530;
extern f32 ZeroPS_8035A538[2];


void __OSEVStart(void);
void __OSEVEnd(void);
void __OSEVSetNumber(void);
void __DBVECTOR(void);









void DecrementerExceptionCallback(void);

void fn_800B7700(void);


















asm void Reset(register u32 resetCode) {
    nofralloc
    b L_20
L_4:
    mfspr r8,  1008
    ori r8, r8, 8
    mtspr 1008,  r8
    isync
    sync
    nop
    b L_24
L_20:
    b L_40
L_24:
    mftb r5
L_28:
    mftb r6
    subf r7, r5, r6
    cmplwi r7, 4388
    blt L_28
    nop
    b L_44
L_40:
    b L_60
L_44:
    lis r8, -13312
    ori r8, r8, 12288
    li r4, 3
    stw r4, 36(r8)
    stw r3, 36(r8)
    nop
    b L_64
L_60:
    b L_6c
L_64:
    nop
    b L_64
L_6c:
    b L_4
}

void fn_800B82D8(u32 resetCode) {
    extern int OSDisableInterrupts(void);
    extern void ICFlashInvalidate(void);
    OSDisableInterrupts();
    __VIRegs[1] = 0;
    ICFlashInvalidate();
    Reset(resetCode * 8);
}

volatile u16 __DSPRegsA[32] : 0xCC005000;
#define ASSERTMSGLINE(a, b, c)
#define __DSPWorkBuffer (void *)0x81000000
extern u8 DSPInitCode_802D7788[128];

volatile u16 __DSPRegsA[32] : 0xCC005000;
#define ASSERTMSGLINE(a, b, c)
#define __DSPWorkBuffer (void *)0x81000000

#pragma push
#pragma peephole off
extern char lbl_802D7808[];

#pragma pop

#pragma push
#pragma peephole off
void L2GlobalInvalidate(void);
void *OSSetErrorHandler(u16, void *);

#pragma pop

#pragma push
#pragma peephole off
void L2GlobalInvalidate(void);

#pragma pop

#pragma push
#pragma peephole off
#pragma pop

typedef struct { char gpr; char fpr; char reserved[2]; char *input_arg_area; char *reg_save_area; } va_listA[1];


#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 pad208[0x5AC - 0x208];
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
typedef struct WBColorK { u8 r, g, b, a; } WBColorK;
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
typedef struct WBGX {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u8 pad514[0x554 - 0x514];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline void wbSetupTimeoutAlarm(WBCard *card) {
    void fn_800B3EF8(void *alarm);
    void OSSetAlarm(void *alarm, s64 tick, void *handler);
    void fn_800CD228(void *alarm, void *context);
    s32 EXISelect(s32, s32, s32);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    s32 EXILock(s32, s32, void *);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 mode);
    s32 EXIDma(s32 chan, void *buf, s32 len, u32 type, void *cb);
    void fn_800CCEA0(s32 chan, void *context);
    void fn_800CCF48(s32 chan, void *context);
    fn_800B3EF8(card->alarm);
    switch (card->cmd[0]) {
    case 0xF2:
        OSSetAlarm(card->alarm, (s64)(((*(u32 *)0x800000F8 / 4) / 1000) * 100), fn_800CD228);
        break;
    case 0xF3:
        break;
    case 0xF4:
    case 0xF1:
        OSSetAlarm(card->alarm, (s64)2 * (*(u32 *)0x800000F8 / 4) * (card->sectorSize / 0x2000), fn_800CD228);
        break;
    }
}

#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline s32 wbPutControlBlock(WBCard *card, s32 result) {
    s32 fn_800CDBD8(s32 chan, void *pcard);
    u16 *fn_800CF4C0(WBCard *card);
    WBCardDir *fn_800CF8C4(WBCard *card);
    int enabled;
    enabled = OSDisableInterrupts();
    if (card->attached) {
        card->result = result;
    } else if (card->result == -1) {
        card->result = result;
    }
    OSRestoreInterrupts(enabled);
    return result;
}

#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline int wbCARDRand(void) {
    u32 OSGetTick(void);
    extern volatile u32 lbl_80359608;
    lbl_80359608 = lbl_80359608 * 1103515245 + 12345;
    return (int)((lbl_80359608 >> 16) & 0x7FFF);
}
inline void wbCARDSrand(u32 seed) {
    u32 OSGetTick(void);
    extern volatile u32 lbl_80359608;
    lbl_80359608 = seed;
}

#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_WBDspTask
#define WBT_WBDspTask
typedef struct WBDspTask { volatile u32 state; volatile u32 priority; volatile u32 flags; u16 *iram_mmem_addr; u32 iram_length; u32 iram_addr; u16 *dram_mmem_addr; u32 dram_length; u32 dram_addr; u16 dsp_init_vector; u16 dsp_resume_vector; void *init_cb; void *res_cb; void *done_cb; void *req_cb; } WBDspTask;
#endif
#ifndef WBT_WBDecParam
#define WBT_WBDecParam
typedef struct WBDecParam { u8 *inputAddr; u32 inputLength; u32 aramAddr; u8 *outputAddr; } WBDecParam;
#endif
inline u32 wbexnor(u32 data, u32 lshift) {
    s32 fn_800CE290(void);
    s32 fn_800CE14C(s32 chan, u32 data, void *rbuf, s32 rlen, s32 mode);
    s32 EXIUnlock(s32);
    void fn_800D1120(s32 chan, s32 result);
    s32 fn_800CD08C(s32 chan, u8 *status);
    s32 fn_800F2730(s32 chan);
    u32 wk;
    u32 work;
    u32 i;
    work = data;
    for (i = 0; i < lshift; i++) {
        wk = ~(work ^ (work << 7) ^ (work << 15) ^ (work << 23));
        work = (work << 1) | ((wk >> 30) & 0x00000002);
    }
    return work;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline u16 *wbGetFat(WBCard *card) {
    s32 fn_800CF818(s32 chan, u16 *fat, WBCardCB callback);
    return card->currentFat;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline WBCardDir *wbGetDir(WBCard *card) {
    s32 fn_800CDC90(WBCard *card, s32 result);
    void *memcpy(void *, const void *, unsigned long);
    s32 fn_800CF45C(s32 chan, u32 addr, s32 length, void *dst, WBCardCB callback);
    void fn_800CF8CC(s32 chan, s32 result);
    return card->currentDir;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline void wbSetDrawDone(void) {
    extern u8 lbl_8035A948;
    extern u8 lbl_8035A94C[8];
    void fn_800D6270(void);
    void fn_800BA2C8(void *queue);
    int enabled;
    enabled = OSDisableInterrupts();
    WB_RASW(0x45000002);
    fn_800D6270();
    lbl_8035A948 = 0;
    OSRestoreInterrupts(enabled);
}
inline void wbWaitDrawDone(void) {
    extern u8 lbl_8035A948;
    extern u8 lbl_8035A94C[8];
    void fn_800D6270(void);
    void fn_800BA2C8(void *queue);
    int enabled;
    enabled = OSDisableInterrupts();
    while (!lbl_8035A948) {
        fn_800BA2C8(lbl_8035A94C);
    }
    OSRestoreInterrupts(enabled);
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_WBFifoObj_v2
#define WBT_WBFifoObj_v2
typedef struct WBFifoObj_v2 { u8 b[128]; } WBFifoObj_v2;
#endif
inline void wbInitFifoPtrs(WBFifo *fifo, void *readPtr, void *writePtr) {
    WBFifo *fn_800D51D8(void);
    WBFifo *fn_800D51D0(void);
    void GXSetGPFifo(void *fifo);
    void GXSetCPUFifo(void *fifo);
    int enabled = OSDisableInterrupts();
    fifo->rdPtr = readPtr;
    fifo->wrPtr = writePtr;
    fifo->count = (u8 *)writePtr - (u8 *)readPtr;
    if (fifo->count < 0) {
        fifo->count += fifo->size;
    }
    OSRestoreInterrupts(enabled);
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline s32 wbAccess(WBCard *card, WBCardDir *ent) {
    s32 fn_800E8B1C(const void *, const void *, u32);
    extern u8 lbl_80323780[];
    const u8 *diskID = (const u8 *)card->diskID;
    if (ent->gameName[0] == 0xFF) {
        return -4;
    }
    if (diskID == lbl_80323780 || (fn_800E8B1C(ent->gameName, diskID, 4) == 0 && fn_800E8B1C(ent->company, diskID + 4, 2) == 0)) {
        return 0;
    }
    return -10;
}

#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline s32 wbIsWritable(WBCard *card, WBCardDir *ent) {
    s32 fn_800E8B1C(const void *, const void *, u32);
    s32 fn_800D1DE0(WBCard *card, WBCardDir *ent);
    extern u8 lbl_80323780[];
    extern u8 lbl_80359612;
    const u8 *diskID;
    s32 result;
    u8 perm;
    diskID = (const u8 *)card->diskID;
    result = fn_800D1DE0(card, ent);
    if (result == -10) {
        perm = ent->permission & lbl_80359612;
        if (perm & 0x20) {
            if (fn_800E8B1C(ent->gameName, lbl_80323780, 4) == 0 && fn_800E8B1C(ent->company, lbl_80323780 + 4, 2) == 0) {
                return 0;
            }
        }
        if (perm & 0x40) {
            if (fn_800E8B1C(ent->gameName, lbl_80323780, 4) == 0 && fn_800E8B1C(ent->company, diskID + 4, 2) == 0) {
                return 0;
            }
        }
    }
    return result;
}

#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
inline s32 wbGetFileNo(WBCard *card, const char *fileName, s32 *pfileNo) {
    s32 fn_800CDBD8(s32 chan, void *pcard);
    WBCardDir *fn_800CF8C4(WBCard *card);
    s32 fn_800D1DE0(WBCard *card, WBCardDir *ent);
    s32 fn_800D1D78(WBCardDir *ent, const char *fileName);
    s32 fn_800CDC90(WBCard *card, s32 result);
    WBCardDir *dir;
    WBCardDir *ent;
    s32 fileNo;
    s32 result;
    if (!card->attached) {
        return -3;
    }
    dir = fn_800CF8C4(card);
    for (fileNo = 0; fileNo < 127; fileNo++) {
        ent = &dir[fileNo];
        result = fn_800D1DE0(card, ent);
        if (result < 0) {
            continue;
        }
        if (fn_800D1D78(ent, fileName)) {
            *pfileNo = fileNo;
            return 0;
        }
    }
    return -4;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_WBCardStat
#define WBT_WBCardStat
typedef struct WBCardStat { char fileName[32]; u32 length; u32 time; u8 gameName[4]; u8 company[2]; u8 bannerFormat; u8 pad; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u32 commentAddr; u32 offsets[16]; } WBCardStat;
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_WBCardStat
#define WBT_WBCardStat
typedef struct WBCardStat { char fileName[32]; u32 length; u32 time; u8 gameName[4]; u8 company[2]; u8 bannerFormat; u8 pad; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u32 commentAddr; u32 offsets[16]; } WBCardStat;
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#pragma push
#pragma scheduling on
#pragma optimize_for_size off
#pragma fp_contract on
#pragma auto_inline off
#pragma dont_inline off
#pragma peephole on
typedef struct DVDCBQ { struct DVDCBQ *next; struct DVDCBQ *prev; } DVDCBQ;
typedef struct { DVDCBQ *next; DVDCBQ *prev; } WQEntryQ;
extern WQEntryQ
    WaitingQueue_80308458[4];
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif


static inline DVDCBQ *PopWaitingQueuePrioQ(s32 prio) {
    DVDCBQ *tmp;
    int enabled;
    DVDCBQ *q;

    enabled = OSDisableInterrupts();
    q = (DVDCBQ *)&WaitingQueue_80308458[prio];
    tmp = q->next;
    q->next = tmp->next;
    tmp->next->prev = q;
    OSRestoreInterrupts(enabled);
    tmp->next = 0;
    tmp->prev = 0;
    return tmp;
}


#pragma pop

#pragma push
#pragma scheduling on
#pragma optimize_for_size off
#pragma fp_contract on
#pragma auto_inline off
#pragma dont_inline off
#pragma peephole on
typedef struct DVDCBD DVDCBD;
typedef void (*DVDCBCallbackD)(
    s32, DVDCBD *);
struct DVDCBD {
    DVDCBD *next;
    DVDCBD *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    void *id;
    DVDCBCallbackD callback;
    void *userData;
};
#ifndef TRK_PRIV_H
volatile u32 __DIRegs[16] : 0xCC006000;
#endif
#ifndef TRK_PRIV_H
extern s32
    FatalErrorFlag_8035A690;
#endif
extern volatile s32
    PausingFlag_8035A688;
extern volatile s32
    PauseFlag_8035A684;
#ifndef TRK_PRIV_H
extern DVDCBD *
    executing_8035A678;
#endif
#ifndef TRK_PRIV_H
extern DVDCBD
    DummyCommandBlock_80308400;
#endif
#ifndef TRK_PRIV_H
extern BOOL
    autoInvalidation_80359574;
#endif
extern BOOL
    ResetRequired_8035A6B0;
extern BOOL
    ResumeFromHere_8035A6A0;
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
void DVDLowReset(void);



#pragma pop

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
static inline s32 wbReadNintendoID(s32 chan, u32 *id) {
    extern u32 lbl_802DF480[];
    extern u32 lbl_802DF4A0[];
    extern u16 lbl_80359610;
    s32 EXIGetID(s32 chan, u32 dev, u32 *id);
    s32 fn_800D0A90(u32 id);
    s32 fn_800CD17C(s32 chan);
    s32 fn_800CD08C(s32 chan, u8 *status);
    s32 fn_800F2730(s32 chan);
    s32 fn_800CE354(s32 chan, u8 *flashID);
    void *__OSLockSramEx(void);
    s32 __OSUnlockSramEx(s32 commit);
    s32 fn_800CCFCC(s32 chan, s32 enable);
    void fn_800F2540(s32 chan, void *cb);
    void fn_800CCD88(s32 chan, void *context);
    s32 EXIUnlock(s32 chan);
    void DCInvalidateRange(void *addr, u32 nBytes);
    s32 fn_800CF31C(s32 chan, u32 addr, s32 length, void *dst, WBCardCB callback);
    void fn_800D1120(s32 chan, s32 result);
    s32 fn_800CDC90(WBCard *card, s32 result);
    void fn_800D1440(s32 chan, s32 result);
    if (!EXIGetID(chan, 0, id)) {
        return -3;
    }
    if (fn_800D0A90(*id)) {
        return 0;
    }
    return -2;
}
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
typedef struct WBDirCheck_v2 {
    u8 padding0[58];
    s16 checkCode;
    u16 checkSum;
    u16 checkSumInv;
} WBDirCheck_v2;
#endif
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
static inline void wbCARDCheckSum(void *ptr, int length, u16 *checksum, u16 *checksumInv) {
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
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
typedef struct WBDirCheck_v2 {
    u8 padding0[58];
    s16 checkCode;
    u16 checkSum;
    u16 checkSumInv;
} WBDirCheck_v2;
#endif
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma peephole off
#pragma peephole reset
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma peephole off
#pragma peephole reset
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma peephole off
#ifndef WB_MEMCTR
#define WB_MEMCTR
static inline u32 wbReadMEMCounterU32(volatile u16 *hi, volatile u16 *lo) {
    u32 ctrH0, ctrH1, ctrL;
    ctrH0 = *hi;
    do {
        ctrH1 = ctrH0;
        ctrH0 = *hi;
        ctrL = *lo;
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}
#endif
#pragma peephole reset
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
static inline s32 wbCARDGetResultCode(s32 chan, WBCard *card) {
    void fn_800BA2C8(void *);
    if (chan < 0 || chan >= 2) {
        return -128;
    }
    return card->result;
}
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_SerId
#define WBT_SerId
typedef struct WBSerId { u8 serial[32]; } WBSerId;
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WB_NUMXFB
#define WB_NUMXFB
static inline u32 wbGetNumXfbLines(u32 efbHt, u32 iScale) {
    u32 count, realHt, iScaleD;
    count = (efbHt - 1) * 0x100;
    realHt = (count / iScale) + 1;
    iScaleD = iScale;
    if (iScaleD > 0x80 && iScaleD < 0x100) {
        while (iScaleD % 2 == 0) {
            iScaleD /= 2;
        }
        if (efbHt % iScaleD == 0) {
            realHt++;
        }
    }
    if (realHt > 0x400) {
        realHt = 0x400;
    }
    return realHt;
}
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
typedef struct WBDSPTask_v2 {
    volatile u32 state;
    volatile u32 priority;
    volatile u32 flags;
} WBDSPTask_v2;
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#define WB_DSPREGS WBDSPRegs
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
typedef struct WBDSPTask_v2 {
    volatile u32 state;
    volatile u32 priority;
    volatile u32 flags;
} WBDSPTask_v2;
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#define WB_DSPREGS WBDSPRegs
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
typedef struct WBDSPTask_v2 {
    volatile u32 state;
    volatile u32 priority;
    volatile u32 flags;
} WBDSPTask_v2;
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#define WB_DSPREGS WBDSPRegs
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
typedef struct WBDSPTaskInfo_v2 {
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
    void (*init_cb)(void *);
    void (*res_cb)(void *);
    void (*done_cb)(void *);
    void (*req_cb)(void *);
    struct WBDSPTaskInfo_v2 *next;
    struct WBDSPTaskInfo_v2 *prev;
} WBDSPTaskInfo_v2;
#endif
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
typedef struct WBDSPTaskInfo_v2 {
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
    void (*init_cb)(void *);
    void (*res_cb)(void *);
    void (*done_cb)(void *);
    void (*req_cb)(void *);
    struct WBDSPTaskInfo_v2 *next;
    struct WBDSPTaskInfo_v2 *prev;
} WBDSPTaskInfo_v2;
#endif
#endif

#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
typedef struct WBDSPTaskInfo_v2 {
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
    void (*init_cb)(void *);
    void (*res_cb)(void *);
    void (*done_cb)(void *);
    void (*req_cb)(void *);
    struct WBDSPTaskInfo_v2 *next;
    struct WBDSPTaskInfo_v2 *prev;
} WBDSPTaskInfo_v2;
#endif
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#pragma auto_inline reset

#pragma push
#pragma scheduling on
#pragma optimize_for_size off
#pragma fp_contract on
#pragma auto_inline off
#pragma dont_inline off
#pragma peephole on
typedef struct DVDCB8 DVDCB8;
struct DVDCB8 {
    DVDCB8 *next;
    DVDCB8 *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    void *id;
    void (*callback)(s32, DVDCB8 *);
    void *userData;
};
typedef struct {
    u32 bootFilePosition;
    u32 FSTPosition;
    u32 FSTLength;
    u32 FSTMaxLength;
    void *FSTAddress;
    u32 userPosition;
    u32 userLength;
    u32 padding0;
} DVDBB28;
#ifndef TRK_PRIV_H
extern DVDCB8
    DummyCommandBlock_80308400;
#endif
#ifndef TRK_PRIV_H
extern DVDCB8 *
    executing_8035A678;
#endif
#ifndef TRK_PRIV_H
extern s32
    lbl_8035A6AC;
#endif
#ifndef TRK_PRIV_H
extern u8
    BB2_803083C0[];
#endif
#ifndef TRK_PRIV_H
extern u8 *
    bootInfo_8035A680;
#endif
#ifndef TRK_PRIV_H
extern char
    lbl_802D9FFC[];
#endif
#ifndef TRK_PRIV_H
extern char
    lbl_8035957C[];
#endif
#ifndef TRK_PRIV_H
extern u8 *
    IDShouldBe_8035A67C;
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif

extern u8
    lbl_803083E0[];
extern void (*lbl_8035A6BC)(
    DVDCB8 *);
void fn_800BCAC4(void *diskID, void (*cb)(u32));
void fn_800BE1D4(u32 intType);
void cbForStateMotorStopped(u32 intType);
void fn_800BDBD0(u32 intType);







#pragma pop

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
volatile u16 WBDSPRegs[32] : 0xCC005000; /* keep */
#endif
#pragma auto_inline reset

#ifndef WB_PRELUDE
#define WB_PRELUDE
typedef struct WBFifo { u8 *base; u8 *top; u32 size; u32 hiWatermark; u32 loWatermark; void *rdPtr; void *wrPtr; s32 count; u8 bind_cpu; u8 bind_gp; } WBFifo;
typedef union WBPipe { u8 u8; u16 u16; u32 u32; s8 s8; s16 s16; s32 s32; f32 f32; } WBPipe;
volatile WBPipe WBWG : 0xCC008000;
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
typedef struct WBGX2 {
    u16 vNumNot; u16 bpSentNot; u16 vNum; u16 vLim;
    u32 cpEnable; u32 cpStatus; u32 cpClr; u32 vcdLo; u32 vcdHi;
    u32 vatA[8]; u32 vatB[8]; u32 vatC[8];
    u32 lpSize; u32 matIdxA; u32 matIdxB;
    u32 indexBase[4]; u32 indexStride[4];
    u32 ambColor[2]; u32 matColor[2];
    u32 suTs0[8]; u32 suTs1[8]; u32 suScis0; u32 suScis1;
    u32 tref[8]; u32 iref; u32 bpMask; u32 IndTexScale0; u32 IndTexScale1;
    u32 tevc[16]; u32 teva[16]; u32 tevKsel[8];
    u32 cmode0; u32 cmode1; u32 zmode; u32 peCtrl;
    u32 cpDispSrc; u32 cpDispSize; u32 cpDispStride; u32 cpDisp;
    u32 cpTexSrc; u32 cpTexSize; u32 cpTexStride; u32 cpTex;
    u8 cpTexZ; u32 genMode;
    u8 TexRegions0[8][16];
    u8 TexRegions1[8][16];
    u8 TexRegions2[8][16];
    u8 TlutRegions[20][16];
    u8 pad4C8[0x50C - 0x4C8];
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    u8 pad59C[0x5A4 - 0x59C];
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} WBGX2;
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
typedef struct WBTexObjI { u32 mode0; u32 mode1; u32 image0; u32 image3; void *userData; s32 fmt; u32 tlutName; u16 loadCnt; u8 loadFmt; u8 flags; } WBTexObjI;
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result); /* keep */
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif

#pragma auto_inline off
#ifndef WBT_PanTab
#define WBT_PanTab
#ifndef WBT_WBPanTab_v2
#define WBT_WBPanTab_v2
typedef struct WBPanTab_v2 {
    u8 pad[0x78C];
    s32 pan32[128];
    s16 pan16[128];
    s16 pan16b[128];
} WBPanTab_v2;
#endif
#endif
#pragma auto_inline reset

#pragma push
#pragma scheduling on
#pragma optimize_for_size off
#pragma fp_contract on
#pragma auto_inline off
#pragma dont_inline off
#pragma peephole on
#ifndef TRK_PRIV_H
struct DVDCB8 {
    DVDCB8 *next;
    DVDCB8 *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    void *id;
    void (*callback)(s32, DVDCB8 *);
    void *userData;
};
#endif
#ifndef TRK_PRIV_H
volatile u32 __DIRegs[16] : 0xCC006000;
#endif
#ifndef TRK_PRIV_H
extern DVDCB8 *
    executing_8035A678;
#endif
#ifndef TRK_PRIV_H
extern u8
    BB2_803083C0[];
#endif
#ifndef TRK_PRIV_H
extern u8 *
    bootInfo_8035A680;
#endif
#ifndef TRK_PRIV_H
extern u8 *
    IDShouldBe_8035A67C;
#endif
#ifndef TRK_PRIV_H
extern volatile s32
    PauseFlag_8035A684;
#endif
#ifndef TRK_PRIV_H
extern volatile s32
    PausingFlag_8035A688;
#endif
#ifndef TRK_PRIV_H
extern s32
    FatalErrorFlag_8035A690;
#endif
extern volatile u32
    CurrCommand_8035A694;
#ifndef TRK_PRIV_H
extern u32
    ResumeFromHere_8035A6A0;
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif

extern volatile u32
    CancelLastError_8035A6A4;
extern s32
    DVDInitialized_8035A6B8;
extern s32
    FirstTimeInBootrom_8035A6B4;
extern char *
    __DVDVersion;
extern u8
    __DVDThreadQueue[8];
void stateBusy(DVDCB8 *block);
void __DVDInitWA(void);
void __DVDInterruptHandler(short type, void *context);
void __fstLoad(void);

typedef struct {
    u8 bb2[32];
    u8 currID[32];
    u8 dummy[48];
    u8 alarm[40];
} DVDBSS3;
#define EXE3 ((DVDCB8 *)executing_8035A678)



#undef EXE3
#pragma pop
