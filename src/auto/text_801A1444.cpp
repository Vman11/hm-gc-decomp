// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017A61C(int);
void fn_80192210(void);

void fn_801A1444(s32 param_1) {
    fn_80192210();
    if (*(void **)(param_1 + 0x84) != 0) {
        fn_8017A61C((int)(*(void **)(param_1 + 0x84)));
    }
}

} /* extern "C" */
