// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V4 { f32 x, y, z, w; V4() {} V4(f32 a, f32 b, f32 c, f32 d); void set(f32 a, f32 b, f32 c, f32 d); };
struct V3 { f32 x, y, z; };
struct Col { u8 r, g, b, a; };
struct C80152B64 { char pad[0x40]; C80152B64(); };
struct Op { u32 type; u32 a; u32 b; u32 reg; };
struct Par { s32 v[4]; s32 type; };
struct Prog { u16 pad0; u16 nops; u8 pad4[8]; Op *ops; Par *par; };
struct RS {
    u8 pad0[0x2a78];
    f32 *m2a78;
    f32 *m2a7c;
    u8 pad2a80[4];
    f32 *m2a84;
    u8 pad2a88[0x2aa0 - 0x2a88];
    f32 **mats;
    u8 pad2aa4[0x3abc - 0x2aa4];
    f32 *p3abc[1];
};
struct RS2 { u8 pad[0x279dc]; Col c279dc; u8 pad279e0[4]; f32 nearz; f32 farz; };
struct Ctx {
    u8 pad0[0x128];
    V4 lights[1];
    u8 pad138[0x1934 - 0x138];
    RS *rs;
    u8 pad1938[0x1ab8 - 0x1938];
    void *f1ab8;
};
struct GXT {
    u8 pad0[0x10c];
    void (*copy)(void *, f32 *);
    u8 pad110[0x130 - 0x110];
    void (*f130)(void *, V3 *);
    u8 pad134[0x148 - 0x134];
    void (*f148)(void *, V3 *);
    void (*f14c)(void *, V3 *);
    u8 pad150[0x188 - 0x150];
    void (*f188)(void *, V3 *, V3 *);
    u8 pad18c[4];
    void (*f190)(void *, V3 *, V3 *);
    u8 pad194[4];
    void (*f198)(void *, V3 *, V3 *);
};
extern "C" {
extern GXT lbl_803286D0;
extern f32 lbl_80364788;
extern f32 lbl_8036478C;
extern f32 lbl_80364790;
extern f32 lbl_80364794;
void fn_801780DC(Prog *, u32, const V4 &);
void fn_80178048(Prog *, u32, f32 *);
void fn_80177BA0(Prog *, u32, V3 *);
void fn_80177D88(Prog *, u32, Col *);
f32 *fn_80177FEC(RS *);
f32 *fn_80177F8C(RS *);
f32 *fn_80177EC4(RS *, u32);
f32 *fn_80177E20(RS *, u32);
void fn_8016C494(RS *, u32, void *);
void fn_8016C408(RS *, u32, void *);
void fn_801643F0(Ctx *, Col *);
void fn_80177D64(void *, Col *);
void fn_80177D40(void *, Col *);
void fn_80177D1C(void *, Col *);
void fn_80177CF8(void *, Col *);
void fn_80177C60(Ctx *, V4 *);
s32 fn_80177BD4(Ctx *, u32);
s32 fn_80177B14(Ctx *, u32);
void fn_80164518(Ctx *, s32, V3 *);
void fn_801644BC(Ctx *, s32, V3 *);
void fn_80164460(Ctx *, s32, Col *);
void fn_80164414(Ctx *, s32, V4 *);
void fn_80177AEC(RS *, V4 *);
}
static V4 lbl_8032F6C8, sK1, sK2, sK3, sK4;
static inline f32 *MP(RS *rs, u8 *list, u32 i) { return rs->mats[list[i]]; }

