// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Vec { f32 x, y, z; };
struct C4 { f32 r, g, b, a; };
struct Def { u32 f0; void *f4; };
struct E {
    Def *def;          /* 0x000 */
    s32 sub;           /* 0x004 */
    u8 pad8[4];
    u32 flags;         /* 0x00c */
    Vec v10;           /* 0x010 */
    Vec v1c;           /* 0x01c */
    Vec v28;           /* 0x028 */
    Vec v34;           /* 0x034 */
    Vec v40;           /* 0x040 */
    f32 f4c;           /* 0x04c */
    f32 f50;           /* 0x050 */
    f32 f54;           /* 0x054 */
    f32 f58;           /* 0x058 */
    s32 s5c;           /* 0x05c */
    s32 n;             /* 0x060 */
    s32 s64;           /* 0x064 */
    f32 f68;           /* 0x068 */
    f32 f6c;           /* 0x06c */
    Vec v70;           /* 0x070 */
    Vec v7c;           /* 0x07c */
    C4 c88;            /* 0x088 */
    C4 c98;            /* 0x098 */
    C4 ca8;            /* 0x0a8 */
    C4 cb8;            /* 0x0b8 */
    f32 fc8[4];        /* 0x0c8 */
    C4 cd8;            /* 0x0d8 */
    f32 fe8[4];        /* 0x0e8 */
    C4 cf8;            /* 0x0f8 */
    C4 c108;           /* 0x108 */
    C4 c118;           /* 0x118 */
    s32 s128;          /* 0x128 */
    f32 f12c;          /* 0x12c */
    f32 f130;          /* 0x130 */
    C4 c134;           /* 0x134 */
    f32 f144[4];       /* 0x144 */
    C4 c154;           /* 0x154 */
    f32 f164[4];       /* 0x164 */
    f32 a[2];          /* 0x174 */
    f32 v[2];          /* 0x17c */
    f32 acc[2];        /* 0x184 */
    f32 b[2];          /* 0x18c */
    f32 t[2];          /* 0x194 */
    f32 c[2];          /* 0x19c */
    f32 t2[2];         /* 0x1a4 */
    f32 f1ac;          /* 0x1ac */
    f32 f1b0;          /* 0x1b0 */
    f32 f1b4;          /* 0x1b4 */
    s32 s1b8;          /* 0x1b8 */
    s32 cnt;           /* 0x1bc */
    u8 pad1c0[4];
    Vec v1c4;          /* 0x1c4 */
    u8 pad1d0[0x1dc - 0x1d0];
    f32 f1dc;          /* 0x1dc */
    f32 f1e0;          /* 0x1e0 */
    u8 pad1e4[0x208 - 0x1e4];
    s32 s208;          /* 0x208 */
    f32 f20c;          /* 0x20c */
    Vec v210;          /* 0x210 */
    f32 f21c;          /* 0x21c */
    f32 f220;          /* 0x220 */
    u8 x224[4];        /* 0x224 */
};

extern volatile f32 lbl_803648E8, lbl_803648EC, lbl_803648F8, lbl_803648FC, lbl_80364920, lbl_80364924;
extern f64 lbl_803648F0;
extern u32 lbl_80364900, lbl_80364904, lbl_80364908, lbl_8036490C, lbl_80364910, lbl_80364914, lbl_80364918, lbl_8036491C;
extern u32 lbl_80364928, lbl_8036492C, lbl_80364930, lbl_80364934, lbl_80364938, lbl_8036493C, lbl_80364940, lbl_80364944;

void fn_8013E8C0(s32 *);
void fn_800FCFA8(void *);
void fn_80182ED8(E *);
void fn_800FAEF8(R *);
void fn_80101124(Vec *, R *);
f32 fn_800FB2E0(R *);
s32 fn_800FB33C(R *);
void fn_8014AC00(C4 *, R *);
void fn_80184A24(E *, Vec *);
void fn_8013E904(s32 *, void *, R *, int);
void fn_8013EA54(s32 *, void *, R *);
void fn_80184850(E *);
void fn_8018467C(E *);
void fn_800FD050(void *, s32, int);
void fn_80182D8C(E *);

