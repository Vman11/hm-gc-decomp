// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80190308 { C80190308(); u8 b[32]; };
extern "C" {
extern void *lbl_8035AEA8;
extern u32 lbl_80364AB0;
void fn_800FB064(R *, char *);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80190120(C80190308 *, void *, R *);
void fn_801A17B8(void *, void *, R *);
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 240, n); return fn_800F9788(m + 264, g, n); }
void fn_8018DBAC(u8 *p, u8 *a, R *r, int tok) {
    char b16[8];
    char b8[8];
    u32 i;
    switch (tok) {
    case 116:
        fn_800FB064(r, b16);
        fn_800FB064(r, b8);
        F(p,144,void*) = find(F(a,4,u8*), b8, b16);
        if (!F(p,144,void*)) r->v4(37);
        break;
    case 164:
        F(p,0,u32) |= lbl_80364AB0;
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        F(p,152,u8*) = new u8[32];
        fn_800F7E98();
        if (!F(p,152,u8*)) fn_800604C4(-4, 0, 0, 0);
        F(p,156,int) = 0;
        break;
    case 131:
        if (F(p,164,u32)) r->v4(39);
        F(p,164,u32) = (u16)fn_800FADA8(r);
        if (F(p,164,u32) < 1) r->v4(35);
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        F(p,160,C80190308*) = new C80190308[F(p,164,u32)];
        fn_800F7E98();
        if (!F(p,160,C80190308*)) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < F(p,164,u32); i++) fn_80190120(&F(p,160,C80190308*)[i], F(a,4,void*), r);
        fn_800FAEA0(r);
        break;
    default:
        fn_801A17B8(p, a, r);
        break;
    }
}

} /* extern "C" */
