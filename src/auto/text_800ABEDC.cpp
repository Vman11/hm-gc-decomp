// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_8029B37C[];
extern char lbl_8029B388[];
extern char lbl_803624EC[0x6];
extern char lbl_803624F4[0x7];
struct VCall_fn_800ABEDC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800ABEDC_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800ABEDC_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800ABEDC_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_800ABEDC(s32 *param_1) {
    ((VCall_fn_800ABEDC_0 *)(param_1))->m((s32)(lbl_8029B388)); /* "PLYRDEAD" */
    ((VCall_fn_800ABEDC_1 *)(param_1))->m((s32)(lbl_8029B37C)); /* "PLYRLIVE" */
    ((VCall_fn_800ABEDC_2 *)(param_1))->m((s32)(lbl_803624EC)); /* "CINON" */
    ((VCall_fn_800ABEDC_3 *)(param_1))->m((s32)(lbl_803624F4)); /* "CINOFF" */
}
}
