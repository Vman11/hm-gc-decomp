/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"
#include "trk_priv.h"
#include "trk_ppc_inline.h"
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

s32 fn_800DAF24(TrkBuf *msg) {
#pragma push
#pragma inline_depth(4)
    s32 err;
    u8 checksum;
    u32 i;
    u8 c;
    u32 acc = 0;

    for (i = 0; i < msg->count; i++) {
        acc = (acc + msg->data[i]) & 0xFF;
    }
    checksum = acc ^ 0xFF;

    err = fn_800E17E8(0x7E);
    if (err == 0) {
        for (i = 0; i < msg->count; i++) {
            c = msg->data[i];
            if (c == 0x7E || c == 0x7D) {
                err = fn_800E17E8(0x7D);
                c ^= 0x20;
                if (err != 0) {
                    break;
                }
            }
            err = fn_800E17E8(c);
            if (err != 0) {
                break;
            }
        }
    }

    if (err == 0) {
        c = checksum;
        if (c == 0x7E || c == 0x7D) {
            err = fn_800E17E8(0x7D);
            c ^= 0x20;
            if (err != 0) {
                goto end;
            }
        }
        err = fn_800E17E8(c);
    }
end:
    if (err == 0) {
        err = fn_800E17E8(0x7E);
    }
    if (err == 0) {
        err = fn_800E1810();
    }
    return err;
}

