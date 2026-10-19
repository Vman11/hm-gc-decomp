// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_8029587C[];
extern char lbl_80295888[];
extern char lbl_8035CDAC[0x8];
extern char lbl_8035CDB4[0x6];
extern char lbl_8035CDBC[0x7];
struct VCall_fn_800468E4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800468E4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800468E4_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800468E4_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800468E4_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_800468E4(s32 *param_1) {
    ((VCall_fn_800468E4_0 *)(param_1))->m((s32)(lbl_8035CDAC)); /* "LIGHTON" */
    ((VCall_fn_800468E4_1 *)(param_1))->m((s32)(lbl_80295888)); /* "PLYRLIVE" */
    ((VCall_fn_800468E4_2 *)(param_1))->m((s32)(lbl_8029587C)); /* "PLYRDEAD" */
    ((VCall_fn_800468E4_3 *)(param_1))->m((s32)(lbl_8035CDB4)); /* "CINON" */
    ((VCall_fn_800468E4_4 *)(param_1))->m((s32)(lbl_8035CDBC)); /* "CINOFF" */
}
}
