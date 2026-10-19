// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80261AAC(void);
void fn_80261AD4(int);

void fn_80258D90(u32 param_1) {
    fn_80261AAC();
    fn_80261AD4((int)(param_1));
}

} /* extern "C" */
