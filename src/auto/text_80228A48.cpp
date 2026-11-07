#include "common.h"

extern "C" {
struct C8023C7CC { u8 pad[8]; void *a; void *b; u8 pad2[12]; };
struct Q { u32 fl; u16 a4; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void s12(f32);
    u8 pad4[144];
    u32 a148;
    u8 pad152[4];
    Q *q156;
    u8 pad160[8];
    s32 *a168;
    u8 pad172[8];
    u32 fl180;
    u8 pad184[88];
    f32 f272;
    u8 pad276[300];
    s32 a576;
    u8 pad580[64];
    s32 a644;
    u8 pad648[8];
    f32 f656;
};
struct P { u8 pad[72]; O *o72; O *o76; C8023C7CC *it; };
extern u8 *volatile lbl_8035B488;
extern f32 lbl_80365CB0, lbl_80365CD8;
void fn_8023C528(C8023C7CC *, char *);
O *fn_8023A490(void *, void *);
void fn_8023C3F4(C8023C7CC *);

static inline O *get(C8023C7CC *it) { return it->a ? fn_8023A490(it->a, it->b) : (O *)0; }
static inline void tick(O *o, f32 dt, f32 k) {
    if (lbl_80365CD8 == o->f272) o->s12(k);
    else if (lbl_80365CB0 != o->f272) o->s12(dt * o->f272);
}

static inline void tick2(O *o, f32 dt, f32 k) {
    f32 s = o->f272;
    if (lbl_80365CD8 == s) o->s12(k);
    else if (lbl_80365CB0 != s) o->s12(dt * s);
}
#pragma scheduling once
void fn_80228A48(P *p, f32 dt) {
    C8023C7CC *it = *(C8023C7CC *volatile *)&p->it;
    f32 k = *(f32 *)(lbl_8035B488 + 20);
    if (!it) return;
    for (fn_8023C528(it, 0); p->it->a; fn_8023C3F4(p->it)) {
        s32 upd = 1;
        O *o = get(p->it);
        Q *q = o->q156;
        if (q) {
            bool inr = false;
            u16 t = q->a4;
            if (t >= 1 && t <= 13) inr = true;
            if (inr) {
                bool b2;
                if (!((q->fl & 0x800) || (o->fl180 & 4) || (o->a168 ? *o->a168 : 0) != 0) || p->o72 == o || p->o76 == o) upd = 0;
                {
                    O *w = p->o76;
                    b2 = false;
                    if (w->a644 != 0 || w->f656 != lbl_80365CB0) b2 = true;
                }
                if (b2 && o->a148 == 2 && o->a576 == 0) upd = 0;
            }
        }
        if (upd) tick(o, dt, k);
    }
    tick(p->o72, dt, k);
    if (p->o76) tick2(p->o76, dt, k);
}
}
