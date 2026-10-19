// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802955E0[];
extern char lbl_802955EC[];
extern char lbl_8035CA0C[0x6];
extern char lbl_8035CA14[0x7];
struct VCall_fn_8004423C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004423C_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004423C_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004423C_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_8004423C(s32 *param_1) {
    ((VCall_fn_8004423C_0 *)(param_1))->m((s32)(lbl_802955E0)); /* "PLYRDEAD" */
    ((VCall_fn_8004423C_1 *)(param_1))->m((s32)(lbl_802955EC)); /* "PLYRLIVE" */
    ((VCall_fn_8004423C_2 *)(param_1))->m((s32)(lbl_8035CA0C)); /* "CINON" */
    ((VCall_fn_8004423C_3 *)(param_1))->m((s32)(lbl_8035CA14)); /* "CINOFF" */
}
}
