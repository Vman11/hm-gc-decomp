// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_800408D4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(); };
struct VCall_fn_800408D4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void m(); };

void fn_800408D4(s32 param_1) {
    **(u32 **)(param_1 + 0x154) = **(u32 **)(param_1 + 0x154) & 0xfffff7ff;
    ((VCall_fn_800408D4_0 *)(*(s32 **)(param_1 + 0xe0)))->m();
    ((VCall_fn_800408D4_1 *)(*(s32 **)(param_1 + 0xe0)))->m();
    *(u32 *)(param_1 + 0x16c) = 1;
    if (*(s32 *)(param_1 + 0x168) != 0) {
        *(u32 *)(*(s32 *)(param_1 + 0xe0) + 0xb4) =
                  *(u32 *)(*(s32 *)(param_1 + 0xe0) + 0xb4) & 0xfffffffb;
    }
    *(u32 *)(param_1 + 0x170) = 0;
}
}
