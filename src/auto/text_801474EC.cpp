// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __ct__9C80121E80Fv[];
void __construct_array(int, void *, int, int, int);
void fn_80147094(int);
void fn_80148310(int);

s32 fn_801474EC(s32 param_1) {
    fn_80148310((int)(param_1 + 0x14));
    fn_80148310((int)(param_1 + 0x28));
    __construct_array((int)(param_1 + 0xb8), __ct__9C80121E80Fv, (int)(0), (int)(4), (int)(0x20));
    __construct_array((int)(param_1 + 0x194), __ct__9C80121E80Fv, (int)(0), (int)(4), (int)(0x100));
    fn_80147094((int)(param_1));
    return param_1;
}

} /* extern "C" */
