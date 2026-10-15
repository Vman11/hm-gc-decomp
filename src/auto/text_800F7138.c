/* Functions from 0x800F7138 to 0x800F75B0, found by decomp-toolkit. */
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

void fn_800F74F4(UnkHeap800F7520* arg0) {
    arg0->unk0 = NULL;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk18 = 2;
    arg0->unk1C = 2;
    arg0->unk20 = 0;
    arg0->unk4 = NULL;
    arg0->unk24 = 0;
}

void fn_800F7520(UnkHeap800F7520* arg0, UnkBlock800F7520* arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk0 = arg1;
    arg0->unk8 = arg2;
    arg0->unk18 = arg4;
    arg0->unk1C = arg4;
    arg0->unk20 = arg3;
    arg0->unk24 = arg3;
    arg0->unkC = 0;
    arg0->unk4 = arg0->unk0;
    *(u32*)arg0->unk4 = (*(u32*)arg0->unk4 & 0xFF000000) | (arg0->unk8 & 0x00FFFFFF);
    *(u32*)arg0->unk4 &= ~0x01000000;
    *(u32*)arg0->unk4 &= ~0x02000000;
    *(u32*)arg0->unk4 = (*(u32*)arg0->unk4 & 0x03FFFFFF) | (arg0->unk20 << 26);
    arg0->unk4->unk4 = 0;
    arg0->unk4->unk8 = 0;
    arg0->unk4->unkC = 0;
}

