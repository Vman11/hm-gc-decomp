// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801B79E4(int);
void fn_801DBF24(void);

void fn_801B7FC0(u32 param_1) {
    fn_801DBF24();
    fn_801B79E4((int)(param_1));
}

} /* extern "C" */
