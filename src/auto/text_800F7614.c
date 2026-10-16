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

typedef struct UnkManager800F7670 {
    u32 unk0[3];
    UnkHeap800F7520 entries[16];
    u32 unk28C;
} UnkManager800F7670;

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

s32 fn_800F7640(UnkHeap800F7520* arg0) {
    s32 max = 0;
    s32* node;
    for (node = (s32*)arg0->unk8; node != NULL; node = (s32*)node[1]) {
        if (node[0] > max) max = node[0];
    }
    return max & ~63;
}

void fn_800F7670(UnkManager800F7670* arg0, UnkHeap800F7520* arg1, UnkHeap800F7520* arg2) {
    UnkHeap800F7520* p;
    u32 generation;
    u32 value;
    u32 i;
    do {
        ++arg0->unk28C;
        for (p = arg0->entries; p < arg0->entries + 16; ++p) {
            if (arg0->unk28C == (u32)p->unk24) break;
        }
    } while (p < arg0->entries + 16);
    generation = arg0->unk28C;
    value = arg1->unk24;
    for (i = 0; i < 2; ++i) {
        for (p = arg0->entries; p < arg0->entries + 16; ++p) {
            if (value == (u32)p->unk24) p->unk24 = generation;
        }
        value = arg2->unk24;
    }
}

