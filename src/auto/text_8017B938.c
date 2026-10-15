/* Functions from 0x8017B938 to 0x8017B9D8, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} Unk8017B938Entry;

void fn_8017B938(u32* arg0, u32* arg1, u32* arg2, u32 arg3, u32 arg4) {
    u32 index = arg0[1];
    if (index < arg0[0]) {
        if (arg0[2] & 1) {
            if (arg1[5] != 0) {
                return;
            }
            if (arg2[5] != 0) {
                return;
            }
        }
        ((u32*)arg0[3])[index * 4] = (u32)arg1;
        ((u32*)arg0[3])[arg0[1] * 4 + 1] = (u32)arg2;
        ((u32*)arg0[3])[arg0[1] * 4 + 2] = arg3;
        ((u32*)arg0[3])[arg0[1] * 4 + 3] = arg4;
        arg0[1]++;
    }
}

void fn_8017B9C8(u32* arg0, u32 arg1) {
    arg0[1] = 0;
    arg0[2] = arg1;
}
