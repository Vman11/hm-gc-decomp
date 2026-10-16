/* Functions from 0x8021CC7C to 0x8021CD34, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 flags;
    u8 pad4[0x2C];
    void* unk30;
    void* unk34;
    u8 pad38[0x8];
    u32 unk40;
    u32 unk44;
} UnkVtxDesc;

void fn_8021CC7C(UnkVtxDesc* desc, s32 idx, f32* out) {
    if (desc->flags & 0x2000) {
        s16* src = (s16*)((u8*)desc->unk34 + idx * 6);
        __vec2x32float__ a, b;
        __mtspr(916, desc->unk44);
        a = __psq_l(src, 0, 0, 4);
        b = __psq_l(src, 4, 0, 4);
        __psq_st(out, 0, a, 0, 4);
        __psq_st(out, 8, b, 1, 4);
    } else {
        f32* src = (f32*)((u8*)desc->unk34 + idx * 12);
        out[0] = src[0];
        out[1] = src[1];
        out[2] = src[2];
    }
}

void fn_8021CCD8(UnkVtxDesc* desc, s32 idx, f32* out) {
    if (desc->flags & 0x1000) {
        s16* src = (s16*)((u8*)desc->unk30 + idx * 6);
        __vec2x32float__ a, b;
        __mtspr(916, desc->unk40);
        a = __psq_l(src, 0, 0, 4);
        b = __psq_l(src, 4, 0, 4);
        __psq_st(out, 0, a, 0, 4);
        __psq_st(out, 8, b, 1, 4);
    } else {
        f32* src = (f32*)((u8*)desc->unk30 + idx * 12);
        out[0] = src[0];
        out[1] = src[1];
        out[2] = src[2];
    }
}

