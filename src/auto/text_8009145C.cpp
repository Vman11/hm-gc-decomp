#include "common.h"
struct V8009145C {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void m(char *, void *, s32, f32 *, s32);
};
namespace m8009145C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* lbl_802C9AA0 (0x4F4 bytes, in jt_802C9AA0): fn_8009145C addresses the three trailing tables through the
   section base. The first 0x41C bytes (a descriptor table with 85 pointers) are not reconstructed yet. */
extern "C" {
extern char lbl_80360A18[6];
extern char lbl_80360A20[4];
extern char lbl_80360A24[8];
extern char lbl_80360A2C[5];
extern char lbl_80360A34[8];
extern char lbl_80360A3C[5];
extern char lbl_80360A44[8];
extern char lbl_80360A4C[4];
extern char lbl_80360A50[7];
extern char lbl_80360A58[6];
extern char lbl_80360A60[8];
extern char lbl_80360A68[4];
extern char lbl_80360A6C[7];
extern char lbl_80360A74[5];
extern char lbl_80360A7C[8];
extern char lbl_80360A84[5];
extern char lbl_80360A8C[8];
extern char lbl_80360A94[7];
extern char lbl_80360A9C[4];
extern char lbl_80360AA0[8];
extern char lbl_80360AA8[8];
extern char lbl_80360AB0[5];
extern char lbl_80360AB8[5];
extern char lbl_80360AC0[6];
extern char lbl_80360AC8[8];
extern char lbl_80360AD0[7];
extern char lbl_80360AD8[7];
extern char lbl_80360AE0[6];
extern char lbl_80360AE8[8];
extern char lbl_80360AF0[6];
extern char lbl_80360AF8[7];
extern char lbl_80360B00[7];
extern char lbl_80360B08[6];
extern char lbl_80360B10[7];
extern char lbl_802997FC[9];
extern char lbl_80299808[9];
extern char lbl_80360B18[4];
extern char lbl_80360B1C[8];
extern char lbl_80360B24[5];
s32 *fn_800917AC(s32 *, s16);
void fn_80249AC4(void);
void fn_8009175C(s32);
void fn_80242210(void);
void fn_80091728(s32);
void fn_8023D198(void);
s32 fn_8009196C(void *, s32);
void fn_8009145C(u8 *, s32);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_80091708(void);
void fn_8003FB68(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
int fn_800919A4(void *, u32);
void fn_8003FB6C(void);
}
/* descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802C9AA0[263];
void *lbl_802C9AA0[263] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE,
    (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C,
    (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C,
    (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553,
    (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200,
    (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553,
    (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54,
    (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52,
    (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42,
    (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000,
    (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B,
    (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018,
    (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C,
    (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A,
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80360A18,
    (void *)lbl_80360A20, (void *)lbl_80360A24, (void *)lbl_80360A2C, (void *)lbl_80360A20,
    (void *)lbl_80360A34, (void *)lbl_80360A3C, (void *)lbl_80360A20, (void *)lbl_80360A44,
    (void *)lbl_80360A4C, (void *)lbl_80360A20, (void *)lbl_80360A50, (void *)lbl_80360A58,
    (void *)lbl_80360A20, (void *)lbl_80360A60, (void *)lbl_80360A68, (void *)lbl_80360A20,
    (void *)lbl_80360A6C, (void *)lbl_80360A74, (void *)lbl_80360A20, (void *)lbl_80360A7C,
    (void *)lbl_80360A84, (void *)lbl_80360A20, (void *)lbl_80360A8C, (void *)lbl_80360A94,
    (void *)lbl_80360A94, (void *)lbl_80360A9C, (void *)lbl_80360A9C, (void *)lbl_80360A9C,
    (void *)0x40000000, (void *)0x00000000, (void *)0x00000000, (void *)lbl_80360AA0,
    (void *)lbl_80360AA8, (void *)0x00000000, (void *)0x626F6E65, (void *)0x31520000,
    (void *)0x00000000, (void *)lbl_80360AB0, (void *)lbl_80360AB8, (void *)lbl_80360AC0,
    (void *)lbl_80360AC8, (void *)lbl_80360AD0, (void *)lbl_80360AD8, (void *)lbl_80360AE0,
    (void *)lbl_80360AE8, (void *)lbl_80360AF0, (void *)lbl_80360AF8, (void *)lbl_80360B00,
    (void *)lbl_80360B08, (void *)lbl_80360B10, (void *)lbl_802997FC, (void *)lbl_80299808,
    (void *)lbl_80360B18, (void *)lbl_80360B1C, (void *)lbl_80360B24, (void *)lbl_80360AB0,
    (void *)0x00000000, (void *)0x00000001, (void *)lbl_80360AB8, (void *)0x00000001,
    (void *)0x00000001, (void *)lbl_80360AC0, (void *)0x00000002, (void *)0x00000001,
    (void *)lbl_80360AC8, (void *)0x00000003, (void *)0x00000001, (void *)lbl_80360AD0,
    (void *)0x00000004, (void *)0x00000001, (void *)lbl_80360AD8, (void *)0x00000005,
    (void *)0x00000001, (void *)lbl_80360AE0, (void *)0x00000006, (void *)0x00000001,
    (void *)lbl_80360AE8, (void *)0x00000007, (void *)0x00000001, (void *)lbl_80360AF0,
    (void *)0x00000008, (void *)0x00000001, (void *)lbl_80360AF8, (void *)0x00000009,
    (void *)0x00000001, (void *)lbl_80360B00, (void *)0x0000000A, (void *)0x00000001,
    (void *)lbl_80360B08, (void *)0x0000000B, (void *)0x00000001, (void *)lbl_80360B10,
    (void *)0x0000000C, (void *)0x00000001, (void *)lbl_802997FC, (void *)0x0000000D,
    (void *)0x00000001, (void *)lbl_80299808, (void *)0x0000000E, (void *)0x00000001,
    (void *)lbl_80360B18, (void *)0x0000000F, (void *)0x00000001, (void *)lbl_80360B1C,
    (void *)0x00000010, (void *)0x00000001, (void *)lbl_80360B24, (void *)0x00000011,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002,
    (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006,
    (void *)0x00000007, (void *)0x00000008, (void *)0x00000009, (void *)0x0000000A,
    (void *)0x0000000B, (void *)0x0000000C, (void *)0x0000000D, (void *)0x0000000E,
    (void *)0x0000000F, (void *)0x00000010, (void *)0x00000011
};
static s32 tabA[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
static s32 tabB[18] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tabC[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 14, 15, 16 };
/* vtable used by fn_800917AC */
extern "C" void *lbl_802C9F94[20];
void *lbl_802C9F94[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800917AC, (void *)fn_80249AC4,
    (void *)fn_8009175C, (void *)fn_80242210, (void *)fn_80091728, (void *)fn_8023D198,
    (void *)fn_8009196C, (void *)fn_8009145C, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_80091708, (void *)fn_8003FB68, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_800919A4, (void *)fn_8003FB6C
};
extern void *lbl_8035B308;
extern f32 lbl_80360B2C;
extern f32 lbl_80360B30;
extern char lbl_80360B34[5];
extern char lbl_80360B3C[7];
extern char lbl_80360B44[5];
extern char lbl_80360A9C[4];
extern f32 lbl_80360B4C;
extern f32 lbl_80360B50;
void fn_80241628(void *p, s32 a, s32 b);
void fn_80240274(void *p, s32 a);
void fn_80241588(void *p, s32 a, s32 b, f32 f);
void fn_80242168(void *p, f32 f);
void fn_8023F9C8(void *p, s32 a);
void fn_802402E0(void *p);
void fn_8022BCD8(void *p, char *a, char *b);
void fn_8022BF30(void *p, s32 a, s32 b, f32 f);
void fn_802490E0(void *p, s32 a, f32 f);
} /* extern "C" */
/* hoisted */
extern "C" {

void fn_8009145C(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    V8009145C *obj;
    f32 f;
    i = tabA[n];
    t = *(s32 *)(p + 0x60);
    q = &tabB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tabB[i++];
        q++;
    }
    switch (tabC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        *(void **)(p + 0x118) = *(void **)((u8 *)lbl_8035B308 + 0x48);
        break;
    case 1:
        return;
    case 2:
        fn_80240274(p, 0);
        break;
    case 3:
        fn_80241588(p, 0, 0, lbl_80360B2C);
        break;
    case 4:
        fn_80241588(p, 1, 0, lbl_80360B2C);
        break;
    case 5:
        fn_80241588(p, 2, 0, lbl_80360B2C);
        break;
    case 6:
        fn_80241588(p, 3, 0, lbl_80360B2C);
        fn_80242168(p, lbl_80360B30);
        break;
    case 7:
        fn_80241588(p, 4, 0, lbl_80360B2C);
        break;
    case 8:
        fn_80241588(p, 5, 0, lbl_80360B2C);
        break;
    case 9:
        fn_80241588(p, 6, 0, lbl_80360B2C);
        break;
    case 10:
        fn_80241588(p, 7, 0, lbl_80360B2C);
        break;
    case 11:
        *(s32 *)(p + 0x120) = 1;
        obj = *(V8009145C **)(p + 0x124);
        if (obj != 0) {
            obj->m(lbl_80360B34, 0, 0, 0, 0);
        }
        break;
    case 12:
        *(s32 *)(p + 0x120) = 0;
        fn_8023F9C8(p, 0);
        break;
    case 13:
        if (*(s32 *)(p + 0x120) != 0) {
            f = -**(f32 **)(p + 0x11c);
            obj = *(V8009145C **)(p + 0x118);
            obj->m(lbl_80360B3C, *(void **)(p + 0xe0), 0, &f, 0);
        }
        break;
    case 14:
        fn_802402E0(p);
        *(void **)(p + 0x124) = 0;
        break;
    case 15:
        *(void **)(p + 0x124) = *(void **)(p + 0xe4);
        break;
    case 16:
        fn_8022BCD8(*(void **)(p + 0xe0), lbl_80360B44, lbl_80360A9C);
        fn_8022BF30(*(void **)(p + 0xe0), 255, 1, lbl_80360B4C);
        fn_8022BF30(*(void **)(p + 0xe0), 0, 1, lbl_80360B50);
        fn_802490E0(p, 0, lbl_80360B50);
        break;
    case 17:
        break;
    }
}

} /* extern "C" */

} /* namespace m8009145C */

