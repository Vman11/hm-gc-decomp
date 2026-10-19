// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80295A3C[];
extern char lbl_80295A48[];
extern char lbl_8035D080[0x6];
extern char lbl_8035D088[0x7];
struct VCall_fn_80047870_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80047870_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80047870_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80047870_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_80047870(s32 *param_1) {
    ((VCall_fn_80047870_0 *)(param_1))->m((s32)(lbl_80295A3C)); /* "PLYRDEAD" */
    ((VCall_fn_80047870_1 *)(param_1))->m((s32)(lbl_80295A48)); /* "PLYRLIVE" */
    ((VCall_fn_80047870_2 *)(param_1))->m((s32)(lbl_8035D080)); /* "CINON" */
    ((VCall_fn_80047870_3 *)(param_1))->m((s32)(lbl_8035D088)); /* "CINOFF" */
}
}
