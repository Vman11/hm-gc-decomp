#include "common.h"
namespace m801CF1FC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
void __dla__FPv(void *);
void fn_800FB064(void *, void *);
void fn_800FB0F8(void *, void *);
f32 fn_800FB2E0(void *);
void fn_801A6EC8(void *, s32, void *, void *);
void *fn_80207198(void *, void *, void *);
typedef struct { u8 pad[12]; f32 f; } FA801CF1FC;
typedef struct { u8 pad[12]; s32 i; } IA801CF1FC;
typedef struct { u8 pad[8]; void *f8; } H801CF1FC;
typedef struct {
    u8 pad0[116];
    H801CF1FC *f116;
    u8 pad1[240];
    s32 f360;
    f32 f364;
    u8 pad2[8];
    FA801CF1FC *f376;
    IA801CF1FC *f380;
    s32 f384;
    f32 f388;
    u8 pad3[8];
    FA801CF1FC *f400;
    IA801CF1FC *f404;
    u8 pad4[20];
    f32 f428;
    f32 f432;
    f32 f436;
    f32 f440;
    s32 f444;
    f32 f448;
    u8 pad5[4];
    f32 f456;
} C801CF1FC;
void fn_801CF1FC(C801CF1FC *p, s32 key, void *x, void *r) {
    void *s;
    char name[12];
    name[0] = 0;
    switch (key) {
    case 78:
        p->f428 = fn_800FB2E0(r);
        p->f432 = fn_800FB2E0(r);
        p->f436 = fn_800FB2E0(r);
        p->f440 = fn_800FB2E0(r);
        break;
    case 83:
        p->f456 = fn_800FB2E0(r);
        break;
    case 84:
        p->f448 = fn_800FB2E0(r);
        break;
    case 79:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f376 = (FA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f360 = 1;
        if (p->f376) p->f364 = p->f376->f;
        __dla__FPv(s);
        break;
    case 80:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f400 = (FA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f384 = 1;
        if (p->f400) p->f388 = p->f400->f;
        __dla__FPv(s);
        break;
    case 81:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f380 = (IA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f360 = 1;
        if (p->f380) p->f364 = p->f380->i;
        __dla__FPv(s);
        break;
    case 82:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f404 = (IA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f384 = 1;
        if (p->f404) p->f388 = p->f404->i;
        __dla__FPv(s);
        break;
    case 85:
        p->f444 = 1;
        break;
    default:
        fn_801A6EC8(p, key, x, r);
        break;
    }
}

} /* extern "C" */

} /* namespace m801CF1FC */

namespace m801CF460 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801CF460 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual s32 m(void *, void *); };
extern "C" s32 fn_801D791C(void *, void *, void *);

s32 fn_801CF460(u8 *p, void *a, void *b) {
    u8 *n;
    s32 r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801CF460 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    if (!(*(u32 *)(p + 108) & 2)) {
        return 0;
    }
    if (*(s32 *)(p + 484) != 0) {
        return fn_801D791C(p, a, b);
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CF460 */

namespace m801CF524 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801CF524 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual s32 m(void *, void *); };
struct W_801CF524 { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };

s32 fn_801CF524(u8 *p, void *a, s32 c) {
    u8 *n;
    s32 r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801CF524 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 16:
        *(s32 *)(p + 324) = 32;
        break;
    case 32:
        *(s32 *)(p + 324) = 16;
        break;
    }
    if (c != 0 && *(W_801CF524 **)(p + 112) != NULL) {
        (*(W_801CF524 **)(p + 112))->m(16, *(void **)(p + 104));
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CF524 */

namespace m801CF610 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual s32 v27(void *owner, void *arg);
};
struct Node { Item *f0; s32 f4; Node *f8; };
struct Tgt {
    u8 pad[128];
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual void t4();
    virtual void t5();
    virtual void t6();
    virtual void t7();
    virtual void t8();
    virtual void t9();
    virtual void t10();
    virtual void t11();
    virtual void t12();
    virtual void t13();
    virtual void t14();
    virtual void t15();
    virtual void t16();
    virtual void t17();
    virtual void t18();
    virtual void t19();
    virtual void t20();
    virtual void t21();
    virtual void t22();
    virtual void t23();
    virtual void t24();
    virtual void t25();
    virtual void t26();
    virtual void t27();
    virtual void t28();
    virtual void t29();
    virtual void t30();
    virtual void t31();
    virtual void t32();
    virtual void t33();
    virtual void t34();
    virtual void t35();
    virtual void t36();
    virtual void t37();
    virtual void t38();
    virtual void t39();
    virtual void t40();
    virtual void t41();
    virtual void t42();
    virtual void t43();
    virtual void t44();
    virtual void t45();
    virtual void t46();
    virtual void t47();
    virtual void t48();
    virtual void t49();
    virtual void t50();
    virtual void t51();
    virtual void t52();
    virtual void t53();
    virtual void t54();
    virtual void t55();
    virtual void t56();
    virtual void t57();
    virtual void t58();
    virtual void t59();
    virtual void t60();
    virtual void t61();
    virtual void t62();
    virtual void t63();
    virtual void t64();
    virtual void t65();
    virtual void t66();
    virtual void t67();
    virtual void t68();
    virtual void t69(void *owner);
};
struct FOut { u8 pad[12]; f32 v; };
struct IOut { u8 pad[12]; s32 v; };
struct Slider { s32 on; f32 cur; f32 min; f32 max; FOut *a; IOut *b; };
struct Self {
    u8 pad[128];
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    u8 pad132[4];
    Node *f136;
    u8 pad140[144];
    Tgt *f284;
    u8 pad288[36];
    s32 f324;
    u8 pad328[32];
    Slider sl0;
    Slider sl1;
};
extern "C" {
static inline void Update(Self *self, Slider *s) {
    if (s->on) {
        f32 v = s->max;
        if (v > s->max) v = s->max;
        if (v < s->min) v = s->min;
        if (s->a) { s->cur = v; s->a->v = v; }
        if (s->b) { s->cur = v; s->b->v = (s32)v; }
        if (self->f284) self->f284->t69(self);
        self->s25();
    }
}

s32 fn_801CF610(Self *self, void *arg) {
    Node *n;
    s32 found = 0;
    for (n = self->f136; n != 0; n = n->f8) {
        if (n->f4 != 0) {
            if (n->f0->v27(self, arg) == 0) found = 1;
        }
    }
    if (found) return 0;
    switch (self->f324) {
    case 32:
        Update(self, &self->sl0);
        Update(self, &self->sl1);
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CF610 */

namespace m801CF7EC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual int v22(void*,u32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1cc - 0x198]; f32 saved[2]; };
static inline f32 clampf(f32 v, f32 hi, f32 lo) { if (v > hi) v = hi; if (v < lo) v = lo; return v; }
static inline void setv(A *p, int i, f32 v) {
    v = clampf(v, ((PP *)p)->sc[i].mx, ((PP *)p)->sc[i].mn);
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
int fn_801CF7EC(A *p, u32 key) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v22(p, key)) f = 1;
        if (f) return 0;
    }
    switch (F(p,0x144,s32)) {
    case 32:
        if (((PP *)p)->sc[0].on) setv(p, 0, ((PP *)p)->sc[0].mn);
        if (((PP *)p)->sc[1].on) setv(p, 1, ((PP *)p)->sc[1].mn);
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CF7EC */

namespace m801CF9E0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801CF9E0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual s32 m(void *, void *); };
struct V2_801CF9E0 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual s32 n(void *); };
s32 fn_801CF9E0(u8 *p, void *a) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801CF9E0 **)q)->m(p, a) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    return ((V2_801CF9E0 *)p)->n(a);
}

} /* extern "C" */

} /* namespace m801CF9E0 */

