// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80103C44 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(void *); };

void fn_80103C44(u8 *p, void *a) {
    V_80103C44 *n = *(V_80103C44 **)(p + 8);
    while (n != NULL) {
        n->m(a);
        n = *(V_80103C44 **)((u8 *)n + 4);
    }
}

} /* extern "C" */
