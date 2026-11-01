#include "common.h"

extern "C" {
__declspec(section ".sdata2") char lbl_80362E18[8] = {0x50, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E20[8] = {0x7A, 0x65, 0x6B, 0x65, 0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E28[4] = {0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E2C[8] = {0x74, 0x61, 0x72, 0x67, 0x65, 0x74, 0x73, 0x00};
__declspec(section ".sdata2") char lbl_80362E34[8] = {0x46, 0x41, 0x44, 0x45, 0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E3C[8] = {0x53, 0x45, 0x54, 0x55, 0x50, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E44[8] = {0x49, 0x44, 0x4C, 0x45, 0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E4C[8] = {0x50, 0x52, 0x45, 0x46, 0x41, 0x44, 0x45, 0x00};
__declspec(section ".sdata2") char lbl_80362E54[8] = {0x46, 0x41, 0x44, 0x45, 0x4F, 0x55, 0x54, 0x00};
__declspec(section ".sdata2") char lbl_80362E5C[8] = {0x46, 0x41, 0x44, 0x45, 0x44, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E64[8] = {0x46, 0x41, 0x44, 0x45, 0x49, 0x4E, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E6C[8] = {0x49, 0x4E, 0x49, 0x54, 0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E74[8] = {0x4C, 0x49, 0x47, 0x48, 0x54, 0x4F, 0x4E, 0x00};
__declspec(section ".sdata2") char lbl_80362E7C[8] = {0x45, 0x4E, 0x41, 0x42, 0x4C, 0x45, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E84[8] = {0x44, 0x49, 0x53, 0x41, 0x42, 0x4C, 0x45, 0x00};
__declspec(section ".sdata2") char lbl_80362E8C[8] = {0x45, 0x58, 0x49, 0x54, 0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_80362E94[8] = {0x44, 0x4D, 0x47, 0x46, 0x41, 0x4C, 0x4C, 0x00};
}

namespace m800B10B8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct A { u8 pad[180]; u32 fl180; };
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    A *a224;
    u8 pad228[52];
    f32 *f280;
    f32 *f284;
    f32 *f288;
    f32 *f292;
    u32 u296;
    char *s300;
    char *s304;
    s32 *s308;
    s32 *s312;
    s32 i316;
    s32 i320;
};
static const char sPad2[12] = "FADEDONE";
static const char sStrtCol[12] = "STRT_COL";
static const char sLightOff[12] = "LIGHTOFF";
static const char sS36[] = "C_FREEZE";
static const char sS48[] = "TELEPORT";
static const char sS60[] = "C_RESUME";
static const char sRest[] = "rPreFadeTime\000\000\000\000rFadeOutTime\000\000\000\000rRevertTime\000rFadeInTime\000aTeleportNode\000\000\000aLightOffEvent\000\000aLightOnEvent\000\000\000bDamagePlayer\000\000\000bStartEnabled\000\000";
extern void *lbl_8035B65C;
extern void *lbl_8035A02C;
extern char lbl_80362E94[4], lbl_80362E28[4];
void fn_802494A4(P *, int);
void fn_802490E0(P *, int, f32);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, char *, int, int, u32, int);
void fn_80039E80(void *, int, f32);
void fn_800F6E88(char *, char *);
int fn_800F6CD0(char *, char *);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800B10B8(P *p, s32 n);
void fn_800B1378();
void fn_800B13D0();
void fn_800B1428();
void fn_800B1530();
void fn_800B168C();
void fn_800B1798();
void fn_8023D198();
void fn_8023F5F4();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80362E18[];
extern char lbl_80362E20[];
extern char lbl_80362E94[4], lbl_80362E28[4];
extern char lbl_80362E2C[];
extern char lbl_80362E34[];
extern char lbl_80362E3C[];
extern char lbl_80362E44[];
extern char lbl_80362E4C[];
extern char lbl_80362E54[];
extern char lbl_80362E5C[];
extern char lbl_80362E64[];
extern char lbl_80362E6C[];
extern char lbl_80362E74[];
extern char lbl_80362E7C[];
extern char lbl_80362E84[];
extern char lbl_80362E8C[];
void *lbl_802D68A0[207] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80362E18, (void *)&lbl_80362E18, (void *)&lbl_80362E20, (void *)&lbl_80362E28, (void *)&lbl_80362E28, (void *)&lbl_80362E2C, (void *)&lbl_80362E28, (void *)&lbl_80362E28, (void *)&lbl_80362E28, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80362E34, (void *)0x0, (void *)0x0, (void *)0x0, (void *)(sPad2 + 0), (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80362E34, (void *)&lbl_80362E3C, (void *)&lbl_80362E44, (void *)&lbl_80362E4C, (void *)&lbl_80362E54, (void *)&lbl_80362E5C, (void *)&lbl_80362E64, (void *)&lbl_80362E6C, (void *)sStrtCol, (void *)&lbl_80362E34, (void *)(sPad2 + 0), (void *)sLightOff, (void *)&lbl_80362E74, (void *)&lbl_80362E7C, (void *)&lbl_80362E84, (void *)&lbl_80362E8C, (void *)&lbl_80362E6C, (void *)0x0, (void *)0x1, (void *)sStrtCol, (void *)0x1, (void *)0x1, (void *)&lbl_80362E34, (void *)0x2, (void *)0x1, (void *)(sPad2 + 0), (void *)0x3, (void *)0x1, (void *)sLightOff, (void *)0x4, (void *)0x1, (void *)&lbl_80362E74, (void *)0x5, (void *)0x1, (void *)&lbl_80362E7C, (void *)0x6, (void *)0x1, (void *)&lbl_80362E84, (void *)0x7, (void *)0x1, (void *)&lbl_80362E8C, (void *)0x8, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8 };
static s32 tA[9] = { 0, 6, 9, 14, 17, 18, 19, 20, 21 };
static s32 tB[22] = { 1, 1, 1, 1, 1, 1, 1, 1, 4, 2, 1, 1, 1, 1, 3, 1, 2, 6, 6, 6, 6, 6 };
static s32 tC[22] = { 0, 1, 2, 3, 4, 5, 1, 6, 1, 1, 7, 1, 8, 1, 1, 9, 1, 10, 11, 12, 13, 1 };
void *lbl_802D6CB0[12] = { (void *)0x0, (void *)0x0, (void *)&fn_800B168C, (void *)&fn_80249AC4, (void *)&fn_800B1530, (void *)&fn_80242210, (void *)&fn_800B1428, (void *)&fn_8023D198, (void *)&fn_800B1798, (void *)&fn_800B10B8, (void *)&fn_80241D80, (void *)&fn_8003F140 };
void *wAX_802D6CE0[8] = { (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_800B1378, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_800B13D0 };
void fn_800B10B8(P *p, s32 n) {
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
        p->a224->fl180 |= 4;
        p->i320 = *p->s312;
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2:
        fn_802490E0(p, 0, *p->f280);
        __ct__9C80253F24Fiiii(lbl_8035B65C, (char *)sS36, 0, 0, 0);
        if (*p->s308) fn_80242BC0(fn_80242144(p, 0), lbl_80362E94, 0, 0, 0, 0);
        break;
    case 3:
        fn_802490E0(p, 1, *p->f284);
        fn_80039E80(lbl_8035A02C, 1, *p->f284);
        break;
    case 4:
        fn_802490E0(p, 2, *p->f288);
        fn_80242BC0(fn_80242144(p, 0), (char *)sS48, 0, 0, p->u296, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, (char *)sS60, 0, 0, 0);
        break;
    case 5: {
        char buf[8];
        fn_80039E80(lbl_8035A02C, 0, *p->f292);
        fn_800F6E88(buf, p->i316 ? p->s304 : p->s300);
        if (fn_800F6CD0(buf, lbl_80362E28) == 0) fn_80242BC0(fn_80242144(p, 1), buf, 0, 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 6:
        if (p->i320) fn_802494A4(p, 2);
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        fn_802494A4(p, 5);
        break;
    case 9:
        fn_802494A4(p, 4);
        break;
    case 10:
        p->i316 = 0;
        break;
    case 11:
        p->i316 = 1;
        break;
    case 12:
        p->i320 = 1;
        break;
    case 13:
        p->i320 = 0;
        break;
    case 14:
        break;
    }
}

} /* extern "C" */

} /* namespace m800B10B8 */

namespace m800B1378 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_800B1378 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(void *); };

void fn_800B1378(V_800B1378 *p) {
    p->m(lbl_80362E74);
    p->m((void *)(m800B10B8::sLightOff));
}

} /* extern "C" */

} /* namespace m800B1378 */

namespace m800B13D0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_800B13D0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(void *); };

void fn_800B13D0(V_800B13D0 *p) {
    p->m(lbl_80362E74);
    p->m((void *)(m800B10B8::sLightOff));
}

} /* extern "C" */

} /* namespace m800B13D0 */

namespace m800B1428 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_800B1428(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0;
    *(u32 *)(param_1 + 0x134) = 0;
    *(u32 *)(param_1 + 0x138) = 0;
    *(u32 *)(param_1 + 0x13c) = 0;
    *(u32 *)(param_1 + 0x140) = 0;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m800B1428 */

namespace m800B1478 {
/* Functions from 0x800B1478 to 0x800B1530, found by decomp-toolkit. */

extern "C" {


#pragma opt_propagation off
void fn_800B1478(u8 *p) {
    u8 *base = (u8 *)m800B10B8::lbl_802D68A0;
    M2C_FIELD(p, s32 *, 84) = 9;
    M2C_FIELD(p, s32 *, 44) = 9;
    M2C_FIELD(p, s32 *, 104) = 6;
    M2C_FIELD(p, s32 *, 92) = 3;
    M2C_FIELD(p, s32 *, 128) = 0;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 0;
    M2C_FIELD(p, s32 *, 136) = 2;
    M2C_FIELD(p, s32 *, 140) = 0;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 648;
    M2C_FIELD(p, u8 **, 40) = base + 684;
    M2C_FIELD(p, u8 **, 48) = base + 792;
    M2C_FIELD(p, u8 **, 108) = base + 624;
    M2C_FIELD(p, u8 **, 120) = base + 576;
    M2C_FIELD(p, s32 *, 196) = 0;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, s32 *, 204) = 0;
    M2C_FIELD(p, u8 **, 244) = base + 540;
    M2C_FIELD(p, s32 *, 252) = 0;
    M2C_FIELD(p, s32 *, 268) = 0;
    M2C_FIELD(p, s32 *, 280) = 0;
    M2C_FIELD(p, s32 *, 284) = 0;
    M2C_FIELD(p, s32 *, 288) = 0;
    M2C_FIELD(p, s32 *, 292) = 0;
    M2C_FIELD(p, s32 *, 296) = 0;
    M2C_FIELD(p, s32 *, 300) = 0;
    M2C_FIELD(p, s32 *, 304) = 0;
    M2C_FIELD(p, s32 *, 308) = 0;
    M2C_FIELD(p, s32 *, 312) = 0;
    M2C_FIELD(p, s32 *, 316) = 0;
    M2C_FIELD(p, s32 *, 320) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m800B1478 */

namespace m800B1530 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#pragma opt_propagation off
extern char lbl_80362E28[4];
s32 fn_8023F52C(void *obj, char *a, char *b, char *name, s32 c, s32 d);
void fn_8023F214(void *obj);

void fn_800B1530(void *p) {
    char *s = (char *)m800B10B8::sPad2;
    M2C_FIELD(p, s32 *, 0x118) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x48, 1, 0);
    M2C_FIELD(p, s32 *, 0x11C) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x58, 1, 0);
    M2C_FIELD(p, s32 *, 0x120) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x68, 1, 0);
    M2C_FIELD(p, s32 *, 0x124) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x74, 1, 0);
    M2C_FIELD(p, s32 *, 0x128) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x80, 1, 0);
    M2C_FIELD(p, s32 *, 0x12C) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x90, 1, 0);
    M2C_FIELD(p, s32 *, 0x130) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xA0, 1, 0);
    M2C_FIELD(p, s32 *, 0x134) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xB0, 1, 0);
    M2C_FIELD(p, s32 *, 0x138) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xC0, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */

} /* namespace m800B1530 */
#pragma opt_propagation reset

