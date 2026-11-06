#include "common.h"

extern "C" {
extern s64 lbl_8035B158;
struct E801FE48C { u8 p[0x18]; s32 sh; };
struct O801FE48C { u8 p[0x10]; s32 n; };
E801FE48C *fn_800C72C0(void *, void *, void *);
E801FE48C *fn_801FE48C(O801FE48C *o, void *a, void *b, void *c) {
    E801FE48C *e = fn_800C72C0(a, b, c);
    if (e) {
        lbl_8035B158 |= 1 << e->sh;
        o->n++;
    }
    return e;
}
}
