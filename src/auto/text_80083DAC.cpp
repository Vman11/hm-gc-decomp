#include "common.h"
namespace m80083DAC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_8035FCF4[7];
extern char lbl_8035FCFC[8];
extern char lbl_8035FD14[6];
extern char lbl_8035FD1C[8];
extern char lbl_8035FD24[8];
extern char lbl_80298CA0[];
extern s32 lbl_8035B65C;
void fn_802402E0(void *p);
void *fn_80242144(void *p, s32 i);
void fn_80242BC0(void *o, char *s, s32 a, s32 b, s32 c, s32 d);
void __ct__9C80253F24Fiiii(s32 o, char *s, s32 a, s32 b, s32 c);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_80083DAC(u8 *p, s32 n);
void fn_800841F0();
void fn_8008434C();
void fn_80084378();
void fn_800843BC();
void fn_800843DC();
void fn_80084588();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8035FC68[];
extern char lbl_8035FC70[];
extern char lbl_8035FC74[];
extern char lbl_8035FC78[];
extern char lbl_8035FC7C[];
extern char lbl_8035FC84[];
extern char lbl_8035FC8C[];
extern char lbl_8035FC94[];
extern char lbl_8035FC98[];
extern char lbl_8035FCA0[];
extern char lbl_8035FCA8[];
extern char lbl_8035FCB0[];
extern char lbl_8035FCB4[];
extern char lbl_8035FCBC[];
extern char lbl_8035FCC4[];
extern char lbl_8035FCCC[];
extern char lbl_8035FCD4[];
extern char lbl_8035FCE4[];
extern char lbl_8035FCEC[];
extern char lbl_8035FCF4[7];
extern char lbl_8035FCFC[8];
extern char lbl_8035FD04[];
extern char lbl_8035FD0C[];
void *lbl_802C4BB0[236] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035FC68, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC74, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC78, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC7C, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC84, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC8C, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC94, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC98, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCA0, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCA8, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCB0, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCB4, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCBC, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCC4, (void *)&lbl_8035FCCC, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCD4, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FC70, (void *)&lbl_8035FCE4, (void *)&lbl_8035FCEC, (void *)&lbl_8035FCF4, (void *)&lbl_8035FCFC, (void *)&lbl_8035FD04, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FD0C, (void *)&lbl_8035FCE4, (void *)0x0, (void *)0x1, (void *)&lbl_8035FCEC, (void *)0x1, (void *)0x1, (void *)&lbl_8035FCF4, (void *)0x2, (void *)0x1, (void *)&lbl_8035FCFC, (void *)0x3, (void *)0x1, (void *)&lbl_8035FD04, (void *)0x4, (void *)0x1, (void *)&lbl_8035FD0C, (void *)0x5, (void *)0xD, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11 };
static s32 sDACa[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
static s32 sDACb[18] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 sDACc[18] = { 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1, 15 };
void *lbl_802C5038[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800843DC, (void *)&fn_80249AC4, (void *)&fn_800843BC, (void *)&fn_80242210, (void *)&fn_80084378, (void *)&fn_8023D198, (void *)&fn_80084588, (void *)&fn_80083DAC, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800841F0, (void *)&fn_8003FB68, (void *)&fn_8008434C, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
void fn_80083DAC(u8 *p, s32 n) {
    s32 i;
    s32 j;
    s32 *q;
    s32 idx;
    s32 t;

    idx = sDACa[n];
    t = *(s32 *)(p + 0x60);

    for (q = sDACb + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sDACb[idx++];
    }
    switch (sDACc[idx]) {
    case 0:
        fn_802402E0(p);
        break;
    case 1:
        return;
    case 2:
        for (i = 0; i < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        fn_80242BC0(fn_80242144(p, 12), lbl_8035FCFC, 0, 0, 0, 0);
        break;
    case 3:
        for (i = 0; j = *(s32 *)(p + 0x11C), i < j; i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCF4, 0, 0, 0, 0);
            fn_80242BC0(fn_80242144(p, i), lbl_8035FD14, 0, 0, 0, 0);
        }
        for (; j < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); j++) {
            fn_80242BC0(fn_80242144(p, j), lbl_8035FCFC, 0, 0, 0, 0);
        }
        break;
    case 4: fn_80242BC0(fn_80242144(p, 2), lbl_8035FD14, 0, 0, 0, 0); break;
    case 5: fn_80242BC0(fn_80242144(p, 3), lbl_8035FD14, 0, 0, 0, 0); break;
    case 6: fn_80242BC0(fn_80242144(p, 4), lbl_8035FD14, 0, 0, 0, 0); break;
    case 7: fn_80242BC0(fn_80242144(p, 5), lbl_8035FD14, 0, 0, 0, 0); break;
    case 8: fn_80242BC0(fn_80242144(p, 6), lbl_8035FD14, 0, 0, 0, 0); break;
    case 9: fn_80242BC0(fn_80242144(p, 7), lbl_8035FD14, 0, 0, 0, 0); break;
    case 10: fn_80242BC0(fn_80242144(p, 8), lbl_8035FD14, 0, 0, 0, 0); break;
    case 11: fn_80242BC0(fn_80242144(p, 9), lbl_8035FD14, 0, 0, 0, 0); break;
    case 12: fn_80242BC0(fn_80242144(p, 10), lbl_8035FD14, 0, 0, 0, 0); break;
    case 13: fn_80242BC0(fn_80242144(p, 11), lbl_8035FD14, 0, 0, 0, 0); break;
    case 14:
        fn_80242BC0(fn_80242144(p, 12), lbl_8035FD14, 0, 0, 0, 0);
        for (i = 0; i < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035FD1C, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 14), lbl_8035FCFC, 0, 0, 0, 0);
        break;
    case 15:
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80298CA0, 0, 0, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035FD24, 0, 0, 0);
        break;
    case 16:
        break;
    }
}

}

} /* namespace m80083DAC */

