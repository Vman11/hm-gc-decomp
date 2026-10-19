// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A55EC[];
extern char lbl_802A5624[];
void fn_80060568(int, int, int, int);

void fn_801F4328(s32 param_1) {
    if (*(void **)(param_1 + 0x20) == NULL) {
        fn_80060568((int)(lbl_802A55EC), (int)(0), (int)(0), (int)(0)); /* "Jpeg:  INTERNAL ERROR - Quantization Table Not Assigned" */
    }
    if (*(s32 *)(*(s32 *)(param_1 + 0x20) + 0x380) == 0) {
        fn_80060568((int)(lbl_802A5624), (int)(0), (int)(0), (int)(0)); /* "Jpeg:  Quantization Table Not Defined" */
    }
}

} /* extern "C" */
