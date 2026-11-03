#include "common.h"
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void s18();
};
namespace m8004E1C8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* hoisted */
extern f32 lbl_8035D7AC;
extern f32 lbl_8035D7B0;
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
u8 *fn_8022D694(u32);
int rand(void);
void fn_802494A4(u8 *, int);
int fn_800A210C(u8 *);
void fn_800A1AA8(u8 *);
void fn_800A27B0(u8 *);
void fn_800A15BC(u8 *);
void fn_800A2870(u8 *);
void fn_800A1710(u8 *);
void fn_800A14F0(u8 *);
void fn_800A2204(u8 *);
void fn_800A2198(u8 *);
void fn_800A217C(u8 *);
void fn_800A1608(u8 *);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8004E1C8(u8 *p, s32 n);
void fn_8004E57C();
void fn_8004E70C();
void fn_8004E72C();
void fn_8004E74C();
void fn_8004E8F0();
void fn_8004E8F8();
void fn_800A1074();
void fn_800A226C();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80296104[];
extern char lbl_80296110[];
extern char lbl_80296128[];
extern char lbl_80296134[];
extern char lbl_80296140[];
extern char lbl_8029614C[];
extern char lbl_80296158[];
extern char lbl_80296164[];
extern char lbl_8035D6D8[];
extern char lbl_8035D6E0[];
extern char lbl_8035D6E4[];
extern char lbl_8035D6EC[];
extern char lbl_8035D6F4[];
extern char lbl_8035D6FC[];
extern char lbl_8035D704[];
extern char lbl_8035D70C[];
extern char lbl_8035D714[];
extern char lbl_8035D71C[];
extern char lbl_8035D724[];
extern char lbl_8035D72C[];
extern char lbl_8035D734[];
extern char lbl_8035D73C[];
extern char lbl_8035D744[];
extern char lbl_8035D74C[];
extern char lbl_8035D754[];
extern char lbl_8035D75C[];
extern char lbl_8035D764[];
extern char lbl_8035D76C[];
extern char lbl_8035D774[];
extern char lbl_8035D77C[];
extern char lbl_8035D784[];
extern char lbl_8035D78C[];
extern char lbl_8035D794[];
extern char lbl_8035D79C[];
extern char lbl_8035D7A4[];
static void *d000[135] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33 };
static void *d21c[3] = { (void *)&lbl_8035D6D8, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6D8 };
static void *d228[44] = { (void *)&lbl_8035D6E4, (void *)&lbl_8035D6E4, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6EC, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_80296104, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_80296110, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6F4, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6FC, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D704, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D70C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D714, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D71C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D724, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D72C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D734, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D73C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0 };
static void *d2d8[5] = { (void *)&lbl_8035D744, (void *)&lbl_8035D74C, (void *)&lbl_8035D754, (void *)&lbl_80296128, (void *)&lbl_80296134 };
static void *d2ec[14] = { (void *)&lbl_8035D75C, (void *)&lbl_8035D764, (void *)&lbl_8035D76C, (void *)&lbl_8035D774, (void *)&lbl_8035D77C, (void *)&lbl_8035D784, (void *)&lbl_80296140, (void *)&lbl_8035D78C, (void *)&lbl_8029614C, (void *)&lbl_80296158, (void *)&lbl_80296164, (void *)&lbl_8035D794, (void *)&lbl_8035D79C, (void *)&lbl_8035D7A4 };
static void *d324[42] = { (void *)&lbl_8035D75C, (void *)0x0, (void *)0x1, (void *)&lbl_8035D764, (void *)0x1, (void *)0x1, (void *)&lbl_8035D76C, (void *)0x2, (void *)0x1, (void *)&lbl_8035D774, (void *)0x3, (void *)0x1, (void *)&lbl_8035D77C, (void *)0x4, (void *)0x1, (void *)&lbl_8035D784, (void *)0x5, (void *)0x1, (void *)&lbl_80296140, (void *)0x6, (void *)0x1, (void *)&lbl_8035D78C, (void *)0x7, (void *)0x1, (void *)&lbl_8029614C, (void *)0x8, (void *)0x1, (void *)&lbl_80296158, (void *)0x9, (void *)0x1, (void *)&lbl_80296164, (void *)0xA, (void *)0x1, (void *)&lbl_8035D794, (void *)0xB, (void *)0x1, (void *)&lbl_8035D79C, (void *)0xC, (void *)0x1, (void *)&lbl_8035D7A4, (void *)0xD, (void *)0x1 };
static void *d3cc[14] = { (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD };
static s32 tA[14] = { 0, 5, 8, 9, 11, 12, 13, 16, 17, 18, 20, 22, 24, 26 };
static s32 tB[30] = { 1, 1, 1, 1, 1, 1, 1, 3, 5, 1, 4, 5, 5, 1, 1, 3, 5, 5, 3, 2, 3, 2, 3, 2, 4, 1, 1, 1, 2, 1 };
static s32 tC[30] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 10, 13, 10, 14, 15, 16, 10, 17, 10, 18, 10, 19, 10, 10, 20, 10, 21 };
static void *lbl_802B862C[21] = { (void *)0x0, (void *)0x0, (void *)&fn_8004E74C, (void *)&fn_80249AC4, (void *)&fn_8004E72C, (void *)&fn_800A1074, (void *)&fn_8004E70C, (void *)&fn_8023D198, (void *)&fn_8004E8F0, (void *)&fn_8004E1C8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8004E57C, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8004E8F8, (void *)&fn_8003FB6C, (void *)&fn_800A226C };
void fn_8004E1C8(u8 *p, s32 n) {
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
    case 0:
        fn_80241628(p, 0, 0);
        ((VC *)p)->s18();
        if (**(u32 **)(p + 208)) {
            u8 *o;
            fn_80241588(p, 0, 0, lbl_8035D7AC);
            o = fn_8022D694(U32(224));
            if (o) {
                u16 m = *(u16 *)(*(u8 **)(o + 16) + 52);
                s32 ri = rand() % 10000u; f32 r = lbl_8035D7B0 * (f32)ri; r = (f32)(s32)m * r; *(f32 *)(o + 4) = r;
            }
        }
        if (*(s32 *)(U32(224) + 276) == 0) fn_802494A4(p, 1);
        break;
    case 1:
        U32(452) = 1;
        if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
        else fn_800A1AA8(p);
        break;
    case 2:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        fn_800A15BC(p);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_800A2870(p);
        fn_800A1710(p);
        break;
    case 5:
        if (S32(444) == 0) fn_800A2870(p);
        break;
    case 6:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
        }
        break;
    case 7:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
            fn_802494A4(p, 1);
        }
        break;
    case 8:
        fn_800A27B0(p);
        break;
    case 9:
        fn_800A2870(p);
        fn_802494A4(p, 1);
        break;
    case 10:
        return;
    case 11:
        U32(444) = 1;
        break;
    case 12:
        U32(444) = 0;
        break;
    case 13:
        fn_800A14F0(p);
        if (S32(440) != 0 && S32(444) == 0) {
            if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
            else fn_800A1AA8(p);
        }
        break;
    case 14:
        U32(436) = 1;
        break;
    case 15:
        U32(436) = 0;
        break;
    case 16:
        fn_800A2204(p);
        break;
    case 17:
        fn_800A2198(p);
        break;
    case 18:
        fn_800A217C(p);
        break;
    case 19:
        fn_802494A4(p, 4);
        break;
    case 20:
        U32(452) = 0;
        break;
    case 21:
        fn_800A1608(p);
        break;
    case 22:
        break;
    }
}

} /* extern "C" */

} /* namespace m8004E1C8 */

