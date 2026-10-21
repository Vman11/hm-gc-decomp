#include "common.h"
extern "C" {
struct C800FA118 { u8 pad[0xc]; s8 *cur; s8 *end; s32 line; };
struct VCall_fn_800FA118_0 { char vptr_pad[0x18]; virtual void p0(); virtual int m(); };

u32 fn_800FA118(C800FA118 *r) {
    u8 c;
    do {
        while (r->cur < r->end) {
            c = *r->cur; r->cur++; if (c == '\n') { r->line++; return 1; }
        }
    } while (((VCall_fn_800FA118_0 *)r)->m() != 0);
    return 0;
}
}
