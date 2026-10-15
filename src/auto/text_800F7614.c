/* Functions from 0x800F7614 to 0x800F771C, found by decomp-toolkit. */
#include "common.h"
typedef struct UnkBlock800F7520 {
    u32 unk0_0 : 6;
    u32 unk0_6 : 1;
    u32 unk0_7 : 1;
    u32 unk0_8 : 24;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} UnkBlock800F7520;
typedef struct UnkHeap800F7520 {
    UnkBlock800F7520* unk0;
    UnkBlock800F7520* unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
} UnkHeap800F7520;


void fn_800F7614(UnkHeap800F7520* arg0) {
    arg0->unk0 = NULL;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk18 = 2;
    arg0->unk1C = 2;
    arg0->unk20 = 0;
    arg0->unk4 = NULL;
    arg0->unk24 = 0;
}
