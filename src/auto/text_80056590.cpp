// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
extern f32 lbl_8035E198, lbl_8035E1A0;
struct X; 
struct O { u32 f0; u8 pad4[20]; V pos; u8 pad36[68]; virtual void a0(); virtual void a1(); virtual void upd(); u8 pad108[12]; X *f120; };
struct V72 { u8 pad[156]; O *f156; };
struct G308 { u8 pad[72]; V72 *f72; };
extern G308 *lbl_8035B308;
struct S40 { u8 pad[40]; V c; };
struct S168 { u8 pad[40]; S40 *f40; };
struct Y4 { u8 pad[4]; f32 f4; };
struct Y { u8 pad[8]; f32 f8; u8 pad12[4]; Y4 *f16; u8 pad20[16]; f32 f36; };
struct S572 { u8 pad[168]; S168 *f168; u8 pad172[4]; Y *f176; };
struct S224 { u8 pad[156]; O *f156; };
struct T { u8 pad[96]; int f96; u8 pad100[124]; S224 *f224; u8 pad228[80]; int *f308; u8 pad312[36]; int *f348; int *f352; u8 pad356[60]; f32 *f416; f32 *f420; f32 *f424; f32 *f428; u8 pad432[100]; int f532; u8 pad536[36]; S572 *f572; u8 pad576[4]; u32 *f580; u32 f584; u8 pad588[4]; u32 f592; };
f32 fn_80101590(V *, V *);
static inline f32 lerp(f32 t, f32 a, f32 b) { return t * (b - a) + a; }
static inline void sety(Y *y, f32 v) { y->f8 = v; if (y->f16) y->f36 = y->f8 / y->f16->f4; }
void fn_80107F3C(X *, V *);
static inline void vset(V *v, f32 x, f32 y, f32 z) { v->x = x; v->y = y; v->z = z; }
static inline void vlerp(V *o, f32 t, f32 a, const V *b) { o->x = t * (b->x - a) + a; o->y = t * (b->y - a) + a; o->z = t * (b->z - a) + a; }
void fn_80056590(T *t) {
    O *c;
    bool on = 0;
    u32 fl = *t->f580;
    if (!(fl & t->f592) && (fl & t->f584) && !t->f532) {
        if ((*t->f348 && t->f96 == 1) || (*t->f352 && t->f96 == 3 && !*t->f308)) on = 1;
    }
    int on8 = on;
    c = lbl_8035B308->f72->f156;
    if (c->f0 & 4) c->upd();
    V cp;
    V op;
    V col;
    cp.x = c->pos.x;
    cp.y = c->pos.y;
    ((f32 *)&op)[5] = c->pos.z;
    cp.z = lbl_8035E198;
    c = t->f224->f156;
    if (!c) return;
    if (c->f0 & 4) c->upd();
    op.x = c->pos.x;
    op.y = c->pos.y;
    ((f32 *)&col)[5] = c->pos.z;
    op.z = lbl_8035E198;
    f32 d = fn_80101590(&op, &cp);
    if (!on8 || d > *t->f420) d = *t->f420;
    else if (d < *t->f416) d = *t->f416;
    f32 cz; 
    f32 k = (*t->f420 - d) / (*t->f420 - *t->f416);
    S40 *s = t->f572->f168->f40;
    f32 cy = s->c.y; cz = s->c.z; f32 cx = s->c.x; col.x = lerp(k, lbl_8035E1A0, cx); col.y = lerp(k, lbl_8035E1A0, cy); col.z = lerp(k, lbl_8035E1A0, cz);
    f32 v = lerp(k, *t->f424, *t->f428);
    X *x = t->f224->f156->f120;
    if (x) fn_80107F3C(x, &col);
    sety(t->f572->f176, v);
}

} /* extern "C" */