s32 fn_800DB100(TrkBuf *buf, u32 *data, s32 count) {
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
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

s32 fn_800DB1F0(TrkBuf *buf, u8 *data, s32 length) {
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma peephole off
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

s32 fn_800DB288(TrkBuf *buf, u64 *data) {
#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
#pragma auto_inline off
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

s32 fn_800DB370(TrkBuf *buf, u32 *data) {
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma push
#pragma use_lmw_stmw on
#pragma inline_depth(4)
#pragma peephole on
#pragma opt_propagation off
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

s32 fn_800DB4F0(TrkBuf *buf, u8 *data) {
    return TRKReadBuffer_inline(buf, data, 1);
}

s32 fn_800DB570(TrkBuf *buf, u32 *data, s32 count) {
#pragma opt_propagation on
#pragma peephole on
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
#pragma auto_inline off
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

s32 fn_800DB970(TrkBuf *buf, void *data, u32 length) {
#pragma pop
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

s32 fn_800DBBA0(s32 *msgID, TrkBuf **outMsg) {
#pragma push
#pragma use_lmw_stmw on
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

s32 TRKInitializeMessageBuffers(void) {
#pragma pop
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

void fn_800DBD08(s32 bufferIdx) {
#pragma push
#pragma dont_inline on
    void fn_800DABB4(void *);
    u8 event[0xC];

    fn_800DAB9C(event, 2);
    lbl_803257B4.msgBufID = -1;
    M2C_FIELD(event, s32 *, 8) = bufferIdx;
    fn_800DABB4(event);
}

void TRKGetInput(void) {
#pragma push
#pragma dont_inline on
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

s32 fn_800DBDF0(void) {
#pragma push
#pragma dont_inline off
#pragma auto_inline off
    s32 fn_800DBBA0(s32 *msgID, TrkBuf **outMsg);
    s32 fn_800E16F8(u8 *c);
    void fn_800DE95C(TrkBuf* buf, u8 a, u8 b);
    s32 err;
    s32 readErr;
    s32 ok;
    s32 id;
    u8 c;

    err = 0;
    readErr = fn_800E16F8(&c);
    while (readErr == 0 && err == 0) {
        if (lbl_803257B4.receiveState != 2) {
            lbl_803257B4.isEscape = 0;
        }
        switch (lbl_803257B4.receiveState) {
        case 0:
            if (c == 0x7E) {
                err = fn_800DBBA0(&lbl_803257B4.msgBufID, &lbl_803257B4.buffer);
                lbl_803257B4.fcs = 0;
                lbl_803257B4.receiveState = 1;
            }
            break;
        case 1:
            if (c == 0x7E) {
                break;
            }
            lbl_803257B4.receiveState = 2;
        case 2:
            if ((s8)c == 0x7E) {
                if (lbl_803257B4.isEscape) {
                    fn_800DE95C(lbl_803257B4.buffer, 0xFF, 4);
                    if (lbl_803257B4.msgBufID != -1) {
                        fn_800DBB10(lbl_803257B4.msgBufID);
                        lbl_803257B4.msgBufID = -1;
                    }
                    lbl_803257B4.buffer = NULL;
                    lbl_803257B4.receiveState = 0;
                    break;
                }
                {
                    TrkBuf *buf = lbl_803257B4.buffer;
                    if (buf->count < 2) {
                        fn_800DE95C(buf, 0xFF, 2);
                        if (lbl_803257B4.msgBufID != -1) {
                            fn_800DBB10(lbl_803257B4.msgBufID);
                            lbl_803257B4.msgBufID = -1;
                        }
                        lbl_803257B4.buffer = NULL;
                        lbl_803257B4.receiveState = 0;
                        ok = 0;
                    } else {
                        buf->pos = 0;
                        buf->count--;
                        ok = 1;
                    }
                }
                if (ok) {
                    id = lbl_803257B4.msgBufID;
                    lbl_803257B4.buffer = NULL;
                    lbl_803257B4.msgBufID = -1;
                    lbl_803257B4.receiveState = 0;
                    return id;
                }
                lbl_803257B4.receiveState = 0;
                break;
            }
            if (lbl_803257B4.isEscape) {
                c ^= 0x20;
                lbl_803257B4.isEscape = 0;
            } else if ((s8)c == 0x7D) {
                lbl_803257B4.isEscape = 1;
                break;
            }
            {
                TrkBuf *buf = lbl_803257B4.buffer;
                if (buf->pos >= 0x880) {
                    err = 0x301;
                } else {
                    buf->data[buf->pos++] = c;
                    buf->count++;
                    err = 0;
                }
            }
            lbl_803257B4.fcs += c;
            break;
        case 3:
            if (c == 0x7E) {
                if (lbl_803257B4.msgBufID != -1) {
                    fn_800DBB10(lbl_803257B4.msgBufID);
                    lbl_803257B4.msgBufID = -1;
                }
                lbl_803257B4.buffer = NULL;
                lbl_803257B4.receiveState = 0;
            }
            break;
        }
        readErr = fn_800E16F8(&c);
    }
    return -1;
}

void usr_put_initialize(void) {
#pragma pop

}

void fn_800DC0AC(const char *s) {
#pragma push
#pragma dont_inline off
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


s32 TRKInitializeDispatcher(void) {
    lbl_803257C8[0] = 0x20;
    return 0;
}

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

void fn_800DD584(TrkBuf *buf) {
u8 cmd; u8 opt; u16 length; u32 address; u32 size; u8 data[0x800];
s32 err; s32 n; s32 ok; s8 b;

if ((u32)buf->count <= 8) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; } n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); return; }
fn_800DBAA0(buf, 0);
err = fn_800DB4F0(buf, &cmd);
if (err == 0) err = fn_800DB4F0(buf, &opt);
if (err == 0) err = fn_800DB438(buf, &length);
if (err == 0) err = fn_800DB370(buf, &address);
if (opt & 2) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x12; buf->count++; } n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); return; }
if (buf->count != length + 8 || length > 0x800) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x11; buf->count++; } n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); return; }
if (err == 0) {
size = length;
err = fn_800DB970(buf, data, length);
if (err == 0) err = fn_800E0C4C(data, address, &size, ((opt & 8) == 0), 0);
length = size;
}
if (err == 0) { fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; } }
if (err == 0) err = fn_800DB8A8(buf, length);
if (err != 0) {
switch (err) {
case 0x701: b=0x13; break;
case 0x700:
case 0x702: b=0x15; break;
case 0x704: b=0x21; break;
case 0x705: b=0x22; break;
case 0x706: b=0x20; break;
default: b=3; break;
}
fn_800DBAD0(buf, 1);
if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
if (buf->pos < 0x880) { buf->data[buf->pos++] = b; buf->count++; } n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
} else { n = 3; do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0); }
}

