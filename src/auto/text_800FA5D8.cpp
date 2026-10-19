// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 strlen(int);
struct VCall_fn_800FA5D8_0 { char vptr_pad[0xc]; virtual void p0(); virtual void m(int, int); };
struct VCall_fn_800FA5D8_1 { char vptr_pad[0xc]; virtual void p0(); virtual void m(int, int); };

void fn_800FA5D8(u32 *param_1, u32 param_2) {
    s8 *p;
    u32 sVar1;
    u32 len;

    len = strlen((int)(param_2));
    sVar1 = len;
    if (len >= *param_1) {
        sVar1 = *param_1;
    }
    p = (s8 *)param_2;
    for (param_2 = 0; param_2 < sVar1; param_2 = param_2 + 1, p = p + 1) {
        ((VCall_fn_800FA5D8_0 *)(param_1))->m((s32)(param_2), (s32)((s32)*p));
    }
    ((VCall_fn_800FA5D8_1 *)(param_1))->m((s32)(sVar1), (s32)(0));
    param_1[2] = sVar1;
    param_1[1] = 0;
}
}
