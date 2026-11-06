#include "common.h"
extern "C" {
struct OD { u8 pad[8]; int type; };
struct O { OD *d; u32 f4; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *get(int); };
struct T { u8 pad[0x14]; virtual void v0(); virtual void fire(); O *o; u32 op; int f20; union { s32 i; f32 f; } k; int *f28; int *f2c; u32 n; };
void fn_801ED29C(T *t) {
    O *o = t->o;
    u32 i;
    if (o->d->type == 1) {
        int *v = (int *)o->get(0);
        if (*v != 0) t->fire();
    } else if (o->d->type == 2) {
        s32 *v = (s32 *)o->get(0);
        switch (t->op) {
        case 0: break;
        case 1: if (t->k.i == *v) t->fire(); break;
        case 2: if (t->k.i != *v) t->fire(); break;
        case 3: if (*v < t->k.i) t->fire(); break;
        case 4: if (*v > t->k.i) t->fire(); break;
        case 5: if (*v <= t->k.i) t->fire(); break;
        case 6: if (*v >= t->k.i) t->fire(); break;
        case 7: {
            s32 x = *v;
            for (i = 0; i < t->n; i += 2) {
                if (x >= t->f2c[i] && x <= t->f2c[i + 1]) { t->fire(); return; }
            }
            break;
        }
        }
    } else {
        f32 *v = (f32 *)o->get(0);
        switch (t->op) {
        case 0: break;
        case 1: if (t->k.f == *v) t->fire(); break;
        case 2: if (t->k.f != *v) t->fire(); break;
        case 3: if (*v < t->k.f) t->fire(); break;
        case 4: if (*v > t->k.f) t->fire(); break;
        case 5: if (*v <= t->k.f) t->fire(); break;
        case 6: if (*v >= t->k.f) t->fire(); break;
        case 7: {
            f32 x = *v;
            for (i = 0; i < t->n; i += 2) {
                if (x >= (f32)(s32)t->f2c[i] && x <= (f32)(s32)t->f2c[i + 1]) { t->fire(); return; }
            }
            break;
        }
        }
    }
}
}
