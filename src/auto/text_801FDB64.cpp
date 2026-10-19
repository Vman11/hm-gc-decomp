// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A6730[];
extern char lbl_802A6764[];
void fn_80060568(int, int, int, int);

u32 * fn_801FDB64(u32 *param_1) {
    if (param_1 == (u32 *)0x0) {
        fn_80060568((int)(lbl_802A6730), (int)(0), (int)(0), (int)(0)); /* "Atlas Sound: Error trying to cast a NULL emitter" */
    }
    if ((*param_1 & 4) == 0) {
        fn_80060568((int)(lbl_802A6764), (int)(0), (int)(0), (int)(0)); /* "Atlas Sound: Error trying to cast an emitter to an illegal type" */
    }
    return param_1;
}

} /* extern "C" */
