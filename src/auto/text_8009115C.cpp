// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80299778[];
extern char lbl_803609A0[4];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_8009115C(u8 *p) {
    char *base = lbl_80299778;
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_803609A0, lbl_803609A0, base + 60, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_803609A0, lbl_803609A0, base + 72, 0, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_803609A0, lbl_803609A0, base + 84, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
