// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct X { u8 pad[8]; u8 r, g, b, a; u8 pad2[32]; u32 fl; };
struct M { u32 n; X **items; };
struct Sub { u8 pad[28]; M m; };
struct O { u32 f0; u8 pad[100]; virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void o5(); virtual void o6(); virtual void o7(); virtual void o8(); virtual void o9(); virtual void o10(); virtual void upd(f32 dt);
    M *m; u8 pad3[144 - 112]; Sub *sub; };
struct E { O *o; s32 on; f32 time; s32 f12; s32 f16; f32 v; f32 tgt; f32 spd; };
struct T { u32 pad; u32 cnt[30]; u32 n; E ***a; };
extern "C" {
extern f32 lbl_80365ED8;
extern u32 lbl_80365ED0, lbl_80365ED4;

static inline void paint2(E *e, M *m) {
    X *x;
    u32 k;
    for (k = 0; k < m->n; k++) {
        x = m->items[k];
        if (e->f12 && x->fl & 0x10) {
            x->b = x->g = x->r = e->v;
            x->fl |= lbl_80365ED0;
        }
        if (e->f16 && x->fl & 0x20) {
            x->a = e->v;
            x->fl |= lbl_80365ED4;
        }
    }
}
void fn_80235858(T *t, f32 dt) {
    u32 i, j;
    for (i = 0; i < t->n; i++) {
        for (j = 0; j < t->cnt[i]; j++) {
            E *e = t->a[i][j];
            if (e->on) {
                if (e->f12 || e->f16) {
                    e->v = e->spd * dt + e->v;
                    if (e->spd > lbl_80365ED8) {
                        if (e->v >= e->tgt) { e->v = e->tgt; e->f16 = e->f12 = 0; e->spd = lbl_80365ED8; }
                    } else {
                        if (e->v <= e->tgt) { e->v = e->tgt; e->f16 = e->f12 = 0; e->spd = lbl_80365ED8; }
                    }
                    { O *o = e->o; paint2(e, o->m == 0 ? &o->sub->m : o->m); }
                }
                t->a[i][j]->o->upd(dt);
                t->a[i][j]->time -= dt;
                if (t->a[i][j]->time <= lbl_80365ED8) {
                    t->a[i][j]->on = 0;
                    t->a[i][j]->time = lbl_80365ED8;
                    t->a[i][j]->o->f0 &= ~0x800;
                }
            }
        }
    }
}

} /* extern "C" */
