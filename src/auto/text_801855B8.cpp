// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct O { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void v17(void*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern void *lbl_8035AEA8;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
u32 fn_800FB33C(R *);
void fn_800FAFA8(R *);
void fn_800FAF50(R *);
void fn_800FAEA0(R *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
O *fn_8019565C(void *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801A17B8(void *, void *, R *, u32);
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
#pragma opt_loop_invariants off
void fn_801855B8(u8 *p, u8 *lib, R *r, u32 tok) {
    char b16[8];
    char b8[8];
    u32 i;
    if (tok == 88) {
        if (!F(p,156,O**)) {
            fn_800FAFA8(r);
            F(p,148,u32) = fn_800FB33C(r);
            fn_800FAF50(r);
            if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AEA8);
            F(p,156,O**) = new O*[F(p,148,u32)];
            fn_800F7E98();
            if (!F(p,156,O**)) fn_800604C4(-4, 0, 0, 0);
            if (r->v5() == 5) F(p,152,u32) = F(p,148,u32);
            else { F(r,4,int) = 1; F(p,152,u32) = 0; }
        } else {
            F(p,152,u32) = fn_800FADA8(r);
            if (F(p,152,u32) > F(p,148,u32)) r->v4(35);
        }
        if (F(p,152,u32)) {
            for (i = 0; i < F(p,152,u32); i++) {
                fn_800FB064(r, b16);
                fn_800FB064(r, b8);
                F(p,156,O**)[i] = fn_8019565C(find(lib, b8, b16));
                if (!F(p,156,O**)[i]) r->v4(37);
                if (F(F(p,156,O**)[i],136,u32)) r->v4(35);
                F(p,156,O**)[i]->v17(p);
            }
            fn_800FAEA0(r);
        }
    } else fn_801A17B8(p, lib, r, tok);
}
#pragma opt_loop_invariants reset

} /* extern "C" */
