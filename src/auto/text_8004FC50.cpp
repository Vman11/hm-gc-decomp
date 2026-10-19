// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802962B0[];
extern char lbl_802962BC[];
extern char lbl_8035DA1C[0x8];
extern char lbl_8035DA6C[0x6];
extern char lbl_8035DA74[0x7];
struct VCall_fn_8004FC50_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8004FC50(s32 *param_1) {
    ((VCall_fn_8004FC50_0 *)(param_1))->m((s32)(lbl_8035DA1C)); /* "LIGHTON" */
    ((VCall_fn_8004FC50_1 *)(param_1))->m((s32)(lbl_802962B0)); /* "PLYRDEAD" */
    ((VCall_fn_8004FC50_2 *)(param_1))->m((s32)(lbl_802962BC)); /* "PLYRLIVE" */
    ((VCall_fn_8004FC50_3 *)(param_1))->m((s32)(lbl_8035DA6C)); /* "CINON" */
    ((VCall_fn_8004FC50_4 *)(param_1))->m((s32)(lbl_8035DA74)); /* "CINOFF" */
}
}
