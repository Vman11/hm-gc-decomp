// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295360[];
extern char lbl_8035C7F0[4];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_80040CD8(void *p);

#pragma opt_propagation off
void fn_800436D0(u8 *p) {
    char *base = lbl_80295360;
    *(s32 *)(p + 0x178) = fn_8023F52C(p, lbl_8035C7F0, lbl_8035C7F0, base + 324, 1, 0);
    *(s32 *)(p + 0x17c) = fn_8023F52C(p, lbl_8035C7F0, lbl_8035C7F0, base + 340, 1, 0);
    *(s32 *)(p + 0x180) = fn_8023F52C(p, lbl_8035C7F0, lbl_8035C7F0, base + 352, 1, 0);
    *(s32 *)(p + 0x184) = fn_8023F52C(p, lbl_8035C7F0, lbl_8035C7F0, base + 364, 0, 0);
    *(s32 *)(p + 0x188) = fn_8023F52C(p, lbl_8035C7F0, lbl_8035C7F0, base + 380, 0, 0);
    fn_80040CD8(p);
}
#pragma opt_propagation reset

} /* extern "C" */
