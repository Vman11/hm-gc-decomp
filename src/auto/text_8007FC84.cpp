#include "common.h"
namespace m8007FC84 {
namespace m8007FC84 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V3 { f32 x, y, z; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void s14(V3 *, int, int, int, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void s19(); virtual void s20();
};
struct O { u8 pad[12]; u32 n; };
struct Q { u8 pad[212]; f32 f212; u8 pad216[28]; O *o244; };
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[24];
    u32 n124;
    u8 pad128[64];
    Q **q192;
    u8 pad196[28];
    A *a224;
    u8 pad228[56];
    Q *q284;
};
extern u8 lbl_8035FAD0[];
extern u8 lbl_8035FAD8[];
extern u8 lbl_8035FAE0[];
extern u8 lbl_8035FAE8[];
extern u8 lbl_8035FAF0[];
extern u8 lbl_8035FAF8[];
extern u8 lbl_8035FB08[];
extern u8 lbl_8035FB10[];
extern u8 lbl_80298A2C[];
extern u8 lbl_80298A38[];
extern u8 lbl_80298A44[];
extern u8 lbl_8035FB20[];
s32 *fn_80080008(s32 *, s16);
void fn_80249AC4(void);
void fn_8007FFE8(void);
void fn_80242210(void);
void fn_8007FFBC(s32);
void fn_8023D198(void);
void fn_800801B4(void);
void fn_8007FC84(P *, s32);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8007FF68(s32);
void fn_8003FB68(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_800801BC(void);
void fn_8003FB6C(void);
void *lbl_802C3FE0[178] = { 0, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, 0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, 0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, 0, (void *)0x00000028, 0, 0, (void *)0x00000028, 0, 0, (void *)0x00000028, 0, 0, (void *)0x3F800000, 0, 0, 0, 0, 0, (void *)0x40000000, 0, (void *)0x3F800000, (void *)0x3F800000, 0, (void *)0xBF800000, (void *)0x3F800000, 0, 0, (void *)0x3F800000, (void *)0x3F800000, 0, (void *)0x3F800000, (void *)0xBF800000, 0, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, 0, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, 0, (void *)0x00000006, (void *)0x00000040, (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C, (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E, (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_8035FAD0, (void *)lbl_8035FAD8, (void *)lbl_8035FAD0, (void *)lbl_8035FAD0, (void *)lbl_8035FAE0, (void *)lbl_8035FAE8, (void *)lbl_8035FAD0, (void *)lbl_8035FAF0, (void *)lbl_8035FAF8, (void *)0x40A00000, 0, 0, (void *)lbl_8035FB08, (void *)lbl_8035FB10, (void *)lbl_80298A2C, (void *)lbl_8035FB08, (void *)lbl_80298A38, (void *)lbl_80298A44, (void *)lbl_8035FB20, (void *)lbl_8035FB10, 0, (void *)0x00000001, (void *)lbl_80298A2C, (void *)0x00000001, (void *)0x00000001, (void *)lbl_8035FB08, (void *)0x00000002, (void *)0x00000001, (void *)lbl_80298A38, (void *)0x00000003, (void *)0x00000001, (void *)lbl_80298A44, (void *)0x00000004, (void *)0x00000001, (void *)lbl_8035FB20, (void *)0x00000005, (void *)0x00000001, 0, (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005 };
static s32 tA[6] = { 0, 0x00000002, 0x00000004, 0x00000006, 0x00000008, 0x0000000A };
static s32 tB[12] = { 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001 };
static s32 tC[12] = { 0, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000002, 0x00000005, 0x00000002, 0x00000002, 0x00000006, 0x00000007, 0x00000002 };
void *lbl_802C4320[20] = { 0, 0, (void *)fn_80080008, (void *)fn_80249AC4, (void *)fn_8007FFE8, (void *)fn_80242210, (void *)fn_8007FFBC, (void *)fn_8023D198, (void *)fn_800801B4, (void *)fn_8007FC84, (void *)fn_80241D80, (void *)fn_8003F140, (void *)fn_8003F18C, (void *)fn_8007FF68, (void *)fn_8003FB68, (void *)fn_802416D4, (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_800801BC, (void *)fn_8003FB6C };
extern f32 lbl_8035FB28, lbl_8035FB2C, lbl_8035FB30;
void fn_80241628(P *, int, int);
void fn_80240A8C(P *, int, int);
void fn_802494A4(P *, int);
void fn_80245E58(O *, u32, V3 *);
void fn_80241588(P *, u32, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80240274(P *, int);
int rand(void);

static inline void pickPose(P *p) {
    O *o = p->q284->o244;
    if (o->n) {
        u32 n = o->n;
        V3 v;
        u32 k = 0;
        if (n - 1) k = rand() % (n - 1);
        fn_80245E58(o, k, &v);
        p->a224->s14(&v, 0, 0, 0, 0);
    }
}
static inline void pickAnim(P *p) {
    u32 m = p->n124;
    u32 k = 0;
    if (m) k = rand() % m;
    fn_80241588(p, k, 0, lbl_8035FB2C);
}
static inline void pick(P *p) { pickPose(p); pickAnim(p); }

void fn_8007FC84(P *p, s32 n) {
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
        fn_80241628(p, 1, 0);
        fn_80240A8C(p, 0, 0);
        p->q284 = *p->q192;
        p->q284->f212 = lbl_8035FB28;
        fn_80241628(p, 1, 0);
        p->a224->s20();
        break;
    case 1:
        p->a224->s19();
        pick(p);
        break;
    case 2:
        return;
    case 3:
        pick(p);
        break;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        {
            s32 r = (u32)rand() % 32000;
            fn_802490E0(p, 0, lbl_8035FB30 * r);
        }
        break;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7:
        fn_80240274(p, 0);
        break;
    case 8:
        break;
    }
}

} /* extern "C" */

} /* namespace m8007FC84 */

namespace m8007FF68 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8023FE08(void);
struct VCall_fn_8007FF68_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int, int, int, int, int); };

void fn_8007FF68(s32 param_1) {
    u8 auStack_18[4];

    fn_8023FE08();
    ((VCall_fn_8007FF68_0 *)(*(s32 **)(param_1 + 0xe0)))->m((s32)(auStack_18), (s32)(0), (s32)(0), (s32)(0), (s32)(0));
}
}

} /* namespace m8007FF68 */

namespace m8007FFBC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_8007FFBC(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m8007FFBC */

namespace m8007FFE8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023F214(void);

void fn_8007FFE8(void) {
    fn_8023F214();
}

} /* extern "C" */

} /* namespace m8007FFE8 */

