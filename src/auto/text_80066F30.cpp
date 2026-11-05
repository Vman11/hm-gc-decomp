// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Q4 { f32 x, y, z, w; };
struct Nm { char b[8]; };
struct Act {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void play(const void *s, s32 a, s32 b, void *c, s32 d);
};
struct T60 { u8 pad[0x60]; s32 type; };
struct Ctl : Act {
    u8 pad4[0x20c - 4]; T60 *p20c; u8 p210[0x338 - 0x210]; void *cur; u8 p33c[0x5b0 - 0x33c];
    u32 f5b0; u8 p5b4[0x5d0 - 0x5b4]; V3 n; u8 p5dc[0x5e4 - 0x5dc]; void *f5e4;
    u8 p5e8[0x730 - 0x5e8]; V3 f730; s32 f73c;
};
struct Ac : Act {
    u8 pad4[0x20c - 4]; void *p20c; u8 p210[0x4d4 - 0x210]; s32 f4d4; u8 p4d8[0x710 - 0x4d8]; s32 f710; f32 f714;
};
struct Tri { u8 pad[0x30]; f32 *f30; s32 *f34; s32 *f38; s32 *f3c; u8 pad40[0x8c - 0x40]; char *f8c; char *f90; };
struct P {
    u8 pad[0x14];
    V3 pos0, a0, a1, a2, v0;
    V3 pos, x, y, z, vel;
    u8 p8c[4]; f32 f90; f32 f94; u8 p98[4]; Ac *act; u8 pa0[0xfc - 0xa0]; Ctl *ctl;
    u8 p100[0x158 - 0x100]; f32 f158; f32 f15c; u8 p160[0x17c - 0x160];
    u32 t17c; f32 *f180; f32 *f184; u8 p188[4]; f32 *f18c; u8 p190[4]; f32 *f194; s32 f198; s32 f19c;
    u8 p1a0[4]; f32 f1a4; s32 f1a8; s32 f1ac; f32 *ofs;
};
struct Cfg { u8 pad[0xc]; u32 time; u8 p10[4]; f32 f14; };

extern s32 lbl_8035A1F0;
extern Nm lbl_8035A1F4;
extern s32 lbl_80359748;
extern u8 *lbl_8035B65C;
extern Cfg *lbl_8035B488;
extern V3 lbl_803064F8[6];
extern V3 lbl_80306540[6];
extern V3 lbl_80306588[6];
extern V3 lbl_803065D0[6];
extern s32 lbl_80306618[6];
extern f32 lbl_80306630[6];
extern s32 lbl_80306648[6];
extern s32 lbl_80306660[6];
extern Tri *lbl_80306678[6];
extern s32 lbl_80306690[6];
extern V3 lbl_803066A8[6];
extern s32 lbl_803066F0[6];
extern Tri *lbl_80306708[6];
extern V3 lbl_80306720[6];
extern V3 lbl_80357AF8;
extern V3 lbl_80357B10;
extern f32 *lbl_80357B28[5];
extern f32 *lbl_80357B3C[5];
extern V3 lbl_80357E90;
extern f32 lbl_802BD300[];
extern f32 lbl_802BD354[];
extern char lbl_80297878[];
extern char lbl_80297884[];
extern const char lbl_8035E770[8];
extern const char lbl_8035E778[8];
extern const char lbl_8035E798[8];
extern const char lbl_8035E7C0[8];
extern const char lbl_8035E7C8[8];
extern const char lbl_8035E7D0[8];
extern f32 lbl_8035E758;
extern f32 lbl_8035E75C;
extern f32 lbl_8035E780;
extern f32 lbl_8035E784;
extern f32 lbl_8035E788;
extern f32 lbl_8035E78C;
extern f32 lbl_8035E790;
extern f32 lbl_8035E794;
extern f32 lbl_8035E7A0;
extern f32 lbl_8035E7A4;
extern f32 lbl_8035E7A8;
extern f32 lbl_8035E7AC;
extern f64 lbl_8035E7B0;
extern f32 lbl_8035E7B8;
extern f32 lbl_8035E7BC;

