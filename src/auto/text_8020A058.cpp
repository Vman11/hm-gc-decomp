// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80211394(int);
struct VCall_fn_8020A058_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };

u32 fn_8020A058(s32 param_1) {
    u32 uVar1;

    uVar1 = ((VCall_fn_8020A058_0 *)(param_1))->m();
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0x14) = 0xffffffff;
    fn_80211394((int)(param_1));
    return uVar1;
}
}
