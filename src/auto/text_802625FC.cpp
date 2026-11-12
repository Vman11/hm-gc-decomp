#include "common.h"
struct A_2E58 { u8 pad_[492];
    virtual ~A_2E58();
};
struct B_2E58 { u8 pad_[16];
    virtual ~B_2E58();
};
struct V3_2E58 { f32 x, y, z; };
struct M_2E58 { V3_2E58 r0, r1, r2; };
struct P_2E58 { u32 f0; int f4; B_2E58 *f8; A_2E58 *f12; B_2E58 *f16; int f20; };
extern "C" {
V3_2E58 lbl_80357E78, lbl_80357E84, lbl_80357E90;
extern volatile int lbl_8035B754;
extern void *lbl_8035B478;
extern const f32 lbl_80366AE8 = 0.0f;
extern const f32 lbl_80366AEC = 1.0f;
void fn_8023E138(void *, A_2E58 *);
void __dl__FPv(void *);
}
static inline void Set_2E58(V3_2E58 *v, f32 a, f32 b, f32 c) { v->x = a; v->y = b; v->z = c; }
static inline void Zero_2E58(V3_2E58 *v) { v->x = lbl_80366AE8; v->y = lbl_80366AE8; v->z = lbl_80366AE8; }
static inline void Ident_2E58(V3_2E58 *a, V3_2E58 *b, V3_2E58 *c) {
    f32 z = *(volatile f32 *)&lbl_80366AE8;
    *(volatile f32 *)&a->x = z; *(volatile f32 *)&a->y = z; *(volatile f32 *)&a->z = z;
    f32 o = *(volatile f32 *)&lbl_80366AEC;
    *(volatile f32 *)&b->y = z; c->x = z; c->y = z; *(volatile f32 *)&c->z = z;
    *(volatile f32 *)&a->x = o; *(volatile f32 *)&b->x = z; *(volatile f32 *)&b->z = z; *(volatile f32 *)&b->y = o; *(volatile f32 *)&c->z = o;
}
/* fn_802625FC */

struct C80111028 {
    u8 pad[0x1ec];
    C80111028();
    virtual ~C80111028();
};
struct C8023B9E4 {
    u8 pad[0x10];
    C8023B9E4();
    virtual ~C8023B9E4();
    virtual void v1();
    virtual void setName(char *);
    u8 pad14[0x14];
};
struct C80260710 {
    u8 pad[0x10];
    C80260710();
    virtual ~C80260710();
    u8 pad14[0xc];
};
struct VN { u8 pad[8]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void *get(int); };

