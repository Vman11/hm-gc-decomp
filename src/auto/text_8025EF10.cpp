#include "common.h"
extern "C" {
extern u32 lbl_8035B7BC;
u32 fn_8026D254(u32, void *);
struct C8025EF10 { u8 pad0[0x6c]; s32 n; u8 *e; };

void fn_8025EF10(C8025EF10 *p) {
    u32 x; s32 off; s32 i;
    x = lbl_8035B7BC;
    off = 0;
    for (i = 0; i < p->n; i++) {
        *(u32 *)((u8 *)p->e + off + 0x10) = fn_8026D254(x, (u8 *)p->e + off + 8);
        off += 0x1c;
    }
}
}
