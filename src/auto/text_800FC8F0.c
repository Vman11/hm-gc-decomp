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

void __ct__9C800FC8F0Fv(UnkStruct800FC8F0* p) {
    p->unk8C = lbl_802E2270;
    p->unk4[0] = lbl_80363708;
    p->unk4[1] = lbl_80363708;
    p->unk4[2] = lbl_80363708;
    p->unk10[0] = lbl_80363708;
    p->unk10[1] = lbl_80363708;
    p->unk10[2] = lbl_80363708;
    p->unk1C = p->unk4;
    p->unk20 = p->unk10;
    p->unk3C[0] = lbl_80363708;
    p->unk3C[1] = lbl_80363708;
    p->unk3C[2] = lbl_80363708;
    p->unk48[0] = lbl_80363708;
    p->unk48[1] = lbl_80363708;
    p->unk48[2] = lbl_80363708;
    p->unk24[0] = lbl_80363708;
    p->unk24[1] = lbl_80363708;
    p->unk24[2] = lbl_80363708;
    p->unk24[3] = lbl_80363708;
    p->unk24[4] = lbl_80363708;
    p->unk24[5] = lbl_80363708;
    p->unk54 = p->unk3C;
    p->unk58 = p->unk48;
    p->unk5C[0] = lbl_80363708;
    p->unk5C[1] = lbl_80363708;
    p->unk5C[2] = lbl_80363708;
    p->unk5C[3] = lbl_80363708;
    p->unk0 = 0;
    p->unk6C = 0;
    p->unk70 = 0;
    p->unk74 = 0;
    p->unk7C = 0;
    p->unk80 = 0;
    p->unk84 = 0;
    p->unk88 = 0;
}

void fn_800FC9F4(s32 arg0) {
    lbl_8035AA20 = arg0;
}
