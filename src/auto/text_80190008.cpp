// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A1B60[];
extern char lbl_802A1BA0[];
void fn_80060568(int, int, int, int);

s32 fn_80190008(s32 param_1) {
    if (param_1 == 0) {
        fn_80060568((int)(lbl_802A1BA0), (int)(0), (int)(0), (int)(0)); /* "Atlas Scene: Error trying to cast a NULL modifier" */
    }
    if (*(u32 *)(param_1 + 4) != 4) {
        fn_80060568((int)(lbl_802A1B60), (int)(0), (int)(0), (int)(0)); /* "Atlas Scene: Error trying to cast a modifier to an illegal type" */
    }
    return param_1;
}

} /* extern "C" */
