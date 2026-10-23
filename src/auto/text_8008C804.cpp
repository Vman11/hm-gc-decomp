// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_803601E8[4];
extern char lbl_8036031C[7];
extern char lbl_802991F8[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

#pragma opt_propagation off
void fn_8008C804(u8 *p) {
    char *s = lbl_802991F8;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, s + 72, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, s + 88, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, s + 100, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, s + 112, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, lbl_8036031C, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_803601E8, lbl_803601E8, s + 128, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