namespace m801CFA98 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual int v22(void*,u32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1cc - 0x198]; f32 saved[2]; };
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
int fn_801CFA98(A *p, u32 key) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v22(p, key)) f = 1;
        if (f) return 0;
    }
    switch (F(p,0x144,s32)) {
    case 32:
        if (((PP *)p)->sc[0].on) setv(p, 0, ((PP *)p)->saved[0]);
        if (((PP *)p)->sc[1].on) setv(p, 1, ((PP *)p)->saved[1]);
        if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
        p->v25();
        F(p,0x144,u32) = 16;
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CFA98 */

namespace m801CFCC8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801CFCC8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual s32 m(void *, void *); };
struct V2_801CFCC8 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual s32 n(void *, s32); };
s32 fn_801CFCC8(u8 *p, void *a) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801CFCC8 **)q)->m(p, a) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    return ((V2_801CFCC8 *)p)->n(a, 1);
}

} /* extern "C" */

} /* namespace m801CFCC8 */

namespace m801CFD84 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1c8 - 0x198]; f32 step[2]; };
int fn_801D8E50(void *, int, int);
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline void scrollBy(A *p, int i, f32 d) {
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    setv(p, i, d + ((PP *)p)->sc[i].val);
}
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801CFD84(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 16:
        return fn_801D8E50(p, a, b);
    case 32:
        if (anyNo(p, a)) return 0;
        if (!(F(p,0x6c,u32) & 2)) return 0;
        scrollBy(p, 0, -((PP *)p)->step[0]);
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(8, F(p,0x68,int));
        break;
    default:
        if (anyNo(p, a)) return 0;
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(8, F(p,0x68,int));
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801CFD84 */

namespace m801CFFB8 {
extern "C" {
struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1c8 - 0x198]; f32 step[2]; };
int fn_801D921C(void *, int, int);
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline void scrollBy(A *p, int i, f32 d) {
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    setv(p, i, d + ((PP *)p)->sc[i].val);
}
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801CFFB8(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 16:
        return fn_801D921C(p, a, b);
    case 32:
        if (anyNo(p, a)) return 0;
        if (!(F(p,0x6c,u32) & 2)) return 0;
        scrollBy(p, 0, ((PP *)p)->step[0]);
        break;
    default:
        if (anyNo(p, a)) return 0;
        break;
    }
    if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(4, F(p,0x68,int));
    return 0;
}

}

} /* namespace m801CFFB8 */

