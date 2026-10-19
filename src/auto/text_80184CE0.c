// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __ct__9C8002FAE0Fv[];
void __construct_array();
void fn_80100CF4();
void __ct__9C8013ECE4Fv();
void fn_80182ED8();
void __ct__9C8018C334Fv();

s32 __ct__9C80184CE0Fv(s32 param_1) {
    __ct__9C8013ECE4Fv(param_1 + 4);
    __construct_array(param_1 + 0x10,__ct__9C8002FAE0Fv,0,0xc,4);
    fn_80100CF4(param_1 + 0x210);
    __ct__9C8018C334Fv(param_1 + 0x224);
    fn_80182ED8(param_1);
    return param_1;
}
