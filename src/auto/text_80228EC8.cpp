// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void v2(void*,int,int); virtual void s3(); virtual void s4(); virtual u32 v5(); };
struct O { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void v8(void*,void*,char*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80215F50 { C80215F50(); ~C80215F50(); u8 b[44]; R *rd; u8 c[4]; };
extern "C" {
extern char lbl_80365CDC[4];
extern char lbl_80365CE0[4];
extern u8 lbl_802F1180[];
extern u8 *lbl_8035B460;
extern void *lbl_8035B374, *lbl_8035B34C, *lbl_8035B39C, *lbl_8035B388;
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80215BFC(C80215F50 *);
void fn_80060E30(int, ...);
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
O *fn_8023CA4C(void *, char *);
void fn_80233604(void *, R *);
void fn_8022ED98(void *, R *);
void fn_80235FDC(void *, R *);
void fn_80235628(void *);
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
static inline void rd57(u8 *p, R *r, char *b8, char *b16, char *b32, char *b24) {
            u32 n = fn_800FADA8(r);
            u32 i;
            for (i = 0; i < n; i++) {
                void *x;
                O *o;
                fn_800FB064(r, b8);
                fn_800FB064(r, b16);
                fn_800FB064(r, b32);
                fn_800FB064(r, b24);
                x = find(F(lbl_8035B460,8,u8*), b16, b8);
                o = fn_8023CA4C(p, b24);
                if (o) { o->v8(p, x, b32); F(p,84,int)++; }
            }
            fn_800FAEA0(r);
            }
#pragma opt_loop_invariants off
void fn_80228EC8(u8 *p, char *path, int flag) {
    C80215F50 f;
    char b32[8];
    char b24[8];
    char b16[8];
    char b8[8];
    int e;
    R *r;
    u32 t;
    if (flag) e = fn_80215C84(&f, path, lbl_80365CDC, 2, 0);
    else e = fn_80215C84(&f, path, lbl_80365CE0, 2, 0);
    if (e) fn_80060E30(e, path);
    r = f.rd;
    r->v2(lbl_802F1180, 4, 0);
    while ((t = r->v5()) != 0) {
        switch (t) {
        case 57:
            rd57(p, r, b8, b16, b32, b24);
            break;
        case 58: fn_80233604(lbl_8035B374, r); break;
        case 59: fn_8022ED98(lbl_8035B34C, r); break;
        case 60: fn_80235FDC(lbl_8035B39C, r); break;
        }
    }
    fn_80235628(lbl_8035B388);
    fn_80215BFC(&f);
}
#pragma opt_loop_invariants reset

} /* extern "C" */
