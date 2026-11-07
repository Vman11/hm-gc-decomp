#include "common.h"

extern "C" {

typedef struct { u8 r, g, b, a; } C80160B9C;
typedef struct { u16 n; u8 pad[0x12]; void *o; u16 *tbl; } S80160B9C;
void fn_80147AD8(void *o, u16 k, C80160B9C *c);
static inline u8 eq80160B9C(C80160B9C *a, u8 r, u8 g, u8 b) {
    u8 res = 0;
    if (a->r == r && a->g == g && a->b == b) res = 1;
    return res;
}
#pragma push
#pragma scheduling once
s32 fn_80160B9C(S80160B9C *p, C80160B9C *c, u32 *out) {
    u32 n;
    u8 b;
    u8 g;
    u8 r;
    u16 *t;
    u32 i;
    t = p->tbl;
    r = c->r;
    i = 0;
    n = p->n;
    g = c->g;
    b = c->b;
    for (; i < n; t++, i++) {
        C80160B9C tmp;
        fn_80147AD8(p->o, *t, &tmp);
        if (eq80160B9C(&tmp, r, g, b)) {
            *out = i;
            return 1;
        }
    }
    return 0;
}
#pragma pop

} /* extern "C" */
