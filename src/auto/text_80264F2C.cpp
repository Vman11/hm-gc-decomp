#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Q4 { f32 v[4]; };
struct Tb { u32 n; struct Ob **a; };
struct Ob { u8 pad[0x24]; struct Ob *f24; u8 pad28[0x18]; void *f40; };
struct Md { u8 pad[0x28]; f32 sx, sy, sz; };
struct M { u8 pad[0x30]; void *f30; u8 pad34[0x38]; Tb *f6c; u8 pad70[8]; Md *f78; };
struct Mi { u8 pad[0x6c]; Tb *f6c; u8 pad70[0x20]; u8 *f90; };
struct Dst { f32 d; u32 i; };
struct Ent { u8 pad[0xc]; u16 fc; u8 pade[2]; V3 pos; u8 pad1c[0x10]; };
struct Rec { M *m; u32 f4; u32 flags; s32 type; };
struct Ob2 { u8 pad[0x84]; s32 *f84; };
struct P { u8 pad[0x7c]; Dst *f7c; Ent *f80; u32 n; u8 pad88[8]; Rec *f90; };
struct G { u8 pad[0x14]; Ob2 *f14; };
extern f32 lbl_80366B9C;
extern f32 lbl_803596E0[];
extern M *lbl_8035B76C;
extern G *lbl_8035B754;
s32 fn_80195840(M *);
Mi *fn_801955D8(M *);
void fn_801074D0(void *, V3 *, V3 *, V3 *);
void fn_80101624(void *, void *, void *, f32);
void fn_801075B8(void *, Q4 *);
void fn_800FFF8C(Q4 *, V3 *);
void fn_80101820(V3 *);
void fn_800F806C(void *, Ob *, void *);

static inline int Valid(Tb *t, u16 s) { return s < t->n; }

int fn_80264F2C(P *p, void *a, void *b, void *c, V3 *pos, f32 *d, u32 *cnt, M **e,
                Ob2 **oo, void *ex, s32 *flag, void *q19, M **q20, Ob2 **q21, V3 *q22, s32 mask) {
    s32 idx[10];
    V3 va, vb, vc;
    Q4 r1;
    Q4 r2;
    u32 n = p->n;
    if (cnt) *cnt = n;
    if (flag) *flag = 0;
    if (n > 10) return 0;
    if (n) {
        f32 best = lbl_80366B9C;
        s32 found = 0;
        s32 first = 1;
        Ent *ent = 0;
        Ob *ob = 0;
        Ob2 *o2;
        u32 i, k;
        for (i = 0; i < n; i++) idx[i] = -1;
        for (k = 0; k < n && !found; k++) {
            u32 sel = -1;
            best = lbl_803596E0[0];
            for (i = 0; i < n; i++) {
                if (idx[i] < 0 && p->f7c[i].d < best) {
                    sel = i;
                    best = p->f7c[i].d;
                }
            }
            idx[sel] = 0;
            if (sel > n) return 0;
            lbl_8035B76C = p->f90[p->f7c[sel].i].m;
            if (!lbl_8035B76C) return 0;
            if (!fn_80195840(lbl_8035B76C)) return 0;
            o2 = 0;
            ob = 0;
            {
                Rec *r = &p->f90[p->f7c[sel].i];
                if (r->type == 0) {
                    u16 s;
                    Mi *mi;
                    Tb *t;
                    Ent *en;
                    lbl_8035B76C = r->m;
                    en = &p->f80[p->f7c[sel].i];
                    s = *(volatile u16 *)&en->fc;
                    ent = en;
                    mi = fn_801955D8(lbl_8035B76C);
                    t = mi->f6c;
                    if (!t) t = (Tb *)(mi->f90 + 0x1c);
                    if (Valid(t, s)) {
                        Ob *x = t->a[s];
                        o2 = (Ob2 *)x->f24;
                        ob = x;
                    }
                }
            }
            if (pos) {
                Rec *r = &p->f90[p->f7c[sel].i];
                if (r->type == 2) {
                    M *m = r->m;
                    u32 fl;
                    f32 k;
                    *(M *volatile *)&lbl_8035B76C = m;
                    k = *(volatile f32 *)&lbl_80366B9C;
                    va.x = k; va.y = k; va.z = k;
                    vb.x = k; vb.y = k; vb.z = k;
                    vc.x = k; vc.y = k; vc.z = k;
                    if (m->f30) fn_801074D0(m->f30, &va, &vb, &vc);
                    fl = p->f90[p->f7c[sel].i].flags;
                    if (fl & 1) {
                        pos->x = va.x; pos->y = va.y; pos->z = va.z;
                    } else if (fl & 8) {
                        pos->x = va.x; pos->y = va.y; pos->z = va.z;
                        pos->x = -pos->x; pos->y = -pos->y; pos->z = -pos->z;
                    } else if (fl & 2) {
                        pos->x = vb.x; pos->y = vb.y; pos->z = vb.z;
                    } else if (fl & 0x10) {
                        pos->x = vb.x; pos->y = vb.y; pos->z = vb.z;
                        pos->x = -pos->x; pos->y = -pos->y; pos->z = -pos->z;
                    } else if (fl & 4) {
                        pos->x = vc.x; pos->y = vc.y; pos->z = vc.z;
                    } else if (fl & 0x20) {
                        pos->x = vc.x; pos->y = vc.y; pos->z = vc.z;
                        pos->x = -pos->x; pos->y = -pos->y; pos->z = -pos->z;
                    }
                }
            }
            if (!o2) o2 = lbl_8035B754->f14;
            if (oo) *oo = o2;
            {
                s32 t = *o2->f84;
                if (!(mask & (t ? t : 0))) {
                    found = 1;
                } else if (first == 1) {
                    first = 0;
                    if (flag) *flag = 1;
                    if (q19) fn_80101624(q19, a, b, best);
                    if (q20) *q20 = lbl_8035B76C;
                    if (q21) *q21 = o2;
                    if (q22 && ent) {
                        { f32 x = ent->pos.x, y = ent->pos.y, z = ent->pos.z; q22->x = x; q22->y = y; q22->z = z; }
                        if (lbl_8035B76C->f30) {
                            fn_801075B8(lbl_8035B76C->f30, &r1);
                            fn_800FFF8C(&r1, q22);
                        }
                    }
                }
            }
        }
        if (!found) return 0;
        if (e) *e = lbl_8035B76C;
        if (c) fn_80101624(c, a, b, best);
        if (d) *d = best;
        if (pos && ent) {
            { f32 x = ent->pos.x, y = ent->pos.y, z = ent->pos.z; pos->x = x; pos->y = y; pos->z = z; }
            if (fn_80195840(lbl_8035B76C)) {
                Md *md = lbl_8035B76C->f78;
                if (md) {
                    f32 sx = md->sx, sy = md->sy, sz = md->sz;
                    pos->x = pos->x / sx;
                    pos->y = pos->y / sy;
                    pos->z = pos->z / sz;
                    fn_80101820(pos);
                }
            }
            if (lbl_8035B76C->f30) {
                fn_801075B8(lbl_8035B76C->f30, &r2);
                fn_800FFF8C(&r2, pos);
            }
        }
        if (ex && ob && ob->f40) fn_800F806C(ob->f40, ob, ex);
        return 1;
    }
    return 0;
}

} /* extern "C" */
