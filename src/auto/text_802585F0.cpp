// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A99D8[];
extern char lbl_8036675C[6];
u8 *fn_80261114(u8 *, char *, s32);
void fn_80267CF8(u8 *, void *);

#pragma opt_propagation off
void fn_802585F0(u8 *p, void *a) {
    char *str = lbl_802A99D8;
    *(u8 **)(p + 288) = fn_80261114(p, str + 92, 1);
    *(u8 **)(p + 292) = fn_80261114(p, str + 108, 1);
    *(u8 **)(p + 300) = fn_80261114(p, str + 124, 0);
    *(u8 **)(p + 296) = fn_80261114(p, lbl_8036675C, 0);
    fn_80267CF8(p, a);
}
#pragma opt_propagation reset

} /* extern "C" */
