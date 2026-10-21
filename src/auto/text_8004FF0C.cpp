// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802961F0[];
extern char lbl_8035D964[1];
extern char lbl_8035DAF0[5];
extern char lbl_8035DAF8[7];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_8004FF0C(u8 *p) {
    char *base = lbl_802961F0;
    *(s32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 252, 1, 0);
    *(s32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 264, 1, 0);
    *(s32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 284, 1, 0);
    *(s32 *)(p + 0x134) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 296, 1, 0);
    *(s32 *)(p + 0x138) = fn_8023F52C(p, lbl_8035D964, lbl_8035DAF0, base + 308, 1, 0);
    *(s32 *)(p + 0x13c) = fn_8023F52C(p, lbl_8035D964, lbl_8035DAF0, base + 324, 1, 0);
    *(s32 *)(p + 0x148) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 340, 1, 0);
    *(s32 *)(p + 0x14c) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 352, 1, 0);
    *(s32 *)(p + 0x150) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, lbl_8035DAF8, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
