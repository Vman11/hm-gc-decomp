// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029ACF8[];
extern char lbl_80361DC0[4];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_800A5924(u8 *p) {
    char *base = lbl_8029ACF8;
    *(s32 *)(p + 0x118) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 48, 1, 0);
    *(s32 *)(p + 0x11c) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 60, 1, 0);
    *(s32 *)(p + 0x120) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 72, 1, 0);
    *(s32 *)(p + 0x124) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 88, 1, 0);
    *(s32 *)(p + 0x128) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 104, 1, 0);
    *(s32 *)(p + 0x12c) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 124, 1, 0);
    *(s32 *)(p + 0x130) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 144, 1, 0);
    *(s32 *)(p + 0x134) = fn_8023F52C(p, lbl_80361DC0, lbl_80361DC0, base + 168, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
