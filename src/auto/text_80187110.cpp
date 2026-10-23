// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void v2(void*,int,int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct P0 { u8 pad_[16]; virtual void s0(); virtual void v1(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct VB { u8 pad[80]; virtual void s0(); virtual void s1(); virtual void v2(void *, R *); };
struct C801870CC : VB { C801870CC(); ~C801870CC(); u8 b[88 - 84]; };
extern "C" {
extern u8 lbl_802E8BA8[];
extern void *lbl_8035AE28;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800FB000(R *, int);
void fn_800FAEA0(R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_8017F7D4(void *, void *, char *);
void fn_800F87F0(void *, char *, C801870CC *);
struct P { P0 h; C801870CC *arr; u32 n; };
void fn_80187110(P *p, void *a, R *r) {
    char b16[8];
    char b8[8];
    u32 i;
    char *name;
    u32 t;
    if (F(p,0,u32)) p->h.v1();
    r->v2(lbl_802E8BA8, 11, 0);
    t = r->v5();
    name = 0;
    if (t == 57) { fn_800FB064(r, b16); name = b16; t = r->v5(); }
    while (t != 0) {
        switch (t) {
        case 58:
            p->n = fn_800FADA8(r);
            if (!lbl_8035AE28) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE28);
            p->arr = new C801870CC[p->n];
            fn_800F7E98();
            if (!p->arr) fn_800604C4(-4, 0, 0, 0);
            fn_800F8E38(p, p->n);
            fn_8017F7D4(a, p, name);
            for (i = 0; i < p->n; i++) {
                fn_800FB000(r, 58);
                fn_800FB064(r, b8);
                fn_800F87F0(p, b8, &p->arr[i]);
                p->arr[i].v2(a, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->v4(30);
            break;
        }
        t = r->v5();
    }
}

} /* extern "C" */
