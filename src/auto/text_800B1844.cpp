// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
typedef struct V3 { f32 x, y, z; } V3;
struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void v13(V3 *a, V3 *b, V3 *c, V3 *d, s32 e);
    virtual void v14(V3 *a, V3 *b, V3 *c, V3 *d, s32 e);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23();
    virtual void v24();
};
extern "C" {
static u8 sPad[1008] = {1};
static s32 sA[11] = {1};
static s32 sB[31] = {1};
static s32 sC[18] = {1};
struct FT { u8 pad[12]; void (*f12)(void *, V3 *); };
extern FT lbl_803286D0;
extern u32 lbl_80362F7C;
extern f32 lbl_80362F80;
extern f32 lbl_80362F84;
extern f32 lbl_80362F88;
extern f32 lbl_80362F8C;
extern f32 lbl_80362F90;
typedef struct Q { u8 pad[16]; void *f16; u8 pad2[12]; u32 f32_; } Q;
typedef struct O { u8 pad[48]; Q *f48; } O;
typedef struct A276 { O *f0; u8 pad[8]; s32 f12; s32 f16; f32 f20; f32 f24; f32 f28; } A276;
typedef struct X { u32 f0; u8 pad[44]; u32 f48; } X;
typedef struct T {
    u8 pad0[96]; s32 f96; u8 p1[224 - 100]; VO *f224; u8 p2[276 - 228]; A276 *f276; s32 *f280; f32 *f284;
    u8 p3[324 - 288]; s32 *f324; s32 *f328; s32 f332; f32 *f336; u8 p5[352 - 340]; f32 *f352; f32 *f356;
    V3 f360; s32 f372; f32 f376; s32 f380; u8 p6[4]; s32 f388;
} T;
int rand(void);
void fn_80241628(T *p, s32 a, s32 b);
void fn_802494A4(T *p, s32 a);
void fn_802490E0(T *p, s32 a, f32 v);
void fn_80241588(T *p, s32 a, s32 b, f32 v);
void fn_8024017C(T *p);
void fn_80240F24(T *p, s32 a, s32 b);
void fn_8023F9C8(T *p, s32 a);
void fn_8023F5FC(T *p, s32 a, f32 v);
void fn_80190C98(O *o);
X *fn_8022D694(VO *o);

inline f32 frnd();

void fn_800B1844(T *p, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    idx = sA[n];
    t = p->f96;
    for (q = sB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sB[idx++];
    }
    switch (sC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        p->f224->v23();
        if (p->f372 != 0) {
            p->f224->v13(&p->f360, 0, 0, 0, 0);
            p->f372 = 0;
        } else {
            p->f224->v14(&p->f360, 0, 0, 0, 0);
        }
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241628(p, 0, 0);
        if (*p->f324 != 0 && (*p->f328 == 0 || p->f388 != 0)) {
            { s32 i = rand() % 10000u; f32 r = lbl_80362F80 * (f32)i; f32 d = *p->f356 - *p->f352; r = d * r + *p->f352; fn_802490E0(p, 1, r); }
        }
        break;
    case 2:
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_80362F84);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_8024017C(p);
        fn_802494A4(p, 5);
        fn_80240F24(p, 4, 7);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_8023F9C8(p, 0);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_80240F24(p, 0, 3);
        fn_8023F5FC(p, p->f332, *p->f336);
        if (p->f276 != 0) {
            V3 v;
            p->f224->v13(&v, 0, 0, 0, 0);
            {
                O *o = p->f276->f0;
                Q *qq = o->f48;
                if (qq) {
                    lbl_803286D0.f12(qq->f16, &v);
                    qq->f32_ |= lbl_80362F7C;
                    fn_80190C98(o);
                }
            }
            p->f276->f12 = 1;
            p->f276->f16 = 1;
            p->f276->f24 = lbl_80362F88;
            p->f276->f20 = lbl_80362F8C;
            {
                A276 *a = p->f276;
                f32 d = a->f24 - a->f20;
                a->f28 = d * lbl_80362F90;
            }
        }
        fn_802494A4(p, 5);
        fn_80240F24(p, 8, 9);
        break;
    case 5:
        fn_80241628(p, 0, 0);
        p->f224->v24();
        break;
    case 6:
        return;
    case 7:
        if (fn_8022D694(p->f224) != 0) {
            X *x = fn_8022D694(p->f224);
            if (x->f48 & 1) x->f0 &= ~2;
        }
        break;
    case 8:
        fn_802494A4(p, 0);
        break;
    case 9:
        if (*p->f280 != 0) {
            V3 v;
            p->f224->v13(&v, 0, 0, 0, 0);
            if (p->f360.z - v.z >= *p->f284) fn_802494A4(p, 3);
        }
        break;
    case 10:
        if (*p->f280 != 0) {
            V3 v;
            p->f224->v13(&v, 0, 0, 0, 0);
            if (p->f360.z - v.z >= *p->f284) {
                fn_802494A4(p, 3);
                break;
            }
        }
        fn_802494A4(p, 1);
        break;
    case 11:
        fn_802494A4(p, 5);
        break;
    case 12:
        p->f380 = 1;
        break;
    case 13:
        p->f376 = lbl_80362F88;
        fn_802494A4(p, 2);
        break;
    case 14:
        break;
    }
}

} /* extern "C" */
