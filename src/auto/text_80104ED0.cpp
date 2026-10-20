// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80104ED0 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(void *); };

void fn_80104ED0(V_80104ED0 *q) {
    u8 *p = (u8 *)q;
    u8 *n;
    if (*(V_80104ED0 **)p != NULL) {
        (*(V_80104ED0 **)p)->m(q);
    }
    n = *(u8 **)(p + 8);
    while (n != NULL) {
        u8 *next = *(u8 **)(n + 4);
        q->m(n);
        n = next;
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 28) = -1;
}

} /* extern "C" */
