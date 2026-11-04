#include "common.h"
extern "C" char __dt__9C801781F8Fv[];
extern "C" void fn_8013ABEC(void);
extern "C" void fn_8013BB48(void);
extern "C" void fn_8013BBCC(void);
namespace m80178124 {  extern "C" void fn_80178124(s32 param_1, u32 param_2); }
extern "C" void *__vt__9C801781F8[7] = { 0, 0, (void *)m80178124::fn_80178124, (void *)fn_8013BB48, (void *)__dt__9C801781F8Fv, (void *)fn_8013BBCC, (void *)fn_8013ABEC };
struct V3 { f32 x, y, z; };
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
struct V4_80178234 { volatile f32 x, y, z, w; };
static V4_80178234 s_a;
static V4_80178234 s_b;
static V4_80178234 s_c;
static V4_80178234 s_d;
static V4_80178234 s_e;
extern "C" u8 lbl_8032F718[128][16];
u8 lbl_8032F718[128][16];
struct V4 { f32 x, y, z, w; V4() {} V4(f32 a, f32 b, f32 c, f32 d); void set(f32 a, f32 b, f32 c, f32 d); };
struct C80152B64 { char pad[0x40]; C80152B64(); };
struct SD2B_80176910 { f32 a, b; };
extern "C" {
#pragma explicit_zero_data on
__declspec(section ".sdata2") f32 lbl_80364788_v = 0.0f;
#pragma explicit_zero_data off
__declspec(section ".sdata2") f32 lbl_8036478C_v = 255.0f;
__declspec(section ".sdata2") f32 lbl_80364790_v = 1.0f;
__declspec(section ".sdata2") f32 lbl_80364794_v = -1.0f;
}
#define lbl_80364788 (*(f32 *)&lbl_80364788_v)
#define lbl_8036478C (*(f32 *)&lbl_8036478C_v)
#define lbl_80364790 (*(f32 *)&lbl_80364790_v)
#define lbl_80364794 (*(f32 *)&lbl_80364794_v)
extern "C" { extern f32 lbl_803647A8_v; extern f32 lbl_803647AC_v; }
#define lbl_803647A8 (*(f32 *)&lbl_803647A8_v)
#define lbl_803647AC (*(f32 *)&lbl_803647AC_v)
namespace m80176910 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

}
struct Col { u8 r, g, b, a; };
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
/* hoisted */
extern "C" {
extern GXT lbl_803286D0;
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
#define lbl_8032F6C8 (*(V4 *)&s_a)
#define sK1 (*(V4 *)&s_b)
#define sK2 (*(V4 *)&s_c)
#define sK3 (*(V4 *)&s_d)
#define sK4 (*(V4 *)&s_e)
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

} /* namespace m80176910 */

namespace m80177AEC {
/* Functions from 0x80177AEC to 0x80177B14, found by decomp-toolkit. */

extern "C" {

void fn_80177AEC(f32 *__restrict arg0, f32 *__restrict arg1) {
    arg1[0] = arg0[0x279FC / 4];
    arg1[1] = arg0[0x27A00 / 4];
    arg1[2] = arg0[0x27A04 / 4];
    arg1[3] = arg0[0x27A08 / 4];
}

} /* extern "C" */

} /* namespace m80177AEC */

namespace m80177B14 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_80164574(void *, u32);

s32 fn_80177B14(u8 *p, u32 n) {
    u32 k = 0;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 6804); i++) {
        if (fn_80164574(p, i) == 1) {
            if (k == n) {
                return i;
            }
            k++;
        }
    }
    return -1;
}

} /* extern "C" */

} /* namespace m80177B14 */

namespace m80177BA0 {
#undef lbl_80364790
#define lbl_80364790 (*(volatile f32 *)&lbl_80364790_v)
/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

extern volatile f32 lbl_8032F718[];

void fn_80177BA0(void *arg0, s32 arg1, f32 *__restrict arg2) {
    f32 x = arg2[0];
    f32 y = arg2[1];
    f32 z = arg2[2];
    lbl_8032F718[arg1 * 4 + 0] = x;
    lbl_8032F718[arg1 * 4 + 1] = y;
    lbl_8032F718[arg1 * 4 + 2] = z;
    lbl_8032F718[arg1 * 4 + 3] = lbl_80364790;
}

} /* extern "C" */

#undef lbl_80364790
#define lbl_80364790 (*(f32 *)&lbl_80364790_v)
} /* namespace m80177BA0 */

namespace m80177BD4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_80164574(void *, u32);

s32 fn_80177BD4(u8 *p, u32 n) {
    u32 k = 0;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 6804); i++) {
        if (fn_80164574(p, i) == 0) {
            if (k == n) {
                return i;
            }
            k++;
        }
    }
    return -1;
}

} /* extern "C" */

} /* namespace m80177BD4 */

namespace m80177C60 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[32]; s32 x0; s32 y0; s32 x1; s32 y1; } S80177C60;
void fn_80177C60(const S80177C60 *p, f32 *out) {
    out[0] = p->x0;
    out[1] = p->y0;
    out[2] = p->x1 - p->x0;
    out[3] = p->y1 - p->y0;
}

} /* extern "C" */

} /* namespace m80177C60 */

