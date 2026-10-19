// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801040B0(void);
void fn_80104BF0(int, int);

void fn_80107DA8(u32 param_1) {
    fn_801040B0();
    fn_80104BF0((int)(param_1), (int)(0x10));
}

} /* extern "C" */
