// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A0FE8[];
void fn_80060568(int, int, int, int);

void fn_80175778(s32 param_1) {
    if ((*(u32 *)(param_1 + 4) & 0x20) != 0) {
        fn_80060568((int)(lbl_802A0FE8), (int)(0), (int)(0), (int)(0)); /* "AtGrGCNVertexArray::vUnload - demand unloading not supported yet.\n" */
    }
}

} /* extern "C" */
