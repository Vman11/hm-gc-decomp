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
s32 fn_800DAF24(TrkBuf *msg);
s32 fn_800DB4F0(TrkBuf *buf, u8 *data);
s32 fn_800DBAA0(void *arg0, u32 arg1);
void fn_800DBAD0(TrkBuf *buf, s32 keepData);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DC1D0(TrkBuf* buf) {
    u8 opt;
    u8 kind;
    u8 value;
    s32 err;
    s32 n;
    s32 ok;

    opt = 0;
    kind = 0;
    value = 0;
    fn_800DBAA0(buf, 0);
    err = fn_800DB4F0(buf, &opt);
    if (err == 0) {
        err = fn_800DB4F0(buf, &kind);
    }
    if (err == 0) {
        err = fn_800DB4F0(buf, &value);
    }
    if (err != 0) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x01;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
    } else if (kind == 1) {
        fn_800E1AD8(value);
    }
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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DC374(TrkBuf* buf) {
    s8 b;
    s32 n;
    s32 ok;
    s32 err = fn_800DF874();
    switch (err) {
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
#pragma pop
s32 fn_800DB370(TrkBuf *buf, u32 *data);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DC474(TrkBuf* buf) {
    u8 cmd;
    u8 opt;
    u8 count;
    u32 start;
    u32 end;
    u32 pc;
    s32 err;
    s32 n;
    s32 ok;

    if ((u32)buf->count < 3) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x02;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
    fn_800DBAA0(buf, 0);
    err = fn_800DB4F0(buf, &cmd);
    if (err == 0) {
        err = fn_800DB4F0(buf, &opt);
    }
    switch (opt) {
    case 0:
    case 0x10:
        if (err == 0) {
            fn_800DB4F0(buf, &count);
        }
        if (count >= 1) {
            break;
        }
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x11;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    case 1:
    case 0x11:
        if ((u32)buf->count != 0xA) {
            fn_800DBAD0(buf, 1);
            if (buf->pos < 0x880) {
                buf->data[buf->pos++] = 0x80;
                buf->count++;
            }
            if (buf->pos < 0x880) {
                buf->data[buf->pos++] = 0x02;
                buf->count++;
            }
            n = 3;
            do {
                ok = fn_800DAF24(buf);
                n--;
            } while (ok != 0 && n > 0);
            return;
        }
        if (err == 0) {
            err = fn_800DB370(buf, &start);
        }
        if (err == 0) {
            fn_800DB370(buf, &end);
        }
        pc = fn_800DFAF0();
        if (pc >= start && pc <= end) {
            break;
        }
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x11;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    default:
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x12;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
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
            switch (opt) {
            case 0:
            case 0x10:
                fn_800DFB7C(count, opt == 0x10);
                break;
            case 1:
            case 0x11:
                fn_800DFB00(start, end, opt == 0x11);
                break;
            }
        }
    }
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DCAF8(TrkBuf* buf) {
    u8 cmd;
    u8 opt;
    u32 start;
    u32 end;
    s32 err;
    s32 n;
    s32 ok;
    s8 b;

    if ((u32)buf->count != 0xA) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x02;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
    fn_800DBAA0(buf, 0);
    err = fn_800DB4F0(buf, &cmd);
    if (err == 0) {
        err = fn_800DB4F0(buf, &opt);
    }
    if (err == 0) {
        err = fn_800DB370(buf, &start);
    }
    if (err == 0) {
        err = fn_800DB370(buf, &end);
    }
    if (start > end) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x13;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
    if (err == 0) {
        err = fn_800DF8AC(opt, start, end);
    }
    if (err == 0) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x00;
            buf->count++;
        }
    }
    if (err != 0) {
        switch (err) {
        case 0x703:
            b = 0x12;
            break;
        default:
            b = 3;
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
    } else {
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
    }
}
#pragma pop
s32 fn_800DB438(TrkBuf *buf, u16 *data);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DCDF0(TrkBuf* buf) {
    u8 cmd;
    u8 opt;
    u16 start;
    u16 end;
    u32 size;
    s32 err;
    s32 n;
    s32 ok;
    s8 b;

    if ((u32)buf->count <= 6) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x02;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
    fn_800DBAA0(buf, 0);
    err = fn_800DB4F0(buf, &cmd);
    if (err == 0) {
        err = fn_800DB4F0(buf, &opt);
    }
    if (err == 0) {
        err = fn_800DB438(buf, &start);
    }
    if (err == 0) {
        err = fn_800DB438(buf, &end);
    }
    if (start > end) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x14;
            buf->count++;
        }
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
        return;
    }
    switch (opt) {
    case 0:
        err = fn_800E0B0C(start, end, buf, &size, 0);
        break;
    case 1:
        err = fn_800E0640(start, end, buf, &size, 0);
        break;
    case 2:
        err = fn_800E04D0(start, end, buf, &size, 0);
        break;
    case 3:
        err = fn_800E0098(start, end, buf, &size, 0);
        break;
    default:
        err = 0x703;
        break;
    }
    if (err == 0) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x80;
            buf->count++;
        }
        if (buf->pos < 0x880) {
            buf->data[buf->pos++] = 0x00;
            buf->count++;
        }
    }
    if (err != 0) {
        switch (err) {
        case 0x703:
            b = 0x12;
            break;
        case 0x701:
            b = 0x14;
            break;
        case 0x302:
            b = 0x2;
            break;
        case 0x702:
            b = 0x15;
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
            b = 3;
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
    } else {
        n = 3;
        do {
            ok = fn_800DAF24(buf);
            n--;
        } while (ok != 0 && n > 0);
    }
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DD1B8(TrkBuf *buf) {
u8 cmd; u8 opt; u16 start; u16 end; u32 length;
s32 err; s32 n; s32 ok; s8 b;
if ((u32)buf->count != 6) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; }
 n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); return; }
