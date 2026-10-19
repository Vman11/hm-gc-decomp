// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8022C6D4(void);
void fn_8022FC04(int);

void fn_802385A0(s32 param_1) {
    fn_8022C6D4();
    if (*(void **)(param_1 + 0x230) != 0) {
        fn_8022FC04((int)(*(void **)(param_1 + 0x230)));
    }
}

} /* extern "C" */
