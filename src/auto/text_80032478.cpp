// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { u8 pad[168]; s32 *a168; u8 pad172[8]; u32 fl180; u8 pad184[36]; s32 a220; u8 pad224[48]; f32 f272; };
struct N {
    volatile u32 fl;
    u16 t4;
    u8 pad6[54];
    O *o60;
    u8 pad64[40];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void s11(f32);
    u8 pad108[28];
    u32 a136;
    u8 pad140[4];
    u32 a144;
};
extern u8 *lbl_8035B488;
extern f32 lbl_8035BD7C;
extern u32 lbl_8035BDD0;
s32 fn_8022A0BC(O *);

static inline f32 sc(O *o, f32 dt) { if (o && lbl_8035BD7C != o->f272) dt *= o->f272; return dt; }
void fn_80032478(void *self, N *n) {
    O *o;
    N *q;
    f32 dt;
    u16 t;
    int inr;
    q = 0;
    dt = *(f32 *)(lbl_8035B488 + 20);
    o = n->o60;
    if (n->o60 && lbl_8035BD7C != n->o60->f272) dt *= n->o60->f272;
    t = n->t4;
    if (t == 1) goto Y;
    if (t == 2) goto Y;
    if (t == 8) goto Y;
    if (t == 3) goto Y;
    if (t == 10) goto Y;
    if (t == 11) goto Y;
    if (t == 13) goto Y;
    if (t == 12) {
    Y:
        inr = 1;
    } else {
        inr = 0;
    }
    if (inr) {
        if (o && (o->fl180 & 4)) goto L;
        q = n;
        if (n->a136 != 0) return;
        if (n->fl & 0x800) goto L;
        if (o && (o->fl180 & 2)) goto L;
        if (o && o->a220 != 0) goto L;
        if (t == 2 || t == 3) {
            if (n->a144 == 0) goto L;
            return;
        }
        return;
    }
L:
    if (n->o60) {
        if ((o->fl180 & 4) || (o->a168 ? *o->a168 : 0) != 0) {
            n->s11(dt);
            return;
        }
        if (fn_8022A0BC(o)) {
            if (q && (o->fl180 & 2) && !(q->fl & 0x800)) q->fl |= lbl_8035BDD0;
            if ((o->fl180 & 8) && !(n->fl & 2)) n->fl |= 2;
            n->s11(dt);
        } else {
            if (q) q->fl &= ~0x800;
            n->fl &= ~2;
        }
    } else {
        n->s11(dt);
    }
}

} /* extern "C" */
