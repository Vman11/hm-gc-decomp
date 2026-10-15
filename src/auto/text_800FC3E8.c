/* Functions from 0x800FC3E8 to 0x800FC558, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 key;
    u32 value;
} UnkPair;

typedef struct {
    u8 pad0[0x74];
    u32 capacity;
    u32 value;
    UnkPair* pairs;
    u32 unk80;
    u32 count;
} UnkPairList;

extern u8 lbl_802E2220[];
void fn_800FC3E8(s32* arg0) {
    arg0[3] = (s32)lbl_802E2220;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

void fn_800FC408(s32* arg0, f32* arg1, f32* arg2) {
    f32* m = (f32*)arg0;
    f32 x0 = arg1[0];
    f32 y0 = arg1[1];
    f32 z0 = arg1[2];
    f32 x1;
    f32 y1;
    f32 z1;
    m[1] = x0;
    m[2] = y0;
    m[3] = z0;
    x1 = arg2[0];
    y1 = arg2[1];
    z1 = arg2[2];
    m[4] = x1;
    m[5] = y1;
    m[6] = z1;
    m[15] = x0;
    m[16] = y0;
    m[17] = z0;
    m[18] = x1;
    m[19] = y1;
    m[20] = z1;
    m[9] = x0;
    m[10] = y0;
    m[11] = z0;
    m[12] = x1;
    m[13] = y1;
    m[14] = z1;
    arg0[0] &= ~8;
    arg0[0] |= 5;
}

void fn_800FC484(UnkPairList* list) {
    if (list->count < list->capacity) {
        list->count++;
    }
}

