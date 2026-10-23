// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void v2(void*,int,int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct P0 { u8 pad_[16]; virtual void s0(); virtual void v1(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C8017E98C { C8017E98C(); ~C8017E98C(); u8 b[72]; };
extern "C" {
extern u8 lbl_802E8730[];
extern void *lbl_8035ADC0;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800FB000(R *, int);
void fn_800FAEA0(R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_8017F5F8(void *, void *, char *);
void fn_800F87F0(void *, char *, C8017E98C *);
void fn_8017E1DC(C8017E98C *, void *, R *);
struct P { P0 h; u32 n; C8017E98C *arr; };
void fn_8017EAE8(P *p, void *a, R *r) {
    char b16[8];
    char b8[8];
    u32 i;
    char *name;
    if (F(p,0,u32)) p->h.v1();
    r->v2(lbl_802E8730, 12, 0);
    if (r->v5() == 57) { fn_800FB064(r, b8); name = b8; r->v5(); }
    else name = 0;
    p->n = fn_800FADA8(r);
    if (p->n < 1) r->v4(35);
    fn_800F8E38(p, p->n);
    fn_8017F5F8(a, p, name);
    if (!lbl_8035ADC0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ADC0);
    p->arr = new C8017E98C[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < p->n; i++) {
        fn_800FB000(r, 58);
        fn_800FB064(r, b16);
        fn_800F87F0(p, b16, &p->arr[i]);
        fn_8017E1DC(&p->arr[i], a, r);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
