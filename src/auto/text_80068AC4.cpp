// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V15 { f32 v[15]; };
struct O824 { u8 pad[124]; s32 *a124; s32 *a128; };
struct O252 { u8 pad[824]; O824 *o824; u8 pad828[848]; s32 a1676; };
struct O156 { u8 pad[316]; f32 x, y, z; };
struct P {
    u8 pad0[20];
    V15 a20;
    V15 a80;
    u8 pad140[4];
    f32 f144;
    f32 f148;
    u8 pad152[4];
    O156 *o156;
    u8 pad160[92];
    O252 *o252;
    u8 pad256[88];
    f32 f344;
    f32 f348;
    u8 pad352[12];
    f32 f364;
    f32 f368;
    f32 *f372;
    u8 pad376[4];
    s32 i380;
    u8 pad384[12];
    f32 *f396;
    u8 pad400[8];
    s32 i408;
    s32 i412;
    u8 pad416[4];
    f32 f420;
    s32 i424;
    s32 i428;
};
extern f32 lbl_8035E758, lbl_8035E7E0;
extern f64 lbl_8035E7B0, lbl_8035E7D8;
extern u8 *lbl_8035B488;
extern void *lbl_8035B65C;
extern char lbl_80297884[];
void fn_800662A4(P *);
void fn_802610A0(P *);
void fn_80066050(P *);
void fn_8026102C(P *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);

inline f32 Sqrt(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035E7B0 * g * (lbl_8035E7D8 - g * g * x);
    g = lbl_8035E7B0 * g * (lbl_8035E7D8 - g * g * x);
    g = lbl_8035E7B0 * g * (lbl_8035E7D8 - g * g * x);
    y = x * g;
    return y;
}

static inline s32 g128(O824 *o) { return o->a128 ? *o->a128 : 0; }
static inline s32 chk(O824 *o) {
    if (!o) return 0;
    if (o->a124 && *o->a124 == 0) return 0;
    return g128(o) != 0;
}
static inline s32 g124(O824 *o) { return o->a124 ? *o->a124 : 0; }
static inline int ok(O824 *o) { return o && (o->a124 ? *o->a124 : 0) != 0 && (o->a128 ? *o->a128 : 0) != 0; }
void fn_80068AC4(P *p) {
    p->i424 = 0;
    p->i428 = p->o252->a1676;
    {
        O824 *o = p->o252->o824;
        if (o) {
            s32 *q = o->a124;
            if ((q ? *q : 0) != 0 && (o->a128 ? *o->a128 : 0) != 0) p->i428 = 0;
        }
    }
    p->i412 = 0;
    p->i408 = 0;
    fn_800662A4(p);
    p->f364 = lbl_8035E758;
    p->i380 = *(s32 *)(lbl_8035B488 + 12);
    fn_802610A0(p);
    fn_80066050(p);
    p->a80.v[0] = p->a20.v[0];
    p->a80.v[1] = p->a20.v[1];
    p->a80.v[2] = p->a20.v[2];
    p->a80.v[3] = p->a20.v[3];
    p->a80.v[4] = p->a20.v[4];
    p->a80.v[5] = p->a20.v[5];
    p->a80.v[6] = p->a20.v[6];
    p->a80.v[7] = p->a20.v[7];
    p->a80.v[8] = p->a20.v[8];
    p->a80.v[9] = p->a20.v[9];
    p->a80.v[10] = p->a20.v[10];
    p->a80.v[11] = p->a20.v[11];
    p->a80.v[12] = p->a20.v[12];
    p->a80.v[13] = p->a20.v[13];
    p->a80.v[14] = p->a20.v[14];
    p->f148 = p->f144;
    p->f368 = lbl_8035E7E0 * (-p->f348 * *p->f372);
    p->f364 = p->f344 * *p->f372;
    {
        O156 *o = p->o156;
        f32 x = o->x, y = o->y, z = o->z;
        p->a80.v[12] += x;
        p->a80.v[13] += y;
        p->a80.v[14] += z;
    }
    {
        f32 d = p->a80.v[12] * p->a80.v[12] + p->a80.v[13] * p->a80.v[13] + p->a80.v[14] * p->a80.v[14];
        if (d > lbl_8035E758) d = Sqrt(d);
        p->f148 = d;
    }
    {
        O156 *o = p->o156;
        o->x = lbl_8035E758;
        o->y = lbl_8035E758;
        o->z = lbl_8035E758;
    }
    fn_8026102C(p);
    if (p->a80.v[14] < *p->f396) {
        p->i408 = 1;
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297884, 0, 0, 0);
    }
    p->f420 = lbl_8035E758;
}

} /* extern "C" */
