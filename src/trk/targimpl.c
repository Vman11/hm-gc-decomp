/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
#include "trk_priv.h"
#include "trk_ppc_inline.h"

long fn_800DF4D0();

int fn_800DF4D8();

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
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma opt_propagation off

static inline s32 TRKReadBuffer_nz(TrkBuf *buf, void *data, u32 length) {
    extern void *fn_80003488(void *, const void *, u32);
    s32 error = 0;
    u32 bytesLeft;
    bytesLeft = buf->count - buf->pos;
    if (length > bytesLeft) {
        error = 0x302;
        length = bytesLeft;
    }
    fn_80003488(data, buf->data + buf->pos, length);
    buf->pos += length;
    return error;
}
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline on

static inline BOOL TRKPutsDone(void) { return FALSE; }
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

static inline void TRKMessageIntoReply(TrkBuf *buf, u8 ackCmd, u8 errSentInAck) {
    fn_800DBAD0(buf, 1);
    TRKAppendBuffer1_ui8(buf, ackCmd);
    TRKAppendBuffer1_ui8(buf, errSentInAck);
}
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

static inline s32 TRKSendACK(TrkBuf *buf) {
    s32 err;
    s32 ackTries = 3;
    do {
        err = fn_800DAF24(buf);
        --ackTries;
    } while (err != 0 && ackTries > 0);
    return err;
}
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

