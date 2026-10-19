// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802118FC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(void *, s32); };
void fn_80207E5C(void *, s32, s32);

void fn_802118FC(u8 *p, s32 a, s32 b) {
    fn_80207E5C(p, a, b);
    (*(V_802118FC **)(p + 0x6E0))->m(p + 0x80, b);
}

} /* extern "C" */
