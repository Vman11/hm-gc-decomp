// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80363700;
void fn_800E8F6C(char *, const char *, ...);

void fn_800FBB44(char *a, f32 f) {
    fn_800E8F6C(a, (const char *)&lbl_80363700, f);
}

} /* extern "C" */