struct C802449C4 {
    u8 pad[56];
    C802449C4();
    ~C802449C4();
};
struct O8004E57C {
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
    virtual void GetPos(f32 *pos, s32 a, s32 b, s32 c, s32 d);
};
namespace m8004E57C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */

/* hoisted */

/* hoisted */

extern "C" {

void *fn_80242144(void *self, s32 n);
void fn_802448C8(C802449C4 *it, void *list);
void fn_80244750(C802449C4 *it, s32 n);
O8004E57C *fn_8024457C(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_80244594(C802449C4 *it);
f32 fn_80101590(f32 *a, f32 *b);
void fn_802494A4(void *self, s32 n);
void fn_800A1A44(void *self);
void fn_800A10D4(void *self, f32 dt);

void fn_8004E57C(u8 *self, f32 dt) {
    if (*(s32 *)(self + 440) != 0 && *(s32 *)(self + 452) != 0) {
        f32 b[3];
        f32 a[3];
        C802449C4 it;
        bool found;

        fn_802448C8(&it, fn_80242144(self, 2));
        fn_80244750(&it, 0);
        found = false;
        (*(O8004E57C **)(self + 224))->GetPos(b, 0, 0, 0, 0);
        for (; !fn_80244584(&it) && !found; fn_80244594(&it)) {
            if (*(u32 *)((u8 *)fn_8024457C(&it) + 180) & 2) {
                fn_8024457C(&it)->GetPos(a, 0, 0, 0, 0);
                if (**(s32 **)(self + 336) != 0) {
                    a[2] = b[2];
                }
                if (fn_80101590(b, a) <= **(f32 **)(self + 292)) {
                    if (**(s32 **)(self + 320) != 0) {
                        fn_802494A4(self, 3);
                    }
                    fn_800A1A44(self);
                    found = true;
                }
            }
        }
    }
    fn_800A10D4(self, dt);
}

} /* extern "C" */

} /* namespace m8004E57C */

