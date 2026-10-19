// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_80295474[];
void fn_8003FC58(void *);
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, void *, s32, s32, s32, s32);

void fn_800433A0(void *p) {
    fn_8003FC58(p);
    fn_80242BC0(fn_80242144(p, 2), lbl_80295474, 0, 0, 0, 0);
}
