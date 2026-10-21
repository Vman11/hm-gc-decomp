// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FFF20(void *, int, int);
void fn_8014FABC(int, void *);

void fn_8014FA70(u32 param_1, u32 param_2, u32 param_3) {
    u8 auStack_18 [16];

    fn_8014FABC((int)(param_1), auStack_18);
    fn_800FFF20(auStack_18, (int)(param_2), (int)(param_3));
}

} /* extern "C" */
