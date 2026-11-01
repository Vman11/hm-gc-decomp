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

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_80041054(P *p, s32 n);
void fn_80041348();
void fn_800413B8();
void fn_80041404();
void fn_800414A0();
void fn_80041668();
void fn_80041670();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029504C[];
extern char lbl_80295058[];
extern char lbl_80295064[];
extern char lbl_80295070[];
extern char lbl_8029507C[];
extern char lbl_80295088[];
extern char lbl_80295094[];
extern char lbl_802950A0[];
extern char lbl_802950AC[];
extern char lbl_802950B8[];
extern char lbl_802950C4[];
extern char lbl_8035C358[];
extern char lbl_8035C360[];
extern char lbl_8035C368[];
extern char lbl_8035C370[];
extern char lbl_8035C374[];
extern char lbl_8035C37C[];
extern char lbl_8035C384[];
extern char lbl_8035C38C[];
extern char lbl_8035C394[];
extern char lbl_8035C39C[];
extern char lbl_8035C3A4[];
extern char lbl_8035C3A8[];
extern char lbl_8035C3B0[];
extern char lbl_8035C3B8[];
extern char lbl_8035C3C0[];
extern char lbl_8035C3C8[];
extern char lbl_8035C3D0[];
void *lbl_802B09B8[203] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035C358, (void *)&lbl_8035C360, (void *)&lbl_8035C368, (void *)&lbl_8035C358, (void *)&lbl_8035C360, (void *)&lbl_8035C370, (void *)&lbl_8035C374, (void *)&lbl_8029504C, (void *)0x0, (void *)&lbl_8035C37C, (void *)&lbl_80295058, (void *)0x0, (void *)&lbl_8035C384, (void *)&lbl_80295064, (void *)0x0, (void *)&lbl_8035C38C, (void *)&lbl_80295070, (void *)0x0, (void *)&lbl_8035C394, (void *)&lbl_8029507C, (void *)0x0, (void *)&lbl_8035C39C, (void *)&lbl_80295088, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8035C3A4, (void *)&lbl_8035C3A8, (void *)&lbl_8035C3B0, (void *)&lbl_8035C3B8, (void *)&lbl_80295094, (void *)&lbl_8035C3C0, (void *)&lbl_8035C3C8, (void *)&lbl_802950A0, (void *)&lbl_8035C3A4, (void *)&lbl_802950AC, (void *)&lbl_802950B8, (void *)&lbl_802950C4, (void *)&lbl_8035C3D0, (void *)&lbl_8035C3C8, (void *)0x0, (void *)0x1, (void *)&lbl_802950A0, (void *)0x1, (void *)0x1, (void *)&lbl_8035C3A4, (void *)0x2, (void *)0x1, (void *)&lbl_802950AC, (void *)0x3, (void *)0x1, (void *)&lbl_802950B8, (void *)0x4, (void *)0x1, (void *)&lbl_802950C4, (void *)0x5, (void *)0x1, (void *)&lbl_8035C3D0, (void *)0x6, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6 };
static s32 tA[7] = { 0, 5, 8, 11, 14, 16, 18 };
static s32 tB[19] = { 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 2, 3, 1, 1, 1, 4, 1, 4, 5 };
static s32 tC[19] = { 0, 1, 2, 3, 4, 5, 6, 5, 5, 7, 5, 5, 8, 9, 5, 10, 5, 11, 5 };
void *lbl_802B0D98[15] = { (void *)0x0, (void *)0x0, (void *)&fn_800414A0, (void *)&fn_80249AC4, (void *)&fn_80041404, (void *)&fn_80242210, (void *)&fn_800413B8, (void *)&fn_8023D198, (void *)&fn_80041668, (void *)&fn_80041054, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80041348, (void *)&fn_8003FB68 };
void *wAX_802B0DD4[5] = { (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_80041670, (void *)&fn_8003FB6C };
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
