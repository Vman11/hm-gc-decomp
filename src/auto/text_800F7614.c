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

typedef struct Heap800F7670 {
    void* unk0;
    void* unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u32 unk24;
} Heap800F7670;

typedef struct Mgr800F7670 {
    u32 unk0[3];
    Heap800F7670 entries[16];
    u32 unk28C;
} Mgr800F7670;

static inline void Replace800F7670(Mgr800F7670 *m, Heap800F7670 *a, Heap800F7670 *b) {
    Heap800F7670 *end;
    Heap800F7670 *p;
    u32 i;
    u32 value;
    u32 gen;
    gen = m->unk28C;
    value = a->unk24;
    end = m->entries + 16;
    for (i = 0; i < 2; ++i) {
        for (p = m->entries; p < end; ++p) {
            if (value == p->unk24) p->unk24 = gen;
        }
        value = b->unk24;
    }
}
void fn_800F7670(Mgr800F7670* arg0, Heap800F7670* arg1, Heap800F7670* arg2) {
    Heap800F7670* end;
    Heap800F7670* p;
    end = arg0->entries + 16;
    do {
        ++arg0->unk28C;
        for (p = arg0->entries; p < end; ++p) {
            if (arg0->unk28C == p->unk24) break;
        }
    } while (p < end);
    Replace800F7670(arg0, arg1, arg2);
}
