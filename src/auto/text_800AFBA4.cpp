// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

#define V(n) virtual void n();
class Snd { public: V(s0) V(s1) V(s2) V(s3) V(s4) V(s5) V(s6) V(s7) V(s8) V(s9) V(s10) V(s11) V(s12) V(s13) V(s14) V(s15) V(s16) V(s17) V(s18) V(s19)
    V(s20) V(s21) V(s22) V(s23) V(s24) V(s25) V(s26) V(s27) V(s28) V(s29) V(s30) V(s31) V(s32)
    virtual void play(char *, void *, int, f32 *, int); };
struct G72 { u8 p[72]; Snd *f72; };
struct Fl { u8 p[4]; u32 f4; u8 p8[4]; u32 f12; };
class O { public: u8 p0[96]; s32 f96; u8 p100[112]; Fl *f212; u8 p216[4]; s32 f220; void *f224; u8 p228[52]; f32 *f280; f32 *f284; s32 *f288; f32 *f292; f32 *f296; f32 *f300;
    Snd *f304; s32 f308; s32 f312; s32 f316; };
extern "C" {
extern G72 *lbl_8035B308;
extern f32 lbl_80362C04, lbl_80362C08, lbl_80362C0C;
extern char lbl_80362BC4[8], lbl_80362BCC[8], lbl_80362C10[8];
int rand(void);
void fn_80241628(O *, int, int);
void fn_802490E0(O *, int, f32);
void fn_802494A4(O *, int);
void fn_802401A0(O *);
void fn_802401D0(O *);
void fn_80241588(O *, int, int, f32);
void fn_80240C2C(O *, int);
void fn_80240DBC(O *, f32);
void fn_8024125C(O *, int);
void fn_80241DD0(O *, char *, int, int, int, int);
void fn_80249008(O *, int);
}
inline f32 Rnd(O *o) {
    s32 i = rand() % 10000u;
    f32 r = lbl_80362C04 * (f32)i;
    f32 d = *o->f296 - *o->f292;
    r = d * r + *o->f292;
    return r;
}
inline void Go(O *o, int n, u32 f) {
    if (f) fn_80240C2C(o, n);
    else fn_80240DBC(o, lbl_80362C0C);
}
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
extern "C" void fn_800AFBA4(O *o, s32 idx);
void fn_800B0064();
void fn_800B00C0();
void fn_800B011C();
void fn_800B0188();
void fn_800B02B8();
void fn_800B03B4();
void fn_800B04C0();
void fn_800B0510();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029B844[];
extern char lbl_8029B850[];
extern char lbl_8029B85C[];
extern char lbl_8029B868[];
extern char lbl_8029B874[];
extern char lbl_8029B880[];
extern char lbl_8029B88C[];
extern char lbl_8029B898[];
extern char lbl_80362B40[];
extern char lbl_80362B48[];
extern char lbl_80362B4C[];
extern char lbl_80362B54[];
extern char lbl_80362B5C[];
extern char lbl_80362B64[];
extern char lbl_80362B6C[];
extern char lbl_80362B74[];
extern char lbl_80362B7C[];
extern char lbl_80362B84[];
extern char lbl_80362B8C[];
extern char lbl_80362B94[];
extern char lbl_80362B9C[];
extern char lbl_80362BA4[];
extern char lbl_80362BAC[];
extern char lbl_80362BB4[];
extern char lbl_80362BBC[];
extern char lbl_80362BC4[8], lbl_80362BCC[8], lbl_80362C10[8];
extern char lbl_80362BC4[8], lbl_80362BCC[8], lbl_80362C10[8];
extern char lbl_80362BD4[];
extern char lbl_80362BDC[];
extern char lbl_80362BE4[];
extern char lbl_80362BE8[];
extern char lbl_80362BEC[];
extern char lbl_80362BF4[];
extern char lbl_80362BFC[];
void *lbl_802D5978[250] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80362B40, (void *)&lbl_80362B48, (void *)&lbl_80362B4C, (void *)&lbl_80362B54, (void *)&lbl_80362B48, (void *)&lbl_80362B5C, (void *)&lbl_80362B64, (void *)&lbl_80362B48, (void *)&lbl_80362B6C, (void *)&lbl_80362B74, (void *)&lbl_80362B48, (void *)&lbl_80362B7C, (void *)&lbl_80362B84, (void *)&lbl_80362B48, (void *)0x1, (void *)&lbl_80362B8C, (void *)&lbl_80362B94, (void *)0x0, (void *)&lbl_80362B9C, (void *)&lbl_80362BA4, (void *)0x1, (void *)&lbl_80362BAC, (void *)&lbl_80362BB4, (void *)0x0, (void *)&lbl_80362BBC, (void *)&lbl_80362BBC, (void *)&lbl_80362B48, (void *)&lbl_80362B48, (void *)&lbl_80362B48, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_80362BC4, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_80362BCC, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_80362BD4, (void *)&lbl_80362BDC, (void *)&lbl_80362BE4, (void *)&lbl_80362BE8, (void *)&lbl_8029B844, (void *)&lbl_80362BDC, (void *)&lbl_80362BEC, (void *)&lbl_80362BCC, (void *)&lbl_8029B850, (void *)&lbl_80362BF4, (void *)&lbl_8029B85C, (void *)&lbl_8029B868, (void *)&lbl_80362BFC, (void *)&lbl_8029B874, (void *)&lbl_8029B880, (void *)&lbl_80362BC4, (void *)&lbl_80362BD4, (void *)&lbl_8029B88C, (void *)&lbl_8029B898, (void *)&lbl_80362BDC, (void *)0x0, (void *)0x1, (void *)&lbl_80362BEC, (void *)0x1, (void *)0x1, (void *)&lbl_80362BCC, (void *)0x2, (void *)0x1, (void *)&lbl_8029B850, (void *)0x3, (void *)0x1, (void *)&lbl_80362BF4, (void *)0x4, (void *)0x1, (void *)&lbl_8029B85C, (void *)0x5, (void *)0x1, (void *)&lbl_8029B868, (void *)0x6, (void *)0x1, (void *)&lbl_80362BFC, (void *)0x7, (void *)0x1, (void *)&lbl_8029B874, (void *)0x8, (void *)0x1, (void *)&lbl_8029B880, (void *)0x9, (void *)0x1, (void *)&lbl_80362BC4, (void *)0xA, (void *)0x1, (void *)&lbl_80362BD4, (void *)0xB, (void *)0x1, (void *)&lbl_8029B88C, (void *)0xC, (void *)0x1, (void *)&lbl_8029B898, (void *)0xD, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD };
static s32 tI[14] = { 0, 4, 5, 6, 9, 10, 13, 16, 19, 22, 23, 26, 29, 31 };
static s32 tB[34] = { 1, 1, 1, 1, 4, 4, 2, 1, 1, 4, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 4, 2, 1, 1, 2, 1, 1, 3, 1, 1, 2, 1 };
static s32 tS[34] = { 0, 1, 2, 1, 3, 4, 3, 5, 3, 6, 7, 8, 7, 3, 9, 3, 3, 10, 3, 11, 12, 11, 13, 3, 14, 3, 3, 15, 3, 3, 16, 3, 17, 3 };
void *lbl_802D5EA8[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800B03B4, (void *)&fn_80249AC4, (void *)&fn_800B02B8, (void *)&fn_80242210, (void *)&fn_800B0188, (void *)&fn_8023D198, (void *)&fn_800B04C0, (void *)&fn_800AFBA4, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800B011C, (void *)&fn_800B0064, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800B0510, (void *)&fn_800B00C0 };
extern "C" void fn_800AFBA4(O *o, s32 idx) {
    s32 *q;
    s32 i;
    s32 t;
    i = tI[idx];
    t = o->f96;
    q = &tB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tB[i++];
        q++;
    }
    switch (tS[i]) {
    case 0:
        fn_80241628(o, 0, 0);
        o->f304 = lbl_8035B308->f72;
        o->f308 = rand() & 1;
        fn_802490E0(o, 1, Rnd(o));
        fn_802494A4(o, 1);
        break;
    case 1:
        fn_802401A0(o);
        fn_80241588(o, 0, 0, lbl_80362C08);
        break;
    case 2:
        fn_802401D0(o);
        fn_80241588(o, 1, 0, lbl_80362C08);
        Go(o, 1, o->f212->f4);
        break;
    case 3:
        return;
    case 4:
        fn_802490E0(o, 1, Rnd(o));
        o->f308 = (bool)(*o->f288 || (!o->f308 && o->f316));
        break;
    case 5:
        if (o->f220 == 1) {
            fn_80241588(o, 2, 0, lbl_80362C08);
            fn_8024125C(o, 2);
            fn_802490E0(o, 2, *o->f300);
        } else if (o->f220 == 3) {
            fn_802494A4(o, 1);
        }
        break;
    case 6: o->f312 = 1; break;
    case 7: o->f312 = 0; break;
    case 8:
        o->f312 = 0;
        fn_80241588(o, 3, 0, lbl_80362C08);
        Go(o, 3, o->f212->f12);
        break;
    case 9: fn_80241DD0(o, lbl_80362BC4, 0, 0, 0, 0); break;
    case 10: fn_80249008(o, 0); break;
    case 11: o->f316 = 0; break;
    case 12:
        if (o->f220 == 2) {
            fn_80241DD0(o, lbl_80362BCC, 0, 0, 0, 0);
            o->f316 = 0;
            fn_80241588(o, 3, 0, lbl_80362C08);
            Go(o, 3, o->f212->f12);
        }
        break;
    case 13: o->f316 = 1; break;
    case 14: {
        f32 v;
        fn_802490E0(o, 2, *o->f300);
        v = -*o->f280;
        o->f304->play(lbl_80362C10, o->f224, 0, &v, 0);
        fn_802490E0(o, 0, *o->f284);
        break;
    }
    case 15:
        if (!*o->f288) {
            fn_80241DD0(o, lbl_80362BCC, 0, 0, 0, 0);
            fn_80241588(o, 3, 0, lbl_80362C08);
            Go(o, 3, o->f212->f12);
        }
        break;
    case 16: fn_802494A4(o, 1); break;
    case 17: fn_802494A4(o, 3); break;
    case 18: break;
    }
}

} /* extern "C" */