static inline void Col(C4 *c, R *r) {
    fn_8014AC00(c, r);
    c->r = c->r * lbl_80364924;
    c->g = c->g * lbl_80364924;
    c->b = c->b * lbl_80364924;
    c->a = c->a * lbl_80364924;
}
static inline void Zero4(C4 *c) {
    c->r = lbl_803648F8;
    c->g = lbl_803648F8;
    c->b = lbl_803648F8;
    c->a = lbl_803648F8;
}
static inline void Read4(f32 *f, R *r) {
    f[0] = fn_800FB2E0(r);
    f[1] = fn_800FB2E0(r);
    f[2] = fn_800FB2E0(r);
    f[3] = fn_800FB2E0(r);
}
static inline f32 Clamp01(f32 y) {
    f32 one, k, x;
    one = lbl_803648E8;
    x = one - y;
    if (x < (k = lbl_803648F8)) x = k;
    if (x > (k = lbl_803648E8)) x = k;
    return x;
}
static inline void Solve(E *e, int i) {
    e->acc[i] = (e->a[i] + (e->t2[i] * e->b[i] - e->t[i] * e->c[i]) / (e->t[i] - e->t2[i])) / (e->t[i] * e->t2[i]);
    e->v[i] = ((e->b[i] - e->a[i]) - e->acc[i] * (e->t[i] * e->t[i])) / e->t[i];
}

