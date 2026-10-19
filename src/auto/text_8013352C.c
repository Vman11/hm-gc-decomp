// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E4D88[];
void __ct__9C800FC2E0Fv();
extern void *memset(void *, int, unsigned long);

s32 __ct__9C8013352CFv(s32 param_1) {
    __ct__9C800FC2E0Fv();
    *(u8 **)(param_1 + 0x30) = lbl_802E4D88;
    *(u32 *)(param_1 + 0x34) = 0;
    memset((void *)(param_1 + 0x38),0,4);
    return param_1;
}
