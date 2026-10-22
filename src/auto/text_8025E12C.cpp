// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A9BE0[];
u8 *fn_80261114(u8 *, char *, s32);
void fn_80257438(u8 *, void *);

#pragma opt_propagation off
void fn_8025E12C(u8 *p, void *a) {
    char *str = lbl_802A9BE0;
    *(u8 **)(p + 300) = fn_80261114(p, str + 136, 1);
    *(u8 **)(p + 204) = fn_80261114(p, str + 152, 1);
    *(u8 **)(p + 304) = fn_80261114(p, str + 164, 1);
    *(u8 **)(p + 392) = fn_80261114(p, str + 196, 1);
    *(u8 **)(p + 396) = fn_80261114(p, str + 212, 1);
    fn_80257438(p, a);
}
#pragma opt_propagation reset

} /* extern "C" */
