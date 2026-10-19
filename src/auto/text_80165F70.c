// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __ct__9C8002FAE0Fv[];
extern u8 lbl_802E7B30[];
void __construct_array();
void fn_8012163C();
void __ct__9C80135BD0Fv();
void __ct__9C801768A4Fv();
extern void *memset(void *, int, unsigned long);

s32 __ct__9C80165F70Fv(s32 param_1) {
    __ct__9C80135BD0Fv();
    *(u8 **)(param_1 + 0x1930) = lbl_802E7B30;
    __ct__9C801768A4Fv(param_1 + 0x1940);
    __construct_array(param_1 + 0x19b4,__ct__9C8002FAE0Fv,0,0xc,8);
    __construct_array(param_1 + 0x1a14,__ct__9C8002FAE0Fv,0,0xc,8);
    *(u32 *)(param_1 + 0x1934) = 0;
    *(u32 *)(param_1 + 0x1938) = 0;
    *(u32 *)(param_1 + 0x1afc) = 0;
    *(u32 *)(param_1 + 0x193c) = 0;
    *(u32 *)(param_1 + 0x19a8) = 2;
    *(u32 *)(param_1 + 0x19ac) = 2;
    fn_8012163C(param_1 + 0x19b0);
    *(u32 *)(param_1 + 0x1ab8) = 0;
    *(u32 *)(param_1 + 0x1abc) = 0;
    memset((void *)(param_1 + 0x19b4),0,0x60);
    memset((void *)(param_1 + 0x1a14),0,0x60);
    *(u32 *)(param_1 + 0x1a94) = 0;
    memset((void *)(param_1 + 0x1a98),0,0x20);
    *(u32 *)(param_1 + 0x1ac0) = 0;
    *(u32 *)(param_1 + 0x1ac4) = 0;
    *(u32 *)(param_1 + 0x1ac8) = 0;
    *(u32 *)(param_1 + 0x1acc) = 0;
    *(u32 *)(param_1 + 0x1ad4) = 0;
    *(u32 *)(param_1 + 0x1ad8) = 0;
    *(u32 *)(param_1 + 0x1adc) = 0;
    *(u32 *)(param_1 + 0x1ae0) = 0;
    *(u32 *)(param_1 + 0x1ae4) = 0;
    *(u32 *)(param_1 + 0x1ae8) = 0;
    *(u32 *)(param_1 + 0x1aec) = 0;
    *(u32 *)(param_1 + 0x1af0) = 0;
    *(u32 *)(param_1 + 0x1af4) = 0;
    *(u32 *)(param_1 + 0x1af8) = 0;
    return param_1;
}