namespace m801D01BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1c8 - 0x198]; f32 step[2]; };
int fn_801D95E8(void *, int, int);
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline void scrollBy(A *p, int i, f32 d) {
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    setv(p, i, d + ((PP *)p)->sc[i].val);
}
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801D01BC(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 16:
        return fn_801D95E8(p, a, b);
    case 32:
        if (anyNo(p, a)) return 1;
        if (!(F(p,0x6c,u32) & 2)) return 1;
        scrollBy(p, 1, ((PP *)p)->step[0]);
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(2, F(p,0x68,int));
        break;
    default:
        if (anyNo(p, a)) return 1;
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(2, F(p,0x68,int));
        break;
    }
    return 1;
}

} /* extern "C" */

} /* namespace m801D01BC */

namespace m801D03EC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1c8 - 0x198]; f32 step[2]; };
int fn_801D99B4(void *, int, int);
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline void scrollBy(A *p, int i, f32 d) {
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    setv(p, i, d + ((PP *)p)->sc[i].val);
}
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801D03EC(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 16:
        return fn_801D99B4(p, a, b);
    case 32:
        if (anyNo(p, a)) return 1;
        if (!(F(p,0x6c,u32) & 2)) return 1;
        scrollBy(p, 1, -((PP *)p)->step[0]);
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    default:
        if (anyNo(p, a)) return 1;
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    }
    return 1;
}

} /* extern "C" */

} /* namespace m801D03EC */

