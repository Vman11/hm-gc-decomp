// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB1F8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB1F8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FB1F8_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FB1F8(u32 param_1, u32 param_2) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB1F8_0 *)(param_1))->m();
    if (2 != iVar1) {
        ((VCall_fn_800FB1F8_1 *)(param_1))->m((u32)(3));
    }
    if (*(u32 *)(param_1 + 0x114) > param_2) {
        ((VCall_fn_800FB1F8_2 *)(param_1))->m((u32)(0x22));
    }
    return param_1 + 0x14;
}
}
