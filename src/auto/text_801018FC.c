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
    out[0] = t * (b[0] - a[0]) + a[0];
    out[1] = t * (b[1] - a[1]) + a[1];
    out[2] = t * (b[2] - a[2]) + a[2];
    out[3] = t * (b[3] - a[3]) + a[3];
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
    arg0->unk0 = arg1->unk0;
    arg0->unk4 = arg1->unk4;
    arg0->unk8 = arg1->unk8;
    arg0->unk9 = arg1->unk9;
    arg0->unkA = arg1->unkA;
    arg0->unkB = arg1->unkB;
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

