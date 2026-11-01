// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23();
};
struct FT { void *a, *b, *c; void (*f12)(u32, f32 *); };
extern FT lbl_803286D0;
extern u8 *lbl_8035B308;
extern char lbl_8035D1F8[0x4];
extern f32 lbl_8035D234;
extern const u32 lbl_8035D22C;
extern const u32 lbl_8035D230;
extern f32 lbl_8035D238;
int fn_800F6CD0(u32, char *);
u32 fn_802288FC(u8 *, u32);
void fn_80190C98(u8 *);
void fn_80190940(u32, u32);
void fn_80107F3C(u32, f32 *);
void fn_80240DBC(u8 *, f32);
void fn_8024118C(u8 *, u32, int);
void fn_802494A4(u8 *, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define OBJ (*(u8 **)(U32(224) + 156))
static inline void Off(u8 *p) {
    *(u32 *)(OBJ + 152) |= lbl_8035D230;
    fn_80240DBC(p, lbl_8035D238);
}
static inline void On(u8 *p) {
    *(u32 *)(OBJ + 152) &= ~8;
    if (U32(284) && fn_800F6CD0(U32(284), lbl_8035D1F8) == 0) fn_8024118C(p, U32(284), 0);
    if (U32(288) && fn_800F6CD0(U32(288), lbl_8035D1F8) == 0) fn_8024118C(p, U32(288), 1);
}
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_80048FD0(u8 *p, s32 n);
void fn_80049334();
void fn_8004938C();
void fn_800493E4();
void fn_80049420();
void fn_800494FC();
void fn_800496A0();
void fn_8023D198();
void fn_8023F5F4();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80295B90[];
extern char lbl_80295B9C[];
extern char lbl_8035D1E8[];
extern char lbl_8035D1F0[];
extern char lbl_8035D1F8[0x4];
extern char lbl_8035D1FC[];
extern char lbl_8035D204[];
extern char lbl_8035D20C[];
extern char lbl_8035D214[];
extern char lbl_8035D21C[];
extern char lbl_8035D224[];
void *lbl_802B5E10[173] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035D1E8, (void *)&lbl_8035D1F0, (void *)&lbl_8035D1F8, (void *)&lbl_8035D1F8, (void *)&lbl_8035D1F8, (void *)&lbl_8035D1FC, (void *)&lbl_8035D204, (void *)&lbl_8035D20C, (void *)&lbl_8035D1FC, (void *)&lbl_8035D214, (void *)&lbl_8035D21C, (void *)&lbl_80295B90, (void *)&lbl_8035D224, (void *)&lbl_80295B9C, (void *)&lbl_8035D1FC, (void *)0x0, (void *)0x1, (void *)&lbl_8035D214, (void *)0x1, (void *)0x1, (void *)&lbl_8035D21C, (void *)0x2, (void *)0x1, (void *)&lbl_80295B90, (void *)0x3, (void *)0x1, (void *)&lbl_8035D224, (void *)0x4, (void *)0x1, (void *)&lbl_80295B9C, (void *)0x5, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5 };
static s32 tA[6] = { 0, 3, 4, 7, 9, 10 };
static s32 tB[11] = { 1, 1, 1, 3, 1, 1, 1, 2, 1, 3, 3 };
static s32 tC[11] = { 0, 1, 2, 3, 4, 3, 4, 5, 3, 3, 3 };
void *lbl_802B6134[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800494FC, (void *)&fn_80249AC4, (void *)&fn_80049420, (void *)&fn_80242210, (void *)&fn_800493E4, (void *)&fn_8023D198, (void *)&fn_800496A0, (void *)&fn_80048FD0, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_80049334, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8004938C };
void fn_80048FD0(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    f32 w[3];
    f32 v[3];
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        if (U32(280) && fn_800F6CD0(U32(280), lbl_8035D1F8) == 0) {
            u8 *o;
            u8 *tt;
            U32(300) = fn_802288FC(lbl_8035B308, U32(280));
            v[0] = lbl_8035D234;
            v[1] = lbl_8035D234;
            v[2] = lbl_8035D234;
            o = OBJ;
            tt = *(u8 **)(o + 48);
            if (tt) {
                lbl_803286D0.f12(*(u32 *)(tt + 16), v);
                *(u32 *)(tt + 32) |= lbl_8035D22C;
                fn_80190C98(o);
            }
            fn_80190940(*(u32 *)(U32(224) + 156), *(u32 *)(U32(300) + 156));
        }
        if (U32(296)) {
            u32 s;
            w[0] = **(f32 **)(p + 296);
            w[1] = **(f32 **)(p + 296);
            w[2] = **(f32 **)(p + 296);
            s = *(u32 *)(OBJ + 120);
            if (s) fn_80107F3C(s, w);
        }
        (*(VC **)(p + 224))->s23();
        Off(p);
        break;
    case 1: {
        bool b = *(s32 **)(p + 292) == 0;
        if (!b) b = **(s32 **)(p + 292) == 0;
        if (b) On(p);
        else Off(p);
        break;
    }
    case 2: {
        bool b = *(s32 **)(p + 292) == 0;
        if (!b) b = **(s32 **)(p + 292) == 0;
        if (b) Off(p);
        else On(p);
        break;
    }
    case 3:
        return;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        fn_802494A4(p, 2);
        break;
    case 6:
        break;
    }
}

} /* extern "C" */
