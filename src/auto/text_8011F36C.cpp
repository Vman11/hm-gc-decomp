#include "common.h"

extern "C" {

struct O11F { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void rem(void *, void *); };
struct N11F { u8 pad[0x18]; O11F *f18; };
class L11F { public: N11F *head; u32 pad; L11F(); };
struct P11F {
    u8 pad0[0x38]; O11F **f38; u8 pad3c[4]; u32 f40; u8 pad44[4]; u8 *f48; struct { void *d; u32 x; } *f4c; struct { void *d; u32 x; } *f50;
    u8 pad54[0x78 - 0x54]; u8 *f78; u8 *f7c; u8 *f80; u8 pad84[0x94 - 0x84]; L11F *f94; L11F *f98; u8 *f9c; u8 *fa0; u8 *fa4; u32 fa8; u32 fac;
    u8 padb0[0xbc - 0xb0]; s32 fbc; u8 padc0[0xd0 - 0xc0];
    virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4(); virtual void fin();
};
void fn_8011F634(P11F *);

static inline void remAll(P11F *p, void *d, u32 j) { for (; j < p->f40; j++) p->f38[j]->rem(p, d); }
s32 fn_8011F36C(P11F *p) {
    L11F *a;
    u32 j;
    u32 i;
    u32 j2;
    void *d;
    if (p->fbc == 0) return 0;
    if (p->f94) {
        for (i = 0; i < p->fa8; i++) {
            a = p->f94;
            d = (i < p->fa8) ? p->f4c[i].d : 0;
            remAll(p, d, 0);
            N11F *n = a[i].head; while (n) { n->f18->rem(p, d); n = a[i].head; }
        }
        delete[] p->f94;
    }
    if (p->f98) {
        for (i = 0; i < p->fac; i++) {
            d = p->f50[i].d;
            a = p->f98;
            remAll(p, d, 0);
            N11F *n = a[i].head; while (n) { n->f18->rem(p, d); n = a[i].head; }
        }
        delete[] p->f98;
    }
    if (p->f48) delete[] p->f48;
    if (p->f78) delete[] p->f78;
    if (p->f7c) delete[] p->f7c;
    if (p->f80) delete[] p->f80;
    if (p->fa0) delete[] p->fa0;
    if (p->fa4) delete[] p->fa4;
    if (p->f9c) delete[] p->f9c;
    p->fin();
    fn_8011F634(p);
    return 0;
}

}
