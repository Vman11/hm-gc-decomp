// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_80365570;
void fn_801FBFF8(void *, void *, void *);

void fn_801FA440(u32 *p, void *a, void *b) {
    fn_801FBFF8(p, a, b);
    p[0] |= lbl_80365570;
}
