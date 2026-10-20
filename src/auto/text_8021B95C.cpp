// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021B95C { u8 pad[0x10]; virtual void m0(void *); virtual void p1(); virtual void p2(); virtual void m3(); };

void fn_8021B95C(V_8021B95C *q, void *a) {
    u8 *p = (u8 *)q;
    if (*(u32 *)p & 1) {
        q->m3();
    }
    *(void **)(p + 12) = a;
    if (*(void **)(p + 12) != NULL) {
        q->m0(*(void **)(p + 12));
    }
    *(u32 *)p |= 3;
}

} /* extern "C" */
