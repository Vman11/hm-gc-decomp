// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_80295E70[];
extern const char lbl_8035D48C[1];
extern const char lbl_8035D654[5];
void *fn_8023F52C(void *, const char *, const char *, const char *, s32, s32);
void fn_8023F214(void *);

#pragma opt_propagation off
void fn_8004D9B0(u8 *p) {
    char *s = lbl_80295E70;
    *(void **)(p + 296) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 228, 1, 0);
    *(void **)(p + 300) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 244, 1, 0);
    *(void **)(p + 308) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 260, 1, 0);
    *(void **)(p + 316) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 276, 1, 0);
    *(void **)(p + 320) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 288, 1, 0);
    *(void **)(p + 324) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 304, 1, 0);
    *(void **)(p + 332) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 316, 1, 0);
    *(void **)(p + 336) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D48C, s + 328, 1, 0);
    *(void **)(p + 340) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D654, s + 344, 1, 0);
    *(void **)(p + 344) = fn_8023F52C(p, lbl_8035D48C, lbl_8035D654, s + 360, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
