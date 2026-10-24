// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

class C8018D1A4 { public: u8 d[28]; C8018D1A4(); };
class C80108120 { public: u8 d[52]; C80108120(); };
class C80105EE8 { public: u8 d[56]; C80105EE8(); };
struct E60 { u8 d[60]; };
class C8017AB98 { public: C80105EE8 *f0; u32 f4; E60 *f8; u8 pad[24]; C8017AB98(); };
struct L { C80105EE8 *a; u32 b; };
class V8 { public: virtual void *v0(); };
class W { public: u8 pad[48]; virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4(); virtual void w5(); virtual void w6(); virtual void w7(); virtual void w8(); virtual void w9(); virtual void w10(); virtual void w11(); virtual void w12(); virtual void w13(); virtual void w14(); virtual V8 *w15(); };
struct X { u32 a; W *f4; };
class A {
public:
    u32 f0;
    u8 pad4[40];
    X *f44;
    u8 pad48[56];
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
    virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10();
    u32 f108;
    u32 f112;
    C8018D1A4 *f116;
    C80108120 *f120;
    u8 pad124[8];
    C8017AB98 *f132;
};

extern "C" {
extern void *lbl_8035AEA8;
extern u32 lbl_80364D98;
extern u32 lbl_80364D88;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80191F88(A *, void *, A *);
void fn_8018CF58(C8018D1A4 *, C8018D1A4 *);
void fn_80104F78(C80108120 *, void *, void *);
void fn_80107F3C(C80108120 *, u8 *);
void fn_80105350(C80105EE8 *, V8 *, C80105EE8 *);
void fn_8017A984(C8017AB98 *, L *);
void fn_8017AFC0(E60 *, E60 *);

void fn_801A1060(A *d, void *p, A *s, A *o) {
    u32 i;
    if (d->f0 & 1) d->a10();
    fn_80191F88(d, p, s);
    d->f0 = d->f0 | (s->f0 & 0x6800);
    d->f108 = s->f108;
    d->f112 = s->f112;
    if (d->f112) {
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        d->f116 = new C8018D1A4[d->f112];
        fn_800F7E98();
        if (!d->f116) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < d->f112; i++) fn_8018CF58(&d->f116[i], &s->f116[i]);
    }
    if (s->f120) {
        V8 *v = d->f44->f4->w15();
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        d->f120 = new C80108120;
        fn_800F7E98();
        if (!d->f120) fn_800604C4(-4, 0, 0, 0);
        fn_80104F78(d->f120, v->v0(), v->v0());
        fn_80107F3C(d->f120, (u8 *)s->f120 + 40);
        d->f0 |= lbl_80364D98;
        d->a5();
    }
    if (s->f132) {
        L l;
        if (!d->f132) {
            if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AEA8);
            d->f132 = new C8017AB98;
            fn_800F7E98();
            if (!d->f132) fn_800604C4(-4, 0, 0, 0);
        }
        if (!o) {
            C80105EE8 *k = s->f132->f0;
            C80105EE8 *t;
            d->f0 |= lbl_80364D88;
            if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AEA8);
            t = new C80105EE8;
            fn_800F7E98();
            if (!t) fn_800604C4(-4, 0, 0, 0);
            fn_80105350(t, d->f44->f4->w15(), k);
            l.a = t;
        } else {
            l.a = o->f132->f0;
        }
        l.b = s->f132->f4;
        fn_8017A984(d->f132, &l);
        for (i = 0; i < l.b; i++)
            { E60 *a = &d->f132->f8[i]; fn_8017AFC0(a, !s->f132 ? 0 : &s->f132->f8[i]); }
    }
}
}

} /* extern "C" */
