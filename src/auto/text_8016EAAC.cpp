// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Stg { u8 x0[4]; u8 c[8]; u8 a[8]; u8 cout, aout; u8 pad[48 - 22]; } Stg;
typedef struct Mode { u8 pad[12]; int x12; } Mode;
typedef struct P { u32 type; u8 x4[16]; int cs; int as; } P;
typedef struct A { u16 x0; u16 cnt; } A;
extern u32 lbl_8035AD34;
extern Stg lbl_8032ED28[];
extern Mode lbl_8032ED08;
void fn_801756D8(Stg *);
void fn_80175634(Stg *, u32);
void fn_801753B8(Stg *, u8 *, u32, u16);
static inline void Set(Stg *s, u8 ca, u8 cb, u8 cc, u8 cd, u8 cop, u8 cbi, u8 csc, u8 ccl, u8 co,
                       u8 aa, u8 ab, u8 ac, u8 ad, u8 aop, u8 abi, u8 asc, u8 acl, u8 ao) {
    s->c[0] = ca; s->c[1] = cb; s->c[2] = cc; s->c[3] = cd;
    s->c[4] = cop; s->c[5] = cbi; s->c[6] = csc; s->c[7] = ccl; s->cout = co;
    s->a[0] = aa; s->a[1] = ab; s->a[2] = ac; s->a[3] = ad;
    s->a[4] = aop; s->a[5] = abi; s->a[6] = asc; s->a[7] = acl; s->aout = ao;
}
int fn_8016EAAC(A *a, P *p, u32 f) {
    int c1, c2, al;
    Stg *s;
    if (lbl_8035AD34 >= 16) return 0;
    s = &lbl_8032ED28[lbl_8035AD34];
    fn_801756D8(s);
    fn_80175634(s, lbl_8035AD34);
    switch (p->cs) {
    case 0: c1 = 8; break;
    case 1: c1 = 14; break;
    case 2: c1 = 10; break;
    default: return 0;
    }
    switch (p->as) {
    case 0: al = 4; c2 = 9; break;
    case 1: al = 6; c2 = 3; break;
    case 2: al = 5; c2 = 11; break;
    case 3: al = 0; c2 = 1; break;
    }
    if (c1 == 8 || al == 4) {
        fn_801753B8(s, p->x4, f, a->cnt);
        if (f) a->cnt++;
    }
    switch (p->type) {
    case 0:
        return 1;
    case 1:
        if (lbl_8032ED08.x12 != 1 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 0, 15, 15, c1, 0, 0, 0, 1, 0, 0, 7, 7, al, 0, 0, 0, 1, 0);
        break;
    case 2:
        if (lbl_8032ED08.x12 != 0) return 0;
        Set(s, 0, c1, c2, 15, 0, 0, 0, 1, 0, 7, 7, 7, al, 0, 0, 0, 1, 0);
        break;
    case 3:
        if (lbl_8032ED08.x12 != 0) return 0;
        Set(s, 0, c1, 1, 15, 0, 0, 0, 1, 0, 7, 7, 7, al, 0, 0, 0, 1, 0);
        break;
    case 10:
        if (lbl_8032ED08.x12 != 0) return 0;
        Set(s, c1, 0, c2, 15, 0, 0, 0, 1, 0, 7, 7, 7, al, 0, 0, 0, 1, 0);
        break;
    case 4:
        if (lbl_8032ED08.x12 != 4 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 15, 0, c1, 15, 0, 0, 0, 1, 0, 7, 0, al, 7, 0, 0, 0, 1, 0);
        break;
    case 5:
        if (lbl_8032ED08.x12 != 4 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 15, 0, c1, 15, 0, 0, 1, 1, 0, 7, 0, al, 7, 0, 0, 1, 1, 0);
        break;
    case 6:
        if (lbl_8032ED08.x12 != 4 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 15, 0, c2, 15, 0, 0, 0, 1, 0, 7, 0, al, 7, 0, 0, 0, 1, 0);
        break;
    case 7:
        if (lbl_8032ED08.x12 != 4 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 15, 0, c2, 15, 0, 0, 1, 1, 0, 7, 0, al, 7, 0, 0, 1, 1, 0);
        break;
    case 8:
        if (lbl_8032ED08.x12 != 1 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 15, c2, 1, 0, 0, 0, 0, 1, 0, 7, 7, 7, al, 0, 0, 0, 1, 0);
        break;
    case 9:
        if (lbl_8032ED08.x12 != 1 && lbl_8032ED08.x12 != 0) return 0;
        Set(s, 0, 15, 15, c1, 1, 0, 0, 1, 0, 0, 7, 7, al, 1, 0, 0, 1, 0);
        break;
    }
    lbl_8035AD34++;
    return 1;
}

} /* extern "C" */