void fn_80183168(E *e, Def *def, R *r) {
    u32 k;
    if (e->def != 0) {
        fn_8013E8C0(&e->sub);
        fn_800FCFA8(e->x224);
        fn_80182ED8(e);
    }
    e->def = def;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch (k) {
        case 0x3b:
            fn_80101124(&e->v10, r);
            e->flags |= lbl_8036490C;
            e->flags &= ~6;
            break;
        case 0x3c:
            fn_80101124(&e->v10, r);
            fn_80101124(&e->v1c, r);
            e->flags |= lbl_80364908;
            e->flags &= ~5;
            break;
        case 0x3d:
            fn_80101124(&e->v10, r);
            fn_80101124(&e->v1c, r);
            fn_80101124(&e->v28, r);
            fn_80101124(&e->v34, r);
            e->flags |= lbl_80364904;
            e->flags &= ~3;
            break;
        case 0x3e:
            fn_80101124(&e->v40, r);
            e->f4c = fn_800FB2E0(r);
            e->f50 = (e->f4c - e->f54) / lbl_803648EC;
            break;
        case 0x3f:
            e->f54 = fn_800FB2E0(r);
            e->f50 = (e->f4c - e->f54) / lbl_803648EC;
            break;
        case 0x5e:
            fn_80101124(&e->v1c4, r);
            e->f1dc = fn_800FB2E0(r);
            e->f1e0 = fn_800FB2E0(r);
            fn_80184A24(e, &e->v1c4);
            e->flags |= lbl_80364928;
            break;
        case 0x40: {
            f32 x = fn_800FB2E0(r);
            if (x <= lbl_803648F8) r->err(35);
            e->f58 = lbl_803648E8 / x;
            { f32 k, v; v = *(volatile f32 *)&e->f58; k = lbl_803648FC; if (v < k) e->f58 = k; }
            break;
        }
        case 0x41:
            e->s5c = (s32)(lbl_803648EC * Clamp01(fn_800FB2E0(r)));
            break;
        case 0x42:
            e->n = fn_800FB33C(r);
            break;
        case 0x43:
            e->s64 = (s32)(lbl_803648EC * Clamp01(fn_800FB2E0(r)));
            break;
        case 0x44:
            e->f68 = fn_800FB2E0(r);
            break;
        case 0x45:
            e->f6c = fn_800FB2E0(r);
            break;
        case 0x46:
            fn_80101124(&e->v70, r);
            e->v7c.x = e->v70.x * lbl_80364920;
            e->v7c.y = e->v70.y * lbl_80364920;
            e->v7c.z = e->v70.z * lbl_80364920;
            break;
        case 0x47:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = e->a[0];
            e->flags |= lbl_8036492C;
            break;
        case 0x48:
            e->v[0] = fn_800FB2E0(r);
            e->v[1] = e->v[0];
            e->acc[0] = lbl_803648F8;
            e->acc[1] = lbl_803648F8;
            e->flags |= lbl_80364930;
            e->flags &= ~0x400;
            break;
        case 0x49:
            e->v[0] = fn_800FB2E0(r);
            e->v[1] = e->v[0];
            e->acc[0] = fn_800FB2E0(r);
            e->acc[1] = e->acc[0];
            e->flags |= lbl_80364934;
            e->flags &= ~0x200;
            break;
        case 0x5f:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = e->a[0];
            e->b[0] = fn_800FB2E0(r);
            e->b[1] = e->b[0];
            e->t[0] = fn_800FB2E0(r);
            e->t[1] = e->t[0];
            e->flags |= 0x10300;
            e->flags &= ~0x400;
            if (e->flags & 0x200) {
                e->v[0] = (e->b[0] - e->a[0]) / e->t[0];
                e->v[1] = e->v[0];
            } else if (e->flags & 0x400) {
                Solve(e, 0);
                e->v[1] = e->v[0];
                e->acc[1] = e->acc[0];
            }
            break;
        case 0x60:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = e->a[0];
            e->b[0] = fn_800FB2E0(r);
            e->b[1] = e->b[0];
            e->t[0] = fn_800FB2E0(r);
            e->t[1] = e->t[0];
            e->c[0] = fn_800FB2E0(r);
            e->c[1] = e->c[0];
            e->t2[0] = fn_800FB2E0(r);
            e->t2[1] = e->t2[0];
            e->flags |= 0x10500;
            e->flags &= ~0x200;
            if (e->flags & 0x200) {
                e->v[0] = (e->b[0] - e->a[0]) / e->t[0];
                e->v[1] = e->v[0];
            } else if (e->flags & 0x400) {
                Solve(e, 0);
                e->v[1] = e->v[0];
                e->acc[1] = e->acc[0];
            }
            break;
        case 0x4a:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = fn_800FB2E0(r);
            e->flags &= ~0x100;
            break;
        case 0x4b:
            e->v[0] = fn_800FB2E0(r);
            e->v[1] = fn_800FB2E0(r);
            e->acc[0] = lbl_803648F8;
            e->acc[1] = lbl_803648F8;
            e->flags |= lbl_80364930;
            e->flags &= ~0x400;
            break;
        case 0x4c:
            e->v[0] = fn_800FB2E0(r);
            e->v[1] = fn_800FB2E0(r);
            e->acc[0] = fn_800FB2E0(r);
            e->acc[1] = fn_800FB2E0(r);
            e->flags |= lbl_80364934;
            e->flags &= ~0x200;
            break;
        case 0x61:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = fn_800FB2E0(r);
            e->b[0] = fn_800FB2E0(r);
            e->b[1] = fn_800FB2E0(r);
            e->t[0] = fn_800FB2E0(r);
            e->t[1] = fn_800FB2E0(r);
            e->flags |= 0x10200;
            e->flags &= ~0x500;
            if (e->flags & 0x200) {
                e->v[0] = (e->b[0] - e->a[0]) / e->t[0];
                e->v[1] = (e->b[1] - e->a[1]) / e->t[1];
            } else if (e->flags & 0x400) {
                Solve(e, 0);
                Solve(e, 1);
            }
            break;
        case 0x62:
            e->a[0] = fn_800FB2E0(r);
            e->a[1] = fn_800FB2E0(r);
            e->b[0] = fn_800FB2E0(r);
            e->b[1] = fn_800FB2E0(r);
            e->t[0] = fn_800FB2E0(r);
            e->t[1] = fn_800FB2E0(r);
            e->c[0] = fn_800FB2E0(r);
            e->c[1] = fn_800FB2E0(r);
            e->t2[0] = fn_800FB2E0(r);
            e->t2[1] = fn_800FB2E0(r);
            e->flags |= 0x10400;
            e->flags &= ~0x300;
            if (e->flags & 0x200) {
                e->v[0] = (e->b[0] - e->a[0]) / e->t[0];
                e->v[1] = (e->b[1] - e->a[1]) / e->t[1];
            } else if (e->flags & 0x400) {
                Solve(e, 0);
                Solve(e, 1);
            }
            break;
        case 0x4d:
            Col(&e->c88, r);
            break;
        case 0x4f:
            Col(&e->c98, r);
            Zero4(&e->ca8);
            e->flags |= lbl_80364910;
            e->flags &= ~0x10;
            break;
        case 0x50:
            Col(&e->c98, r);
            Col(&e->ca8, r);
            e->flags |= lbl_80364914;
            e->flags &= ~8;
            break;
        case 0x63:
            Col(&e->c88, r);
            Col(&e->cb8, r);
            Read4(e->fc8, r);
            e->flags |= 0x20008;
            e->flags &= ~0x10;
            fn_80184850(e);
            break;
        case 0x64:
            Col(&e->c88, r);
            Col(&e->cb8, r);
            Read4(e->fc8, r);
            Col(&e->cd8, r);
            Read4(e->fe8, r);
            e->flags |= 0x20010;
            e->flags &= ~8;
            fn_80184850(e);
            break;
        case 0x4e:
            e->s128 = fn_800FB33C(r);
            if ((u32)e->s128 < 1) r->err(35);
            e->flags |= lbl_80364938;
            e->f12c = fn_800FB2E0(r);
            e->f130 = e->f12c / (f32)e->s128;
            Col(&e->cf8, r);
            break;
        case 0x51:
            Col(&e->c108, r);
            Zero4(&e->c118);
            e->flags |= lbl_80364918;
            e->flags &= ~0x80;
            break;
        case 0x52:
            Col(&e->c108, r);
            Col(&e->c118, r);
            e->flags |= lbl_8036491C;
            e->flags &= ~0x40;
            break;
        case 0x65:
            Col(&e->cf8, r);
            Col(&e->c134, r);
            Read4(e->f144, r);
            e->flags |= 0x40040;
            e->flags &= ~0x80;
            fn_8018467C(e);
            break;
        case 0x66:
            Col(&e->cf8, r);
            Col(&e->c134, r);
            Read4(e->f144, r);
            Col(&e->c154, r);
            Read4(e->f164, r);
            e->flags |= 0x40080;
            e->flags &= ~0x40;
            fn_8018467C(e);
            break;
        case 0x53:
            e->f1b0 = fn_800FB2E0(r);
            e->f20c = e->f1b0 / (f32)e->s208;
            break;
        case 0x54:
            e->f1b4 = fn_800FB2E0(r);
            break;
        case 0x55:
            e->f1ac = fn_800FB2E0(r);
            break;
        case 0x57:
            fn_8013E904(&e->sub, def->f4, r, 0);
            e->s208 = e->sub;
            if ((u32)e->s208 < 1) r->err(35);
            e->f20c = e->f1b0 / (f32)e->s208;
            break;
        case 0x58:
            fn_8013EA54(&e->sub, def->f4, r);
            e->s208 = e->sub;
            if ((u32)e->s208 < 1) r->err(35);
            e->f20c = e->f1b0 / (f32)e->s208;
            break;
        case 0x56:
            e->s1b8 = fn_800FB33C(r);
            break;
        case 0x59:
            fn_80101124(&e->v210, r);
            e->f21c = fn_800FB2E0(r);
            e->flags |= lbl_8036493C;
            break;
        case 0x5a:
            e->f220 = fn_800FB2E0(r);
            break;
        case 0x5b:
            e->flags |= lbl_80364900;
            break;
        case 0x5c:
            e->flags |= lbl_80364940;
            break;
        case 0x5d:
            e->flags |= lbl_80364944;
            break;
        default:
            r->err(30);
            break;
        }
    }
    if (e->flags & 0x800) fn_800FD050(e->x224, e->s1b8, 1);
    e->cnt = 1;
    e->cnt += e->n;
    if (lbl_803648F8 != e->f6c) e->cnt += e->n;
    if (lbl_803648F8 != e->f4c) e->cnt += e->n * 2;
    if (lbl_803648F8 != e->f1b4) e->cnt += e->n * 2;
    if (e->flags & 2) e->cnt += e->n;
    else if (e->flags & 4) e->cnt += e->n * 3;
    fn_80182D8C(e);
}

} /* extern "C" */
