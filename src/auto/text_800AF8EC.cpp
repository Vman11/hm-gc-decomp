// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80362B14[0x6];
extern char lbl_80362B1C[0x6];
extern char lbl_80362B24[0x7];
struct VCall_fn_800AF8EC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_800AF8EC_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_800AF8EC_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_800AF8EC(s32 *param_1) {
    ((VCall_fn_800AF8EC_0 *)(param_1))->m((s32)(lbl_80362B14)); /* "PIANO" */
    ((VCall_fn_800AF8EC_1 *)(param_1))->m((s32)(lbl_80362B1C)); /* "CELLO" */
    ((VCall_fn_800AF8EC_2 *)(param_1))->m((s32)(lbl_80362B24)); /* "VIOLIN" */
}
}
