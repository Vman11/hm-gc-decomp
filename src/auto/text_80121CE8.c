// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80121670();

void fn_80121CE8(s32 param_1, u32 param_2) {
    fn_80121670();
    fn_80121670(param_1 + 4,param_2);
    fn_80121670(param_1 + 8,param_2);
    fn_80121670(param_1 + 0xc,param_2);
}
