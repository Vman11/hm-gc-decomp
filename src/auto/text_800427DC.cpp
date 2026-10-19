// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_802951F4[];
extern char lbl_80295344[];
extern char lbl_8035C6B0[0x8];
extern char lbl_8035C6D0[0x8];
struct VCall_fn_800427DC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_800427DC_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_800427DC_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_800427DC_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_800427DC(s32 *param_1) {
    ((VCall_fn_800427DC_0 *)(param_1))->m((s32)(lbl_8035C6D0)); /* "C_SHAKE" */
    ((VCall_fn_800427DC_1 *)(param_1))->m((s32)((u32)lbl_80295344));
    ((VCall_fn_800427DC_2 *)(param_1))->m((s32)(lbl_8035C6B0)); /* "C_SCARY" */
    ((VCall_fn_800427DC_3 *)(param_1))->m((s32)(lbl_802951F4)); /* "C_NSCARY" */
}
}