namespace m80177CF8 {
/* Functions from 0x80177CF8 to 0x80177D88, found by decomp-toolkit. */

extern "C" {

typedef struct { u8 r, g, b, a; } GXColor;

void fn_80177CF8(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[2].r;
    arg1->g = arg0[2].g;
    arg1->b = arg0[2].b;
    arg1->a = arg0[2].a;
}

void fn_80177D1C(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[3].r;
    arg1->g = arg0[3].g;
    arg1->b = arg0[3].b;
    arg1->a = arg0[3].a;
}

void fn_80177D40(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0[1].r;
    arg1->g = arg0[1].g;
    arg1->b = arg0[1].b;
    arg1->a = arg0[1].a;
}

void fn_80177D64(GXColor *__restrict arg0, GXColor *__restrict arg1) {
    arg1->r = arg0->r;
    arg1->g = arg0->g;
    arg1->b = arg0->b;
    arg1->a = arg0->a;
}

} /* extern "C" */

} /* namespace m80177CF8 */

namespace m80177D88 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

}
struct V4 { f32 x, y, z, w; void set(f32 a, f32 b, f32 c, f32 d) { x = a; y = b; z = c; w = d; } };
struct Col { u8 r, g, b, a; };
struct Prog;
extern "C" {
extern V4 lbl_8032F718[];
void fn_80177D88(Prog *p, u32 reg, const Col &c) {
    lbl_8032F718[reg].set(c.r / lbl_8036478C_v, c.g / lbl_8036478C_v, c.b / lbl_8036478C_v, c.a / (*(f32 *)&lbl_8036478C_v));
}

} /* extern "C" */

} /* namespace m80177D88 */

namespace m80177E20 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];

void *fn_80177E20(u8 *p, s32 i) {
    s32 *q = (s32 *)(p + i * 4);
    if (q[0x36BC / 4] == 0) {
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(u8 **)(p + 0x36B4) + i * 64, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A7C));
        q[0x36BC / 4] = 1;
    }
    return *(u8 **)(p + 0x36B4) + i * 64;
}

} /* extern "C" */

} /* namespace m80177E20 */

namespace m80177EB0 {
/* Functions from 0x80177EB0 to 0x80177EC4, found by decomp-toolkit. */

} /* ns */
V4::V4(f32 a, f32 b, f32 c, f32 d) {
    x = a;
    y = b;
    z = c;
    w = d;
}
namespace m80177EB0 {

} /* namespace m80177EB0 */

namespace m80177EC4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];
void *fn_80177EC4(u8 *p, s32 i) {
    s32 *q = (s32 *)(p + i * 4);
    if (q[0x32B0 / 4] == 0) {
        if (*(s32 *)(p + 0x2A94) == 0) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x2A90), *(void **)(p + 0x2A84));
            *(s32 *)(p + 0x2A94) = 1;
        }
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(u8 **)(p + 0x32A8) + i * 64, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A90));
        q[0x32B0 / 4] = 1;
    }
    return *(u8 **)(p + 0x32A8) + i * 64;
}

} /* extern "C" */

} /* namespace m80177EC4 */

namespace m80177F8C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];

void *fn_80177F8C(u8 *p) {
    if (*(s32 *)(p + 0x2A9C) == 0) {
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(void **)(p + 0x2A98), *(void **)(p + 0x2A84), *(void **)(p + 0x2A7C));
        *(s32 *)(p + 0x2A9C) = 1;
    }
    return *(void **)(p + 0x2A98);
}

} /* extern "C" */

} /* namespace m80177F8C */

namespace m80177FEC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];

void *fn_80177FEC(u8 *p) {
    if (*(s32 *)(p + 0x2A94) == 0) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x2A90), *(void **)(p + 0x2A84));
        *(s32 *)(p + 0x2A94) = 1;
    }
    return *(void **)(p + 0x2A90);
}

} /* extern "C" */

} /* namespace m80177FEC */

