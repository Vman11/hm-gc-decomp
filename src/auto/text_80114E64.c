/* Functions from 0x80114E64 to 0x80114F30, found by decomp-toolkit. */
#include "common.h"

s32 fn_80114E64(void* arg0, void* arg1) {
    return M2C_FIELD(arg1, s32*, 0x18) - M2C_FIELD(arg1, s32*, 0x14);
}

s32 fn_80114E74(void* arg0, void* arg1, void* arg2) {
    u8* hdr = M2C_FIELD(arg1, u8**, 0x0);
    u8* base = hdr + M2C_FIELD(hdr, s32*, 0x10);
    s32 off = *(s32*)(base + (M2C_FIELD(arg2, s32*, 0x4) + 3) * 4 + M2C_FIELD(arg1, s32*, 0x10)) + M2C_FIELD(arg2, s32*, 0x8) * 4;
    if (off < 0 || (off >= M2C_FIELD(arg1, s32*, 0x14) && off < M2C_FIELD(arg1, s32*, 0x18))) {
        return 0;
    }
    *(s32*)(base + off) = M2C_FIELD(arg2, s32*, 0xC);
    return 1;
}

s32 fn_80114ED8(void* arg0, void* arg1, void* arg2) {
    u8* hdr = M2C_FIELD(arg1, u8**, 0x0);
    u8* base = hdr + M2C_FIELD(hdr, s32*, 0x10);
    s32 t = M2C_FIELD(arg1, s32*, 0x10);
    s32 v = *(s32*)(base + t + (M2C_FIELD(arg2, s32*, 0x4) + 3) * 4);
    v += M2C_FIELD(arg2, s32*, 0x8) * 4;
    return *(s32*)(base + v);
}

u32 fn_80114F10(void* arg0, void* arg1) {
    u8* hdr = M2C_FIELD(arg1, u8**, 0x0);
    return ((u32*)(hdr + M2C_FIELD(hdr, s32*, 0x10) + M2C_FIELD(arg1, s32*, 0x10)))[2] >> 2;
}

