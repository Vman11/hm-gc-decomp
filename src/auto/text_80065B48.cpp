#include "common.h"
namespace m80065B48 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V3 {
    f32 x, y, z;
    void operator+=(const V3 &b) { x += b.x; y += b.y; z += b.z; }
    void operator-=(const V3 &b) { x -= b.x; y -= b.y; z -= b.z; }
    void operator*=(f32 k) { x *= k; y *= k; z *= k; }
};
struct T20C { u8 pad[0x60]; s32 type; };
struct TFC { u8 pad[0x20c]; T20C *p20c; };
struct Obj { u8 pad[0x50]; V3 pos; u8 pad5c[0xc]; V3 v68; u8 pad74[0x88]; TFC *pfc; };
struct Cfg { u8 pad[0x14]; f32 f14; };
/* .bss 0x803064F8..0x80306630 is owned by this unit (MWCC anchors these on one base) */
V3 lbl_803064F8[6];
V3 lbl_80306540[6];
V3 lbl_80306588[6];
V3 lbl_803065D0[6];
s32 lbl_80306618[6];
extern Cfg *lbl_8035B488;
extern f32 lbl_8035E708, lbl_8035E724, lbl_8035E728;
void fn_80101820(V3 *);
void fn_80101030(V3 *, V3 *);
void fn_80100F24(V3 *, V3 *);
#define AddK(o, K) o->pos.x += K * dx; o->pos.y += K * dy; o->pos.z += K * dz

void fn_80065B48(Obj *o) {
    if (lbl_80306618[1] && lbl_80306618[2]) {
        if (o->pfc->p20c->type != 0x13) {
            f32 dx = lbl_80306588[1].x, dy = lbl_80306588[1].y, dz = lbl_80306588[1].z;
            dx -= lbl_80306540[1].x; dy -= lbl_80306540[1].y; dz -= lbl_80306540[1].z;
            dx += lbl_80306588[2].x; dy += lbl_80306588[2].y; dz += lbl_80306588[2].z;
            dx -= lbl_80306540[2].x; dy -= lbl_80306540[2].y; dz -= lbl_80306540[2].z;
            AddK(o, lbl_8035E708);
        }
    } else if (lbl_80306618[1]) {
        f32 dx = lbl_80306588[1].x; dx -= lbl_80306540[1].x;
        f32 dy = lbl_80306588[1].y; dy -= lbl_80306540[1].y;
        f32 dz = lbl_80306588[1].z; dz -= lbl_80306540[1].z;
        o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
    } else if (lbl_80306618[2]) {
        if (o->pfc->p20c->type == 0x13) {
            f32 s = lbl_8035B488->f14;
            V3 v;
            v.x = lbl_80306588[2].x; v.y = lbl_80306588[2].y; v.z = lbl_80306588[2].z;
            v -= lbl_80306540[2];
            fn_80101820(&v);
            v *= lbl_8035E724 * s;
            o->pos += v;
        } else {
            f32 dx = lbl_80306588[2].x; dx -= lbl_80306540[2].x;
            f32 dy = lbl_80306588[2].y; dy -= lbl_80306540[2].y;
            f32 dz = lbl_80306588[2].z; dz -= lbl_80306540[2].z;
            o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
        }
    }
    if (lbl_80306618[3] && lbl_80306618[4]) {
        f32 dx = lbl_80306588[3].x, dy = lbl_80306588[3].y, dz = lbl_80306588[3].z;
        dx -= lbl_80306540[3].x; dy -= lbl_80306540[3].y; dz -= lbl_80306540[3].z;
        dx += lbl_80306588[4].x; dy += lbl_80306588[4].y; dz += lbl_80306588[4].z;
        dx -= lbl_80306540[4].x; dy -= lbl_80306540[4].y; dz -= lbl_80306540[4].z;
        AddK(o, lbl_8035E708);
    } else if (lbl_80306618[3]) {
        f32 dx = lbl_80306588[3].x; dx -= lbl_80306540[3].x;
        f32 dy = lbl_80306588[3].y; dy -= lbl_80306540[3].y;
        f32 dz = lbl_80306588[3].z; dz -= lbl_80306540[3].z;
        AddK(o, lbl_8035E728);
    } else if (lbl_80306618[4]) {
        f32 dx = lbl_80306588[4].x; dx -= lbl_80306540[4].x;
        f32 dy = lbl_80306588[4].y; dy -= lbl_80306540[4].y;
        f32 dz = lbl_80306588[4].z; dz -= lbl_80306540[4].z;
        AddK(o, lbl_8035E728);
    }
    if (lbl_80306618[5]) {
        if (lbl_80306618[0]) {
            V3 v;
            v.x = lbl_80306588[5].x; v.y = lbl_80306588[5].y; v.z = lbl_80306588[5].z;
            v -= lbl_80306540[5];
            fn_80101030(&v, &lbl_803065D0[5]);
            fn_80100F24(&v, &o->v68);
            o->pos += v;
        } else {
            f32 dx = lbl_80306588[5].x; dx -= lbl_80306540[5].x;
            f32 dy = lbl_80306588[5].y; dy -= lbl_80306540[5].y;
            f32 dz = lbl_80306588[5].z; dz -= lbl_80306540[5].z;
            o->pos.x += dx; o->pos.y += dy; o->pos.z += dz;
        }
    }
}

} /* extern "C" */

} /* namespace m80065B48 */

