/* Functions from 0x800FC8F0 to 0x800FC9FC, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AA20;
extern u8 lbl_802E2270[];
extern f32 lbl_80363708;

typedef struct UnkStruct800FC8F0 {
    s32 unk0;
    f32 unk4[3];
    f32 unk10[3];
    f32* unk1C;
    f32* unk20;
    f32 unk24[6];
    f32 unk3C[3];
    f32 unk48[3];
    f32* unk54;
    f32* unk58;
    f32 unk5C[4];
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    void* unk8C;
} UnkStruct800FC8F0;

void fn_800FC9F4(s32 arg0) {
    lbl_8035AA20 = arg0;
}