void fn_800DD9A4(void *arg) {
#pragma push
#pragma opt_propagation on
    TrkBuf *buf = arg;
    u8 cmd;
    u8 opt;
    u16 length;
    u32 address;
    u32 count;
    u8 data[0x800];
    s32 ok;
    s32 err;
    s32 n;
    s32 b;
    s32 access;
    if ((u32)buf->count != 8) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 2; buf->count++; }
        n = 3;
        do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
        return;
    }
    fn_800DBAA0(buf, 0);
    err = fn_800DB4F0(buf, &cmd);
    if (err == 0) err = fn_800DB4F0(buf, &opt);
    if (err == 0) err = fn_800DB438(buf, &length);
    if (err == 0) err = fn_800DB370(buf, &address);
    if (opt & 2) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x12; buf->count++; }
        n = 3;
        do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
        return;
    }
    if (length > 0x800) {
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x11; buf->count++; }
        n = 3;
        do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
        return;
    }
    fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0; buf->count++; }
    if (err == 0) {
        access = ((opt >> 3) & 1) ^ 1;
        count = length;
        err = fn_800E0C4C(data, address, &count, access, 1);
        length = count;
        if (err == 0) err = fn_800DB8A8(buf, length);
        if (err == 0) err = fn_800DB9FC(buf, data, count);
    }
    if (err != 0) {
        switch (err) {
        case 0x702: b = 0x15; break;
        case 0x700: b = 0x13; break;
        case 0x704: b = 0x21; break;
        case 0x705: b = 0x22; break;
        case 0x706: b = 0x20; break;
        default: b = 3; break;
        }
        fn_800DBAD0(buf, 1);
        if (buf->pos < 0x880) { buf->data[buf->pos++] = 0x80; buf->count++; }
        if (buf->pos < 0x880) { buf->data[buf->pos++] = b; buf->count++; }
        n = 3;
        do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
    } else {
        n = 3;
        do { ok = fn_800DAF24(buf); n--; } while (ok != 0 && n > 0);
    }
}

