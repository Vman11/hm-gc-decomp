// Code of main that had no source file yet: decomp.wtf gave it this one.
#include "common.h"
extern "C" {
struct V { f32 x, y, z; };
extern f32 lbl_8036613C;
extern char lbl_802A8D48[];
extern char lbl_8036615C[8], lbl_80366164[8], lbl_8036616C[8], lbl_80366174[8], lbl_8036617C[8];
extern void *lbl_8035B65C;
f32 fn_802539FC(void *);
struct A { virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7(); virtual void q8(); virtual void q9(); virtual void q10(); virtual void q11(); virtual void q12(); virtual void probe(int, V *, int, int, int); u8 pad[420]; f32 f424; f32 f428; u8 pad432[8]; int *f440; };
struct B;
struct S { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void probe(int, V *, int, int, int); virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18(); virtual void say(const char *, void *, int, void *, int); };
struct B { u8 pad0[280]; V n; u8 pad292[308]; f32 f600; int *f604; u8 pad608[16]; S *f624; };
struct G { u8 pad[72]; void *f72; };
extern G *lbl_8035B308;
struct T { u8 pad[184]; int f184; u8 pad188[36]; A *f224; B *f228; u32 f232; u32 f236; u32 f240; };
void fn_80249A18(T *, const char *);
static inline void go(T *t, B *b, const char *s) {
    if (t->f184) {
        t->f228 = b;
        t->f232 = 0;
        t->f236 = 0;
        t->f240 = 0;
        fn_80249A18(t, s);
    }
}
static inline int Num(A *a) { return a->f440 ? *a->f440 : 0; }
static inline int Is1(int *p) { if (p == 0) return 0; return *p == 1; }
void fn_802405B8(T *t) {
    char *str = lbl_802A8D48;
    f32 nx, ny, nz;
    B *b = t->f228;
    if (b->f624 == (S *)t->f224) return;
    if (Num(t->f224) < 0) return;
    f32 d = b->f600;
    if (Is1(b->f604)) d -= Num(t->f224);
    if (d <= lbl_8036613C) return;
    f32 dt = fn_802539FC(lbl_8035B65C);
    if (lbl_8035B308->f72 == t->f224) {
        f32 v = -d;
        v = v * dt;
        ((S *)lbl_8035B308->f72)->say(lbl_80366174, t->f228, 0, &v, 0);
    } else {
        A *a = t->f224;
        d = d / dt;
        a->f428 = a->f428 - d;
        if (a->f428 > a->f424) a->f428 = a->f424;
    }
    if (t->f224->f428 <= lbl_8036613C) {
        go(t, t->f228, lbl_8036615C);
        if (lbl_8035B308->f72 == b->f624) b->f624->say(str + 0xb0, t->f224, 0, 0, 0);
        if (lbl_8035B308->f72 == t->f224 && b->f624) b->f624->say(str + 0xbc, 0, 0, 0, 0);
        return;
    }
    V v;
    nx = b->n.x; ny = b->n.y; nz = b->n.z;
    t->f224->probe(0, &v, 0, 0, 0);
    if (v.x * nx + v.y * ny + v.z * nz <= lbl_8036613C) go(t, t->f228, str + 0xa4);
    else go(t, t->f228, lbl_80366164);
    go(t, t->f228, lbl_8036616C);
    if (lbl_8035B308->f72 == t->f224 && b->f624) b->f624->say(lbl_8036617C, 0, 0, 0, 0);
}
}
