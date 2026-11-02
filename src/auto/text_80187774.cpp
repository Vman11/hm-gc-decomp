// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E40 { u8 pad[20]; void *f20; void *f24; u8 pad28[12]; };
struct E52 { u8 pad[20]; void *f20; void *f24; u8 pad28[24]; };
struct Mdl { u8 pad[28]; u32 n28; u32 n32; E40 *f36; E52 *f40; void *f44; };
struct X { u8 pad[20]; void *f20; };
struct R { u8 pad[6444]; void *f6444; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44(); virtual void a45(); virtual void a46(); virtual void a47(); virtual void a48(); virtual void a49(); virtual void a50(); virtual void a51(); virtual void a52(); virtual void a53(); virtual void a54(); virtual void a55(); virtual void a56(); virtual void a57(); virtual void a58(); virtual void a59(); virtual void a60(); virtual void a61(); virtual void a62(); virtual void a63(); virtual void a64(); virtual void a65(); virtual void a66(); virtual void *a67(); virtual void *a68(); virtual void a69(int, void *); };
struct O80 { u8 pad[104]; virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18(); virtual void b19(); virtual void b20(); virtual void b21(); virtual void b22(); virtual void sub(R *, X *); };
struct O { u32 f0; u8 pad4[20]; u8 f24[56]; O80 *f80; u8 pad84[20]; virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual X *def(); u8 pad108[60]; Mdl *f168; };
void fn_8017A028(void *);
void fn_801044C4(X *, void *, void *);
void fn_801043E0(void *, void *, void *);
static inline Mdl *getm(O *o) { return o->f168; }
void fn_80187774(O *o, R *r, X *x) {
    if (o->f0 & 4) o->c2();
    r->f6444 = o->f24;
    if (o->f0 & 0x40000) {
        o->f80->sub(r, x);
        return;
    }
    if (o->f0 & 0x80000) fn_8017A028(&o->f168);
    if (!x) x = o->def();
    Mdl *m = getm(o);
    if (x) {
        fn_801044C4(x, r->a67(), r->a68());
        r->a69(0, x->f20);
        void *q = m->f44;
        if (q) {
            void *a = x->f20;
            fn_801043E0(q, a, r->a68());
        }
    } else {
        r->a69(0, r->a67());
        void *q = m->f44;
        if (q) fn_801043E0(q, r->a67(), r->a68());
    }
    int k = 1;
    u32 i;
    for (i = 0; i < m->n28; i++) {
        E40 *e = &m->f36[i];
        r->a69(k++, e->f24 ? e->f24 : e->f20);
    }
    for (i = 0; i < m->n32; i++) {
        E52 *e = &m->f40[i];
        r->a69(k++, e->f24 ? e->f24 : e->f20);
    }
}

} /* extern "C" */