namespace m801D0620 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual int v6(void*,u32,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; };
static inline void upd(A *p, int i) {
    f32 v;
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    v = (int)((PP *)p)->sc[i].val;
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
int fn_801D0620(A *p, u32 key, f32 x, f32 y) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v6(p, key, x, y)) f = 1;
        if (f) return 0;
    }
    switch (F(p,0x144,s32)) {
    case 64:
        if (F(p,0x1e4,int)) F(p,0x144,u32) = 16;
        else F(p,0x144,u32) = 2;
        if (F(p,0x1bc,int)) {
            if (F(p,0x168,int)) upd(p, 0);
            if (F(p,0x180,int)) upd(p, 1);
        }
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D0620 */

namespace m801D08E8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual int v3(void*,u32,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1cc - 0x198]; f32 saved[2]; };
static inline void sv(A *p, int i) {
    if (((PP *)p)->sc[i].on) {
        if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
        ((PP *)p)->saved[i] = ((PP *)p)->sc[i].val;
    }
}
static inline void save(A *p) { sv(p, 0); sv(p, 1); }
int fn_801D08E8(A *p, u32 key, f32 x, f32 y) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v3(p, key, x, y)) f = 1;
        if (f) return 1;
    }
    F(p,0x1d4,f32) = x;
    F(p,0x1d8,f32) = y;
    switch (F(p,0x144,s32)) {
    case 2:
        p->v59(key, 1);
        F(p,0x144,u32) = 64;
        save(p);
        break;
    case 16:
        F(p,0x144,u32) = 64;
        save(p);
    case 256:
        p->v59(key, 1);
        F(p,0x144,u32) = 64;
        save(p);
        break;
    }
    return 1;
}

} /* extern "C" */

} /* namespace m801D08E8 */

namespace m801D0B30 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801D0B30 { virtual void v0(); virtual void v1(); virtual s32 v2(void *self, void *arg, f32 x, f32 y); };
struct N801D0B30 { V801D0B30 *obj; s32 f4; N801D0B30 *next; };
struct S801D0B30 {
    u8 pad0[136];
    N801D0B30 *f136;
    u8 pad140[324 - 140];
    s32 f324;
    u8 pad328[412 - 328];
    f32 f412;
    f32 f416;
    f32 f420;
    f32 f424;
    u8 pad428[468 - 428];
    f32 f468;
    f32 f472;
};
extern "C" {
extern f32 lbl_80365178;
extern f32 lbl_8036517C;
extern f32 lbl_80365180;
void fn_801D0D78(S801D0B30 *self, f32 dx, f32 dy);
s32 fn_801D0B30(S801D0B30 *self, void *arg, f32 x, f32 y) {
    N801D0B30 *n = self->f136;
    s32 found = 0;
    f32 dx, dy;
    f32 hi, lo;
    while (n != 0) {
        if (n->f4 != 0) {
            if (n->obj->v2(self, arg, x, y) == 0) found = 1;
        }
        n = n->next;
    }
    if (found) return 0;
    switch (self->f324) {
    case 64:
        dx = x - self->f468;
        dy = y - self->f472;
        self->f468 = x;
        self->f472 = y;
        if (dx >= (lo = lbl_80365178) && dx <= (hi = lbl_8036517C) && dy >= lo && dy <= hi) break;
        if (x > self->f420 || x < self->f412) dx = lbl_80365180;
        if (y > self->f424 || y < self->f416) dy = lbl_80365180;
        fn_801D0D78(self, dx, dy);
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D0B30 */

namespace m801D0CA4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D0CA4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual s32 m(void *, void *); };

s32 fn_801D0CA4(u8 *p, void *a) {
    u8 *n;
    s32 r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801D0CA4 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 256:
        *(s32 *)(p + 324) = 2;
        break;
    case 512:
        *(s32 *)(p + 324) = 8;
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D0CA4 */

namespace m801D0D78 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f64 lbl_80365160;
extern f32 lbl_80365180;
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x48]; f32 pos[2]; f32 end[2]; u8 pad1[0x168 - 0x58]; Sc sc[2]; u8 pad2[0x19c - 0x198]; f32 tmin[2]; f32 tmax[2]; f32 a[2]; f32 b[2]; };
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline f32 ratio(A *p, int i) {
    PP *q = (PP *)p;
    if (q->sc[i].on) {
        f32 range = (q->tmax[i] - q->tmin[i]) - (q->b[i] - q->a[i]);
        f32 t = q->pos[i] - q->tmin[i];
        if (lbl_80365160 != range) return q->sc[i].mn + (q->sc[i].mx - q->sc[i].mn) * (t / range);
        return lbl_80365180;
    }
    return lbl_80365180;
}
static inline f32 clamp2(f32 lo, f32 v, f32 hi) { if (v < lo) v = lo; if (v > hi) v = hi; return v; }
static inline void drag(A *p, int i, f32 d) {
    PP *q = (PP *)p;
    if (q->sc[i].on) {
        f32 v = clamp2(q->tmin[i], q->pos[i] + d, q->tmax[i] - (q->b[i] - q->a[i]));
        q->pos[i] = v;
        q->end[i] = v + (q->b[i] - q->a[i]);
        setv(p, i, ratio(p, i));
    }
}
void fn_801D0D78(A *p, f32 dx, f32 dy) {
    drag(p, 0, dx);
    drag(p, 1, dy);
}

} /* extern "C" */

} /* namespace m801D0D78 */

