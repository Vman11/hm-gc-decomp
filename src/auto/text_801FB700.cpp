// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB6D8(int);
extern void *memset(void *, int, unsigned long);

void fn_801FB700(u32 *param_1) {
    fn_800FB6D8((int)(param_1 + 5));
    fn_800FB6D8((int)(param_1 + 10));
    *param_1 = 0;
    memset(param_1 + 1,0,0x10);
}

} /* extern "C" */