namespace m8004E70C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800A2ABC(void);

void fn_8004E70C(void) {
    fn_800A2ABC();
}

} /* extern "C" */

} /* namespace m8004E70C */

namespace m8004E72C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800A2AF0(void);

void fn_8004E72C(void) {
    fn_800A2AF0();
}

} /* extern "C" */

} /* namespace m8004E72C */

namespace m8004E74C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
#define lbl_802B862C ((u8 *)m8004E1C8::lbl_802B862C)
void __dt__9C800A3008Fv(int, int);
void __dl__FPv(int);
struct VCall_fn_8004E74C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_8004E74C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802B862C;
        ((VCall_fn_8004E74C_0 *)(param_1))->m();
        __dt__9C800A3008Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m8004E74C */

struct C800A3008 { u32 *vt; u8 pad[268]; C800A3008(); };
namespace m8004E7C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
/* The statics stand for lbl_802B8100 (0x52C, in jt_802B8100; also used by text_8004E1C8) and the vtable lbl_802B862C (0x54):
   fn_8004E7C0 addresses them through the section base at offsets 540, 552, 728, 748, 804, 972, 1324. Contents are filler. */
#define d000 ((u32 *)m8004E1C8::d000)
#define d21c ((u32 *)m8004E1C8::d21c)
#define d228 ((u32 *)m8004E1C8::d228)
#define d2d8 ((u32 *)m8004E1C8::d2d8)
#define d2ec ((u32 *)m8004E1C8::d2ec)
#define d324 ((u32 *)m8004E1C8::d324)
#define d3cc ((u32 *)m8004E1C8::d3cc)
#define vt52c ((u32 *)lbl_802B862C)
extern u32 lbl_8035B530;
extern char lbl_80359250[8];
extern char lbl_80359258[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
} /* extern "C" */
struct C8004E7C0 : C800A3008 {
    u8 pad2[532 - 272];
    C8004E7C0() {
        vt = vt52c;
        *(s32 *)((u8 *)this + 84) = 14;
        *(s32 *)((u8 *)this + 44) = 14;
        *(s32 *)((u8 *)this + 104) = 5;
        *(s32 *)((u8 *)this + 92) = 0;
        *(s32 *)((u8 *)this + 128) = 2;
        *(s32 *)((u8 *)this + 124) = 1;
        *(s32 *)((u8 *)this + 132) = 0;
        *(s32 *)((u8 *)this + 136) = 14;
        *(s32 *)((u8 *)this + 140) = 1;
        *(s32 *)((u8 *)this + 148) = 0;
        *(u32 **)((u8 *)this + 88) = d2ec;
        *(u32 **)((u8 *)this + 40) = d324;
        *(u32 **)((u8 *)this + 48) = d3cc;
        *(u32 **)((u8 *)this + 108) = d2d8;
        *(s32 *)((u8 *)this + 120) = 0;
        *(char **)((u8 *)this + 196) = lbl_80359250;
        *(u32 **)((u8 *)this + 200) = d21c;
        *(s32 *)((u8 *)this + 204) = 0;
        *(u32 **)((u8 *)this + 244) = d228;
        *(char **)((u8 *)this + 252) = lbl_80359258;
        *(s32 *)((u8 *)this + 268) = 0;
    }
};
extern "C" {
C800A3008 *fn_8004E7C0(void) {
    C800A3008 *p;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = new C8004E7C0;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */

} /* namespace m8004E7C0 */
