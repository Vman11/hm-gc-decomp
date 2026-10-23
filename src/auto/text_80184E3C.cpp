// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void v2(void*,int,int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct P0 { u8 pad_[16]; virtual void s0(); virtual void v1(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80184CE0 { C80184CE0(); ~C80184CE0(); u8 b[612]; };
extern "C" {
extern u8 lbl_802E8928[];
extern void *lbl_8035AE10;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800FB000(R *, int);
void fn_800FAEA0(R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_8017F6C4(void *, void *, char *);
void fn_800F87F0(void *, char *, C80184CE0 *);
void fn_80183168(C80184CE0 *, void *, R *);
struct P { P0 h; u32 n; C80184CE0 *arr; };
void fn_80184E3C(P *p, void *a, R *r) {
    char b16[16];
    char b8[8];
    char *name;
    u32 i;
    if (p->arr) p->h.v1();
    r->v2(lbl_802E8928, 46, 0);
    if (r->v5() == 57) { fn_800FB064(r, b8); name = b8; r->v5(); }
    else name = 0;
    p->n = fn_800FADA8(r);
    if (p->n < 1) r->v4(35);
    if (!lbl_8035AE10) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AE10);
    p->arr = new C80184CE0[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    fn_800F8E38(p, p->n);
    fn_8017F6C4(a, p, name);
    for (i = 0; i < p->n; i++) {
        fn_800FB000(r, 58);
        fn_800FB064(r, b16);
        fn_800F87F0(p, b16, &p->arr[i]);
        fn_80183168(&p->arr[i], a, r);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
