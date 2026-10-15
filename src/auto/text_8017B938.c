/* Functions from 0x8017B938 to 0x8017B9D8, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} Unk8017B938Entry;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    Unk8017B938Entry* unkC;
} Unk8017B938;

void fn_8017B938(u32* arg0, u32* arg1, u32* arg2, u32 arg3, u32 arg4) {
    u32 index = arg0[1];
    if (index < arg0[0]) {
        if (arg0[2] & 1) {
            if (arg1[5] != 0 || arg2[5] != 0) return;
        }
        ((Unk8017B938Entry*)((u8*)arg0[3] + index * 0x10))->unk0 = (u32)arg1;
        ((Unk8017B938Entry*)((u8*)arg0[3] + arg0[1] * 0x10))->unk4 = (u32)arg2;
        ((Unk8017B938Entry*)((u8*)arg0[3] + arg0[1] * 0x10))->unk8 = arg3;
        ((Unk8017B938Entry*)((u8*)arg0[3] + arg0[1] * 0x10))->unkC = arg4;
        arg0[1]++;
    }
}

void fn_8017B9C8(u32* arg0, u32 arg1) {
    arg0[1] = 0;
    arg0[2] = arg1;
}