namespace m800B168C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_800B168C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_800B168C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)m800B10B8::lbl_802D6CB0;
        ((VCall_fn_800B168C_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m800B168C */


#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800B1478(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800B1700 : C8024262C {
    u8 pad[0x144];
    C800B1700() {
        *(void **)this = (void *)m800B10B8::lbl_802D6CB0;
        fn_800B1478(this);
    }
};

extern "C" void *fn_800B1700(void) {
    C800B1700 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800B1700;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

namespace m800B1798 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_800B1798(void *p, s32 a) {
    switch (a) {
    case 1:
        return fn_802421C0(p, 0);
    }
    return 1;
}

} /* extern "C" */

} /* namespace m800B1798 */

namespace m800B17D0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A504;
extern volatile f32 lbl_8035A500;
__declspec(section ".sdata2") f64 lbl_80362EA0 = 0.3490658402442932;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307474[];
extern const char lbl_8029BBA0[9] = "Behavior";
extern const char lbl_8029BBAC[9] = "BFallRgn";
void fn_800B1700(void);
void fn_800375E4(void);
extern u8 lbl_80307468[];

void fn_800B17D0(void) {
    lbl_8035A504 = lbl_803596E0[0];
    lbl_8035A500 = fn_800EFDA4(*(volatile f64 *)&lbl_80362EA0);
    __register_global_object(fn_8023DC5C(lbl_80307474, (void *)lbl_8029BBA0, (void *)lbl_8029BBAC, (void *)fn_800B1700, 324), (void *)fn_800375E4, lbl_80307468);
}

__declspec(section ".ctors") static void (*const ctor_800B17D0)(void) = fn_800B17D0;

} /* extern "C" */

} /* namespace m800B17D0 */
