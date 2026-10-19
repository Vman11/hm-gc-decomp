#ifndef TRK_PRIV_H
#define TRK_PRIV_H

#include "common.h"

typedef struct TrkBuf {
    u32 mutex;
    s32 isInUse;
    u32 count;
    u32 pos;
    u8 data[0x880];
} TrkBuf;
typedef struct TRKFramingState {
    s32 msgBufID;
    TrkBuf *buffer;
    u8 receiveState;
    s32 isEscape;
    u8 fcs;
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
s32 fn_800E17E8(s8 arg0);
s32 fn_800E1810(void);
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
s32 fn_800E04D0(u32, u32, TrkBuf *, u32 *, BOOL);
s32 fn_800E0B0C(u32, u32, TrkBuf *, u32 *, BOOL);
s32 fn_800E0098(u32, u32, TrkBuf *, u32 *, BOOL);
s32 fn_800E0640(u32, u32, TrkBuf *, u32 *, BOOL);

#endif
