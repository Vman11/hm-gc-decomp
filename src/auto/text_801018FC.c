/* Functions from 0x801018FC to 0x80101A90, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 unk0;
    u32 unk4;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} UnkStruct_801018FC;

extern u32 lbl_80363848;

void fn_801018FC(f32 *out, f32 *a, f32 *b, f32 t) {
    f32 x = a[0];
    f32 y = a[1];
    f32 z = a[2];
    f32 w = a[3];
    f32 dx = b[0] - x;
    f32 dy = b[1] - y;
    f32 dz = b[2] - z;
    f32 dw = b[3] - w;
    out[0] = t * dx + x;
    out[1] = t * dy + y;
    out[2] = t * dz + z;
    out[3] = t * dw + w;
}

void fn_80101950(UnkStruct_801018FC *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk9 = 0;
    arg0->unkA = 0;
    arg0->unkB = 0;
}

void fn_80101970(UnkStruct_801018FC *arg0, UnkStruct_801018FC *arg1) {
    *arg0 = *arg1;
}

void fn_801019A4(UnkStruct_801018FC *arg0, u32 arg1, u32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6) {
    if (arg2 < 1) {
        arg1 &= ~0x200;
    } else {
        if (arg2 > 4) {
            arg2 = 4;
        }
        arg1 |= lbl_80363848;
    }
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
    arg0->unk9 = arg4;
    arg0->unkA = arg5;
    arg0->unkB = arg6;
}

void fn_80101A5C(UnkStruct_801018FC *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk9 = 0;
    arg0->unkA = 0;
    arg0->unkB = 0;
}

extern u32 lbl_802E22B8[];
u32 fn_80101A7C(s32 arg0) {
    return lbl_802E22B8[arg0];
}

