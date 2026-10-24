// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void s14(V3 *, int, int, int, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23(); virtual void s24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void s33(char *, A *, int, int, int);
    u8 pad4[176];
    u32 fl180;
};
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    A *a224;
    A *a228;
    u8 pad232[4];
    V3 *v236;
    u8 pad240[40];
    u32 s280;
    f32 *f284;
    f32 *f288;
    A *a292;
    V3 v296;
};
static u8 sPad[812] = {1};
static s32 tA[7] = {1};
static s32 tB[19] = {1};
static s32 tC[34] = {1};
extern u8 *lbl_8035B308;
extern f32 lbl_8035C3D8, lbl_8035C3DC;
extern char lbl_8035C3E0[4], lbl_8035C3E4[8], lbl_8035C3EC[8];
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void fn_8023F5E8(P *, u32);
void fn_80241588(P *, int, int, f32);
void fn_80242174(P *, f32);
int fn_800F6CD0(u32, char *);
void fn_80240B50(P *, u32, int);
void fn_802490E0(P *, int, f32);
void fn_80240F24(P *, int, int);

void fn_80041054(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        p->a224->fl180 |= 4;
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241628(p, 1, 0);
        fn_8023F5E8(p, *(u32 *)(lbl_8035B308 + 72));
        fn_80241588(p, 0, 0, lbl_8035C3D8);
        fn_80242174(p, lbl_8035C3DC);
        p->a224->s24();
        break;
    case 2:
        p->a224->s23();
        if (fn_800F6CD0(p->s280, lbl_8035C3E0) == 0) fn_80240B50(p, p->s280, 0);
        fn_802490E0(p, 0, *p->f284);
        break;
    case 3:
        fn_80242174(p, *p->f288);
        break;
    case 4:
        fn_8023F5E8(p, 0);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8035C3D8);
        fn_80242174(p, *p->f288);
        break;
    case 5:
        return;
    case 6:
        p->a292 = p->a228;
        if (p->v236) {
            p->v296 = *p->v236;
            p->a224->s14(&p->v296, 0, 0, 0, 0);
        }
        if (p->a292) p->a292->s33(lbl_8035C3E4, p->a224, 0, 0, 0);
        fn_802494A4(p, 2);
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        fn_802494A4(p, 4);
        if (p->a292) p->a292->s33(lbl_8035C3EC, p->a224, 0, 0, 0);
        break;
    case 9:
        fn_802494A4(p, 1);
        break;
    case 10:
        fn_80240F24(p, 0, 3);
        break;
    case 11:
        fn_80240F24(p, 4, 5);
        break;
    case 12:
        break;
    }
}

} /* extern "C" */
