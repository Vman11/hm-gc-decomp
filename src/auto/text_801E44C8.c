// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802ED9A8[];
void __ct__9C800F9688Fv();
void __ct__9C800F9B64Fv();

s32 fn_801E44C8(s32 param_1) {
    *(u8 **)(param_1 + 0xec) = lbl_802ED9A8;
    __ct__9C800F9688Fv();
    __ct__9C800F9B64Fv(param_1 + 0x18);
    __ct__9C800F9688Fv(param_1 + 0x3c);
    __ct__9C800F9B64Fv(param_1 + 0x54);
    __ct__9C800F9688Fv(param_1 + 0x78);
    __ct__9C800F9B64Fv(param_1 + 0x90);
    *(u32 *)(param_1 + 0xc0) = 0;
    *(u32 *)(param_1 + 200) = 0;
    *(u32 *)(param_1 + 0xcc) = 0;
    *(u32 *)(param_1 + 0xb8) = 0;
    *(u32 *)(param_1 + 0xd4) = 0;
    *(u32 *)(param_1 + 0xe0) = 0;
    *(u32 *)(param_1 + 0xe4) = 0;
    *(u32 *)(param_1 + 0xd0) = 0;
    *(u32 *)(param_1 + 0xd8) = 0;
    *(u32 *)(param_1 + 0xdc) = 0;
    *(u32 *)(param_1 + 0xc4) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0xbc) = 0;
    return param_1;
}
