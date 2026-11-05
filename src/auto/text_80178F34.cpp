#include "common.h"
extern "C" {
}
struct I_8F34 { u8 pad_[20];
    virtual void v0(); virtual void v1(); virtual void v16(int, int, int, int); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v60(int, void *, int, int, int);
};
struct L_8F34 { u8 pad_[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual I_8F34 *at(u32);
};
struct C4_8F34 { u8 r, g, b, a; C4_8F34 &operator=(const C4_8F34 &o) { r = o.r; g = o.g; b = o.b; a = o.a; return *this; } };
struct S_8F34 { int f0; u8 pad[4]; C4_8F34 c[4]; u32 f36; int f40; int f44; u8 pad2[108 - 48]; };
struct P_8F34 { u8 pad[56]; u32 f56; u32 f60; int f64; int f68; int f72; int f76; u8 pad2[12]; L_8F34 f92; };
extern "C" {
extern u8 lbl_8032FF24[];
extern u8 lbl_8033005C[];
extern u32 lbl_803647B0;
void fn_8012FD28(S_8F34 *);
void fn_80121658(C4_8F34 *);
void *memset(void *, int, u32);
void fn_80130B4C(void *, S_8F34 *);
void fn_80138050(L_8F34 *, int, u32, int, u32, int, int, int);
void fn_80178F34(P_8F34 *p, int a, int b) {
    if (p->f56 == 0xFFFFFFFF) {
        S_8F34 s;
        fn_8012FD28(&s);
        if (!(*(u32 *)(lbl_8032FF24 + 44) & 1)) {
            C4_8F34 c;
            fn_80121658(&c);
            memset(&s, 0, 92);
            s.f0 = a;
            s.c[0] = c;
            s.c[1] = c;
            s.c[2] = c;
            s.c[3] = c;
            s.f36 = 14;
            s.f40 = 0;
            fn_80130B4C(lbl_8032FF24, &s);
            s.f36 |= lbl_803647B0;
            s.f44 = 0;
            s.f40 = 3;
            fn_80130B4C(lbl_8033005C, &s);
        }
    }
    fn_80138050(&p->f92, a, p->f60, 0, p->f60, 0, 0, 0);
    {
        u32 i;
        I_8F34 *it;
        int x;
        int y;
        x = p->f68;
        y = p->f64;
        for (i = 0; i < p->f60; i++) {
            it = p->f92.at(i);
            it->v16(4, 0, 1, 0);
            if (i == p->f60 - 1) {
                x = p->f76;
                y = p->f72;
            }
            it->v60(a, &p->f92, x, y, b);
        }
    }
}
}
extern "C" {
}
