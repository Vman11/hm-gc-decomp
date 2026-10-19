// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017BA24(int, int);
void fn_801E6574(void);

void fn_801E5E90(s32 param_1) {
    fn_801E6574();
    fn_8017BA24((int)(param_1 + 0x38), (int)(0x20));
}

} /* extern "C" */
