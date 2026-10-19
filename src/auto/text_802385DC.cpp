// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8022C73C(void);
void fn_8022FC30(int);

void fn_802385DC(s32 param_1) {
    fn_8022C73C();
    if (*(void **)(param_1 + 0x230) != 0) {
        fn_8022FC30((int)(*(void **)(param_1 + 0x230)));
    }
}

} /* extern "C" */
