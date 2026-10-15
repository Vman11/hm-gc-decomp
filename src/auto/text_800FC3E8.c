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
