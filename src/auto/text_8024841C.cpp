#include "common.h"
struct P { u8 pad[0x14]; void *f14; u8 q[0x24 - 0x18]; s32 f24; u8 *f28; };
extern "C" {
void fn_8026AF6C(void *, P *, void *, void *);
void fn_8024841C(P *p, void *a) {
    s32 off;
    s32 i;
    off = 0;
    for (i = 0; i < p->f24; i++) {
        fn_8026AF6C(p->f14, p, p->f28 + off, a);
        off += 4;
    }
}
}
