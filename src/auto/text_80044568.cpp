// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295508[];
extern char lbl_8035C914[4];
extern char lbl_8035CA7C[7];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_80044568(u8 *p) {
    char *base = lbl_80295508;
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, base + 264, 0, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, base + 276, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, lbl_8035CA7C, 0, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, base + 292, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, base + 304, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_8035C914, lbl_8035C914, base + 316, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
