/* Functions from 0x80153EC0 to 0x80153F88, found by decomp-toolkit. */
#include "common.h"

s32 fn_80153F3C(void) {
    return 0x10;
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

s32 fn_80153F74(s32 arg0, u32 arg1) {
    if (arg1 <= 8) {
        return 8;
    }
    return 4;
}

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