extern "C" {

struct Vec3 { f32 x, y, z; void Zero() { x = 0.0f; y = 0.0f; z = 0.0f; } };
struct M33 { Vec3 x, y, z; };
static inline void ZeroV(Vec3 *v) { v->x = 0.0f; v->y = 0.0f; v->z = 0.0f; }
static inline void ZeroR(Vec3 &v) { v.x = 0.0f; v.y = 0.0f; v.z = 0.0f; }

struct Flag { u8 pad[0x20]; s32 f; };
struct Arg { u8 pad[4]; void *heap; u8 pad8[4]; void *name; };
struct Mgr {
    void *name;          /* 0 */
    s32 on;              /* 4 */
    C8023B9E4 *a;        /* 8 */
    C80111028 *model;    /* c */
    C80260710 *e;        /* 10 */
    void *x14;           /* 14 */
};

struct Strs { char s0[12]; char sc[28]; char s28[24]; char s40[28]; char s5c[28]; char s78[28]; char s94[24]; char sac[20]; char sc0[24]; char sd8[24]; char sf0[24]; char s108[24]; char s120[20]; char s134[24]; char s14c[20]; char s160[20]; char s174[12]; };
extern Strs lbl_802AA010;
extern Flag lbl_8035793C, lbl_8035796C, lbl_8035799C, lbl_803579CC, lbl_803579FC, lbl_80357A2C, lbl_80357A5C,
    lbl_80357A8C, lbl_80357ABC, lbl_80357E54, lbl_80357EAC, lbl_80357EDC, lbl_80357F0C, lbl_80357F3C,
    lbl_80357F6C, lbl_80357F9C;
extern void *lbl_8035B750;
extern void *lbl_8035B1C0;

void fn_8023E5E4(void *, void *);
void fn_80261D10(void *);
void fn_8025E938(void *);
void fn_8025F988(void *);
void fn_8026075C(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *fn_8021616C(void *);
void fn_80207BF4(void *, char *);
void fn_802079F0(void *, int);
void fn_8010FD54(void *, void *, char *, int, int, int);
void *fn_80110444(void *, char *, int);
VN **fn_8010FEDC(void *, void *, char *, int);
void fn_8025EEFC(int, void *);
void fn_8025EEE8(int, void *);
void fn_8025EED4(int, void *);
void fn_80260510(void *, void *);
void *fn_800F8274(void *, char *);

static inline void Zero(Vec3 *v) { v->x = v->y = v->z = 0.0f; }

#define HEAP_NEW(dst, T) \
    if (lbl_8035B750 == 0) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035B750); \
    dst = new T; \
    fn_800F7E98(); \
    if (dst == 0) fn_800604C4(-4, 0, 0, 0);

void fn_802625FC(Mgr *m, void *node) {
    void *sc;
    if (m->on) {
        if (lbl_8035B478 && m->model) fn_8023E138(lbl_8035B478, (A_2E58 *)m->model);
        if (m->model) delete m->model;
        if (m->a) delete m->a;
        if (m->e) delete m->e;
        *(volatile int *)&m->model = 0;
        *(volatile int *)&m->a = 0;
        *(volatile int *)&m->on = 0;
        *(volatile int *)&m->e = 0;
        *(volatile int *)&m->x14 = 0;
        Ident_2E58(&lbl_80357E78, &lbl_80357E84, &lbl_80357E90);
    }
    m->on = 1;
    m->name = ((Arg *)node)->name;
    lbl_8035799C.f = 1;
    lbl_80357A8C.f = 1;
    lbl_80357E54.f = 1;
    lbl_80357ABC.f = 1;
    lbl_80357F9C.f = 1;
    lbl_8035796C.f = 1;
    lbl_80357F0C.f = 1;
    lbl_80357EDC.f = 1;
    lbl_8035793C.f = 1;
    lbl_80357EAC.f = 1;
    lbl_80357A2C.f = 1;
    lbl_803579CC.f = 1;
    lbl_80357F6C.f = 1;
    lbl_80357F3C.f = 1;
    lbl_80357A5C.f = 1;
    lbl_803579FC.f = 1;
    lbl_8035B750 = ((Arg *)node)->heap;
    fn_80261D10(*(void * volatile *)&lbl_8035B750);
    fn_8025E938(lbl_8035B750);
    fn_8025F988(lbl_8035B750);
    fn_8026075C(lbl_8035B750);
    HEAP_NEW(m->a, C8023B9E4)
    m->a->setName("Motion");
    HEAP_NEW(m->model, C80111028)
    sc = fn_8021616C(lbl_8035B1C0);
    fn_80207BF4(sc, "REGISTRY\\");
    fn_8010FD54(m->model, m->name, "MOTION", 1, 0, 0);
    fn_8023E5E4(lbl_8035B478, m->model);
    fn_802079F0(sc, 0);
    node = fn_80110444(m->model, "General", 0);
    fn_8025EEFC(0, (*fn_8010FEDC(m->model, node, "rDefaultInstantaneousDamage", 1))->get(0));
    fn_8025EEFC(1, (*fn_8010FEDC(m->model, node, "rLowInstantaneousDamage", 1))->get(0));
    fn_8025EEFC(2, (*fn_8010FEDC(m->model, node, "rMediumInstantaneousDamage", 1))->get(0));
    fn_8025EEFC(3, (*fn_8010FEDC(m->model, node, "rHighInstantaneousDamage", 1))->get(0));
    fn_8025EEFC(4, (*fn_8010FEDC(m->model, node, "rYikesInstantaneousDamage", 1))->get(0));
    fn_8025EEE8(0, (*fn_8010FEDC(m->model, node, "rDefaultSustainedDamage", 1))->get(0));
    fn_8025EEE8(1, (*fn_8010FEDC(m->model, node, "rLowSustainedDamage", 1))->get(0));
    fn_8025EEE8(2, (*fn_8010FEDC(m->model, node, "rMediumSustainedDamage", 1))->get(0));
    fn_8025EEE8(3, (*fn_8010FEDC(m->model, node, "rHighSustainedDamage", 1))->get(0));
    fn_8025EEE8(4, (*fn_8010FEDC(m->model, node, "rYikesSustainedDamage", 1))->get(0));
    fn_8025EED4(0, (*fn_8010FEDC(m->model, node, "rDefaultConveyorSpeed", 1))->get(0));
    fn_8025EED4(1, (*fn_8010FEDC(m->model, node, "rLowConveyorSpeed", 1))->get(0));
    fn_8025EED4(2, (*fn_8010FEDC(m->model, node, "rMediumConveyorSpeed", 1))->get(0));
    fn_8025EED4(3, (*fn_8010FEDC(m->model, node, "rHighConveyorSpeed", 1))->get(0));
    fn_8025EED4(4, (*fn_8010FEDC(m->model, node, "rYikesConveyorSpeed", 1))->get(0));
    HEAP_NEW(m->e, C80260710)
    fn_80260510(m->e, fn_80110444(m->model, "Materials", 0));
    m->x14 = fn_800F8274(m->e, "default");
}

}

extern "C" void fn_80262D38(P_2E58 *p) {
    void *g = *(void * volatile *)&lbl_8035B478;
    if (g && p->f12) fn_8023E138(g, p->f12);
    if (p->f12) delete p->f12;
    if (p->f8) delete p->f8;
    if (p->f16) delete p->f16;
    *(volatile int *)&p->f12 = 0;
    *(volatile int *)&p->f8 = 0;
    *(volatile int *)&p->f4 = 0;
    *(volatile int *)&p->f16 = 0;
    *(volatile int *)&p->f20 = 0;
    Ident_2E58(&lbl_80357E78, &lbl_80357E84, &lbl_80357E90);
}
extern "C" P_2E58 *fn_80262E58(P_2E58 *p, short flag) {
    if (p) {
        lbl_8035B754 = 0;
        void *g = *(void * volatile *)&lbl_8035B478;
        if (g && p->f12) fn_8023E138(g, p->f12);
        if (p->f12) delete p->f12;
        if (p->f8) delete p->f8;
        if (p->f16) delete p->f16;
        *(volatile int *)&p->f12 = 0;
        *(volatile int *)&p->f8 = 0;
        *(volatile int *)&p->f4 = 0;
        *(volatile int *)&p->f16 = 0;
        *(volatile int *)&p->f20 = 0;
        Ident_2E58(&lbl_80357E78, &lbl_80357E84, &lbl_80357E90);
        if (flag > 0) __dl__FPv(p);
    }
    return p;
}
extern "C" void __ct__9C80262FA0Fv(u8 *p) {
    *(void **)&lbl_8035B754 = p;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x8) = 0;
    *(s32 *)(p + 0x4) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(volatile s32 *)(p + 0x14) = 0;
    Ident_2E58(&lbl_80357E78, &lbl_80357E84, &lbl_80357E90);
}
