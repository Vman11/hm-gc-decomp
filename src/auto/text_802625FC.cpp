#include "common.h"

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

extern f32 lbl_80366AE8, lbl_80366AEC;
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
Vec3 lbl_80357E78, lbl_80357E84, lbl_80357E90;
extern Flag lbl_8035793C, lbl_8035796C, lbl_8035799C, lbl_803579CC, lbl_803579FC, lbl_80357A2C, lbl_80357A5C,
    lbl_80357A8C, lbl_80357ABC, lbl_80357E54, lbl_80357EAC, lbl_80357EDC, lbl_80357F0C, lbl_80357F3C,
    lbl_80357F6C, lbl_80357F9C;
extern void *lbl_8035B750;
extern void *lbl_8035B478;
extern void *lbl_8035B1C0;
extern f32 lbl_80366AE8, lbl_80366AEC;
extern char lbl_80366AF0[8], lbl_80366AF8[8], lbl_80366B00[8], lbl_80366B08[8];

void fn_8023E138(void *, void *);
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

void fn_802625FC(Mgr *m, Arg *arg) {
    Strs *s = &lbl_802AA010;
    void *sc;
    void *node;
    if (m->on) {
        if (lbl_8035B478 && m->model) fn_8023E138(lbl_8035B478, m->model);
        if (m->model) delete m->model;
        if (m->a) delete m->a;
        if (m->e) delete m->e;
        m->model = 0;
        m->a = 0;
        m->on = 0;
        m->e = 0;
        m->x14 = 0;
    {
        Vec3 *a=&lbl_80357E78,*b=&lbl_80357E84,*c=&lbl_80357E90; ZeroV(a); a->x = 1.0f; ZeroV(b); b->y = 1.0f; ZeroV(c); c->z = 1.0f;
    }
    }
    m->on = 1;
    m->name = arg->name;
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
    lbl_8035B750 = arg->heap;
    fn_80261D10(*(void * volatile *)&lbl_8035B750);
    fn_8025E938(lbl_8035B750);
    fn_8025F988(lbl_8035B750);
    fn_8026075C(lbl_8035B750);
    HEAP_NEW(m->a, C8023B9E4)
    m->a->setName(lbl_80366AF0);
    HEAP_NEW(m->model, C80111028)
    sc = fn_8021616C(lbl_8035B1C0);
    fn_80207BF4(sc, s->s0);
    fn_8010FD54(m->model, m->name, lbl_80366AF8, 1, 0, 0);
    fn_8023E5E4(lbl_8035B478, m->model);
    fn_802079F0(sc, 0);
    node = fn_80110444(m->model, lbl_80366B00, 0);
    fn_8025EEFC(0, (*fn_8010FEDC(m->model, node, s->sc, 1))->get(0));
    fn_8025EEFC(1, (*fn_8010FEDC(m->model, node, s->s28, 1))->get(0));
    fn_8025EEFC(2, (*fn_8010FEDC(m->model, node, s->s40, 1))->get(0));
    fn_8025EEFC(3, (*fn_8010FEDC(m->model, node, s->s5c, 1))->get(0));
    fn_8025EEFC(4, (*fn_8010FEDC(m->model, node, s->s78, 1))->get(0));
    fn_8025EEE8(0, (*fn_8010FEDC(m->model, node, s->s94, 1))->get(0));
    fn_8025EEE8(1, (*fn_8010FEDC(m->model, node, s->sac, 1))->get(0));
    fn_8025EEE8(2, (*fn_8010FEDC(m->model, node, s->sc0, 1))->get(0));
    fn_8025EEE8(3, (*fn_8010FEDC(m->model, node, s->sd8, 1))->get(0));
    fn_8025EEE8(4, (*fn_8010FEDC(m->model, node, s->sf0, 1))->get(0));
    fn_8025EED4(0, (*fn_8010FEDC(m->model, node, s->s108, 1))->get(0));
    fn_8025EED4(1, (*fn_8010FEDC(m->model, node, s->s120, 1))->get(0));
    fn_8025EED4(2, (*fn_8010FEDC(m->model, node, s->s134, 1))->get(0));
    fn_8025EED4(3, (*fn_8010FEDC(m->model, node, s->s14c, 1))->get(0));
    fn_8025EED4(4, (*fn_8010FEDC(m->model, node, s->s160, 1))->get(0));
    HEAP_NEW(m->e, C80260710)
    fn_80260510(m->e, fn_80110444(m->model, s->s174, 0));
    m->x14 = fn_800F8274(m->e, lbl_80366B08);
}

}
