/* Functions from 0x801BD874 to 0x801BDA0C, found by decomp-toolkit. */
#include "common.h"

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
