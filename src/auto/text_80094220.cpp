// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80299AD8[];
extern char lbl_80299AF0[];
extern char lbl_80360E44[0x6];
extern char lbl_80360E4C[0x7];
extern char lbl_80360F10[0x8];
struct VCall_fn_80094220_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80094220_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80094220_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80094220_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80094220_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_80094220(s32 *param_1) {
    ((VCall_fn_80094220_0 *)(param_1))->m((s32)(lbl_80360F10)); /* "LIGHTON" */
    ((VCall_fn_80094220_1 *)(param_1))->m((s32)(lbl_80299AF0)); /* "PRERESET" */
    ((VCall_fn_80094220_2 *)(param_1))->m((s32)(lbl_80299AD8)); /* "PREMNGST" */
    ((VCall_fn_80094220_3 *)(param_1))->m((s32)(lbl_80360E44)); /* "CINON" */
    ((VCall_fn_80094220_4 *)(param_1))->m((s32)(lbl_80360E4C)); /* "CINOFF" */
}
}