fn_800DBAA0(buf, 0);
err = fn_800DB4F0(buf, &cmd);
if (err == 0) err = fn_800DB4F0(buf, &opt);
if (err == 0) err = fn_800DB438(buf, &start);
if (err == 0) err = fn_800DB438(buf, &end);
if (start > end) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x14; buf->count++; }
 n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); return; }
if (err == 0) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; }
 }
switch (opt & 7) {
case 0: err = fn_800E0B0C(start,end,buf,&length,1); break;
case 1: err = fn_800E0640(start,end,buf,&length,1); break;
case 2: err = fn_800E04D0(start,end,buf,&length,1); break;
case 3: err = fn_800E0098(start,end,buf,&length,1); break;
default: err = 0x703; break;
}
if (err != 0) {
switch (err) {
case 0x703: b=0x12; break;
case 0x701: b=0x14; break;
case 0x702: b=0x15; break;
case 0x704: b=0x21; break;
case 0x705: b=0x22; break;
case 0x706: b=0x20; break;
default: b=3; break;
}
fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = b; buf->count++; }
 n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else { n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); }
}
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
s32 fn_800DB8A8(TrkBuf *buf, u16 data);
s32 fn_800DB970(TrkBuf *buf, void *data, u32 length);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DD584(void *arg) {
    TrkBuf *b = arg;
    u8 command;
    u8 options;
    u16 length_temp;
    u32 start;
    u32 length;
    u8 buf[0x800];
    s32 error;
    u8 replyError;

    if ((u32)b->count <= 8) {
        TRKStandardACK(b, 0x80, 2);
        return;
    }

    fn_800DBAA0(b, 0);
    error = fn_800DB4F0(b, &command);
    if (error == 0) error = fn_800DB4F0(b, &options);
    if (error == 0) error = fn_800DB438(b, &length_temp);
    if (error == 0) error = fn_800DB370(b, &start);

    if (options & 2) {
        TRKStandardACK(b, 0x80, 0x12);
        return;
    }

    if (b->count != length_temp + 8 || length_temp > 0x800) {
        TRKStandardACK(b, 0x80, 0x11);
        return;
    }

    if (error == 0) {
        length = length_temp;
        error = fn_800DB970(b, buf, length);
        if (error == 0) {
            error = fn_800E0C4C(buf, start, &length, (options & 8) ? 0 : 1, 0);
        }
        length_temp = length;
    }

    if (error == 0) TRKMessageIntoReply(b, 0x80, 0);

    if (error == 0) error = fn_800DB8A8(b, length_temp);

    if (error != 0) {
        switch (error) {
        case 0x702: replyError = 0x15; break;
        case 0x700: replyError = 0x13; break;
        case 0x704: replyError = 0x21; break;
        case 0x705: replyError = 0x22; break;
        case 0x706: replyError = 0x20; break;
        default: replyError = 3; break;
        }
        TRKStandardACK(b, 0x80, replyError);
    } else {
        TRKSendACK(b);
    }
}
#pragma pop
s32 fn_800DB9FC(TrkBuf *buf, const void *data, u32 length);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DD9A4(void *arg) {
    TrkBuf *b = arg;
    u8 command;
    u8 options;
    u16 length_temp;
    u32 start;
    u32 length;
    u8 buf[0x800];
    s32 error;
    u8 replyError;

    if ((u32)b->count != 8) {
        TRKStandardACK(b, 0x80, 2);
        return;
    }
    fn_800DBAA0(b, 0);
    error = fn_800DB4F0(b, &command);
    if (error == 0) error = fn_800DB4F0(b, &options);
    if (error == 0) error = fn_800DB438(b, &length_temp);
    if (error == 0) error = fn_800DB370(b, &start);

    if (options & 2) {
        TRKStandardACK(b, 0x80, 0x12);
        return;
    }
    if (length_temp > 0x800) {
        TRKStandardACK(b, 0x80, 0x11);
        return;
    }

    TRKMessageIntoReply(b, 0x80, 0);

    if (error == 0) {
        length = length_temp;
        error = fn_800E0C4C(buf, start, &length, (options & 8) ? 0 : 1, 1);
        length_temp = length;
        if (error == 0) error = fn_800DB8A8(b, length_temp);
        if (error == 0) error = fn_800DB9FC(b, buf, length);
    }

    if (error != 0) {
        switch (error) {
        case 0x702: replyError = 0x15; break;
        case 0x700: replyError = 0x13; break;
        case 0x704: replyError = 0x21; break;
        case 0x705: replyError = 0x22; break;
        case 0x706: replyError = 0x20; break;
        default: replyError = 3; break;
        }
        TRKStandardACK(b, 0x80, replyError);
    } else {
        TRKSendACK(b);
    }
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DDDB4(TrkBuf *buf) {
u8 bytes[8];
s32 n;
s32 ok;
if ((u32)buf->count != 1) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; }
ok=fn_800DFF6C(bytes);
if(ok==0) {
u8 value=bytes[0];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[1];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[2];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[3];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[4];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[5];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[6];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok!=0) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 3; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else { n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); }
}
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DE14C(TrkBuf *buf) {
u8 mask[0x20];
s32 n;
s32 ok;
if ((u32)buf->count != 1) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; }
ok=fn_800DFFCC(mask);
if(ok==0) ok=fn_800DB9FC(buf,mask,0x20);
if(ok==0) {
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=2; buf->count++; ok=0; }
}
if(ok!=0) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 3; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else { n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); }
}
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DE37C(TrkBuf *buf) {
u8 bytes[4];
s32 n;
s32 ok;
if ((u32)buf->count != 1) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; }
ok=fn_800E0070(bytes);
if(ok==0) {
u8 value=bytes[0];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[1];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[2];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok==0) {
u8 value=bytes[3];
if(buf->pos >= 0x880) ok=0x301;
else { buf->data[buf->pos++]=value; buf->count++; ok=0; }
}
if(ok!=0) {
fn_800DBAD0(buf,1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 128; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 3; buf->count++; }
n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else { n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); }
}
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

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
#pragma pop
void fn_800DAB9C(void *arg0, s8 arg1);
s32 fn_800DABB4(void *event);

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DE95C(TrkBuf* buf, u8 a, u8 b) {
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
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off

void fn_800DEA14(s32 arg0) {
    lbl_803257D0[0] = arg0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
#pragma peephole on
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline off

asm long fn_800DEA20() {
    nofralloc
    lis r3, lbl_803257D0@ha
    addi r3, r3, lbl_803257D0@l
    lwz r3, 0(r3)
    blr
}
#pragma pop
