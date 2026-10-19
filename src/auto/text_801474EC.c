// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __ct__9C80121E80Fv[];
void __construct_array();
void fn_80147094();
void fn_80148310();

s32 fn_801474EC(s32 param_1) {
    fn_80148310(param_1 + 0x14);
    fn_80148310(param_1 + 0x28);
    __construct_array(param_1 + 0xb8,__ct__9C80121E80Fv,0,4,0x20);
    __construct_array(param_1 + 0x194,__ct__9C80121E80Fv,0,4,0x100);
    fn_80147094(param_1);
    return param_1;
}
