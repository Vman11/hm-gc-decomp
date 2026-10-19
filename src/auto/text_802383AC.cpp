// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80365F64[0x8];
void fn_80241DD0(int, int, int, int, int, int);

void fn_802383AC(u32 param_1, u32 param_2) {
    if (((param_2 != 0) && (*(u32 *)(param_1 + 0x20c) != 0)) && (*(u32 *)(param_1 + 0x234) != param_2)
          ) {
        fn_80241DD0((int)(*(u32 *)(param_1 + 0x20c)), (int)(lbl_80365F64), (int)(param_2), (int)(0), (int)(0), (int)(0)); /* "END_COL" */
    }
}

} /* extern "C" */
