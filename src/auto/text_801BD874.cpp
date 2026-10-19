/* Functions from 0x801BD874 to 0x801BDA0C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    s32 unk0;
    s32 unk4[4];
    s32 unk14[4];
    f32 unk24[4];
    u32 unk34;
} UnkBD8A0;

s32 fn_801BD874(void* arg0, s32 arg1) {
    s32* table = *(s32**)((u8*)arg0 + 0x68);
    if (table != NULL) {
        return table[arg1];
    }
    return *(s32*)(*(u8**)(*(u8**)((u8*)arg0 + 0x70) + 4) + arg1 * 0x1C);
}

void fn_801BD8A0(UnkBD8A0* arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    s32 i;

    arg0->unk4[arg1] = arg2;
    arg0->unk14[arg1] = arg3;
    arg0->unk24[arg1] = arg4;
    arg0->unk34 = 0;
    for (i = 0; i < 4; i++) {
        switch (arg0->unk4[i]) {
        case 1:
        case 2:
        case 4:
            arg0->unk34 |= 1;
            break;
        case 8:
        case 0x10:
        case 0x20:
            arg0->unk34 |= 2;
            break;
        case 0x40:
        case 0x80:
        case 0x100:
            arg0->unk34 |= 4;
            break;
        case 0x200:
        case 0x400:
        case 0x800:
            arg0->unk34 |= 8;
            break;
        case 0x1000:
            arg0->unk34 |= 3;
            break;
        case 0x2000:
            arg0->unk34 |= 0xC;
            break;
        case 0x4000:
            arg0->unk34 |= 0xF;
            break;
        case 0x8000:
        case 0:
            break;
        }
    }
}

} /* extern "C" */