void fn_802610A0(P *p);
void fn_80066050(P *p);
void fn_80064B8C(P *p, f32 *w, f32 dt);
void fn_80064AF0(P *p);
void fn_80065B48(P *p);
void __ct__9C80253F24Fiiii(u8 *m, const char *s, s32 a, s32 b, s32 c);
void fn_80036E44(Ctl *o, s32 v);
void fn_80037060(V3 *p, V3 *q, f32 a, f32 b);
f32 fn_8003714C(V3 *v);
f32 fn_80037A38(u8 *t, s32 id);
s32 fn_800724A4(Ac *a);
void fn_8007148C(void *);
s32 fn_800F6CD0(Nm *a, Nm *b);
void fn_800F6E88(void *d, void *s);
void fn_800FFA4C(Q4 *q, V3 *a, V3 *b, V3 *c);
void fn_800FFDA4(Q4 *q, V3 *a, V3 *b, V3 *c);
void fn_80100104(Q4 *o, Q4 *a, Q4 *b, f32 t);
void fn_80100F24(V3 *a, V3 *b);
void fn_80101030(V3 *a, V3 *b);
f32 fn_80101664(V3 *a);
void fn_80101820(V3 *v);
void fn_8023BE44(V3 *o, f32 k, f32 z, V3 a, V3 b, f32 t);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, f32 *e, s32 *f, s32 *g, Tri **h, s32 i, s32 *j, V3 *k, s32 *l, Tri **m, V3 *n, s32 o);

static inline int SetNm(Nm *n, char *s) {
    if (s != 0 && *s != 0) {
        fn_800F6E88(n, s);
        return 1;
    }
    return 0;
}

static inline void Start(P *p, V3 *st) {
    {
        f32 k = p->ofs[0] * lbl_8035E75C;
        st->x += k * p->a0.x; st->y += k * p->a0.y; st->z += k * p->a0.z;
    }
    {
        f32 k = p->ofs[1] * lbl_8035E75C;
        st->x += k * p->a1.x; st->y += k * p->a1.y; st->z += k * p->a1.z;
    }
    {
        f32 k = p->ofs[2] * lbl_8035E75C;
        st->x += k * p->a2.x; st->y += k * p->a2.y; st->z += k * p->a2.z;
    }
}
static inline void End(P *p, V3 *en, u32 i) {
    *en = p->pos;
    {
        f32 k = lbl_8035E75C * ((V3 *)p->ofs)[i + 1].x;
        en->x += k * p->x.x; en->y += k * p->x.y; en->z += k * p->x.z;
    }
    {
        f32 k = lbl_8035E75C * ((V3 *)p->ofs)[i + 1].y;
        en->x += k * p->y.x; en->y += k * p->y.y; en->z += k * p->y.z;
    }
    {
        f32 k = lbl_8035E75C * ((V3 *)p->ofs)[i + 1].z;
        en->x += k * p->z.x; en->y += k * p->z.y; en->z += k * p->z.z;
    }
}
static inline f32 Min(f32 a, f32 b) { return a < b ? a : b; }
static inline int Bef(u32 a, u32 b) { return a >= b; }
static inline f32 Look(s32 **pp, f32 **tbl) {
    if (*pp != 0 && tbl != 0) {
        if (**pp > 4) **pp = 4;
        if (tbl[**pp] != 0) return *tbl[**pp];
    }
    return lbl_8035E758;
}

