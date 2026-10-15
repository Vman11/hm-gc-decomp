/* Functions from 0x801C27C8 to 0x801C2800, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u32 unk0;
    u32 unk4;
    u16 unk8;
    u16 unkA;
    u8 pad[0x18];
} Unk80153EC8Entry;
typedef struct {
    u8 pad[0x78];
    u32 count;
    Unk80153EC8Entry entries[1];
} Unk80153EC8;


s32 fn_801C27C8(u8 *arg0) {
    return *(s32 *)(arg0 + 0x108);
}

s32 fn_801C27D0(u8 *arg0) {
    return *(s32 *)(arg0 + 0xF4);
}

s32 fn_801C27D8(u8 *arg0) {
    return *(s32 *)(arg0 + 0xCC);
}

s32 fn_801C27E0(u8 *arg0) {
    return *(s32 *)(arg0 + 0xB8);
}

s32 fn_801C27E8(u8 *arg0) {
    return *(s32 *)(arg0 + 0xA4);
}

s32 fn_801C27F0(u8 *arg0) {
    return *(s32 *)(arg0 + 0x90);
}

u32 fn_801C27F8(Unk80153EC8 *arg0) {
    return arg0->count;
}

