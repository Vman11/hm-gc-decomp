// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801482DC(int, int);
void fn_8015689C(int, int, int, int);

void fn_8015BE08(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    fn_801482DC((int)(param_4), (int)(param_3));
    fn_8015689C((int)(param_2), (int)(4), (int)(0), (int)(param_4));
}

} /* extern "C" */
