#include "common.h"

struct E_917C { u8 pad_[292];
    virtual void v0(); virtual void v1(); virtual void m2(char *, int, int); virtual void v3(); virtual void v4(); virtual u32 m5();
};
struct P_917C { u8 pad_[16];
    virtual void v0(); virtual void v12();
    struct T12_917C *f20;
};
struct T12_917C { u8 d[12]; };
struct C80215F50 { u8 pad[0x2C]; E_917C *f44; u8 pad2[0x8]; C80215F50(); ~C80215F50(); };
extern "C" {
extern char lbl_80363930[4];
extern char lbl_80363934[8];
extern char lbl_802E2538[];
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80215BFC(C80215F50 *);
void fn_800FB064(E_917C *, void *);
void fn_800FAFA8(E_917C *);
u32 fn_800FB33C(E_917C *);
void fn_800FAF50(E_917C *);
void fn_800FAEF8(E_917C *);
void fn_800F8E38(P_917C *, u32);
void fn_801087AC(void *, P_917C *, void *);
void fn_80108D14(T12_917C **, u32);
void fn_800F87F0(P_917C *, void *, T12_917C *);
void fn_800FAEA0(E_917C *);
static inline u32 getn(E_917C *r) { return fn_800FB33C(r); }
static inline void rd(P_917C *p, E_917C *r, u8 *b16, u32 n, u32 i) { for (; i < n; i++) { fn_800FB064(r, b16); fn_800F87F0(p, b16, &p->f20[i]); } }
void fn_8010917C(P_917C *p, void *a, char *s) {
    C80215F50 o;
    u8 b16[8];
    u8 b8[8];
    int e;
    E_917C *r;
    void *x;
    u32 n;
    u32 i;
    u32 k;
    if ((e = fn_80215C84(&o, s, lbl_80363930, 2, 0)) != 0) fn_80060E30(e, lbl_80363934, s, lbl_80363930);
    r = o.f44;
    if (p->f20) p->v12();
    r->m2(lbl_802E2538, 2, 0);
    k = r->m5();
    x = 0;
    if (k == 57) {
        fn_800FB064(r, b8);
        x = b8;
        k = r->m5();
    }
    while (k != 0) {
        switch (k) {
        case 58:
            fn_800FAFA8(r);
            n = getn(r);
            fn_800FAF50(r);
            fn_800FAEF8(r);
            fn_800F8E38(p, n);
            fn_801087AC(a, p, x);
            fn_80108D14(&p->f20, n);
            rd(p, r, b16, n, 0);
            fn_800FAEA0(r);
            break;
        }
        k = r->m5();
    }
    fn_80215BFC(&o);
}
}
