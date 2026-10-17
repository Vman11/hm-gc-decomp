/* Functions from 0x8014D7A0 to 0x8014D7E8, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 unk0[0x84];
    s32 unk84;
} Unk8014D7A0Data;

typedef struct {
    Unk8014D7A0Data *unk0;
    u8 unk4[0x14];
    f32 unk18;
    f32 unk1C;
} Unk8014D7A0;

typedef struct {
    u8 unk0[0x84];
    s32 unk84[1];
} Unk8014D7CCData;

typedef struct {
    Unk8014D7CCData *unk0;
    u8 unk4[0x18];
    f32 unk1C[1];
} Unk8014D7CC;

extern f32 lbl_80364500;
void fn_8014D7A0(void *arg0, s32 arg1) {
    ((f32 *)((u8 *)arg0 + 0x18))[arg1] = lbl_80364500;
    ((f32 *)((u8 *)arg0 + 0x1C))[arg1] = lbl_80364500;
    ((s32 *)((u8 *)(*(void **)arg0) + 0x84))[arg1] = 0;
}

#pragma peephole off
void fn_8014D7CC(Unk8014D7A0 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 offset = arg1 * 4;
    ((Unk8014D7A0 *)((u8 *)arg0 + offset))->unk1C = farg0;
    ((Unk8014D7A0Data *)((u8 *)arg0->unk0 + offset))->unk84 = arg2;
}
#pragma peephole reset
