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

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8004E9A4(P *p, s32 n);
void fn_8004EC98();
void fn_8004ED40();
void fn_8004ED84();
void fn_8004EDF8();
void fn_8004EFB8();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80296194[];
extern char lbl_802961A0[];
extern char lbl_802961AC[];
extern char lbl_8035D7D0[];
extern char lbl_8035D7D8[];
extern char lbl_8035D7E0[];
extern char lbl_8035D7E8[];
extern char lbl_8035D7F0[];
extern char lbl_8035D7F8[];
extern char lbl_8035D7FC[];
extern char lbl_8035D80C[];
extern char lbl_8035D814[];
extern char lbl_8035D81C[];
extern char lbl_8035D824[];
extern char lbl_8035D82C[];
extern char lbl_8035D834[];
extern char lbl_8035D83C[];
extern char lbl_8035D844[];
extern char lbl_8035D84C[];
void *lbl_802B86E0[199] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035D7D0, (void *)&lbl_8035D7D0, (void *)0x0, (void *)&lbl_8035D7D8, (void *)&lbl_8035D7D8, (void *)0x0, (void *)&lbl_8035D7E0, (void *)&lbl_8035D7E0, (void *)0x0, (void *)&lbl_8035D7E8, (void *)&lbl_8035D7E8, (void *)0x0, (void *)&lbl_8035D7F0, (void *)&lbl_8035D7F0, (void *)&lbl_8035D7F8, (void *)&lbl_8035D7F8, (void *)&lbl_8035D7FC, (void *)&lbl_8035D7F8, (void *)&lbl_8035D7F8, (void *)&lbl_8035D7F8, (void *)&lbl_8035D80C, (void *)&lbl_8035D814, (void *)&lbl_8035D81C, (void *)&lbl_80296194, (void *)&lbl_8035D824, (void *)&lbl_8035D82C, (void *)&lbl_8035D834, (void *)&lbl_8035D83C, (void *)&lbl_8035D844, (void *)&lbl_802961A0, (void *)&lbl_8035D84C, (void *)&lbl_802961AC, (void *)&lbl_8035D824, (void *)0x0, (void *)0x1, (void *)&lbl_8035D82C, (void *)0x1, (void *)0x1, (void *)&lbl_8035D834, (void *)0x2, (void *)0x1, (void *)&lbl_8035D83C, (void *)0x3, (void *)0x1, (void *)&lbl_8035D844, (void *)0x4, (void *)0x1, (void *)&lbl_802961A0, (void *)0x5, (void *)0x1, (void *)&lbl_8035D84C, (void *)0x6, (void *)0x1, (void *)&lbl_802961AC, (void *)0x7, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7 };
static s32 tA[8] = { 0, 4, 7, 9, 10, 11, 12, 15 };
static s32 tB[18] = { 1, 1, 1, 1, 2, 1, 1, 3, 1, 4, 4, 4, 2, 1, 1, 2, 1, 1 };
static s32 tC[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 5, 5, 8, 9, 5, 10, 5, 5, 11, 5 };
void *lbl_802B8AAC[16] = { (void *)0x0, (void *)0x0, (void *)&fn_8004EDF8, (void *)&fn_80249AC4, (void *)&fn_8004ED84, (void *)&fn_80242210, (void *)&fn_8004ED40, (void *)&fn_8023D198, (void *)&fn_8004EFB8, (void *)&fn_8004E9A4, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8004EC98, (void *)&fn_8003FB68, (void *)&fn_802416D4 };
void *wAX_802B8AEC[4] = { (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
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