namespace m801D104C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D104C { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void m25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void p68(); virtual void m69(void *); };

void fn_801D104C(u8 *p, f32 v) {
    if (*(void **)(p + 400) != NULL) {
        *(f32 *)(p + 388) = *(f32 *)(*(u8 **)(p + 400) + 12);
    }
    v = v + *(f32 *)(p + 388);
    if (v > *(f32 *)(p + 396)) {
        v = *(f32 *)(p + 396);
    }
    if (v < *(f32 *)(p + 392)) {
        v = *(f32 *)(p + 392);
    }
    if (*(void **)(p + 400) != NULL) {
        *(f32 *)(p + 388) = v;
        *(f32 *)(*(u8 **)(p + 400) + 12) = v;
    }
    if (*(void **)(p + 404) != NULL) {
        *(f32 *)(p + 388) = v;
        *(s32 *)(*(u8 **)(p + 404) + 12) = v;
    }
    if (*(V_801D104C **)(p + 284) != NULL) {
        (*(V_801D104C **)(p + 284))->m69(p);
    }
    ((V_801D104C *)p)->m25();
}

} /* extern "C" */

} /* namespace m801D104C */

namespace m801D1120 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D1120 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void m25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void p68(); virtual void m69(void *); };

void fn_801D1120(u8 *p, f32 v) {
    if (*(void **)(p + 376) != NULL) {
        *(f32 *)(p + 364) = *(f32 *)(*(u8 **)(p + 376) + 12);
    }
    v = v + *(f32 *)(p + 364);
    if (v > *(f32 *)(p + 372)) {
        v = *(f32 *)(p + 372);
    }
    if (v < *(f32 *)(p + 368)) {
        v = *(f32 *)(p + 368);
    }
    if (*(void **)(p + 376) != NULL) {
        *(f32 *)(p + 364) = v;
        *(f32 *)(*(u8 **)(p + 376) + 12) = v;
    }
    if (*(void **)(p + 380) != NULL) {
        *(f32 *)(p + 364) = v;
        *(s32 *)(*(u8 **)(p + 380) + 12) = v;
    }
    if (*(V_801D1120 **)(p + 284) != NULL) {
        (*(V_801D1120 **)(p + 284))->m69(p);
    }
    ((V_801D1120 *)p)->m25();
}

} /* extern "C" */

} /* namespace m801D1120 */