namespace m800841F0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern char lbl_8035FCF4[7];
extern char lbl_8035FCFC[8];
extern char lbl_8035FD14[6];
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, const char *, s32, s32, s32, s32);
void fn_8023FE08(void *, f32);

struct S800841F0 {
    u8 pad[284];
    s32 f284;
    s32 f288;
    s32 f292;
    s32 f296;
};

void fn_800841F0(S800841F0 *p, f32 f) {
    s32 i;
    s32 j;
    if (p->f296 != 0) {
        for (i = 0; i < p->f284 + p->f288; i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        p->f296 = 0;
    }
    if (p->f292 != 0) {
        for (i = 0; i < (j = p->f284); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCF4, 0, 0, 0, 0);
            fn_80242BC0(fn_80242144(p, i), lbl_8035FD14, 0, 0, 0, 0);
        }
        for (; j < p->f284 + p->f288; j++) {
            fn_80242BC0(fn_80242144(p, j), lbl_8035FCFC, 0, 0, 0, 0);
        }
        p->f292 = 0;
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */

} /* namespace m800841F0 */

namespace m8008434C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern s32 lbl_8035B308;
void fn_802416D4(int, int);

void fn_8008434C(s32 param_1, s32 param_2) {
    *(u32 *)(param_1 + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
    fn_802416D4((int)(param_1), (int)(param_2));
}

} /* extern "C" */

} /* namespace m8008434C */

namespace m80084378 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_80084378(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 2;
    *(u32 *)(param_1 + 0x120) = 0xb;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 1;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m80084378 */

namespace m800843BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023F214(void);

void fn_800843BC(void) {
    fn_8023F214();
}

} /* extern "C" */

} /* namespace m800843BC */

namespace m800843DC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802C5038[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_800843DC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_800843DC(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802C5038;
        ((VCall_fn_800843DC_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m800843DC */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};
namespace m80084450 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802C4BB0[];
extern u8 lbl_80359310[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

/* hoisted */

struct C80084450 : C8024262C {
    u8 pad[300];
    C80084450(u8 *b) {
        *(u8 **)this = b + 1160;
        *(u32 *)(pad + 0x54) = 18;
        *(u32 *)(pad + 0x2c) = 6;
        *(u32 *)(pad + 0x68) = 1;
        *(u32 *)(pad + 0x5c) = 0;
        *(u32 *)(pad + 0x80) = 0;
        *(u32 *)(pad + 0x7c) = 0;
        *(u32 *)(pad + 0x84) = 0;
        *(u32 *)(pad + 0x88) = 15;
        *(u32 *)(pad + 0x8c) = 0;
        *(u32 *)(pad + 0x94) = 0;
        *(u8 **)(pad + 0x58) = b + 728;
        *(u8 **)(pad + 0x28) = b + 800;
        *(u8 **)(pad + 0x30) = b + 872;
        *(u8 **)(pad + 0x6c) = lbl_80359310;
        *(u32 *)(pad + 0x78) = 0;
        *(u32 *)(pad + 0xc4) = 0;
        *(u32 *)(pad + 0xc8) = 0;
        *(u32 *)(pad + 0xcc) = 0;
        *(u8 **)(pad + 0xf4) = b + 540;
        *(u32 *)(pad + 0xfc) = 0;
        *(u32 *)(pad + 0x10c) = 0;
        *(u32 *)(pad + 0x118) = 0;
        *(u32 *)(pad + 0x11c) = 2;
        *(u32 *)(pad + 0x120) = 11;
        *(u32 *)(pad + 0x124) = 0;
        *(u32 *)(pad + 0x128) = 1;
    }
};

void *fn_80084450(void) {
    u8 *b = lbl_802C4BB0;
    C80084450 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80084450(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m80084450 */

namespace m80084588 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
s32 fn_802421C0(void *a, s32 b);

s32 fn_80084588(void *a, s32 b) {
    switch (b) {
    case 5: return fn_802421C0(a, 0);
    case 6: return fn_802421C0(a, 1);
    case 7: return fn_802421C0(a, 2);
    case 8: return fn_802421C0(a, 3);
    case 9: return fn_802421C0(a, 4);
    case 10: return fn_802421C0(a, 5);
    case 11: return fn_802421C0(a, 6);
    case 12: return fn_802421C0(a, 7);
    case 13: return fn_802421C0(a, 8);
    case 14: return fn_802421C0(a, 9);
    case 15: return fn_802421C0(a, 10);
    case 16: return fn_802421C0(a, 11);
    case 17: return fn_802421C0(a, 12);
    }
    return 1;
}

} /* extern "C" */

} /* namespace m80084588 */
