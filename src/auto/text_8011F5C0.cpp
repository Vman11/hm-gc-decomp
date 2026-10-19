// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80119040(int, int);
struct VCall_fn_8011F5C0_0 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(int); };
struct VCall_fn_8011F5C0_1 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

u32 fn_8011F5C0(s32 param_1, s32 param_2) {
    ((VCall_fn_8011F5C0_0 *)(param_1))->m((s32)(*(u32 *)(param_1 + 0x18)));
    fn_80119040((int)(param_1 + 0x38), (int)(*(u32 *)(param_2 + 8)));
    ((VCall_fn_8011F5C0_1 *)(param_1))->m();
    *(u32 *)(param_1 + 0xbc) = 1;
    return 0;
}
}