void fn_800DDDB4(TrkBuf *buf) {
#pragma pop
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

s32 fn_800DECE0(char *path, u8 mode, u32 *handle, u8 *ioResult) {
    s32 fn_800DEE88(TrkBuf *, s32 *, s32, s32, s32);
    s32 replyBufferId;
    s32 bufferId;
    TrkBuf *buffer;
    s32 error;
    TrkBuf *replyBuffer;

    *handle = 0;
    error = fn_800DBBA0(&bufferId, &buffer);
    if (error == 0) {
        s32 err;
        TrkBuf *b = buffer;
        if (b->pos >= 0x880) {
            err = 0x301;
        } else {
            b->data[b->pos++] = 0xD2;
            err = 0;
            b->count++;
        }
        error = err;
    }
    if (error == 0) {
        s32 err;
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
        error = fn_800DB8A8(buffer, strlen(path) + 1);
    }
    if (error == 0) {
        error = fn_800DB66C(buffer, (u8 *)path, strlen(path) + 1);
    }
    if (error == 0) {
        *ioResult = 0;
        error = fn_800DEE88(buffer, &replyBufferId, 7, 3, 0);
        if (error == 0) {
            replyBuffer = TRKGetBuffer(replyBufferId);
            fn_800DBAA0(replyBuffer, 2);
        }
        if (error == 0) {
            error = fn_800DB4F0(replyBuffer, ioResult);
        }
        if (error == 0) {
            error = fn_800DB370(replyBuffer, handle);
        }
        fn_800DBB10(replyBufferId);
    }
    fn_800DBB10(bufferId);
    return error;
}

s32 fn_800DEE88(TrkBuf *msgBuf, s32 *bufferId, u32 p1, u32 p2, s32 p3) {
    s32 error = 0;
    TrkBuf *buffer;
    u32 timer;
    s32 tries;
    u8 msg_command;
    u8 msg_error;
    s32 badReply = 1;

    *bufferId = -1;

    for (tries = p2 + 1; tries != 0 && *bufferId == -1 && error == 0; tries--) {
        error = fn_800DAF24(msgBuf);
        if (error == 0) {
            if (p3) {
                timer = 0;
            }

            while (1) {
                do {
                    *bufferId = fn_800DBDF0();
                    if (*bufferId != -1)
                        break;
                } while (!p3 || ++timer < 79999980);

                if (*bufferId == -1)
                    break;

                badReply = 0;

                buffer = TRKGetBuffer(*bufferId);
                fn_800DBAA0(buffer, 0);

                if ((error = fn_800DB4F0(buffer, &msg_command)) != 0)
                    break;

                if (msg_command >= 0x80)
                    break;

                fn_800DBD08(*bufferId);
                *bufferId = -1;
            }

            if (*bufferId != -1) {
                if (buffer->count < p1) {
                    badReply = 1;
                }
                if (error == 0 && !badReply) {
                    error = fn_800DB4F0(buffer, &msg_error);
                }
                if (error == 0 && !badReply) {
                    if (msg_command != 0x80 || msg_error != 0) {
                        badReply = 1;
                    }
                }
                if (error != 0 || badReply) {
                    fn_800DBB10(*bufferId);
                    *bufferId = -1;
                }
            }
        }
    }

    if (*bufferId == -1) {
        error = 0x800;
    }

    return error;
}

s32 fn_800DF02C(u32 handle, u32 data, u32 *count, u8 *ioResult, s32 needReply, s32 read) {
#pragma push
    s32 error;
    s32 replyBufferId;
    TrkBuf *replyBuffer;
    s32 bufferId;
    TrkBuf *buffer;
    u32 length;
    u32 done;
    u8 replyIOResult;
    u16 replyLength;
    s32 exit;
    s32 err;

    if (data == 0 || *count == 0) {
        return 2;
    }

    exit = 0;
    *ioResult = 0;
    done = 0;
    error = 0;
    while (!exit && done < *count && error == 0 && *ioResult == 0) {
        if (*count - done > 0x800) {
            length = 0x800;
        } else {
            length = *count - done;
        }

        error = fn_800DBBA0(&bufferId, &buffer);

        if (error == 0) {
            u8 cmd;
            TrkBuf *b;
            cmd = 0xD0;
            if (read) {
                cmd = 0xD1;
            }
            b = buffer;
            if (b->pos >= 0x880) {
                err = 0x301;
            } else {
                b->data[b->pos++] = cmd;
                err = 0;
                b->count++;
            }
            error = err;
        }

        if (error == 0)
            error = fn_800DB7D0(buffer, handle);

        if (error == 0)
            error = fn_800DB8A8(buffer, length);

        if (!read && error == 0)
            error = fn_800DB66C(buffer, (u8 *)(data + done), length);

        if (error == 0) {
            if (needReply) {
                replyLength = 0;
                replyIOResult = 0;

                error = fn_800DEE88(buffer, &replyBufferId, read ? 5 : 5, 3, !(read && handle == 0));
                if (error == 0) {
                    replyBuffer = TRKGetBuffer(replyBufferId);
                    fn_800DBAA0(replyBuffer, 2);
                }

                if (error == 0)
                    error = fn_800DB4F0(replyBuffer, &replyIOResult);

                if (error == 0)
                    error = fn_800DB438(replyBuffer, &replyLength);

                if (read && error == 0) {
                    if (replyBuffer->count != replyLength + 5) {
                        replyLength = replyBuffer->count - 5;
                        if (replyIOResult == 0)
                            replyIOResult = 1;
                    }

                    if (replyLength <= length)
                        error = fn_800DB1F0(replyBuffer, (u8 *)(data + done), replyLength);
                }

                if (replyLength != length) {
                    if ((!read || replyLength >= length) && replyIOResult == 0)
                        replyIOResult = 1;
                    length = replyLength;
                    exit = 1;
                }

                *ioResult = replyIOResult;
                fn_800DBB10(replyBufferId);
            } else {
                error = fn_800DAF24(buffer);
            }
        }

        fn_800DBB10(bufferId);
        done += length;
    }

    *count = done;
    return error;
}

s32 fn_800DF2F0(void *mutex) {
#pragma pop
    return 0;
}

s32 fn_800DF2F8(void *mutex) {
    return 0;
}

s32 fn_800DF300(void *mutex) {
    return 0;
}

s32 fn_800DF308(u8 cmd) {
#pragma push
#pragma dont_inline off
#pragma auto_inline off
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

void TRKTargetSetStopped(s32 arg0) {
#pragma push
#pragma dont_inline on
    M2C_FIELD(&gTRKState, s32 *, 0x98) = arg0;
}

s32 TRKTargetStopped(void) {
#pragma pop
    return M2C_FIELD(&gTRKState, s32 *, 0x98);
}

s32 fn_800DF8AC(u8 unused, u32 start, u32 end) {
    if (start < end) {
        fn_800DF3E0(start, end - start);
        return 0;
    }
    return 0x700;
}

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

s32 fn_800E0098(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registerStorageSize, BOOL read) {
#pragma push
#pragma dont_inline off
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

s32 fn_800E04D0(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
#pragma pop
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

s32 fn_800E0640(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
#pragma push
#pragma dont_inline off
#pragma auto_inline off
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

    PPCMtmsr(PPCMfmsr() | 0x2000);

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

s32 fn_800E0B0C(u32 firstRegister, u32 lastRegister, TrkBuf *b, u32 *registersLengthPtr, BOOL read) {
#pragma pop
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
        target_msr = PPCMfmsr();
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

s32 fn_800E0D98(u32 address, u32 length, u8 access) {
#pragma push
#pragma dont_inline off
#pragma auto_inline on
#pragma inline_depth(2)
    u32 end;
    s32 error;
    u32 i;
    end = (length + address) - 1;
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

s32 TRKInitializeTarget(void) {
#pragma pop
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

void EnableMetroTRKInterrupts(void) {
    fn_800E18F0();
}

s32 fn_800E1538(void) {
    return 0x54;
}

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

s32 fn_800E17E8(s8 arg0) {
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

u8 fn_800E1AC8(void) {
#pragma push
#pragma dont_inline on
    return *lbl_80327F90;
}

void fn_800E1AD8(u8 v) {
#pragma pop
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

asm long fn_800DF4D0() {
    nofralloc
    mfmsr r3
    blr
}

asm int fn_800DF4D8() {
    nofralloc
    mtmsr r3
    blr
}

asm unsigned char fn_800E1050(long a, long b, long *c, long d) {
    nofralloc
    twi 31, r0, 0
    blr
}

asm int fn_800E1058() {
    nofralloc
    twi 31, r0, 0
    blr
}

asm int fn_800E1060() {
    nofralloc
    twi 31, r0, 0
    blr
}

asm int fn_800E1068() {
    nofralloc
    twi 31, r0, 0
    blr
}

asm long fn_800DEA20() {
    nofralloc
    lis r3, lbl_803257D0@ha
    addi r3, r3, lbl_803257D0@l
    lwz r3, 0(r3)
    blr
}

asm void fn_800DF3E0(u32 addr, s32 length) {
    nofralloc
    lis r5, 0xFFFF
    ori r5, r5, 0xFFF1
    and r5, r5, r3
    subf r3, r5, r3
    add r4, r4, r3
loop:
    dcbst 0, r5
    dcbf 0, r5
    sync
    icbi 0, r5
    addic r5, r5, 8
    addic. r4, r4, -8
    bge loop
    isync
    blr
}

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

extern void TRKInterruptHandler();
asm void TRKLoadContext(void *ctx, long arg) {
    nofralloc
    lwz r0,0(r3)
    lwz r1,4(r3)
    lwz r2,8(r3)
    lhz r5,418(r3)
    rlwinm. r6,r5,0,30,30
    beq L_6B2C
    rlwinm r5,r5,0,31,29
    sth r5,418(r3)
    lmw r5,20(r3)
    b L_6B30
L_6B2C:
    lmw r13,52(r3)
L_6B30:
    mr r31,r3
    mr r3,r4
    lwz r4,128(r31)
    mtcr r4
    lwz r4,132(r31)
    mtlr r4
    lwz r4,136(r31)
    mtctr r4
    lwz r4,140(r31)
    mtxer r4
    mfmsr r4
    rlwinm r4,r4,0,17,15
    rlwinm r4,r4,0,31,29
    mtmsr r4
    mtsprg 1,r2
    lwz r4,12(r31)
    mtsprg 2,r4
    lwz r4,16(r31)
    mtsprg 3,r4
    lwz r2,408(r31)
    lwz r4,412(r31)
    lwz r31,124(r31)
    b TRKInterruptHandler
}

extern void TRKRestoreExtended1Block();
extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;
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

extern void TRKSaveExtended1Block();
extern void _db_stack_addr();
asm void InitMetroTRK(void) {
    nofralloc
    addi r1,r1,-4
    stw r3,0(r1)
    lis r3,gTRKCPUState@h
    ori r3,r3,gTRKCPUState@l
    stmw r0,0(r3)
    lwz r4,0(r1)
    addi r1,r1,4
    stw r1,4(r3)
    stw r4,12(r3)
    mflr r4
    stw r4,132(r3)
    stw r4,128(r3)
    mfcr r4
    stw r4,136(r3)
    mfmsr r4
    ori r3,r4,32768
    xori r3,r3,32768
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3,gTRKCPUState@h
    ori r3,r3,gTRKCPUState@l
    lmw r0,0(r3)
    li r0,0
    mtspr 1010,r0
    mtspr 1013,r0
    lis r1,_db_stack_addr@h
    ori r1,r1,_db_stack_addr@l
    mr r3,r5
    bl InitMetroTRKCommTable
    cmpwi r3,1
    bne L_6680
    lwz r4,132(r3)
    mtlr r4
    lmw r0,0(r3)
    blr
L_6680:
    b TRK_main
}

extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;
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

extern void TRK_saved_exceptionID_803257D8();
extern struct TRKExceptionStatus gTRKExceptionStatus_802E01A4, wC_unused_exc;
extern void gTRKSaveState();
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

asm void TRKSaveExtended1Block(void) {
    nofralloc
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    mfsr r16,0
    mfsr r17,1
    mfsr r18,2
    mfsr r19,3
    mfsr r20,4
    mfsr r21,5
    mfsr r22,6
    mfsr r23,7
    mfsr r24,8
    mfsr r25,9
    mfsr r26,10
    mfsr r27,11
    mfsr r28,12
    mfsr r29,13
    mfsr r30,14
    mfsr r31,15
    stmw r16,424(r2)
    mftb r10
    mftbu r11
    mfspr r12,1008
    mfspr r13,1009
    mfsrr1 r14
    mfpvr r15
    mfibatu r16,0
    mfibatl r17,0
    mfibatu r18,1
    mfibatl r19,1
    mfibatu r20,2
    mfibatl r21,2
    mfibatu r22,3
    mfibatl r23,3
    mfdbatu r24,0
    mfdbatl r25,0
    mfdbatu r26,1
    mfdbatl r27,1
    mfdbatu r28,2
    mfdbatl r29,2
    mfdbatu r30,3
    mfdbatl r31,3
    stmw r10,488(r2)
    mfsdr1 r22
    mfdar r23
    mfdsisr r24
    mfsprg r25,0
    mfsprg r26,1
    mfsprg r27,2
    mfsprg r28,3
    li r29,0
    mfspr r30,1010
    mfear r31
    stmw r22,604(r2)
    mfspr r20,912
    mfspr r21,913
    mfspr r22,914
    mfspr r23,915
    mfspr r24,916
    mfspr r25,917
    mfspr r26,918
    mfspr r27,919
    mfspr r28,920
    mfspr r29,921
    mfspr r30,922
    mfspr r31,923
    stmw r20,764(r2)
    b L_6898
    mfspr r16,928
    mfspr r17,935
    mfspr r18,936
    mfspr r19,937
    mfspr r20,938
    mfspr r21,939
    mfspr r22,940
    mfspr r23,941
    mfspr r24,942
    mfspr r25,943
    mfspr r26,944
    mfspr r27,951
    mfspr r28,959
    mfspr r29,1014
    mfspr r30,1015
    mfspr r31,1023
    stmw r16,696(r2)
L_6898:
    mfspr r19,1013
    mfspr r20,953
    mfspr r21,954
    mfspr r22,957
    mfspr r23,958
    mfspr r24,955
    mfspr r25,952
    mfspr r26,956
    mfspr r27,1020
    mfspr r28,1021
    mfspr r29,1022
    mfspr r30,1019
    mfspr r31,1017
    stmw r19,644(r2)
    blr
    mfspr r25,976
    mfspr r26,977
    mfspr r27,978
    mfspr r28,979
    mfspr r29,980
    mfspr r30,981
    mfspr r31,982
    stmw r25,576(r2)
    mfdec r31
    stw r31,632(r2)
    blr
}

extern struct wC_RestoreFlags gTRKRestoreFlags, wC_unused_rf;
asm void TRKRestoreExtended1Block(void) {
    nofralloc
    lis r2,gTRKCPUState@h
    ori r2,r2,gTRKCPUState@l
    lis r5,gTRKRestoreFlags@h
    ori r5,r5,gTRKRestoreFlags@l
    lbz r3,0(r5)
    lbz r6,1(r5)
    li r0,0
    stb r0,0(r5)
    stb r0,1(r5)
    cmpwi r3,0
    beq L_693C
    lwz r24,488(r2)
    lwz r25,492(r2)
    mttbl r24
    mttbu r25
L_693C:
    lmw r20,764(r2)
    mtspr 912,r20
    mtspr 913,r21
    mtspr 914,r22
    mtspr 915,r23
    mtspr 916,r24
    mtspr 917,r25
    mtspr 918,r26
    mtspr 919,r27
    mtspr 920,r28
    mtspr 922,r30
    mtspr 923,r31
    b L_6988
    lmw r26,736(r2)
    mtspr 944,r26
    mtspr 951,r27
    mtspr 1014,r29
    mtspr 1015,r30
    mtspr 1023,r31
L_6988:
    lmw r19,644(r2)
    mtspr 1013,r19
    mtspr 953,r20
    mtspr 954,r21
    mtspr 957,r22
    mtspr 958,r23
    mtspr 955,r24
    mtspr 952,r25
    mtspr 956,r26
    mtspr 1020,r27
    mtspr 1021,r28
    mtspr 1022,r29
    mtspr 1019,r30
    mtspr 1017,r31
    b L_69F4
    cmpwi r6,0
    beq L_69D4
    lwz r26,632(r2)
    mtdec r26
L_69D4:
    lmw r25,576(r2)
    mtspr 976,r25
    mtspr 977,r26
    mtspr 978,r27
    mtspr 979,r28
    mtspr 980,r29
    mtspr 981,r30
    mtspr 982,r31
L_69F4:
    lmw r16,424(r2)
    mtsr 0,r16
    mtsr 1,r17
    mtsr 2,r18
    mtsr 3,r19
    mtsr 4,r20
    mtsr 5,r21
    mtsr 6,r22
    mtsr 7,r23
    mtsr 8,r24
    mtsr 9,r25
    mtsr 10,r26
    mtsr 11,r27
    mtsr 12,r28
    mtsr 13,r29
    mtsr 14,r30
    mtsr 15,r31
    lmw r12,496(r2)
    mtspr 1008,r12
    mtspr 1009,r13
    mtsrr1 r14
    mtspr 287,r15
    mtibatu 0,r16
    mtibatl 0,r17
    mtibatu 1,r18
    mtibatl 1,r19
    mtibatu 2,r20
    mtibatl 2,r21
    mtibatu 3,r22
    mtibatl 3,r23
    mtdbatu 0,r24
    mtdbatl 0,r25
    mtdbatu 1,r26
    mtdbatl 1,r27
    mtdbatu 2,r28
    mtdbatl 2,r29
    mtdbatu 3,r30
    mtdbatl 3,r31
    lmw r22,604(r2)
    mtsdr1 r22
    mtdar r23
    mtdsisr r24
    mtsprg 0,r25
    mtsprg 1,r26
    mtsprg 2,r27
    mtsprg 3,r28
    mtspr 1010,r30
    mtear r31
    blr
}

#include "trk_priv.h"

#pragma push
#pragma dont_inline on
s32 TRKDispatchMessage(TrkBuf *buf) {
    s32 fn_800DB4F0(TrkBuf *, u8 *);
    s32 err;
    u8 cmd;

    err = 0x500;
    fn_800DBAA0(buf, 0);
    fn_800DB4F0(buf, &cmd);
    cmd &= 0xFF;
    if (cmd < lbl_803257C8[0]) {
        err = lbl_802E00D8[cmd](buf);
    }
    return err;
}
#pragma pop
