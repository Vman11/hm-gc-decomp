// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80211A08_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80211A08_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

u32 fn_80211A08(s32 param_1, s32 param_2) {
    u32 uVar1;

    uVar1 = ((VCall_fn_80211A08_0 *)(param_2))->m();
    *(s32 *)(param_1 + 0x6a4) = *(s32 *)(param_1 + 0x6a4) + -1;
    ((VCall_fn_80211A08_1 *)(*(s32 **)(param_1 + 0x6e0)))->m((s32)(param_2));
    return uVar1;
}
}
