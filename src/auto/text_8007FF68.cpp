// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8023FE08(void);
struct VCall_fn_8007FF68_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int, int, int, int, int); };

void fn_8007FF68(s32 param_1) {
    u8 auStack_18[4];

    fn_8023FE08();
    ((VCall_fn_8007FF68_0 *)(*(s32 **)(param_1 + 0xe0)))->m((s32)(auStack_18), (s32)(0), (s32)(0), (s32)(0), (s32)(0));
}
}
