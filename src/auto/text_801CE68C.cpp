// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual u32 v5(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct VB { u8 pad[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void v3(int, R *); };
struct C801CE630 : VB { C801CE630(); ~C801CE630(); };
extern "C" {
extern void *lbl_8035B02C;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_800F87F0(void *, char *, C801CE630 *);
struct P { u8 pad[20]; int a; u8 pad2[4]; C801CE630 *arr; u32 n; };
int fn_801CE68C(P *p, int a, R *r, char *d) {
    char b16[8];
    char b8[8];
    u32 t;
    u32 i;
    t = r->v5();
    if (t == 131) {
        if (d) fn_800FB064(r, d);
        else fn_800FB064(r, b8);
        t = r->v5();
    }
    p->a = a;
    while (t != 6) {
        switch (t) {
        case 78:
            p->n = fn_800FADA8(r);
            fn_800F8E38(p, p->n);
            if (!lbl_8035B02C) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B02C);
            p->arr = new C801CE630[p->n];
            fn_800F7E98();
            if (!p->arr) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n; i++) {
                r->v5();
                fn_800FB064(r, b16);
                if (d) p->arr[i].v3(p->a, r);
                else p->arr[i].v3(p->a, r);
                fn_800F87F0(p, b16, &p->arr[i]);
            }
            break;
        }
        t = r->v5();
    }
    return 0;
}

} /* extern "C" */
