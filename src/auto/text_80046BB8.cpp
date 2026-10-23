// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802957C8[];
extern char lbl_8035CD1C[4];
extern char lbl_8035CF08[5];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_80046BB8(u8 *p) {
    char *base = lbl_802957C8;
    *(s32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 336, 1, 0);
    *(s32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 352, 1, 0);
    *(s32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 364, 1, 0);
    *(s32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 380, 0, 0);
    *(s32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 400, 1, 0);
    *(s32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CD1C, base + 412, 0, 0);
    *(s32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CF08, base + 424, 1, 0);
    *(s32 *)(p + 0x134) = fn_8023F52C(p, lbl_8035CD1C, lbl_8035CF08, base + 440, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