void fn_80066F30(P *p, f32 dt) {
    s32 landed;
    void *surf;
    s32 named;
    V3 b, a, d1, d2, e, vel, acc, n, sum, cr, from, to, hn, hit, h288, h276, d264, v252;
    Q4 q236, q220, q204;
    V3 u, up, w;
    Nm n88, n80, n72, n64;
    u32 i;
    s32 x56, x52, x48, flag44;
    Tri *obj40;
    f32 s, vz0, t;
    Ac *act;
    Tri *found;
    u8 *g;
    int flat;
    f32 *ofs;

    s = *p->f194;
    landed = 0;
    surf = 0;
    fn_802610A0(p);
    if (lbl_8035A1F0 != 0) {
        lbl_8035A1F0 = 0;
        p->act->play(lbl_8035E770, 0, 0, 0, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297878, 0, 0, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035E778, 0, 0, 0);
        return;
    }
    fn_80066050(p);
    fn_80064B8C(p, p->ofs, dt);
    act = p->act;
    p->pos = p->pos0;
    p->x = p->a0;
    p->y = p->a1;
    p->z = p->a2;
    p->vel = p->v0;
    p->f94 = p->f90;
    vz0 = p->vel.z;
    if (p->ctl->p20c->type != 14) p->vel.z -= dt * *p->f184;
    {
        f32 lim = Min(*p->f180, p->f1a4);
        if (p->vel.z < lim) p->vel.z = Min(*p->f180, p->f1a4);
    }
    a = lbl_80357B10;
    b = lbl_80357AF8;
    a.z = lbl_8035E758;
    b.z = lbl_8035E758;
    fn_80101820(&a);
    fn_80101820(&b);
    a.x *= p->f158; a.y *= p->f158; a.z *= p->f158;
    {
        f32 k = -p->f15c;
        b.x *= k; b.y *= k; b.z *= k;
    }
    d1 = lbl_80357B10;
    g = lbl_8035B65C + 0x770;
    d2 = lbl_80357AF8;
    fn_80100F24(&d1, lbl_803065D0);
    fn_80100F24(&d2, lbl_803065D0);
    fn_80101820(&d1);
    fn_80101820(&d2);
    fn_80037A38(g, 0x60);
    fn_80037A38(g, 0x61);
    {
        bool still = false;
        u32 now;
        t = lbl_8035B488->f14;
        if (p->f15c >= lbl_8035E780 && p->f15c <= lbl_8035E784 && p->f158 >= lbl_8035E780 && p->f158 <= lbl_8035E784) still = true;
        now = lbl_8035B488->time;
        { int st = still; int c1 = Bef(p->t17c + 500, now); int c2 = Bef(p->t17c + 250, now); if (!c1 || (!c2 && st)) p->f1ac = 1; }
    }
    if (fn_800724A4(act)) p->ofs = lbl_802BD354;
    else p->ofs = lbl_802BD300;
    e.x = lbl_8035E758; e.y = lbl_8035E758; e.z = lbl_8035E758;
    e.z = p->vel.z;
    vel = p->vel;
    vel.z = lbl_8035E758;
    fn_8003714C(&vel);
    acc.x = lbl_8035E758; acc.y = lbl_8035E758; acc.z = lbl_8035E758;
    acc.x += s * b.x; acc.y += s * b.y; acc.z += s * b.z;
    if (act->f4d4 == 0 || p->f19c < 1) {
        acc.x += s * a.x; acc.y += s * a.y; acc.z += s * a.z;
    }
    if (act->f710 > 0) {
        f32 k = act->f714;
        acc.x *= k; acc.y *= k; acc.z *= k;
    }
    if (fn_800724A4(act)) fn_80037060(&vel, &acc, lbl_8035E788, dt);
    else fn_80037060(&vel, &acc, lbl_8035E78C, dt);
    {
        Ctl *c = p->ctl;
        V3 *cn = &c->n;
        if (vel.x * cn->x + vel.y * cn->y + vel.z * cn->z < lbl_8035E758 && c->f5b0 != 0 && cn != 0) {
            n.x = cn->x; n.y = cn->y; n.z = cn->z;
            if (e.x * n.x + e.y * n.y + e.z * n.z < lbl_8035E758) fn_80100F24(&e, &n);
            {
                bool z = false;
                n.z = lbl_8035E758;
                if (fn_8003714C(&n) >= lbl_8035E780 && fn_8003714C(&n) <= lbl_8035E784) z = true;
                if (!z) {
                    fn_80101820(&n);
                    if (vel.x * n.x + vel.y * n.y + vel.z * n.z < lbl_8035E758) fn_80100F24(&vel, &n);
                }
            }
        }
    }
    fn_8003714C(&vel);
    p->vel.x = vel.x + e.x;
    p->vel.y = vel.y + e.y;
    p->vel.z = vel.z + e.z;
    s32 busy = act->f4d4;
    if (lbl_80359748 != 5 && busy == 0) {
        f32 xx = p->f158 * p->f158;
        f32 yy = p->f15c * p->f15c;
        if (xx + yy > lbl_8035E790) {
            sum = a;
            sum.x += b.x; sum.y += b.y; sum.z += b.z;
            fn_8023BE44(&p->x, lbl_8035E794, lbl_8035E758, sum, lbl_80357E90, t);
        }
    }
    if ((vz0 >= *p->f18c || p->f198 == 0) && p->vel.z < *p->f18c) {
        p->f198 = 1;
        act->play(lbl_8035E798, 0, 0, 0, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297884, 0, 0, 0);
    }
    {
        f32 l2 = lbl_8035E7A0 * *p->f18c;
        if (vz0 >= l2 && p->vel.z < l2) {
            p->f198 = 1;
            act->play(lbl_8035E798, 0, 0, 0, 0);
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297884, 0, 0, 0);
        }
    }
    p->pos.x += dt * p->vel.x;
    p->pos.y += dt * p->vel.y;
    p->pos.z += dt * p->vel.z;
    {
        Ctl *c = p->ctl;
        if (c->f73c == 0) {
            p->pos.x += c->f730.x;
            p->pos.y += c->f730.y;
            p->pos.z += c->f730.z;
        }
    }
    cr.x = p->y.y * lbl_80357E90.z - p->y.z * lbl_80357E90.y;
    cr.y = p->y.z * lbl_80357E90.x - p->y.x * lbl_80357E90.z;
    cr.z = p->y.x * lbl_80357E90.y - p->y.y * lbl_80357E90.x;
    if (fn_8003714C(&cr) < lbl_8035E7A4 && lbl_80357E90.x * p->y.x + lbl_80357E90.y * p->y.y + lbl_80357E90.z * p->y.z > lbl_8035E758) {
        fn_80037060(&p->y, &lbl_80357E90, lbl_8035E7A8, t);
    } else if ((f32)__fabs(cr.x * p->x.x + cr.y * p->x.y + cr.z * p->x.z) > (f32)__fabs(cr.x * p->z.x + cr.y * p->z.y + cr.z * p->z.z)) {
        fn_8023BE44(&p->y, lbl_8035E7A8, lbl_8035E758, lbl_80357E90, p->x, t);
    } else {
        fn_8023BE44(&p->y, lbl_8035E7A8, lbl_8035E758, lbl_80357E90, p->z, t);
    }
    fn_80100F24(&p->x, &p->y);
    fn_80101820(&p->x);
    lbl_80306678[0] = 0;
    lbl_80306678[1] = 0;
    lbl_80306678[2] = 0;
    lbl_80306678[3] = 0;
    lbl_80306678[4] = 0;
    lbl_80306678[5] = 0;
    found = 0;
    fn_80101820(&p->x);
    fn_80101820(&p->y);
    fn_80101820(&p->z);
    named = 0;
    from = p->pos0;
    ofs = p->ofs;
    from.x += ofs[0] * p->a0.x; from.y += ofs[0] * p->a0.y; from.z += ofs[0] * p->a0.z;
    from.x += ofs[1] * p->a1.x; from.y += ofs[1] * p->a1.y; from.z += ofs[1] * p->a1.z;
    from.x += ofs[2] * p->a2.x; from.y += ofs[2] * p->a2.y; from.z += ofs[2] * p->a2.z;
    to = p->pos;
    to.x += ofs[0] * p->x.x; to.y += ofs[0] * p->x.y; to.z += ofs[0] * p->x.z;
    to.x += ofs[1] * p->y.x; to.y += ofs[1] * p->y.y; to.z += ofs[1] * p->y.z;
    to.x += ofs[2] * p->z.x; to.y += ofs[2] * p->z.y; to.z += ofs[2] * p->z.z;
    if (fn_80264E0C(&from, &to, &hit, &hn, (f32 *)&x56, &x52, &x48, 0, 0, &flag44, &h288, 0, &obj40, &h276, 1)) {
        d264.x = from.x - hit.x;
        d264.y = from.y - hit.y;
        d264.z = from.z - hit.z;
        fn_80101820(&d264);
        d264.x *= lbl_8035E7AC; d264.y *= lbl_8035E7AC; d264.z *= lbl_8035E7AC;
        hit.x += d264.x; hit.y += d264.y; hit.z += d264.z;
        p->pos.x = hit.x;
        landed = 1;
        p->pos.y = hit.y;
        p->pos.z = hit.z;
        {
            f32 k = p->ofs[0];
            p->pos.x -= k * p->x.x; p->pos.y -= k * p->x.y; p->pos.z -= k * p->x.z;
        }
        {
            f32 k = p->ofs[1];
            p->pos.x -= k * p->y.x; p->pos.y -= k * p->y.y; p->pos.z -= k * p->y.z;
        }
        {
            f32 k = p->ofs[2];
            p->pos.x -= k * p->z.x; p->pos.y -= k * p->z.y; p->pos.z -= k * p->z.z;
        }
    }
    if (flag44 != 0) {
        if (SetNm(&n88, obj40->f90)) {
            named = 1;
            if (fn_800F6CD0(&n88, &lbl_8035A1F4) == 0) {
                i = 0;
                p->ctl->play(&n88, 0, 0, &i, 0);
                fn_800F6E88(&lbl_8035A1F4, &n88);
            }
        }
        lbl_803066A8[0].x = h288.x; lbl_803066A8[0].y = h288.y; lbl_803066A8[0].z = h288.z;
        lbl_80306720[0].x = h276.x; lbl_80306720[0].y = h276.y; lbl_80306720[0].z = h276.z;
        lbl_80306690[0] = 1;
        lbl_80306708[0] = obj40;
        fn_8007148C(p->act->p20c);
    }
    for (i = 0; i < 6; i++) {
        lbl_803064F8[i] = p->pos;
        Start(p, &lbl_803064F8[i]);
        End(p, &lbl_80306540[i], i);
        lbl_80306618[i] = fn_80264E0C(&lbl_803064F8[i], &lbl_80306540[i], &lbl_80306588[i], &lbl_803065D0[i], &lbl_80306630[i], &lbl_80306648[i], &lbl_80306660[i], &lbl_80306678[i], 0,
                                      &lbl_80306690[i], &lbl_803066A8[i], &lbl_803066F0[i], &lbl_80306708[i], &lbl_80306720[i], 1);
    }
    fn_80036E44(p->ctl, 0);
    p->ctl->cur = 0;
    p->ctl->f5e4 = 0;
    fn_80065B48(p);
    for (i = 0; i < 6; i++) {
        if (lbl_80306618[i] != 0) {
            V3 *nrm;
            Tri *o;
            if (i == 0 && lbl_80306630[0] > lbl_8035E7B0) continue;
            if (SetNm(&n80, lbl_80306678[i]->f90)) {
                named = 1;
                if (fn_800F6CD0(&n80, &lbl_8035A1F4) == 0) {
                    p->ctl->play(&n80, 0, 0, &i, 0);
                    fn_800F6E88(&lbl_8035A1F4, &n80);
                }
            }
            o = lbl_80306678[i];
            if ((o->f34 != 0 ? *o->f34 : 0) != 0) {
                lbl_8035A1F0 = 1;
                p->ctl->f5e4 = o;
            }
            nrm = &lbl_803065D0[i];
            flat = nrm->z > lbl_8035E7A4;
            v252 = p->vel;
            fn_80101030(&v252, nrm);
            if (lbl_80306678[0] != p->ctl->cur) {
                if (SetNm(&n72, lbl_80306678[0]->f8c)) __ct__9C80253F24Fiiii(lbl_8035B65C, n72.b, 0, 0, 0);
            }
            fn_80036E44(p->ctl, lbl_80306660[i]);
            p->ctl->cur = lbl_80306678[i];
            p->ctl->n = lbl_803065D0[i];
            p->f19c = 0;
            if (flat) {
                p->y = lbl_80357E90;
                fn_80100F24(&p->x, &p->y);
                fn_80101664(&p->x);
                landed = 1;
                p->vel.x -= v252.x; p->vel.y -= v252.y; p->vel.z -= v252.z;
                p->ctl->cur = lbl_80306678[i];
                surf = lbl_80306678[i];
            } else {
                f32 k;
                p->vel.x -= v252.x; p->vel.y -= v252.y; p->vel.z -= v252.z;
                k = lbl_8035E7B8 * (lbl_80306678[i]->f30 != 0 ? *lbl_80306678[i]->f30 : lbl_8035E758);
                v252.x *= k; v252.y *= k; v252.z *= k;
                p->f1a4 = -fn_8003714C(&v252);
                p->vel.x -= v252.x; p->vel.y -= v252.y; p->vel.z -= v252.z;
            }
        }
        if (lbl_80306690[i] != 0) {
            Tri *o;
            f32 f;
            bool b;
            if (SetNm(&n64, lbl_80306708[i]->f90)) {
                named = 1;
                if (fn_800F6CD0(&n64, &lbl_8035A1F4) == 0) {
                    p->ctl->play(&n64, 0, 0, &i, 0);
                    fn_800F6E88(&lbl_8035A1F4, &n64);
                }
            }
            o = lbl_80306708[i];
            f = Look(&o->f38, lbl_80357B28);
            b = lbl_8035E758 != f;
            if (!b) {
                f = Look(&o->f3c, lbl_80357B3C);
                b = lbl_8035E758 != f;
            }
            if (b && found == 0) found = lbl_80306708[i];
            fn_8007148C(p->act->p20c);
        }
    }
    {
        f32 k;
        lbl_803064F8[0] = p->pos0;
        k = p->ofs[0] * lbl_8035E75C;
        lbl_803064F8[0].x += k * p->x.x; lbl_803064F8[0].y += k * p->x.y; lbl_803064F8[0].z += k * p->x.z;
        k = p->ofs[1] * lbl_8035E75C;
        lbl_803064F8[0].x += k * p->y.x; lbl_803064F8[0].y += k * p->y.y; lbl_803064F8[0].z += k * p->y.z;
        k = p->ofs[2] * lbl_8035E75C;
        lbl_803064F8[0].x += k * p->z.x; lbl_803064F8[0].y += k * p->z.y; lbl_803064F8[0].z += k * p->z.z;
    }
    lbl_80306540[0].x = lbl_8035E7BC * p->vel.x + lbl_803064F8[0].x;
    lbl_80306540[0].y = lbl_8035E7BC * p->vel.y + lbl_803064F8[0].y;
    lbl_80306540[0].z = lbl_8035E7BC * p->vel.z + lbl_803064F8[0].z;
    if (fn_80264E0C(&lbl_803064F8[0], &lbl_80306540[0], 0, &lbl_803065D0[0], &lbl_80306630[0], 0, 0, &lbl_80306678[0], 0, 0, 0, 0, 0, 0, 1)) {
        flat = lbl_803065D0[0].z > lbl_8035E7A4;
        p->ctl->cur = lbl_80306678[0];
        if (flat) {
            f32 l, f;
            fn_800FFA4C(&q236, &p->x, &p->y, &p->z);
            up = lbl_80357E90;
            u = p->x;
            fn_80100F24(&u, &up);
            l = fn_8003714C(&u);
            if (l >= lbl_8035E780 && l <= lbl_8035E784) {
                w = p->z;
                fn_80100F24(&w, &up);
                u.x = up.y * w.z - up.z * w.y;
                u.y = up.z * w.x - up.x * w.z;
                u.z = up.x * w.y - up.y * w.x;
            } else {
                f32 k = lbl_8035E75C / l;
                u.x *= k; u.y *= k; u.z *= k;
                w.x = u.y * up.z - u.z * up.y;
                w.y = u.z * up.x - u.x * up.z;
                w.z = u.x * up.y - u.y * up.x;
            }
            fn_800FFA4C(&q220, &u, &up, &w);
            f = lbl_8035E7BC * lbl_80306630[0];
            if (lbl_8035E758 == f) f = lbl_8035E75C;
            else f = dt / f;
            if (f > lbl_8035E75C) f = lbl_8035E75C;
            else if (f < lbl_8035E758) f = lbl_8035E758;
            fn_80100104(&q204, &q236, &q220, f);
            if (p->f1a8 == 0 && flat) p->act->play(lbl_8035E7C0, 0, 0, 0, 0);
            p->f1a8 = 1;
            fn_800FFDA4(&q204, &p->x, &p->y, &p->z);
        }
    } else {
        p->f1a8 = 0;
    }
    fn_80101820(&p->x);
    fn_80101820(&p->y);
    p->z.x = p->x.y * p->y.z - p->x.z * p->y.y;
    p->z.y = p->x.z * p->y.x - p->x.x * p->y.z;
    p->z.z = p->x.x * p->y.y - p->x.y * p->y.x;
    fn_80101820(&p->z);
    if (named == 0) lbl_8035A1F4.b[0] = 0;
    fn_80064AF0(p);
    if (landed == 1) {
        p->ctl->cur = surf;
        p->act->play(lbl_8035E7C8, 0, 0, 0, 0);
    }
    {
        f32 *h = *(f32 **)(lbl_8035B65C + 0xbb0);
        if (p->pos.z < (h != 0 ? *h : lbl_8035E758)) p->ctl->play(lbl_8035E7D0, 0, 0, 0, 0);
    }
}

}
