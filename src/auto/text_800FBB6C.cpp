// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80363704;
void fn_800E8F6C(char *, const char *, ...);

void fn_800FBB6C(void *a, char *b) {
    fn_800E8F6C(b, (const char *)&lbl_80363704, a);
}

} /* extern "C" */