namespace m80178048 {
/* Functions from 0x80178048 to 0x80178124, found by decomp-toolkit. */

extern "C" {

extern f32 lbl_8032F718[];
void fn_80178048(void *arg0, s32 arg1, f32 *__restrict arg2) {
    f32 x, y, z, w;
    x = arg2[0];
    y = arg2[1];
    z = arg2[2];
    lbl_8032F718[arg1 * 4 + 0] = x;
    w = arg2[3];
    lbl_8032F718[arg1 * 4 + 1] = y;
    x = arg2[4];
    lbl_8032F718[arg1 * 4 + 2] = z;
    y = arg2[5];
    lbl_8032F718[arg1 * 4 + 3] = w;
    z = arg2[6];
    lbl_8032F718[arg1 * 4 + 4] = x;
    w = arg2[7];
    lbl_8032F718[arg1 * 4 + 5] = y;
    x = arg2[8];
    lbl_8032F718[arg1 * 4 + 6] = z;
    y = arg2[9];
    lbl_8032F718[arg1 * 4 + 7] = w;
    z = arg2[10];
    lbl_8032F718[arg1 * 4 + 8] = x;
    w = arg2[11];
    lbl_8032F718[arg1 * 4 + 9] = y;
    x = arg2[12];
    lbl_8032F718[arg1 * 4 + 10] = z;
    y = arg2[13];
    lbl_8032F718[arg1 * 4 + 11] = w;
    z = arg2[14];
    lbl_8032F718[arg1 * 4 + 12] = x;
    x = arg2[15];
    lbl_8032F718[arg1 * 4 + 13] = y;
    lbl_8032F718[arg1 * 4 + 14] = z;
    lbl_8032F718[arg1 * 4 + 15] = x;
}

void fn_801780DC(void *arg0, s32 arg1, f32 *__restrict arg2) {
    lbl_8032F718[arg1 * 4 + 0] = arg2[0];
    lbl_8032F718[arg1 * 4 + 1] = arg2[1];
    lbl_8032F718[arg1 * 4 + 2] = arg2[2];
    lbl_8032F718[arg1 * 4 + 3] = arg2[3];
}

} /* extern C */ } /* ns */
void V4::set(f32 a, f32 b, f32 c, f32 d) {
    x = a;
    y = b;
    z = c;
    w = d;
}
namespace m80178048 { extern "C" {

} /* extern "C" */

} /* namespace m80178048 */

namespace m80178124 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_802A1070[];
void fn_80060568(int, int, int, int);
s32 fn_8016B57C(int, int);

void fn_80178124(s32 param_1, u32 param_2) {
    u32 uVar1;

    uVar1 = fn_8016B57C((int)(param_2), (int)(*(u32 *)(param_1 + 0x14)));
    *(u32 *)(param_1 + 0x1c) = uVar1;
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_80060568((int)(lbl_802A1070), (int)(0), (int)(0), (int)(0)); /* "Unable to find vertex process data!" */
    }
    *(u32 *)(param_1 + 0x20) = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 0xc);
    *(u32 *)(param_1 + 0x24) = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 0x10);
}

} /* extern "C" */

} /* namespace m80178124 */

struct C8013BDBC { char pad[0x18]; ~C8013BDBC(); };
struct C801781F8 : C8013BDBC { ~C801781F8(); virtual void vfx(); };
namespace m80178198 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void __dl__FPv(int);
void __dt__9C8013BDBCFv(int, int);

extern "C" {
extern u8 lbl_802E8400[];
void fn_8013BDBC(int, int);
}

C801781F8::~C801781F8() {

}

} /* extern "C" */

} /* namespace m80178198 */

namespace m801781F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8013BE24(void);

s32 __ct__9C801781F8Fv(s32 param_1) {
    fn_8013BE24();
    *(u8 **)(param_1 + 0x18) = (u8 *)__vt__9C801781F8;
    return param_1;
}

} /* extern "C" */

} /* namespace m801781F8 */

namespace m80178234 {
#undef lbl_80364788
#define lbl_80364788 (*(volatile f32 *)&lbl_80364788_v)
#undef lbl_80364790
#define lbl_80364790 (*(volatile f32 *)&lbl_80364790_v)
#undef lbl_803647A8
#define lbl_803647A8 (*(volatile f32 *)&lbl_803647A8_v)
#undef lbl_8036478C
#define lbl_8036478C (*(volatile f32 *)&lbl_8036478C_v)
#undef lbl_803647AC
#define lbl_803647AC (*(volatile f32 *)&lbl_803647AC_v)
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
extern "C" {
void fn_80135CB0(void);
void __construct_array(void *, void *, void *, u32, u32);
static inline void init4(V4_80178234 *p, f32 c) { p->x = c; p->y = c; p->z = c; p->w = c; }
void fn_80178234(void) {
    init4(&s_a, lbl_80364788);
    init4(&s_b, lbl_80364790);
    init4(&s_c, lbl_803647A8);
    init4(&s_d, lbl_8036478C);
    init4(&s_e, lbl_803647AC);
    __construct_array(lbl_8032F718, (void *)fn_80135CB0, 0, 16, 128);
}
__declspec(section ".ctors") static void (*const ctor_80178234)(void) = fn_80178234;

} /* extern "C" */

#undef lbl_80364788
#define lbl_80364788 (*(f32 *)&lbl_80364788_v)
#undef lbl_80364790
#define lbl_80364790 (*(f32 *)&lbl_80364790_v)
#undef lbl_803647A8
#define lbl_803647A8 (*(f32 *)&lbl_803647A8_v)
#undef lbl_8036478C
#define lbl_8036478C (*(f32 *)&lbl_8036478C_v)
#undef lbl_803647AC
#define lbl_803647AC (*(f32 *)&lbl_803647AC_v)
} /* namespace m80178234 */

extern "C" {
__declspec(section ".sdata2") f32 lbl_803647A8_v = 0.5f;
__declspec(section ".sdata2") f32 lbl_803647AC_v = 0.003921569f;
}
