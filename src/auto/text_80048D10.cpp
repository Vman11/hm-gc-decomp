// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_8035D188[4];
extern char lbl_8035D18C[8];
extern char lbl_8035D1C8[8];
extern char lbl_8035D1D0[8];
extern char lbl_80295A90[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_80048D10(u8 *p) {
    char *s = lbl_80295A90;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, lbl_8035D1C8, 0, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 148, 0, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 164, 0, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 180, 0, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 196, 0, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 208, 0, 0);
    *(u32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, lbl_8035D1D0, 0, 0);
    *(u32 *)(p + 0x1b0) = fn_8023F52C(p, lbl_8035D188, lbl_8035D18C, s + 220, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