namespace m801D11F4 {
/* Functions from 0x801D11F4 to 0x801D12BC, found by decomp-toolkit. */

extern "C" {

extern f64 lbl_80365160;
extern f32 lbl_80365180;
f32 fn_801D11F4(u8* arg0) {
    f32 d;
    f32 t;
    f32 lo;

    if (*(s32*)(arg0 + 0x180) != 0) {
        d = (*(f32*)(arg0 + 0x1A8) - *(f32*)(arg0 + 0x1A0)) - (*(f32*)(arg0 + 0x1B8) - *(f32*)(arg0 + 0x1B0));
        t = *(f32*)(arg0 + 0x4C) - *(f32*)(arg0 + 0x1A0);
        if (lbl_80365160 != d) {
            lo = *(f32*)(arg0 + 0x188);
            return (*(f32*)(arg0 + 0x18C) - lo) * (t / d) + lo;
        }
        return lbl_80365180;
    }
    return lbl_80365180;
}

f32 fn_801D1258(u8* arg0) {
    f32 d;
    f32 t;
    f32 lo;

    if (*(s32*)(arg0 + 0x168) != 0) {
        d = (*(f32*)(arg0 + 0x1A4) - *(f32*)(arg0 + 0x19C)) - (*(f32*)(arg0 + 0x1B4) - *(f32*)(arg0 + 0x1AC));
        t = *(f32*)(arg0 + 0x48) - *(f32*)(arg0 + 0x19C);
        if (lbl_80365160 != d) {
            lo = *(f32*)(arg0 + 0x170);
            return (*(f32*)(arg0 + 0x174) - lo) * (t / d) + lo;
        }
        return lbl_80365180;
    }
    return lbl_80365180;
}

} /* extern "C" */

} /* namespace m801D11F4 */

namespace m801D12BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8010C440(void *, f32, f32);
void fn_8010C470(void *, s32, s32);
void fn_8010C480(void *, f32 *, f32 *);
void fn_8010C4B8(void *, s32 *, s32 *);
extern volatile f32 lbl_80365180;
typedef struct { void *f0; u8 pad4[8]; f32 fC; } A;
typedef struct { void *f0; u8 pad4[8]; s32 fC; } B;
typedef struct { s32 en; f32 f4; f32 f8; f32 fC; A *f10; B *f14; } R;
struct T {
    u8 pad0[128];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void Update();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void OnChild(struct T *c);
    u8 pad84[284 - 132];
    T *f11C;
    u8 pad120[0x168 - 0x120];
    R h;
    R v;
};
void fn_801DB744(T *);
static inline void notify(T *t) {
    if (t->f11C) t->f11C->OnChild(t);
    t->Update();
}
static inline void setValue(T *t, R *r, f32 v) {
    if (v > r->fC) v = r->fC;
    if (v < r->f8) v = r->f8;
    if (r->f10) {
        r->f4 = v;
        r->f10->fC = v;
    }
    if (r->f14) {
        r->f4 = v;
        r->f14->fC = (s32)v;
    }
    notify(t);
}
static inline void setRange(T *t, R *r, f32 lo, f32 hi) {
    r->f8 = lo;
    r->fC = hi;
    if (r->f10) fn_8010C440(r->f10->f0, lo, hi);
    if (r->f14) fn_8010C470(r->f14->f0, (s32)lo, (s32)hi);
    if (r->f10) r->f4 = r->f10->fC;
    setValue(t, r, r->f4);
}
int fn_801D12BC(T *t) {
    volatile f32 a, b;
    s32 ia, ib;
    fn_801DB744(t);
    a = lbl_80365180;
    b = lbl_80365180;
    if (t->h.en) {
        if (t->h.f10) {
            fn_8010C480(t->h.f10->f0, (f32 *)&a, (f32 *)&b);
            { f32 lo, hi; hi = b; lo = a; setRange(t, &t->h, lo, hi); }
            setValue(t, &t->h, t->h.f10->fC);
        }
        if (t->h.f14) {
            fn_8010C4B8(t->h.f14->f0, &ia, &ib);
            setRange(t, &t->h, (f32)ia, (f32)ib);
            setValue(t, &t->h, (f32)t->h.f14->fC);
        }
    }
    if (t->v.en) {
        if (t->v.f10) {
            fn_8010C480(t->v.f10->f0, (f32 *)&a, (f32 *)&b);
            { f32 hi = b; f32 lo = a; setRange(t, &t->v, lo, hi); }
            setValue(t, &t->v, t->v.f10->fC);
        }
        if (t->v.f14) {
            fn_8010C4B8(t->v.f14->f0, &ia, &ib);
            setRange(t, &t->v, (f32)ia, (f32)ib);
            setValue(t, &t->v, (f32)t->v.f14->fC);
        }
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D12BC */