namespace m80080008 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern void *lbl_802C4320[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_80080008_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_80080008(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802C4320;
        ((VCall_fn_80080008_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m80080008 */


// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern void *lbl_8035B530;
extern void *lbl_802C3FE0[];
extern u8 lbl_803592FC[4];
extern u8 lbl_803592F0[8];
extern u8 lbl_803592F8[4];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

} /* extern "C" */

} /* namespace m8007FC84 */
struct C8024262C {
    C8024262C();
    ~C8024262C();
};
namespace m8007FC84 {

struct C8008007C : C8024262C {
    u8 pad[288];
    C8008007C(u8 *base) {
        *(void **)this = base + 832;
        *(s32 *)(pad + 0x2c) = *(s32 *)(pad + 0x54) = 6;
        *(s32 *)(pad + 0x68) = 2;
        *(s32 *)(pad + 0x5c) = 1;
        *(s32 *)(pad + 0x80) = 2;
        *(s32 *)(pad + 0x7c) = 3;
        *(s32 *)(pad + 0x84) = 0;
        *(s32 *)(pad + 0x88) = 0;
        *(s32 *)(pad + 0x8c) = 1;
        *(s32 *)(pad + 0x94) = 0;
        *(void **)(pad + 0x58) = base + 592;
        *(void **)(pad + 0x28) = base + 616;
        *(void **)(pad + 0x30) = base + 688;
        *(void **)(pad + 0x6c) = lbl_803592FC;
        *(void **)(pad + 0x78) = base + 576;
        *(void **)(pad + 0xc4) = lbl_803592F0;
        *(void **)(pad + 0xc8) = base + 540;
        *(s32 *)(pad + 0xcc) = 0;
        *(s32 *)(pad + 0xf4) = 0;
        *(void **)(pad + 0xfc) = lbl_803592F8;
        *(s32 *)(pad + 0x10c) = 0;
        *(s32 *)(pad + 0x118) = 0;
        *(s32 *)(pad + 0x11c) = 0;
    }
};

extern "C" {

void *fn_8008007C(void) {
    u8 *base = (u8 *)lbl_802C3FE0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8008007C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */



} /* namespace m8007FC84 */

namespace m800801B4 {
/* Functions from 0x800801B4 to 0x8008021C, found by decomp-toolkit. */

extern "C" {

s32 fn_800801B4(void) {
    return 1;
}

s32 fn_800801BC(void *arg0, s32 idx) {
    void *ptr = *(void **)((u8 *)arg0 + 0x98);
    if (ptr != NULL) {
        return *(s32 *)((*(u32 *)((u8 *)ptr + 0xC)) + idx * 4);
    }
    switch (idx) {
    case 0: return 0;
    case 1: return 0;
    case 2: return 0;
    default: return 1;
    }
}

} /* extern "C" */

} /* namespace m800801B4 */

namespace m8008021C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A304;
extern volatile f32 lbl_8035A300;
__declspec(section ".sdata2") f64 lbl_8035FB40 = 0.3490658402442932;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803069D4[];
extern const char lbl_80298A50[16] = "Behavior";
__declspec(section ".sdata2") char lbl_8035FB48[8] = "BRObj";
void fn_8008007C(void);
void fn_800375E4(void);
extern u8 lbl_803069C8[];

void fn_8008021C(void) {
    lbl_8035A304 = lbl_803596E0[0];
    lbl_8035A300 = fn_800EFDA4(*(volatile f64 *)&lbl_8035FB40);
    __register_global_object(fn_8023DC5C(lbl_803069D4, (void *)lbl_80298A50, (void *)lbl_8035FB48, (void *)fn_8008007C, 288), (void *)fn_800375E4, lbl_803069C8);
}

__declspec(section ".ctors") static void (*const ctor_8008021C)(void) = fn_8008021C;

} /* extern "C" */

} /* namespace m8008021C */
