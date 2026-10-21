// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_803308C8[256];
extern const u32 lbl_802A3C70[32];

static inline u32 reflect(u32 v, s32 bits) {
    u32 r = 0;
    s32 k;
    for (k = 0; k < bits; k++) {
        if (v & lbl_802A3C70[k]) {
            r |= lbl_802A3C70[bits - k - 1];
        }
    }
    return r;
}

static inline u32 crc_byte(u32 c) {
    u32 j;
    for (j = 0; j < 8; j++) {
        if ((c & 1) == 0) {
            c >>= 1;
        } else {
            c = (c >> 1) ^ reflect(0x04C11DB7, 32);
        }
    }
    return c;
}

static inline u32 widmask(s32 bits) {
    return (((1 << (bits - 1)) - 1) << 1) | 1;
}

static inline void make_table(u32 *table) {
    u32 i;
    for (i = 0; i < 256; i++) {
        table[i] = crc_byte(i) & widmask(32);
    }
}

void fn_801F12E0(void) {
    make_table(lbl_803308C8);
}

__declspec(section ".ctors") static void (*const ctor_801F12E0)(void) = fn_801F12E0;

} /* extern "C" */
