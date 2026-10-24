// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A;
struct V {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void s33(char *, void *, int, u32, u32);
};
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    void *a224;
    V *v228;
    u8 pad232[4];
    u32 u236;
    u8 pad240[40];
    char *s280;
    u32 u284;
    f32 *f288;
};
static u8 sPad[944] = {1};
static s32 tA[6] = {1};
static s32 tB[20] = {1};
static s32 tC[34] = {1};
extern f32 lbl_80362AB8;
extern char lbl_80362ABC[8], lbl_80362AC4[4];
extern void *lbl_8035B65C;
void fn_802494A4(P *, int);
void fn_80241588(P *, int, int, f32);
void fn_8024125C(P *, int);
void fn_8023F9C8(P *, u32);
void fn_802490E0(P *, int, f32);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);

void fn_800AEDD4(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    u32 j;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241588(p, 0, 0, lbl_80362AB8);
        break;
    case 2:
        fn_80241588(p, 1, 0, lbl_80362AB8);
        fn_8024125C(p, 0);
        for (j = 0; j < 8; j++) fn_8023F9C8(p, j);
        break;
    case 3:
        fn_8023F9C8(p, 8);
        fn_8023F9C8(p, 9);
        fn_802490E0(p, 0, *p->f288);
        break;
    case 4:
        fn_80241588(p, 2, 0, lbl_80362AB8);
        break;
    case 5:
        return;
    case 6:
        p->v228->s33(lbl_80362ABC, p->a224, 0, p->u236, p->u284);
        break;
    case 7:
        fn_802494A4(p, 2);
        break;
    case 8:
        if (fn_800F6CD0(p->s280, lbl_80362AC4) == 0) __ct__9C80253F24Fiiii(lbl_8035B65C, p->s280, 0, 0, 0);
        break;
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        if (fn_800F6CD0(p->s280, lbl_80362AC4) == 0) __ct__9C80253F24Fiiii(lbl_8035B65C, p->s280, 0, 0, 0);
        fn_802494A4(p, 4);
        break;
    case 11:
        break;
    }
}

} /* extern "C" */
