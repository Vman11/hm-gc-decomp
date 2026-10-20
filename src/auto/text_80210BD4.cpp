// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80210BD4 { u8 pad[0x6B8]; virtual void p0(); virtual void m1(void *, void *, void *); virtual void p2(); virtual void m3(void *); };

void fn_80210BD4(V_80210BD4 **p, V_80210BD4 *a, void *b, void *c) {
    if (p[1] != NULL) {
        if (p[1] != NULL) {
            p[0]->m3(p[1]);
        }
        p[0] = 0;
        p[1] = 0;
    }
    p[0] = a;
    p[0]->m1(b, c, p + 1);
}

} /* extern "C" */
