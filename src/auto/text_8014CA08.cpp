// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80101A5C(void);
extern void *memset(void *, int, unsigned long);

s32 fn_8014CA08(s32 param_1) {
    fn_80101A5C();
    *(u32 *)(param_1 + 0xc) = 0;
    memset((void *)(param_1 + 0x10),0,8);
    *(u8 *)(param_1 + 0x18) = 0;
    *(u8 *)(param_1 + 0x19) = 0;
    return param_1;
}

} /* extern "C" */
