// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E5780[];
void __ct__9C8013FC44Fv();
extern void *memset(void *, int, unsigned long);

s32 __ct__9C8013919CFv(s32 param_1) {
    __ct__9C8013FC44Fv();
    *(u8 **)(param_1 + 0xf4) = lbl_802E5780;
    *(u32 *)(param_1 + 0xb8) = 0;
    memset((void *)(param_1 + 0xbc),0,0x10);
    memset((void *)(param_1 + 0xcc),0,0x10);
    *(u32 *)(param_1 + 0xdc) = 0;
    *(u32 *)(param_1 + 0xf0) = 0xffffffff;
    *(u32 *)(param_1 + 0xec) = 0;
    *(u32 *)(param_1 + 0xe0) = 0;
    *(u32 *)(param_1 + 0xe4) = 0;
    *(u32 *)(param_1 + 0xe8) = 0;
    return param_1;
}