#pragma opt_loop_invariants off
extern "C" void fn_80176910(Prog *p, Ctx *ctx, u32 n, u8 *list) {
    C80152B64 m;
    V3 a, b, c3, d3;
    V4 v;
    Col ca, cm, cl;
    GXT *gx = &lbl_803286D0;
    Op *op = p->ops;
    Op *end = op + p->nops;
    RS *rs = ctx->rs;
    u32 r11, i11;
    Par *e;
    for (; op < end; op++) {
        switch (op->type) {
        case 61: {
            e = &p->par[op->a];
            switch (e->type) {
            case 1:
                v.set((f32)e->v[0], (f32)e->v[1], (f32)e->v[2], (f32)e->v[3]);
            case 0:
                v.set(*(f32 *)&e->v[0], *(f32 *)&e->v[1], *(f32 *)&e->v[2], *(f32 *)&e->v[3]);
                break;
            default:
                v.set(lbl_80364788, lbl_80364788, lbl_80364788, lbl_80364788);
                break;
            }
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 0: fn_801780DC(p, op->reg, lbl_8032F6C8); break;
        case 1: fn_801780DC(p, op->reg, sK1); break;
        case 2: fn_801780DC(p, op->reg, sK2); break;
        case 3: fn_801780DC(p, op->reg, sK3); break;
        case 4: fn_801780DC(p, op->reg, sK4); break;
        case 5: fn_80178048(p, op->reg, rs->m2a84); break;
        case 6: fn_80178048(p, op->reg, fn_80177FEC(rs)); break;
        case 7: fn_80178048(p, op->reg, fn_80177F8C(rs)); break;
        case 8: fn_80178048(p, op->reg, rs->m2a7c); break;
        case 9: {
            u32 r = op->reg;
            for (u32 i = 0; i < n; i++) {
                f32 *q = fn_80177EC4(rs, list[i]);
                fn_801780DC(p, r++, V4(q[0], q[1], q[2], q[3]));
                fn_801780DC(p, r++, V4(q[4], q[5], q[6], q[7]));
                fn_801780DC(p, r++, V4(q[8], q[9], q[10], q[11]));
            }
            break;
        }
        case 10: {
            u32 r = op->reg;
            for (u32 i = 0; i < n; i++) {
                fn_80178048(p, r, fn_80177EC4(rs, list[i]));
                r += 4;
            }
            break;
        }
        case 11: {
            r11 = op->reg;
            for (i11 = 0; i11 < n; i11++) {
                f32 *q = rs->mats[list[i11]];
                fn_801780DC(p, r11++, V4(q[0], q[1], q[2], q[3]));
                fn_801780DC(p, r11++, V4(q[4], q[5], q[6], q[7]));
                fn_801780DC(p, r11++, V4(q[8], q[9], q[10], q[11]));
            }
            break;
        }
        case 12: {
            u32 r = op->reg;
            for (u32 i = 0; i < n; i++) {
                fn_80178048(p, r, rs->mats[list[i]]);
                r += 4;
            }
            break;
        }
        case 13: {
            u32 r = op->reg;
            for (u32 i = 0; i < n; i++) {
                f32 *q = fn_80177E20(rs, list[i]);
                fn_801780DC(p, r++, V4(q[0], q[1], q[2], q[3]));
                fn_801780DC(p, r++, V4(q[4], q[5], q[6], q[7]));
                fn_801780DC(p, r++, V4(q[8], q[9], q[10], q[11]));
            }
            break;
        }
        case 14: {
            u32 r = op->reg;
            for (u32 i = 0; i < n; i++) {
                fn_80178048(p, r, fn_80177E20(rs, list[i]));
                r += 4;
            }
            break;
        }
        case 15: case 57: {
            f32 *q;
            if (n <= op->a) q = rs->m2a84;
            else q = rs->mats[list[op->a]];
            fn_80178048(p, op->reg, q);
            break;
        }
        case 16:
            if (n <= op->a) fn_80178048(p, op->reg, fn_80177FEC(rs));
            else { gx->copy(&m, rs->mats[list[op->a]]); fn_80178048(p, op->reg, (f32 *)&m); }
            break;
        case 17: fn_80178048(p, op->reg, rs->mats[0]); break;
        case 18: gx->copy(&m, rs->mats[0]); fn_80178048(p, op->reg, (f32 *)&m); break;
        case 19: case 58:
            if (n <= op->a) fn_80178048(p, op->reg, rs->m2a78);
            else { fn_8016C494(rs, list[op->a], &m); fn_80178048(p, op->reg, (f32 *)&m); }
            break;
        case 20:
            if (n <= op->a) fn_80178048(p, op->reg, rs->m2a78);
            else { fn_8016C408(rs, list[op->a], &m); fn_80178048(p, op->reg, (f32 *)&m); }
            break;
        case 21: fn_8016C494(rs, 0, &m); fn_80178048(p, op->reg, (f32 *)&m); break;
        case 22: fn_8016C408(rs, 0, &m); fn_80178048(p, op->reg, (f32 *)&m); break;
        case 23: case 59: {
            f32 *q;
            if (n <= op->a) q = fn_80177F8C(rs);
            else q = fn_80177E20(rs, list[op->a]);
            fn_80178048(p, op->reg, q);
            break;
        }
        case 24: fn_80178048(p, op->reg, fn_80177E20(rs, 0)); break;
        case 25: {
            f32 *q = rs->p3abc[op->a];
            fn_801780DC(p, op->reg, V4(q[0], q[1], q[3], lbl_80364788));
            fn_801780DC(p, op->reg, V4(q[4], q[5], q[7], lbl_80364788));
            break;
        }
        case 26: fn_80178048(p, op->reg, rs->p3abc[op->a]); break;
        case 27: fn_801643F0(ctx, &ca); fn_80177D88(p, op->reg, &ca); break;
        case 28: fn_80177D88(p, op->reg, &((RS2 *)rs)->c279dc); break;
        case 30: fn_80177D64(ctx->f1ab8, &cm); fn_80177D88(p, op->reg, &cm); break;
        case 31: fn_80177D40(ctx->f1ab8, &cm); fn_80177D88(p, op->reg, &cm); break;
        case 32: fn_80177D1C(ctx->f1ab8, &cm); fn_80177D88(p, op->reg, &cm); break;
        case 33: fn_80177CF8(ctx->f1ab8, &cm); fn_80177D88(p, op->reg, &cm); break;
        case 29: fn_80177C60(ctx, &v); fn_801780DC(p, op->reg, v); break;
        case 34: {
            s32 k = fn_80177BD4(ctx, op->a);
            if (k < 0) { V3 *o = &b; o->x = lbl_80364788; o->y = lbl_80364788; o->z = lbl_80364788; }
            else {
                fn_80164518(ctx, k, &a);
                if (op->b >= n) gx->f190(rs->m2a84, &a, &b);
                else gx->f190(rs->mats[list[op->b]], &a, &b);
            }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 35: {
            s32 k = fn_80177BD4(ctx, op->a);
            if (k < 0) { V3 *o = &b; o->x = lbl_80364788; o->y = lbl_80364788; o->z = lbl_80364788; }
            else { fn_80164518(ctx, k, &a); gx->f188(fn_80177FEC(rs), &a, &b); }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 36: {
            s32 k = fn_80177BD4(ctx, op->a);
            if (k < 0) { V3 *o = &b; o->x = lbl_80364788; o->y = lbl_80364788; o->z = lbl_80364788; }
            else { fn_80164518(ctx, k, &a); gx->f190(rs->mats[0], &a, &b); }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 37: {
            s32 k = fn_80177BD4(ctx, op->a);
            if (k < 0) { V4 *o = &v; o->x = lbl_80364788; o->y = lbl_80364788; o->z = lbl_80364788; o->w = lbl_80364788; }
            else {
                fn_80177D40(ctx->f1ab8, &cm);
                fn_80164460(ctx, k, &cl);
                v.set(cl.r / lbl_8036478C * (cm.r / lbl_8036478C), cl.g / lbl_8036478C * (cm.g / lbl_8036478C),
                      cl.b / lbl_8036478C * (cm.b / lbl_8036478C), cl.a / lbl_8036478C * (cm.a / lbl_8036478C));
            }
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 38: fn_801780DC(p, op->reg, V4(lbl_80364788, lbl_80364788, lbl_80364788, lbl_80364788)); break;
        case 39: {
            s32 k = fn_80177BD4(ctx, op->a);
            if (k < 0) { *(volatile f32 *)&v.x = lbl_80364790; f32 z = *(volatile f32 *)&lbl_80364788; v.y = z; v.z = z; v.w = z; }
            else fn_80164414(ctx, k, &v);
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 40: {
            s32 k = fn_80177B14(ctx, op->a);
            if (k < 0) { *(volatile f32 *)&b.x = lbl_80364788; *(volatile f32 *)&b.y = lbl_80364788; b.z = *(volatile f32 *)&lbl_80364794; }
            else {
                fn_801644BC(ctx, k, &a);
                if (op->b >= n) gx->f198(rs->m2a84, &a, &b);
                else gx->f198(rs->mats[list[op->b]], &a, &b);
            }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 41: {
            s32 k = fn_80177B14(ctx, op->a);
            if (k < 0) { *(volatile f32 *)&b.x = lbl_80364788; *(volatile f32 *)&b.y = lbl_80364788; b.z = *(volatile f32 *)&lbl_80364794; }
            else { fn_801644BC(ctx, k, &a); gx->f188(fn_80177FEC(rs), &a, &b); }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 42: {
            s32 k = fn_80177B14(ctx, op->a);
            if (k < 0) { *(volatile f32 *)&b.x = lbl_80364788; *(volatile f32 *)&b.y = lbl_80364788; b.z = *(volatile f32 *)&lbl_80364794; }
            else { fn_801644BC(ctx, k, &a); gx->f198(rs->mats[0], &a, &b); }
            fn_80177BA0(p, op->reg, &b);
            break;
        }
        case 43: {
            s32 k = fn_80177B14(ctx, op->a);
            if (k < 0) { V4 *o = &v; o->x = lbl_80364788; o->y = lbl_80364788; o->z = lbl_80364788; o->w = lbl_80364788; }
            else {
                fn_80177D40(ctx->f1ab8, &cm);
                fn_80164460(ctx, k, &cl);
                v.set(cl.r / lbl_8036478C * (cm.r / lbl_8036478C), cl.g / lbl_8036478C * (cm.g / lbl_8036478C),
                      cl.b / lbl_8036478C * (cm.b / lbl_8036478C), cl.a / lbl_8036478C * (cm.a / lbl_8036478C));
            }
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 44: {
            fn_80177D40(ctx->f1ab8, &cm);
            fn_801643F0(ctx, &ca);
            v.set(ca.r / lbl_8036478C * (cm.r / lbl_8036478C), ca.g / lbl_8036478C * (cm.g / lbl_8036478C),
                  ca.b / lbl_8036478C * (cm.b / lbl_8036478C), ca.a / lbl_8036478C * (cm.a / lbl_8036478C));
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 45:
            for (u32 i = 0; i < op->b; i++) fn_801780DC(p, op->reg + i, ctx->lights[op->a + i]);
            break;
        case 46:
            if (op->a >= n) gx->f130(fn_80177FEC(rs), &c3);
            else { gx->copy(&m, rs->mats[list[op->a]]); gx->f130(&m, &c3); }
            fn_80177BA0(p, op->reg, &c3);
            break;
        case 47:
            if (op->a >= n) gx->f14c(fn_80177FEC(rs), &d3);
            else { gx->copy(&m, rs->mats[list[op->a]]); gx->f14c(&m, &d3); }
            fn_80177BA0(p, op->reg, &d3);
            break;
        case 48:
            if (op->a >= n) gx->f148(fn_80177FEC(rs), &d3);
            else { gx->copy(&m, rs->mats[list[op->a]]); gx->f148(&m, &d3); }
            fn_80177BA0(p, op->reg, &d3);
            break;
        case 52: { RS2 *s = (RS2 *)rs; fn_801780DC(p, op->reg, V4(s->nearz, s->nearz, s->nearz, s->nearz)); break; }
        case 53: { RS2 *s = (RS2 *)rs; fn_801780DC(p, op->reg, V4(s->farz, s->farz, s->farz, s->farz)); break; }
        case 54: fn_801780DC(p, op->reg, V4(lbl_80364790, lbl_80364790, lbl_80364790, lbl_80364790)); break;
        case 55: {
            RS2 *s = (RS2 *)rs;
            f32 f = s->farz;
            f32 q = lbl_80364790 / (f - s->nearz);
            V4 *o = &v;
            *(volatile f32 *)&o->x = -q;
            *(volatile f32 *)&o->y = q * f;
            f32 z = *(volatile f32 *)&lbl_80364788;
            o->z = z;
            o->w = z;
            fn_801780DC(p, op->reg, v);
            break;
        }
        case 62: fn_80177AEC(rs, &v); fn_801780DC(p, op->reg, v); break;
        }
    }
}
extern "C" {

} /* extern "C" */
