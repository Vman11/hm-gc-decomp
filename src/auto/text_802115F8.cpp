// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB6D8(int);
extern void *memset(void *, int, unsigned long);

void fn_802115F8(u32 *param_1) {
    fn_800FB6D8((int)(param_1 + 0x13));
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0;
    memset(param_1 + 3,0,0x40);
}

} /* extern "C" */
