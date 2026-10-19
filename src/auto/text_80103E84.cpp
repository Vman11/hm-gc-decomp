// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80103E84 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
extern u8 lbl_803286D0[];
void fn_80101820(void *);

void fn_80103E84(V_80103E84 *p, void *a, void *b) {
    p->m();
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x194))(*(void **)((u8 *)p + 0x14), a, b);
    if (*(u32 *)((u8 *)p + 0x20) & 0x10) {
        fn_80101820(b);
    }
}

} /* extern "C" */
