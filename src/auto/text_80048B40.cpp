// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80295A90[];
extern char lbl_8035D150[0x8];
extern char lbl_8035D160[0x7];
extern char lbl_8035D168[0x8];
struct VCall_fn_80048B40_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_80048B40(s32 *param_1) {
    ((VCall_fn_80048B40_0 *)(param_1))->m((s32)(lbl_8035D150)); /* "LIGHTON" */
    ((VCall_fn_80048B40_1 *)(param_1))->m((s32)(lbl_80295A90)); /* "LIGHTOFF" */
    ((VCall_fn_80048B40_2 *)(param_1))->m((s32)(lbl_8035D160)); /* "FLSHON" */
    ((VCall_fn_80048B40_3 *)(param_1))->m((s32)(lbl_8035D168)); /* "FLSHOFF" */
}
}
