// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_80362B48[4];
extern char lbl_8029B838[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_800B02B8(u8 *p) {
    char *s = lbl_8029B838;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 108, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 124, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 140, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 156, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 172, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_80362B48, lbl_80362B48, s + 188, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
