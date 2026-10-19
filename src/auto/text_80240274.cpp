// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_8022C4FC(int);
struct VCall_fn_80240274_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void m(); };
struct VCall_fn_80240274_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(); };

void fn_80240274(s32 param_1, s32 param_2) {
    ((VCall_fn_80240274_0 *)(*(s32 **)(param_1 + 0xe0)))->m();
    ((VCall_fn_80240274_1 *)(*(s32 **)(param_1 + 0xe0)))->m();
    if (param_2 != 0) {
        fn_8022C4FC((int)(*(u32 *)(param_1 + 0xe0)));
    }
}
}
