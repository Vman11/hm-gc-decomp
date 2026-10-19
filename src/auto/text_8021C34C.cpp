// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A7EF8[];
void fn_80060568(int, int, int, int);

void fn_8021C34C(u32 *param_1) {
    if ((*param_1 & 4) != 0) {
        fn_80060568((int)(lbl_802A7EF8), (int)(0), (int)(0), (int)(0)); /* "AtGrFrameNumberSet::vLoad - frame numbers cannot be demand loaded.\n" */
    }
}

} /* extern "C" */
