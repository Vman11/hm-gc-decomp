// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 dtor_8013D6EC[];
extern u8 dtor_8013D734[];
extern u8 fn_801F4684[];
extern u8 fn_801F4708[];
extern u8 fn_801F5108[];
extern u8 fn_801F591C[];
void __construct_array();
void fn_801F5AC4();

s32 fn_8013D770(s32 param_1) {
    fn_801F5AC4(param_1,1);
    __construct_array(param_1 + 0x3c,fn_801F591C,dtor_8013D6EC,0x19c,4);
    __construct_array(param_1 + 0x6ac,fn_801F591C,dtor_8013D6EC,0x19c,4);
    __construct_array(param_1 + 0xd20,fn_801F5108,dtor_8013D734,0x388,4);
    __construct_array(param_1 + 0x1f50,fn_801F4708,fn_801F4684,0x44,0xff);
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x630c) = 0;
    *(u32 *)(param_1 + 0x6710) = 0;
    *(u16 *)(param_1 + 0x1b40) = 0;
    *(u32 *)(param_1 + 0x1b44) = 0;
    *(u32 *)(param_1 + 0x1b48) = 0xc0;
    *(u32 *)(param_1 + 0x1b4c) = 0;
    *(u32 *)(param_1 + 0x1b50) = 0;
    *(u32 *)(param_1 + 0x6310) = 0;
    *(u32 *)(param_1 + 0x6710) = 0;
    *(u32 *)(param_1 + 0x6714) = 0;
    *(u32 *)(param_1 + 0x6718) = 0;
    *(u32 *)(param_1 + 0x671c) = 0;
    *(u32 *)(param_1 + 0x6720) = 0;
    *(u32 *)(param_1 + 0x6724) = 0;
    *(u32 *)(param_1 + 0x6728) = 0;
    return param_1;
}
