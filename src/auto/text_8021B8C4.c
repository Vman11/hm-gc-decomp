// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_80365900;
void fn_800F6FBC(void *, void *);

void fn_8021B8C4(u32 *p, void *a) {
    fn_800F6FBC(a, p + 1);
    p[0] |= lbl_80365900;
}
