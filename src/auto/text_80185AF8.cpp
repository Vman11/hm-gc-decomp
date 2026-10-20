// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80185AF8 { u8 pad[0xC]; virtual void p0(); virtual void p1(); virtual void m(void *, void *, void *, void *, void *); };

void fn_80185AF8(u8 *p, void *a, void *b, void *c, void *d, void *e) {
    u32 off;
    u32 i;
    for (i = 0, off = 0; i < *(u32 *)(p + 16); i++) {
        (*(V_80185AF8 **)(*(u8 **)(p + 24) + off))->m(a, b, c, d, e);
        off += 4;
    }
}

} /* extern "C" */
