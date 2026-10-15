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

s32 fn_80212910(void *arg0, u32 arg1, u32 arg2) {
    u32 offset;
    u8* entry;
    u8* base;
    u32 i;
    u32 count = M2C_FIELD(arg0, u16 *, 0xE);
    for (i = 0, offset = 0; i < count; i++) {
        base = M2C_FIELD(arg0, u8 **, 4);
        entry = base + offset;
        if (arg1 == *(u16*)(entry + 8) && arg2 == *(u8*)(entry + 0xA)) {
            return (s32)(base + i * 0xC);
        }
        offset += 0xC;
    }
    return 0;
}

s32 fn_80212968(void *arg0, u32 arg1) {
    if ((arg1 >= (u16) M2C_FIELD(arg0, u16 *, 0xC)) || !(M2C_FIELD(arg0, u16 *, 0x12) & 2)) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0) + (arg1 * 0x14);
}

