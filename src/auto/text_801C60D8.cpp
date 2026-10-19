// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80365004[0x7];
void fn_800F6FBC(int);

void fn_801C60D8(void) {
    fn_800F6FBC((int)(lbl_80365004)); /* "Scroll" */
}

} /* extern "C" */