namespace m80066050 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_8035E70C;
extern f64 lbl_8035E730;
extern f64 lbl_8035E738;
struct G25 { u8 pad[0x20]; s32 f20; };
extern G25 *lbl_8035A02C;
struct Q25 { u8 pad[0x18c]; s32 f18c; u8 p190[0x500 - 0x190]; f32 f500, f504; u8 p508[0x68c - 0x508]; s32 f68c; };
struct R25 { s32 f0, f4; };
struct P25 { u8 pad[0x9c]; Q25 *q; u8 pa0[0xec - 0xa0]; f32 fec; u8 pf0[0xfc - 0xf0]; Q25 *ffc; u8 p100[0x158 - 0x100]; f32 f158, f15c; s32 f160; u8 p164[4]; R25 *f168; };
static inline f32 Sq(f32 x) {
    if (x > lbl_8035E70C) {
        const f64 _half = lbl_8035E730;
        const f64 _three = lbl_8035E738;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
void fn_80066050(P25 *p) {
    if (lbl_8035A02C->f20 != 0) {
        f32 z = lbl_8035E70C; p->fec = z; p->f158 = z; p->f15c = z;
    } else if (p->ffc->f68c == 0) {
        f32 z = lbl_8035E70C; p->fec = z; p->f158 = z; p->f15c = z;
    } else if (p->f168 != 0 && p->f168->f4 != 0) {
        Q25 *q = p->q;
        p->f15c = q->f500;
        p->f158 = q->f504;
        p->fec = Sq(__fmadds(p->f15c, p->f15c, p->f158 * p->f158));
        p->f160 = p->q->f18c;
    }
}

} /* extern "C" */

} /* namespace m80066050 */

namespace m80066148 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80261978(void);

void fn_80066148(void) {
    fn_80261978();
}

} /* extern "C" */

} /* namespace m80066148 */

namespace m80066168 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80066188(void);

void fn_80066168(void) {
    fn_80066188();
}

} /* extern "C" */

} /* namespace m80066168 */

namespace m80066188 {
/* Functions from 0x80066188 to 0x800662A4, found by decomp-toolkit. */

extern "C" {

void fn_80066188(void *arg0) {
    extern s32 lbl_8035A1F0;
    extern s8 lbl_8035A1F4;
    extern f32 lbl_8035E70C;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    lbl_8035A1F0 = 0;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x118) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x120) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x124) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x12C) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x130) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x144) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x148) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x14C) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x150) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x154) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x158) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, f32 *, 0x15C) = (f32) lbl_8035E70C;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    lbl_8035A1F4 = 0;
}

} /* extern "C" */

} /* namespace m80066188 */

namespace m800662A4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80261AA8(void);

void fn_800662A4(void) {
    fn_80261AA8();
}

} /* extern "C" */

} /* namespace m800662A4 */

