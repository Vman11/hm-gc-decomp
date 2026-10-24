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
    virtual void v15();
    virtual void s16(V3 *, int, int, int, int);
    virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23(); virtual void s24();
};
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    A *a224;
    u8 pad228[52];
    u32 u280;
    s32 *s284;
    s32 i288;
    s32 i292;
    u8 pad296[4];
    s32 i300;
    u32 n304;
};
static u8 sPad[796] = {1};
static s32 tA[8] = {1};
static s32 tB[18] = {1};
static s32 tC[34] = {1};
extern f32 lbl_8035D854;
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void *fn_80240028(P *);
void fn_80245E58(void *, int, V3 *);
void fn_80240DBC(P *, f32);
void fn_8024125C(P *, int);
void fn_80240F24(P *, int, int);
void fn_80240A8C(P *, int, u32);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, u32, A *, int, int, int);

void fn_8004E9A4(P *p, s32 n) {
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
    case 0: {
        V3 v;
        fn_80241628(p, 0, 0);
        if (*p->s284) {
            p->a224->s23();
            p->i292 = 1;
        } else {
            p->a224->s24();
            p->i292 = 0;
        }
        p->n304 = 0;
        fn_80245E58(fn_80240028(p), 0, &v);
        p->a224->s14(&v, 0, 0, 0, 0);
        p->a224->s16(&v, 0, 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 1:
        fn_80241628(p, 0, 0);
        break;
    case 2:
        fn_80241628(p, 1, 0);
        p->i300 = 1;
        fn_80240DBC(p, lbl_8035D854);
        if (p->n304 == 0) fn_8024125C(p, 0);
        else fn_80240F24(p, 1, 3);
        fn_80240A8C(p, 0, p->n304++);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        p->a224->s24();
        p->i292 = 0;
        break;
    case 4:
        p->a224->s23();
        p->i292 = 1;
        break;
    case 5:
        return;
    case 6:
        fn_802494A4(p, 0);
        p->a224->s23();
        p->i292 = 1;
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        p->i288 = 1;
        break;
    case 9:
        p->i288 = 0;
        break;
    case 10:
        if (p->i300 == 0) fn_802494A4(p, 1);
        break;
    case 11:
        fn_80242BC0(fn_80242144(p, 1), p->u280, p->a224, 0, 0, 0);
        fn_802494A4(p, 3);
        break;
    case 12:
        break;
    }
}

} /* extern "C" */
