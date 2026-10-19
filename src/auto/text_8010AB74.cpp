// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8010C348(int, int);
struct VCall_fn_8010AB74_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };

void fn_8010AB74(s32 param_1, s32 param_2) {
    ((VCall_fn_8010AB74_0 *)(param_2))->m((s32)(*(u32 *)(param_1 + 0xc)));
    fn_8010C348((int)(param_1), (int)(param_2));
}
}
