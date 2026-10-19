// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035B684;
struct VCall_fn_8003C8A4_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };

void fn_8003C8A4(s32 param_1) {
    u32 uVar1;

    uVar1 = ((VCall_fn_8003C8A4_0 *)(lbl_8035B684))->m();
    *(u32 *)(param_1 + 0x2b4) = uVar1;
}
}
