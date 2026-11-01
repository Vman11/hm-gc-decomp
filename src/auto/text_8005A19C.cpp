// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct Hd { u8 p[1068]; s32 f1068; u8 p1072[4]; s32 f1076; };
struct Pf { u8 p[12]; f32 *f12; };
class O { public: u8 p0[96]; s32 f96; u8 p100[180]; s32 f280; s32 f284; s32 f288; s32 f292; u8 p296[8]; Hd *f304; u8 p308[4]; f32 f312; char *f316; u8 p320[4];
    Pf *f324; f32 f328; f32 f332; };
extern "C" {
extern f32 lbl_8035E354, lbl_8035E358;
extern char lbl_8035E304[8], lbl_8035E32C[8], lbl_8035E33C[8], lbl_8035E334[8];
extern void *lbl_8035B65C;
void fn_80241628(O *, int, int);
void fn_8005ABE8(O *);
void fn_802494A4(O *, int);
void fn_8005A874(O *);
void fn_802490E0(O *, int, f32);
void fn_802495F0(O *, int);
void fn_80241DD0(O *, char *, int, int, int, int);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void fn_80249008(O *, int);
f32 fn_802492CC(O *, int);
void fn_80233F7C(Hd *);
}
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
extern "C" void fn_8005A19C(O *o, s32 idx);
void fn_8005A6A4();
void fn_8005A74C();
void fn_8005A7E0();
void fn_8005B024();
void fn_8005B198();
void fn_8005B20C();
void fn_8005B318();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80296ECC[];
extern char lbl_80296ED8[];
extern char lbl_80296EE4[];
extern char lbl_80296EF0[];
extern char lbl_80296EFC[];
extern char lbl_80296F08[];
extern char lbl_8035E288[];
extern char lbl_8035E290[];
extern char lbl_8035E298[];
extern char lbl_8035E29C[];
extern char lbl_8035E2A4[];
extern char lbl_8035E2AC[];
extern char lbl_8035E2B4[];
extern char lbl_8035E2BC[];
extern char lbl_8035E2C4[];
extern char lbl_8035E2CC[];
extern char lbl_8035E2D4[];
extern char lbl_8035E2DC[];
extern char lbl_8035E2E4[];
extern char lbl_8035E2EC[];
extern char lbl_8035E2F4[];
extern char lbl_8035E2FC[];
extern char lbl_8035E304[8], lbl_8035E32C[8], lbl_8035E33C[8], lbl_8035E334[8];
extern char lbl_8035E30C[];
extern char lbl_8035E314[];
extern char lbl_8035E31C[];
extern char lbl_8035E324[];
extern char lbl_8035E304[8], lbl_8035E32C[8], lbl_8035E33C[8], lbl_8035E334[8];
extern char lbl_8035E304[8], lbl_8035E32C[8], lbl_8035E33C[8], lbl_8035E334[8];
extern char lbl_8035E304[8], lbl_8035E32C[8], lbl_8035E33C[8], lbl_8035E334[8];
extern char lbl_8035E344[];
extern char lbl_8035E34C[];
void *lbl_802BC0A0[246] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035E288, (void *)&lbl_8035E290, (void *)&lbl_8035E298, (void *)&lbl_8035E298, (void *)&lbl_8035E29C, (void *)&lbl_8035E29C, (void *)&lbl_8035E298, (void *)&lbl_8035E298, (void *)&lbl_8035E298, (void *)&lbl_8035E2A4, (void *)&lbl_8035E2AC, (void *)&lbl_8035E2B4, (void *)&lbl_8035E2BC, (void *)&lbl_8035E2C4, (void *)&lbl_8035E2CC, (void *)&lbl_8035E2D4, (void *)&lbl_8035E2DC, (void *)&lbl_8035E2E4, (void *)&lbl_8035E2EC, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80296ECC, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8035E2F4, (void *)&lbl_8035E2FC, (void *)&lbl_8035E304, (void *)&lbl_8035E30C, (void *)&lbl_8035E314, (void *)&lbl_8035E2FC, (void *)&lbl_8035E31C, (void *)&lbl_80296ED8, (void *)&lbl_80296EE4, (void *)&lbl_8035E304, (void *)&lbl_80296ECC, (void *)&lbl_8035E2F4, (void *)&lbl_8035E324, (void *)&lbl_8035E32C, (void *)&lbl_8035E334, (void *)&lbl_8035E33C, (void *)&lbl_8035E344, (void *)&lbl_80296EF0, (void *)&lbl_80296EFC, (void *)&lbl_80296F08, (void *)&lbl_8035E34C, (void *)&lbl_8035E2FC, (void *)0x0, (void *)0x1, (void *)&lbl_8035E31C, (void *)0x1, (void *)0x1, (void *)&lbl_80296ED8, (void *)0x2, (void *)0x1, (void *)&lbl_80296EE4, (void *)0x3, (void *)0x1, (void *)&lbl_8035E304, (void *)0x4, (void *)0x1, (void *)&lbl_80296ECC, (void *)0x5, (void *)0x1, (void *)&lbl_8035E2F4, (void *)0x6, (void *)0x1, (void *)&lbl_8035E324, (void *)0x7, (void *)0x1, (void *)&lbl_8035E32C, (void *)0x8, (void *)0x1, (void *)&lbl_8035E334, (void *)0x9, (void *)0x1, (void *)&lbl_8035E33C, (void *)0xA, (void *)0x1, (void *)&lbl_8035E344, (void *)0xB, (void *)0x1, (void *)&lbl_80296EF0, (void *)0xC, (void *)0x1, (void *)&lbl_80296EFC, (void *)0xD, (void *)0x1, (void *)&lbl_80296F08, (void *)0xE, (void *)0x1, (void *)&lbl_8035E34C, (void *)0xF, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF };
static s32 tI[16] = { 0, 4, 5, 6, 7, 11, 15, 18, 21, 24, 27, 30, 32, 34, 35, 36 };
static s32 tB[37] = { 1, 1, 1, 1, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 3, 1, 3, 1, 4, 4, 4 };
static s32 tS[37] = { 0, 1, 2, 3, 3, 4, 5, 6, 3, 7, 8, 9, 10, 9, 11, 3, 12, 3, 3, 13, 3, 3, 14, 3, 15, 16, 17, 18, 19, 20, 21, 3, 22, 3, 23, 24, 25 };
void *lbl_802BC5E0[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8005B20C, (void *)&fn_80249AC4, (void *)&fn_8005B198, (void *)&fn_80242210, (void *)&fn_8005B024, (void *)&fn_8023D198, (void *)&fn_8005B318, (void *)&fn_8005A19C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8005A6A4, (void *)&fn_8005A74C, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8005A7E0 };
extern "C" void fn_8005A19C(O *o, s32 idx) {
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
        fn_8005ABE8(o);
        break;
    case 1:
        if (o->f288 == 1) fn_802494A4(o, 3);
        else fn_8005A874(o);
        break;
    case 2: o->f304->f1076 = 1; break;
    case 3: return;
    case 4: o->f304->f1068 = 1; break;
    case 5: o->f304->f1068 = 0; break;
    case 6:
        o->f292 = 0;
        if (o->f284 == 1) o->f328 = lbl_8035E354 + *o->f324->f12;
        else fn_802490E0(o, 0, lbl_8035E354 + *o->f324->f12);
        break;
    case 7:
        o->f292 = 0;
        if (o->f284 == 1) o->f328 = lbl_8035E354 + *o->f324->f12;
        else fn_802490E0(o, 0, lbl_8035E354 + *o->f324->f12);
        break;
    case 8:
        o->f292 = 0;
        if (o->f284 == 1) o->f328 = lbl_8035E354 + *o->f324->f12;
        else fn_802490E0(o, 0, lbl_8035E354 + *o->f324->f12);
        break;
    case 9: fn_802494A4(o, 1); break;
    case 10: fn_802495F0(o, 1); break;
    case 11: fn_802494A4(o, 1); break;
    case 12: fn_80241DD0(o, lbl_8035E304, 0, 0, 0, 0); break;
    case 13: {
        if (o->f316) __ct__9C80253F24Fiiii(lbl_8035B65C, o->f316, 0, 0, 0);
        if (lbl_8035E358 == o->f312) fn_802494A4(o, 3);
        else if (o->f284 == 0) fn_802490E0(o, 1, o->f312);
        else o->f332 = o->f312;
        break;
    }
    case 14:
        fn_80249008(o, 0);
        fn_80249008(o, 1);
        fn_802494A4(o, 3);
        break;
    case 15:
        o->f328 = fn_802492CC(o, 0);
        if (o->f328 > lbl_8035E358) fn_80249008(o, 0);
        o->f284 = 1;
        break;
    case 16:
        o->f328 = fn_802492CC(o, 0);
        if (o->f328 > lbl_8035E358) fn_80249008(o, 0);
        o->f332 = fn_802492CC(o, 1);
        if (o->f332 > lbl_8035E358) fn_80249008(o, 1);
        o->f284 = 1;
        break;
    case 17:
        o->f328 = fn_802492CC(o, 0);
        if (o->f328 > lbl_8035E358) fn_80249008(o, 0);
        o->f284 = 1;
        break;
    case 18:
        o->f284 = 0;
        if (o->f328 > lbl_8035E358) fn_802490E0(o, 0, o->f328);
        break;
    case 19:
        o->f284 = 0;
        if (o->f328 > lbl_8035E358) fn_802490E0(o, 0, o->f328);
        else if (o->f332 > lbl_8035E358) fn_802490E0(o, 1, o->f332);
        break;
    case 20:
        o->f284 = 0;
        if (o->f328 > lbl_8035E358) fn_802490E0(o, 0, o->f328);
        break;
    case 21:
        o->f288 = 1;
        fn_80241DD0(o, lbl_8035E32C, 0, 0, 0, 0);
        break;
    case 22: o->f288 = 0; break;
    case 23:
        fn_80241DD0(o, lbl_8035E33C, 0, 0, 0, 0);
        o->f280 = 1;
        break;
    case 24:
        fn_80241DD0(o, lbl_8035E334, 0, 0, 0, 0);
        o->f280 = 0;
        break;
    case 25:
        fn_80233F7C(o->f304);
        fn_80241DD0(o, lbl_8035E32C, 0, 0, 0, 0);
        break;
    case 26: break;
    }
}

} /* extern "C" */
