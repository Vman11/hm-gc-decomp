// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8036542C;
extern u32 lbl_80365430;
struct A801EF9A0 { s32 f0; s32 f4; };
struct C801EF9A0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(A801EF9A0 *a); u8 pad4[4]; s32 f8; u8 pad[0x18]; u32 f24; };
#pragma opt_propagation off
void fn_801EF9A0(C801EF9A0 *p, A801EF9A0 *a) {
    p->v4(a);
    s32 f = a->f4;
    s32 g = a->f0;
    p->f8 = g;
    if (f != 0) p->f24 |= lbl_8036542C;
    else p->f24 |= lbl_80365430;
}
#pragma opt_propagation reset

} /* extern "C" */
