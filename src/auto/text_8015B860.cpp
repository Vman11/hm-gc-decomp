#include "common.h"
struct I_B860 { u8 pad_[20];
    virtual void v0(); virtual void v1(); virtual void v16(int, int, int, int); virtual void v3(); virtual void v18(void *); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v60(int, void *, int, int, int);
};
struct L_B860 { u8 pad_[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual I_B860 *at(u32);
};
struct C4_B860 { u8 r, g, b, a; C4_B860 &operator=(const C4_B860 &o) { r = o.r; g = o.g; b = o.b; a = o.a; return *this; } };
struct S_B860 { int f0; u8 pad[4]; C4_B860 c[4]; u32 f24; int f28; int f2c; u8 pad2[92 - 48]; };
struct E_B860 { int x; int y; u8 pad[16]; };
struct P_B860 { u8 pad[8]; u32 f8; u8 pad1[12]; u16 f18; u16 f1a; u8 pad2[16]; E_B860 *f2c; u8 pad3[4]; u8 f34[8]; L_B860 f3c; };
extern "C" {
extern u8 lbl_8032E51C[];
extern u8 lbl_8032E654[];
extern u32 lbl_803645D0;
void fn_8012FD28(S_B860 *);
void fn_80121658(C4_B860 *);
void *memset(void *, int, u32);
void fn_80130B4C(void *, S_B860 *);
void fn_80138050(L_B860 *, int, u32, int, u32, int, int, int);
void fn_8015B860(P_B860 *p, int a, int b) {
    if (p->f18 == 0xFFFF) {
        S_B860 s;
        fn_8012FD28(&s);
        if (!(*(u32 *)(lbl_8032E51C + 44) & 1)) {
            C4_B860 c;
            fn_80121658(&c);
            memset(&s, 0, 92);
            s.f0 = a;
            s.c[0] = c;
            s.c[1] = c;
            s.c[2] = c;
            s.c[3] = c;
            s.f24 = 14;
            s.f28 = 0;
            fn_80130B4C(lbl_8032E51C, &s);
            s.f24 |= lbl_803645D0;
            s.f2c = 0;
            s.f28 = 3;
            fn_80130B4C(lbl_8032E654, &s);
        }
    }
    fn_80138050(&p->f3c, a, p->f1a, 0, p->f1a, 0, 0, 0);
    {
        u32 i;
        I_B860 *it;
        for (i = 0; i < p->f1a; i++) {
            it = p->f3c.at(i);
            it->v16(4, 0, 1, 0);
            if (p->f8 & 4) it->v18(p->f34);
            it->v60(a, &p->f3c, p->f2c[i].x, p->f2c[i].y, b);
        }
    }
}
}