static inline s32 TRKStandardACK(TrkBuf *buf, u8 commandID, u8 replyError) {
    TRKMessageIntoReply(buf, commandID, replyError);
    return TRKSendACK(buf);
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm long fn_800DF4D0() {
    nofralloc
    mfmsr r3
    blr
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm int fn_800DF4D8() {
    nofralloc
    mtmsr r3
    blr
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm void fn_800DF4E0(void *dst, void *src, u32 len, u32 msr_src, u32 msr_dst) {
    nofralloc
    mfmsr r8
    li r10, 0
loop:
    cmpw r10, r5
    beq done
    mtmsr r7
    sync
    lbzx r9, r10, r4
    mtmsr r6
    sync
    stbx r9, r10, r3
    addi r10, r10, 1
    b loop
done:
    mtmsr r8
    sync
    blr
}
#pragma pop

extern void TRKInterruptHandler();

extern void TRKRestoreExtended1Block();

extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;

extern void TRKSaveExtended1Block();

extern void _db_stack_addr();

extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;

extern void TRK_saved_exceptionID_803257D8();

extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;

extern void gTRKSaveState();
void TRKExceptionHandler(void);
void TRKPostInterruptEvent(void);
void TRKSaveExtended1Block(void);
void TRKUARTInterruptHandler(void);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm void TRKInterruptHandler(void) {
    nofralloc
    mtsrr0 r2
    mtsrr1 r4
    mfsprg r4,3
    mfcr r2
    mtsprg 3,r2
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    lwz r2,140(r2)
    ori r2,r2,32770
    xori r2,r2,32770
    sync
    mtmsr r2
    sync
    lis r2,TRK_saved_exceptionID_803257D8@h
    ori r2,r2,TRK_saved_exceptionID_803257D8@l
    sth r3,0(r2)
    cmpwi r3,1280
    bne L_4B64
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    mflr r3
    stw r3,1068(r2)
    bl TRKUARTInterruptHandler
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    lwz r3,1068(r2)
    mtlr r3
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    lwz r2,160(r2)
    lbz r2,0(r2)
    cmpwi r2,0
    beq L_4B48
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    lbz r2,12(r2)
    cmpwi r2,1
    beq L_4B48
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    li r3,1
    stb r3,156(r2)
    b L_4B64
L_4B48:
    lis r2,gTRKSaveState@h
    ori r2,r2,gTRKSaveState@l
    lwz r3,136(r2)
    mtcr r3
    lwz r3,12(r2)
    lwz r2,8(r2)
    rfi
L_4B64:
    lis r2,TRK_saved_exceptionID_803257D8@h
    ori r2,r2,TRK_saved_exceptionID_803257D8@l
    lhz r3,0(r2)
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    lbz r2,12(r2)
    cmpwi r2,0
    bne TRKExceptionHandler
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    stw r0,0(r2)
    stw r1,4(r2)
    mfsprg r0,1
    stw r0,8(r2)
    sth r3,760(r2)
    sth r3,762(r2)
    mfsprg r0,2
    stw r0,12(r2)
    stmw r4,16(r2)
    mfsrr0 r27
    mflr r28
    mfsprg r29,3
    mfctr r30
    mfxer r31
    stmw r27,128(r2)
    bl TRKSaveExtended1Block
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    li r3,1
    stb r3,12(r2)
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    lwz r0,140(r2)
    sync
    mtmsr r0
    sync
    lwz r0,128(r2)
    mtlr r0
    lwz r0,132(r2)
    mtctr r0
    lwz r0,136(r2)
    mtxer r0
    lwz r0,148(r2)
    mtdsisr r0
    lwz r0,144(r2)
    mtdar r0
    lmw r3,12(r2)
    lwz r0,0(r2)
    lwz r1,4(r2)
    lwz r2,8(r2)
    b TRKPostInterruptEvent
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm void TRKExceptionHandler(void) {
    nofralloc
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    sth r3,8(r2)
    mfsrr0 r3
    stw r3,0(r2)
    lhz r3,8(r2)
    cmpwi r3,512
    beq L_4C9C
    cmpwi r3,768
    beq L_4C9C
    cmpwi r3,1024
    beq L_4C9C
    cmpwi r3,1536
    beq L_4C9C
    cmpwi r3,1792
    beq L_4C9C
    cmpwi r3,2048
    beq L_4C9C
    cmpwi r3,4096
    beq L_4C9C
    cmpwi r3,4352
    beq L_4C9C
    cmpwi r3,4608
    beq L_4C9C
    cmpwi r3,4864
    beq L_4C9C
    b L_4CA8
L_4C9C:
    mfsrr0 r3
    addi r3,r3,4
    mtsrr0 r3
L_4CA8:
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    li r3,1
    stb r3,13(r2)
    mfsprg r3,3
    mtcr r3
    mfsprg r2,1
    mfsprg r3,2
    rfi
}
#pragma pop
void TRKInterruptHandlerEnableInterrupts(void);
void TRKRestoreExtended1Block(void);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm int TRKSwapAndGo() {
    nofralloc
    lis r3,gTRKState@h
    ori r3,r3,gTRKState@l
    stmw r0,0(r3)
    mfmsr r0
    stw r0,140(r3)
    mflr r0
    stw r0,128(r3)
    mfctr r0
    stw r0,132(r3)
    mfxer r0
    stw r0,136(r3)
    mfdsisr r0
    stw r0,148(r3)
    mfdar r0
    stw r0,144(r3)
    li r1,-32766
    not r1,r1
    mfmsr r3
    and r3,r3,r1
    mtmsr r3
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    lwz r2,160(r2)
    lbz r2,0(r2)
    cmpwi r2,0
    beq L_4D48
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    li r3,1
    stb r3,156(r2)
    b TRKInterruptHandlerEnableInterrupts
L_4D48:
    lis r2,gTRKExceptionStatus_802E01A4@h
    ori r2,r2,gTRKExceptionStatus_802E01A4@l
    li r3,0
    stb r3,12(r2)
    bl TRKRestoreExtended1Block
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    lmw r27,128(r2)
    mtsrr0 r27
    mtlr r28
    mtcr r29
    mtctr r30
    mtxer r31
    lmw r3,12(r2)
    lwz r0,0(r2)
    lwz r1,4(r2)
    lwz r2,8(r2)
    rfi
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm void TRKInterruptHandlerEnableInterrupts(void) {
    nofralloc
    lis r2,gTRKState@h
    ori r2,r2,gTRKState@l
    lwz r0,140(r2)
    sync
    mtmsr r0
    sync
    lwz r0,128(r2)
    mtlr r0
    lwz r0,132(r2)
    mtctr r0
    lwz r0,136(r2)
    mtxer r0
    lwz r0,148(r2)
    mtdsisr r0
    lwz r0,144(r2)
    mtdar r0
    lmw r3,12(r2)
    lwz r0,0(r2)
    lwz r1,4(r2)
    lwz r2,8(r2)
    b TRKPostInterruptEvent
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

void TRKTargetSetInputPendingPtr(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0xA0) = arg0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800DF874(void) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 1;
    return 0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline on
#pragma auto_inline off

void TRKTargetSetStopped(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = arg0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 TRKTargetStopped(void) {
    return M2C_FIELD(&gTRKState, s32 *, 0x98);
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800DF8AC(u8 unused, u32 start, u32 end) {
    if (start < end) {
        fn_800DF3E0(start, end - start);
        return 0;
    }
    return 0x700;
}
#pragma pop
void fn_800DAB9C(void *arg0, s8 arg1);
s32 fn_800DABB4(void *event);
s32 fn_800DEA30(u32 handle, u32 *position, u8 mode, u8 *ioResult);
s32 fn_800DEBC0(u32 replyError, u8 *ioResult);
s32 fn_800DECE0(char *path, u8 mode, u32 *handle, u8 *ioResult);
s32 fn_800DF02C(u32 handle, u32 data, u32 *count, u8 *ioResult, s32 needReply, s32 read);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 TRKTargetSupportRequest(void) {
    s32 error;
    u8 command;
    u32 *length;
    u8 event[0x10];
    u32 position;
    u8 result;
    command = (u8)gTRKCPUState.gpr[3];
    if (command != 0xD1 && command != 0xD0 && command != 0xD2 && command != 0xD3 && command != 0xD4) {
        fn_800DAB9C(event, 4);
        fn_800DABB4(event);
        return 0;
    }
    if (command == 0xD2) {
        error = fn_800DECE0((char *)gTRKCPUState.gpr[4], (u8)gTRKCPUState.gpr[5], (u32 *)gTRKCPUState.gpr[6], &result);
        if (result == 0 && error != 0) result = 1;
        gTRKCPUState.gpr[3] = result;
    } else if (command == 0xD3) {
        error = fn_800DEBC0(gTRKCPUState.gpr[4], &result);
        if (result == 0 && error != 0) result = 1;
        gTRKCPUState.gpr[3] = result;
    } else if (command == 0xD4) {
        position = *(u32 *)gTRKCPUState.gpr[5];
        error = fn_800DEA30(gTRKCPUState.gpr[4], &position, (u8)gTRKCPUState.gpr[6], &result);
        if (result == 0 && error != 0) result = 1;
        gTRKCPUState.gpr[3] = result;
        *(u32 *)gTRKCPUState.gpr[5] = position;
    } else {
        error = fn_800DF02C((u8)gTRKCPUState.gpr[4], gTRKCPUState.gpr[6], length = (u32 *)gTRKCPUState.gpr[5], &result, 1, command == 0xD1);
        if (result == 0 && error != 0) result = 1;
        gTRKCPUState.gpr[3] = result;
        if (command == 0xD1) fn_800DF3E0(gTRKCPUState.gpr[6], *length);
    }
    gTRKCPUState.unk80 += 4;
    return error;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800DFAF0(void) {
    return M2C_FIELD(&gTRKCPUState, s32 *, 0x80);
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop
s32 fn_800DB7D0(TrkBuf *buf, u32 data);
s32 fn_800DB8A8(TrkBuf *buf, u16 data);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop
s32 fn_800DB6D4(TrkBuf *buf, u64 data);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop
s32 fn_800DF308(u8 cmd);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800E0070(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 2;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 1;
    M2C_FIELD(arg0, s8 *, 3) = 0xA;
    return 0;
}
#pragma pop
s32 fn_800DB288(TrkBuf *buf, u64 *data);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800E0098(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registerStorageSize, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    TRKExceptionStatus savedException;
    u32 i;
    u32 value_buf0[1];
    u32 value_buf[2];
    s32 err;

    if (lastRegister > 0x1F) {
        return 0x701;
    }

    savedException = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    TRKPPCAccessSPR(value_buf0, 920, TRUE);
    value_buf0[0] |= 0xA0000000;
    TRKPPCAccessSPR(value_buf0, 920, FALSE);
    value_buf0[0] = 0;
    TRKPPCAccessSPR(value_buf0, 912, FALSE);

    *registerStorageSize = 0;
    err = 0;

    for (i = firstRegister; (i <= lastRegister) && (err == 0); i++) {
        if (read) {
            TRKPPCAccessPairedSingleRegister((u64 *)value_buf, i, read);
            err = fn_800DB6D4(b, *(u64 *)value_buf);
        } else {
            fn_800DB288(b, (u64 *)value_buf);
            err = TRKPPCAccessPairedSingleRegister((u64 *)value_buf, i, read);
        }
        *registerStorageSize += sizeof(u64);
    }

    if (gTRKExceptionStatus_802E01A4.exceptionDetected) {
        *registerStorageSize = 0;
        err = 0x702;
    }

    gTRKExceptionStatus_802E01A4 = savedException;
    return err;
}
#pragma pop
s32 fn_800DB100(TrkBuf *buf, u32 *data, s32 count);
s32 fn_800DB570(TrkBuf *buf, u32 *data, s32 count);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800E04D0(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    extern struct { u8 TBR; u8 DEC; u8 linker_padding[7]; } gTRKRestoreFlags;
    u32 *data;
    u32 count;
    s32 error;
    register TRKExceptionStatus tempExceptionStatus;

    if (lastRegister > 0x60) {
        return 0x701;
    }

    tempExceptionStatus = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    *registersLengthPtr = 0;

    if (firstRegister <= lastRegister) {
        register count = (lastRegister - firstRegister) + 1;
        data = (u32 *)((u8 *)&gTRKCPUState + 0x1A8) + firstRegister;
        *registersLengthPtr += count * sizeof(u32);

        if (read) {
            error = fn_800DB570(b, data, count);
        } else {
            if (data <= (u32 *)((u8 *)&gTRKCPUState + 0x1EC) &&
                data + count - 1 >= (u32 *)((u8 *)&gTRKCPUState + 0x1E8)) {
                gTRKRestoreFlags.TBR = 1;
            }
            if (data <= (u32 *)((u8 *)&gTRKCPUState + 0x278) &&
                data + count - 1 >= (u32 *)((u8 *)&gTRKCPUState + 0x278)) {
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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800E0640(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    u64 temp;
    s32 error;
    TRKExceptionStatus savedException;
    u32 current;

    if (lastRegister > 0x21) {
        return 0x701;
    }

    savedException = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    fn_800DF4D8(fn_800DF4D0() | 0x2000);

    *registersLengthPtr = 0;
    error = 0;

    for (current = firstRegister; current <= lastRegister && error == 0;
         current++, *registersLengthPtr += sizeof(f64)) {
        if (read) {
            TRKPPCAccessFPRegister(&temp, current, read);
            error = fn_800DB6D4(b, temp);
        } else {
            fn_800DB288(b, &temp);
            error = TRKPPCAccessFPRegister(&temp, current, read);
        }
    }

    if (gTRKExceptionStatus_802E01A4.exceptionDetected) {
        *registersLengthPtr = 0;
        error = 0x702;
    }

    gTRKExceptionStatus_802E01A4 = savedException;
    return error;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 fn_800E0B0C(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
    extern TRKExceptionStatus gTRKExceptionStatus_802E01A4;
    u32 error;
    u32 count;
    u32 *data;
    TRKExceptionStatus savedException;

    if (lastRegister > 0x24) {
        return 0x701;
    }

    savedException = gTRKExceptionStatus_802E01A4;
    gTRKExceptionStatus_802E01A4.exceptionDetected = FALSE;

    count = (lastRegister - firstRegister) + 1;
    data = (u32 *)&gTRKCPUState + firstRegister;
    *registersLengthPtr = (s32)count * sizeof(u32);

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(2)
#pragma dont_inline off
#pragma auto_inline on

s32 fn_800E0D98(u32 address, u32 length, u8 access) {
    u32 end;
    s32 error;
    u32 i;
    end = address + (length - 1);
    error = 0x700;
    if (end < address) return 0x700;
    for (i = 0; i < 1; i++) {
        if (address <= lbl_8029BE18[i][1] && end >= lbl_8029BE18[i][0]) {
            if ((access == 0 && (s32)lbl_8029BE18[i][2] == 0) || (access == 1 && (s32)lbl_8029BE18[i][3] == 0)) {
                error = 0x700;
            } else {
                error = 0;
                if (address < lbl_8029BE18[i][0]) error = fn_800E0D98(address, lbl_8029BE18[i][0] - address, access);
                if (error == 0 && end > lbl_8029BE18[i][1]) error = fn_800E0D98(lbl_8029BE18[i][1], end - lbl_8029BE18[i][1], access);
            }
            break;
        }
    }
    return error;
}
#pragma pop
