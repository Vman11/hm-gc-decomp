/* Functions from 0x80264840 to 0x80264884, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80366B18;
extern f32 lbl_80366B20;

typedef struct {
    u8 pad0[4];
    u8 unk4;
    u8 unk5;
    u8 unk6;
    s32 unk8;
    s32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} UnkStruct80264840;

void fn_80264840(UnkStruct80264840* arg0) {
    arg0->unk4 = 2;
    arg0->unk5 = 0;
    arg0->unk6 = 2;
    arg0->unk8 = 0;
    arg0->unkC = 1;
    arg0->unk10 = lbl_80366B20;
    arg0->unk14 = lbl_80366B18;
    arg0->unk18 = lbl_80366B20;
    arg0->unk1C = lbl_80366B18;
}
