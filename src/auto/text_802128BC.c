/* Functions from 0x802128BC to 0x80212998, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u8* start;
    u8* end;
    s32 unk8;
    s32 unkC;
    s32 count;
    s32 unk14;
} UnkBuf_802127F0;


void fn_802128BC(UnkBuf_802127F0* buf) {
    buf->start = NULL;
    buf->end = NULL;
    buf->unk8 = -1;
    buf->unkC = -1;
    buf->count = 0;
    buf->unk14 = 0;
}

s32 fn_802128E0(void *arg0, u32 arg1) {
    if ((arg1 >= (u16) M2C_FIELD(arg0, u16 *, 0xE)) || !(M2C_FIELD(arg0, u16 *, 0x12) & 2)) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0xC);
}

