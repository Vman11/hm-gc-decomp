/* Functions from 0x802127F0 to 0x80212860, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8* start;
    u8* end;
    s32 unk8;
    s32 unkC;
    s32 count;
    s32 unk14;
} UnkBuf_802127F0;

void fn_802127F0(UnkBuf_802127F0* buf) {
    buf->start = NULL;
    buf->end = NULL;
    buf->unk8 = -1;
    buf->unkC = -1;
    buf->count = 0;
    buf->unk14 = 0;
}

void fn_80212814(UnkBuf_802127F0* buf, u8* start, s32 count, s32 arg3) {
    if (buf->start != NULL) {
        fn_802127F0(buf);
    }
    buf->start = start;
    buf->count = count;
    buf->unk14 = arg3;
    buf->end = start + buf->count * 8;
}

