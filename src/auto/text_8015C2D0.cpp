// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A053C[];
void fn_80060568(int, int, int, int);

void fn_8015C2D0(s32 param_1) {
    if ((*(u16 *)(param_1 + 6) & 0x20) != 0) {
        fn_80060568((int)(lbl_802A053C), (int)(0), (int)(0), (int)(0)); /* "AtGrGCNIndexArray::vLoad - demand loading not supported yet.\n" */
    }
}

} /* extern "C" */
