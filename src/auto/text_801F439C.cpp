// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A564C[];
void fn_80060568(int, int, int, int);
s32 fn_801F5148(int);

void fn_801F439C(s32 param_1) {
    s32 iVar1;

    iVar1 = fn_801F5148((int)(*(u32 *)(param_1 + 0x1c)));
    if (iVar1 == 0) {
        fn_80060568((int)(lbl_802A564C), (int)(0), (int)(0), (int)(0)); /* "Jpeg:  DC Table Not Defined" */
    }
}

} /* extern "C" */
