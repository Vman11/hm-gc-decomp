// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern void *lbl_8035B0B8;
void *fn_800FB284(R *);
void *fn_80110AA4(void *, void *);
u32 fn_800FADA8(R *);
u32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_801EB474(void *, R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801ED66C(u8 *p, R *r, int tok) {
    int has = 0;
    u32 i;
    switch (tok) {
    case 92: F(p,24,void*) = fn_80110AA4(F(F(p,16,u8*),204,void*), fn_800FB284(r)); break;
    case 95: F(p,32,int) = 1; break;
    case 94: F(p,32,int) = 3; break;
    case 93: {
        u32 t;
        F(p,32,int) = 2;
        t = r->v5();
        if (t == 103) F(p,36,int) = 1;
        else if (t == 104) F(p,36,int) = 0;
        else r->v4(30);
        break;
    }
    case 96: F(p,28,int) = 1; has = 1; break;
    case 97: F(p,28,int) = 4; has = 1; break;
    case 98: F(p,28,int) = 6; has = 1; break;
    case 99: F(p,28,int) = 3; has = 1; break;
    case 100: F(p,28,int) = 5; has = 1; break;
    case 101: F(p,28,int) = 2; has = 1; break;
    case 102: F(p,28,int) = 7; break;
    case 105:
        F(p,48,u32) = fn_800FADA8(r) * 2;
        if (F(p,32,int) == 1) {
            if (!lbl_8035B0B8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B0B8);
            F(p,40,f32*) = new f32[F(p,48,u32)];
            fn_800F7E98();
            if (!F(p,40,f32*)) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < F(p,48,u32); i++) F(p,40,f32*)[i] = fn_800FB2E0(r);
        } else if (F(p,32,int) == 3) {
            if (!lbl_8035B0B8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B0B8);
            F(p,44,u32*) = new u32[F(p,48,u32)];
            fn_800F7E98();
            if (!F(p,44,u32*)) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < F(p,48,u32); i++) F(p,44,u32*)[i] = fn_800FB33C(r);
        }
        r->v5();
        break;
    default:
        fn_801EB474(p, r);
        break;
    }
    if (has) {
        if (F(p,32,int) == 1) F(p,36,f32) = fn_800FB2E0(r);
        else if (F(p,32,int) == 3) F(p,36,u32) = fn_800FB33C(r);
    }
}

} /* extern "C" */
