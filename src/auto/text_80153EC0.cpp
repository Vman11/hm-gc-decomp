/* Functions from 0x80153EC0 to 0x80153F88, found by decomp-toolkit. */
#include "common.h"

extern "C" {

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

u32 fn_80153EC0(Unk80153EC8 *arg0) {
    return arg0->count;
}

BOOL fn_80153EC8(Unk80153EC8 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 i;
    for (i = 0; i < arg0->count; i++) {
        if (arg1 == arg0->entries[i].unk0 && arg2 == arg0->entries[i].unk4 && arg3 == arg0->entries[i].unkA) {
            return TRUE;
        }
    }
    return FALSE;
}

extern f32 lbl_80364568;
f32 fn_80153F14(void) {
    return lbl_80364568;
}

s32 fn_80153F1C(void) {
    return 0;
}

s32 fn_80153F24(void) {
    return 4;
}

s32 fn_80153F2C(void) {
    return 8;
}

s32 fn_80153F34(void) {
    return 8;
}

s32 fn_80153F3C(void) {
    return 0x10;
}

s32 fn_80153F44(void) {
    return 0x8000;
}

s32 fn_80153F50(void) {
    return 0x400;
}

s32 fn_80153F58(s32 arg0, u32 arg1) {
    if (arg1 == 4) {
        return 8;
    }
    return 4;
}

s32 fn_80153F6C(void) {
    return 0x400;
}

s32 fn_80153F74(s32 arg0, u32 arg1) {
    if (arg1 <= 8) {
        return 8;
    }
    return 4;
}

} /* extern "C" */
