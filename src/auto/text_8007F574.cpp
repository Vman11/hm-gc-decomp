// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void s13(void *, int, int, int, int);
    virtual void s14(void *, int, int, int, int);
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void s23();
    virtual void s24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void s33(const char *, void *, int, f32 *, int);
};
extern u8 *lbl_8035B308;
extern VC *lbl_8035A248;
extern void *lbl_8035B65C;
extern f32 lbl_8035FAA8;
extern f32 lbl_8035FAAC;
extern f32 lbl_8035FAB0;
extern f32 lbl_8035FAB4;
extern const char lbl_8035FAB8[7];
extern char lbl_802989E8[];
void fn_80107F3C(u32, f32 *);
void fn_8023F5E8(u8 *, u32);
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
void fn_80242168(f32, u8 *);
void fn_802494A4(u8 *, int);
int rand(void);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define VCP(o) (*(VC **)(p + (o)))
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8007F574(u8 *p, s32 n);
void fn_8007F8F8();
void fn_8007F92C();
void fn_8007F960();
void fn_8007F9A0();
void fn_8007F9F0();
void fn_8007FBA8();
void fn_8007FBB0();
void fn_8023D198();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802989A0[];
extern char lbl_802989AC[];
extern char lbl_802989B8[];
extern char lbl_802989C4[];
extern char lbl_802989D0[];
extern char lbl_802989DC[];
extern char lbl_8035FA30[];
extern char lbl_8035FA38[];
extern char lbl_8035FA40[];
extern char lbl_8035FA48[];
extern char lbl_8035FA50[];
extern char lbl_8035FA54[];
extern char lbl_8035FA5C[];
extern char lbl_8035FA64[];
extern char lbl_8035FA6C[];
extern char lbl_8035FA74[];
extern char lbl_8035FA78[];
extern char lbl_8035FA80[];
extern char lbl_8035FA88[];
extern char lbl_8035FA90[];
extern char lbl_8035FA98[];
extern char lbl_8035FAA0[];
void *lbl_802C3B60[197] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035FA30, (void *)&lbl_802989A0, (void *)&lbl_8035FA38, (void *)&lbl_802989AC, (void *)&lbl_8035FA40, (void *)&lbl_8035FA48, (void *)&lbl_8035FA50, (void *)&lbl_8035FA40, (void *)&lbl_8035FA54, (void *)&lbl_8035FA5C, (void *)&lbl_8035FA40, (void *)&lbl_8035FA64, (void *)&lbl_8035FA6C, (void *)&lbl_8035FA6C, (void *)&lbl_8035FA74, (void *)&lbl_8035FA74, (void *)&lbl_8035FA74, (void *)&lbl_8035FA78, (void *)&lbl_8035FA80, (void *)&lbl_8035FA88, (void *)&lbl_8035FA90, (void *)&lbl_802989B8, (void *)&lbl_8035FA78, (void *)&lbl_8035FA98, (void *)&lbl_802989C4, (void *)&lbl_802989D0, (void *)&lbl_802989DC, (void *)&lbl_8035FA80, (void *)&lbl_8035FAA0, (void *)&lbl_802989B8, (void *)&lbl_8035FA78, (void *)0x0, (void *)0x1, (void *)&lbl_8035FA98, (void *)0x1, (void *)0x1, (void *)&lbl_802989C4, (void *)0x2, (void *)0x1, (void *)&lbl_802989D0, (void *)0x3, (void *)0x1, (void *)&lbl_802989DC, (void *)0x4, (void *)0x1, (void *)&lbl_8035FA80, (void *)0x5, (void *)0x1, (void *)&lbl_8035FAA0, (void *)0x6, (void *)0x1, (void *)&lbl_802989B8, (void *)0x7, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7 };
static s32 tA[8] = { 0, 5, 6, 9, 13, 16, 20, 23 };
static s32 tB[25] = { 1, 1, 1, 1, 1, 5, 1, 1, 3, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 3, 1, 1, 4, 1 };
static s32 tC[25] = { 0, 1, 2, 3, 4, 5, 5, 6, 5, 5, 7, 8, 5, 9, 5, 9, 10, 5, 10, 5, 9, 5, 9, 11, 5 };
void *lbl_802C3F5C[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8007F9F0, (void *)&fn_80249AC4, (void *)&fn_8007F9A0, (void *)&fn_80242210, (void *)&fn_8007F960, (void *)&fn_8023D198, (void *)&fn_8007FBA8, (void *)&fn_8007F574, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8007F8F8, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8007FBB0, (void *)&fn_8007F92C };
void fn_8007F574(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0: {
        f32 v[3];
        u32 o;
        U32(280) = *(u32 *)(lbl_8035B308 + 72);
        VCP(224)->s13(p + 284, 0, 0, 0, 0);
        VCP(224)->s24();
        v[0] = lbl_8035FAA8;
        v[1] = lbl_8035FAA8;
        v[2] = lbl_8035FAA8;
        o = *(u32 *)(*(u8 **)((u8 *)VCP(224) + 156) + 120);
        if (o) fn_80107F3C(o, v);
        fn_8023F5E8(p, 0);
        fn_80241628(p, 1, 0);
        break;
    }
    case 1:
        lbl_8035A248 = VCP(224);
        VCP(224)->s23();
        fn_8023F5E8(p, U32(280));
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8035FAAC);
        fn_80242168(lbl_8035FAB0, p);
        break;
    case 2:
        fn_80241588(p, 2, 0, lbl_8035FAAC);
        break;
    case 3:
        lbl_8035A248 = 0;
        VCP(224)->s24();
        VCP(224)->s14(p + 284, 0, 0, 0, 0);
        fn_8023F5E8(p, 0);
        fn_80241628(p, 1, 0);
        break;
    case 4: {
        f32 w[3];
        w[0] = lbl_8035FAB4;
        w[1] = lbl_8035FAB4;
        w[2] = lbl_8035FAB4;
        VCP(280)->s13(w, 0, 0, 0, 0);
        VCP(224)->s14(w, 0, 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 5:
        return;
    case 6:
        fn_802494A4(p, 2);
        break;
    case 7: {
        u32 r;
        u32 m;
        r = 0;
        m = U32(124) - 1;
        if (m) r = rand() % m;
        fn_80241588(p, r, 0, lbl_8035FAAC);
        if (r == 1) fn_80242168(lbl_8035FAB0, p);
        break;
    }
    case 8: {
        f32 x;
        x = -**(f32 **)(p + 296);
        VCP(280)->s33(lbl_8035FAB8, VCP(224), 0, &x, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802989E8, 0, 0, 0);
        fn_802494A4(p, 3);
        break;
    }
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        fn_802494A4(p, 1);
        break;
    case 11:
        fn_802494A4(p, 4);
        break;
    case 12:
        break;
    }
}

} /* extern "C" */
