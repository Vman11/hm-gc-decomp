// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A3BF8[];
extern char lbl_802A3C34[];
void fn_80060568(int, int, int, int);

s32 fn_801EFFE4(s32 param_1) {
    if (param_1 == 0) {
        fn_80060568((int)(lbl_802A3C34), (int)(0), (int)(0), (int)(0)); /* "Atlas Cinema: Error trying to cast a NULL subscriber" */
    }
    if (*(s32 *)(param_1 + 4) != 7) {
        fn_80060568((int)(lbl_802A3BF8), (int)(0), (int)(0), (int)(0)); /* "Atlas Cinema: Error trying to illegally cast a subscriber." */
    }
    return param_1;
}

} /* extern "C" */
