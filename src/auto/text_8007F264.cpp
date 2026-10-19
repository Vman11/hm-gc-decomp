// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80298960[];
extern char lbl_8029896C[];
extern char lbl_8035FA04[0x7];
extern char lbl_8035FA0C[0x8];
struct VCall_fn_8007F264_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8007F264_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8007F264_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8007F264_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_8007F264(s32 *param_1) {
    ((VCall_fn_8007F264_0 *)(param_1))->m((s32)(lbl_8035FA04)); /* "GOLEFT" */
    ((VCall_fn_8007F264_1 *)(param_1))->m((s32)(lbl_8035FA0C)); /* "GORIGHT" */
    ((VCall_fn_8007F264_2 *)(param_1))->m((s32)(lbl_80298960)); /* "GOWHOOPS" */
    ((VCall_fn_8007F264_3 *)(param_1))->m((s32)(lbl_8029896C)); /* "DRAMADTH" */
}
}