struct V800662C4 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void *v5(s32);
};
namespace m800662C4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
/* hoisted */
extern "C" {

extern char lbl_80297760[];
extern char lbl_8035E740[5];
extern void *lbl_8035B5E4;
extern u8 *lbl_8035B65C;
void *fn_800F8274(void *, char *);
void *fn_80261114(u8 *, char *, s32);
void *fn_80110444(void *, char *, s32);
V800662C4 **fn_8010FEDC(void *, void *, char *, s32);
void fn_80261B18(u8 *, void *);

#pragma opt_propagation off
void fn_800662C4(u8 *p, void *a) {
    char *str;
    void *h;
    *(void **)(p + 252) = a;
    str = lbl_80297760;
    *(void **)(p + 356) = fn_800F8274(lbl_8035B5E4, lbl_8035E740);
    *(u8 **)(p + 360) = lbl_8035B65C + 1904;
    *(void **)(p + 212) = fn_80261114(p, str + 12, 1);
    *(void **)(p + 216) = fn_80261114(p, str + 28, 1);
    *(void **)(p + 220) = fn_80261114(p, str + 44, 1);
    *(void **)(p + 176) = fn_80261114(p, str + 60, 1);
    *(void **)(p + 180) = fn_80261114(p, str + 72, 1);
    *(void **)(p + 184) = fn_80261114(p, str + 84, 1);
    *(void **)(p + 188) = fn_80261114(p, str + 104, 1);
    *(void **)(p + 192) = fn_80261114(p, str + 124, 1);
    *(void **)(p + 196) = fn_80261114(p, str + 144, 1);
    *(void **)(p + 200) = fn_80261114(p, str + 164, 1);
    *(void **)(p + 204) = fn_80261114(p, str + 176, 1);
    *(void **)(p + 208) = fn_80261114(p, str + 192, 1);
    *(void **)(p + 224) = fn_80261114(p, str + 208, 1);
    *(void **)(p + 228) = fn_80261114(p, str + 224, 1);
    *(void **)(p + 244) = fn_80261114(p, str + 240, 1);
    h = fn_80110444(*(void **)(p + 12), str + 252, 0);
    *(void **)(p + 248) = (*fn_8010FEDC(*(void **)(p + 12), h, str + 264, 0))->v5(0);
    fn_80261B18(p, a);
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m800662C4 */

namespace m800664A4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035B754;
extern char lbl_8035E748[0x8];
s32 fn_8010FEDC(int, int, int, int);
s32 fn_80110444(int, int, int);
struct VCall_fn_800664A4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800664A4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_800664A4_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_800664A4(s32 *param_1, s32 param_2) {
    s32 iVar1;

    iVar1 = ((VCall_fn_800664A4_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_800664A4_1 *)(param_1))->m();
    }
    param_1[0x2a] = *(u32 *)(param_2 + 0xc);
    if ((*(u32 *)(param_2 + 0x10) != 0) && ((u32)param_1[0x2a] != 0)) {
        iVar1 = fn_8010FEDC((int)(param_1[0x2a]), (int)(*(u32 *)(param_2 + 0x10)), (int)(lbl_8035E748), (int)(1)); /* "MPlayer" */
        param_1[0x2b] = iVar1;
    }
    param_1[3] = *(u32 *)(lbl_8035B754 + 0xc);
    iVar1 = fn_80110444((int)(param_1[3]), (int)(lbl_8035E748), (int)(0));
    param_1[4] = iVar1;
    ((VCall_fn_800664A4_2 *)(param_1))->m((s32)(param_2));
}
}

} /* namespace m800664A4 */

namespace m8006656C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 __vt__9C800665E0[];
void __dl__FPv(int);
void __dt__9C80261CB0Fv(int, int);
struct VCall_fn_8006656C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_8006656C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)__vt__9C800665E0;
        ((VCall_fn_8006656C_0 *)(param_1))->m();
        __dt__9C80261CB0Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m8006656C */

/* m800665E0 (global ns: C++ class ctor) */
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80066188(int);
}
struct C80261CB0 { C80261CB0(); ~C80261CB0(); virtual void vf(); };
struct C800665E0 : C80261CB0 { C800665E0(); virtual void vf2(); };

C800665E0::C800665E0() {
    fn_80066188((int)this);
}


namespace m80066624 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void *__ct__9C8002FAE0Fv(void *p);
void *__construct_array(void *arr, void *ctor, void *dtor, u32 size, u32 n);
f64 fn_800EFDA4(f64 x);
extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1EC;
extern f32 lbl_8035A1E8;
extern volatile f64 lbl_8035E750;

s32 lbl_80306630[6];
s32 lbl_80306648[6];
s32 lbl_80306660[6];
s32 lbl_80306678[6];
s32 lbl_80306690[6];
u8 lbl_803066A8[72];
s32 lbl_803066F0[6];
s32 lbl_80306708[6];
u8 lbl_80306720[72];

void fn_80066624(void) {
    lbl_8035A1EC = lbl_803596E0[0];
    lbl_8035A1E8 = fn_800EFDA4(lbl_8035E750);
    __construct_array(m80065B48::lbl_803064F8, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(m80065B48::lbl_80306540, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(m80065B48::lbl_80306588, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(m80065B48::lbl_803065D0, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(lbl_803066A8, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(lbl_80306720, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
}

__declspec(section ".ctors") static void (*const ctor_80066624)(void) = fn_80066624;

} /* extern "C" */

} /* namespace m80066624 */
