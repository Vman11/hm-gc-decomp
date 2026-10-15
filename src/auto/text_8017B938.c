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

void fn_8017B938(Unk8017B938* arg0, u32* arg1, u32* arg2, u32 arg3, u32 arg4) {
    u32 index = arg0->unk4;
    if (index < arg0->unk0) {
        if (arg0->unk8 & 1) {
            if (arg1[5] != 0 || arg2[5] != 0) return;
        }
        arg0->unkC[index].unk0 = (u32)arg1;
        arg0->unkC[arg0->unk4].unk4 = (u32)arg2;
        arg0->unkC[arg0->unk4].unk8 = arg3;
        arg0->unkC[arg0->unk4].unkC = arg4;
        arg0->unk4++;
    }
}

void fn_8017B9C8(u32* arg0, u32 arg1) {
    arg0[1] = 0;
    arg0[2] = arg1;
}
