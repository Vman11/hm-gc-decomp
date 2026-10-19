// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_8022A7A8(int);
void fn_8022B618(int);
struct VCall_fn_80240338_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void m(); };

void fn_80240338(s32 param_1) {
    fn_8022B618((int)(*(u32 *)(param_1 + 0xe0)));
    ((VCall_fn_80240338_0 *)(*(s32 **)(param_1 + 0xe0)))->m();
    fn_8022A7A8((int)(*(u32 *)(param_1 + 0xe0)));
}
}
