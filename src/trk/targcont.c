/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
#include "trk_priv.h"
#define TRK_PPC_INLINE_H

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
void ReserveEXI2Port(void);
void TRKTargetSetStopped(s32 arg0);
void UnreserveEXI2Port(void);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

s32 TRKTargetContinue(void) {
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}
#pragma pop
