// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void v2(void*,int,int); virtual void s3(); virtual void v4(int); };
struct P0 { u8 pad_[16]; virtual void s0(); virtual void v1(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80215F50 { C80215F50(); ~C80215F50(); u8 b[44]; R *rd; u8 c[4]; };
struct C80108478 { C80108478(); ~C80108478(); u8 b[16]; };
extern "C" {
extern char lbl_80363920[4];
extern char lbl_80363924[6];
extern u8 lbl_802E24E0[];
extern void *lbl_8035AA68;
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80215BFC(C80215F50 *);
void fn_80060E30(int, ...);
void fn_800FB064(R *, char *);
void fn_800FB000(R *, int);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_800F87F0(void *, char *, C80108478 *);
void fn_80108174(C80108478 *, R *);
struct P { P0 h; u32 n; C80108478 *arr; };
static inline void rd(P *p, R *r, char *b8) {
    for (u32 i = 0; i < p->n; i++) {
        fn_800FB000(r, 57);
        fn_800FB064(r, b8);
        fn_800F87F0(p, b8, &p->arr[i]);
        fn_80108174(&p->arr[i], r);
    }
}
void fn_801084E8(P *p, char *path) {
    C80215F50 f;
    char b8[8];
    R *r;
    u32 i;
    int e = fn_80215C84(&f, path, lbl_80363920, 2, 0);
    if (e) fn_80060E30(e, lbl_80363924, path, lbl_80363920);
    r = f.rd;
    if (F(p,0,u32)) p->h.v1();
    r->v2(lbl_802E24E0, 3, 0);
    fn_800FB000(r, 57);
    p->n = fn_800FADA8(r);
    if (!p->n) r->v4(35);
    fn_800F8E38(p, p->n);
    if (!lbl_8035AA68) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA68);
    p->arr = new C80108478[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    rd(p, r, b8);
    fn_800FAEA0(r);
    fn_80215BFC(&f);
}

} /* extern "C" */