namespace m80091708 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023FE08(void);

void fn_80091708(void) {
    fn_8023FE08();
}

} /* extern "C" */

} /* namespace m80091708 */

namespace m80091728 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_80091728(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m80091728 */

namespace m8009175C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_80299814[13];
extern u8 lbl_80360A9C[0x4];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_8009175C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80360A9C, (void *)lbl_80360A9C, (void *)lbl_80299814, (int)(1), (int)(0)); /* "AttackDamage" */
    *(u32 *)(param_1 + 0x11c) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */

} /* namespace m8009175C */

namespace m800917AC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern void *lbl_802C9F94[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_800917AC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_800917AC(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802C9F94;
        ((VCall_fn_800917AC_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m800917AC */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};
namespace m80091820 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern void *lbl_8035B530;
extern void *lbl_802C9AA0[];
extern u8 lbl_80359370[8];
extern u8 lbl_80359378[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

/* hoisted */

struct C80091820 : C8024262C {
    u32 f[74];
    C80091820(u8 *b) {
        f[0] = (u32)(b + 1268);
        f[0x15] = 18;
        f[0xb] = 18;
        f[0x1a] = 1;
        f[0x17] = 1;
        f[0x20] = 2;
        f[0x1f] = 8;
        f[0x21] = 0;
        f[0x22] = 1;
        f[0x23] = 0;
        f[0x25] = 1;
        f[0x16] = (u32)(b + 692);
        f[10] = (u32)(b + 764);
        f[0xc] = (u32)(b + 980);
        f[0x1b] = (u32)lbl_80359378;
        f[0x1e] = (u32)(b + 656);
        f[0x31] = (u32)lbl_80359370;
        f[0x32] = (u32)(b + 540);
        f[0x33] = 0;
        f[0x3d] = (u32)(b + 636);
        f[0x3f] = 0;
        f[0x43] = (u32)(b + 672);
        f[0x46] = 0;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
    }
};

void *fn_80091820(void) {
    u8 *base = (u8 *)lbl_802C9AA0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80091820(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */

} /* namespace m80091820 */

namespace m8009196C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_8009196C(void *p, s32 a) {
    switch (a) {
    case 13:
        return fn_802421C0(p, 0);
    }
    return 1;
}

} /* extern "C" */

} /* namespace m8009196C */

namespace m800919A4 {
// dtk: data-align 4
/* Functions from 0x800919A4 to 0x80091A28, found by decomp-toolkit. */

extern "C" {

extern "C" {

}


extern "C" int fn_800919A4(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    case 3: return 1;
    case 4: return 0;
    case 5: return 0;
    case 6: return 1;
    case 7: return 0;
    default: return 1;
    }
}

} /* extern "C" */

} /* namespace m800919A4 */
