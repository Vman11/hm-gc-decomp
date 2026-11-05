#include "common.h"

extern "C" {

struct T34 { s32 a; f32 t; };
void fn_80107018(T34 *p, f32 dt, s32 lo, s32 hi);
struct C801E66FC {
    s32 f0;
    u32 f4;
    u8 pad8[0xC];
    virtual void v0();
    virtual void Fire();
    u32 *f18;
    u32 f1c;
    f32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    T34 f34;
};

void fn_801E66FC(C801E66FC *c, f32 dt) {
    if ((c->f4 & 1) || (c->f4 & 2)) {
        fn_80107018(&c->f34, dt, c->f28, c->f30);
        f32 cur = c->f34.t;
        for (u32 i = 0; i < c->f1c; i++) {
            f32 old = c->f20;
            f32 v = (f32)c->f18[i];
            if (cur >= old) {
                if (cur > v && v >= old) {
                    c->f24 = i;
                    c->Fire();
                }
            } else {
                if (cur > v || v > old) {
                    c->f24 = i;
                    c->Fire();
                }
            }
        }
        c->f20 = cur;
    }
}

} /* extern "C" */
