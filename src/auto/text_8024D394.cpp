// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B7C0;
void fn_8024BADC(int);
struct VCall_fn_8024D394_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(int); };
struct VCall_fn_8024D394_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };

void fn_8024D394(u32 *param_1) {
    if (param_1[0x28] != 0) {
        ((VCall_fn_8024D394_0 *)(lbl_8035B7C0))->m((u32)(param_1[0x28]));
    }
    fn_8024BADC((int)(param_1));
    ((VCall_fn_8024D394_1 *)(param_1))->m();
}
}
