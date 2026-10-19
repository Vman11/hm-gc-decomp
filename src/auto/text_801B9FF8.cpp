// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80364F7C[0x8];
void fn_800F6FBC(int);

void fn_801B9FF8(void) {
    fn_800F6FBC((int)(lbl_80364F7C)); /* "MenuBtn" */
}

} /* extern "C" */
