// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802959A0[];
extern char lbl_8035CF7C[4];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_80047A20(u8 *p) {
    char *str = lbl_802959A0;
    *(s32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035CF7C, lbl_8035CF7C, str + 192, 1, 0);
    *(s32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035CF7C, lbl_8035CF7C, str + 204, 1, 0);
    *(s32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035CF7C, lbl_8035CF7C, str + 216, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
