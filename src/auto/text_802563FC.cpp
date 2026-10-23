// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A98D8[];
extern char lbl_80366664[5];
s32 fn_80261114(void *p, char *name, s32 x);
void fn_80261B18(void *p, void *q);

#pragma opt_propagation off
void fn_802563FC(u8 *p, void *q) {
    char *base = lbl_802A98D8;
    *(s32 *)(p + 0xc4) = fn_80261114(p, lbl_80366664, 1);
    *(s32 *)(p + 0xcc) = fn_80261114(p, base + 56, 1);
    *(s32 *)(p + 0xd0) = fn_80261114(p, base + 68, 0);
    *(s32 *)(p + 0xd4) = fn_80261114(p, base + 84, 0);
    *(s32 *)(p + 0xc8) = fn_80261114(p, base + 100, 0);
    *(s32 *)(p + 0xd8) = fn_80261114(p, base + 116, 0);
    fn_80261B18(p, q);
}
#pragma opt_propagation reset

} /* extern "C" */
