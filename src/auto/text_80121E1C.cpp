// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __ct__9C80121E80Fv[];
void __construct_array(int, int, int, int, int);
void fn_80121658(int);

s32 fn_80121E1C(s32 param_1) {
    __construct_array((int)(param_1), (int)(__ct__9C80121E80Fv), (int)(0), (int)(4), (int)(4));
    fn_80121658((int)(param_1));
    fn_80121658((int)(param_1 + 4));
    fn_80121658((int)(param_1 + 8));
    fn_80121658((int)(param_1 + 0xc));
    return param_1;
}

} /* extern "C" */
