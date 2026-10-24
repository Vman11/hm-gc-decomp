// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct V3 { f32 x, y, z; } V3;
typedef struct V4 { f32 x, y, z, w; } V4;
typedef struct Nd { u32 fl; u8 pad4[72 - 4]; u32 x72; u8 pad76[120 - 76]; void *x120; } Nd;
typedef struct Ob { u8 pad[48]; void *x48; } Ob;
typedef struct X744 { u8 pad[1228]; int x1228; u8 pad1232[1292 - 1232]; u32 *x1292; u8 pad1296[1716 - 1296]; u8 b1716; } X744;
typedef struct X580 { u8 pad[12]; int x12; } X580;
typedef struct O {
    u8 pad0[208]; V4 x208; u8 pad224[228 - 224]; Ob *x228; Ob *x232; Nd *x236[6]; Nd *x260[6]; Nd *x284[6]; Nd *x308[6];
    u8 pad332[580 - 332]; X580 *x580; u8 pad584[744 - 584]; X744 *x744;
} O;
extern u8 *lbl_8035B65C;
extern volatile f32 lbl_8035B9F4, lbl_8035B9F0;
extern f32 lbl_8035B99C, lbl_8035B9C8, lbl_8035B9F8, lbl_8035BA04;
extern volatile f32 lbl_8035B9FC, lbl_8035B960;
extern volatile f32 lbl_8035BA00;
extern u32 lbl_8035B9A0;
extern V3 lbl_80357E84;
extern volatile f32 lbl_80359F40;
extern volatile s8 lbl_80359F44;
extern volatile f32 lbl_80359F48;
extern volatile s8 lbl_80359F4C;
double fn_800EFDA4(double);
void fn_800FFE84(V4 *, V3 *, f32);
void fn_8010041C(V4 *, V4 *);
void fn_80107244(void *, V3 *);
void fn_801079E8(void *, V4 *, V3 *, int);
void fn_80190C98(Ob *);
void fn_8019B7E8(void *, Nd *);
void fn_80107F3C(void *, V3 *);
static inline void Upd(Ob *p, V4 *m, V3 *c) {
    if (p->x48) fn_80107244(p->x48, c);
    else { c->x = lbl_8035B99C; c->y = lbl_8035B99C; c->z = lbl_8035B99C; }
}
void fn_8002C5A4(O *o, f32 dt) {
    V4 m;
    V4 q;
    V3 c;
    V3 b;
    V3 a;
    void *mgr = *(void **)(lbl_8035B65C + 12);
    int bits;
    O *p;
    int bit;
    u32 i;
    if (!lbl_80359F44) { lbl_80359F40 = lbl_8035B99C; lbl_80359F44 = 1; }
    lbl_80359F40 += dt;
    {
        f32 t = lbl_80359F40;
        if (t > lbl_8035B9F4) lbl_80359F40 = t - lbl_8035B9F0;
    }
    fn_800FFE84(&q, &lbl_80357E84, lbl_8035B9C8 * (f32)fn_800EFDA4(lbl_80359F40));
    m.x = o->x208.x; m.y = o->x208.y; m.z = o->x208.z; m.w = o->x208.w;
    fn_8010041C(&m, &q);
    Upd(o->x228, &m, &c);
    {
        Ob *r = o->x228;
        if (r->x48) { fn_801079E8(r->x48, &m, &c, 0); fn_80190C98(r); }
    }
    Upd(o->x232, &m, &c);
    {
        Ob *r = o->x232;
        if (r->x48) { fn_801079E8(r->x48, &m, &c, 0); fn_80190C98(r); }
    }
    if (!lbl_80359F4C) { lbl_80359F48 = lbl_8035B99C; lbl_80359F4C = 1; }
    lbl_80359F48 = lbl_8035B9F8 * dt + lbl_80359F48;
    {
        f32 t = lbl_80359F48;
        if (t > lbl_8035B9F4) lbl_80359F48 = t - lbl_8035B9F0;
    }
    p = o;
    bit = 1;
    i = 0;
    bits = (int)*o->x744->x1292;
    for (; i < 6; i++, p = (O *)((u8 *)p + 4)) {
        if (i < 3 ? ((bits & bit) && !(bits & (bit << 3))) : (bits & bit)) {
            p->x236[0]->fl |= lbl_8035B9A0;
            p->x260[0]->fl |= lbl_8035B9A0;
            if (p->x284[0]->x72 == 0) fn_8019B7E8(mgr, p->x284[0]);
            if (p->x308[0]->x72 == 0) fn_8019B7E8(mgr, p->x308[0]);
            p->x284[0]->fl |= lbl_8035B9A0;
            p->x308[0]->fl |= lbl_8035B9A0;
            if (o->x744->x1228 && i == o->x744->b1716) {
                f32 s;
                p->x260[0]->fl |= lbl_8035B9A0;
                s = lbl_8035B9FC * (f32)fn_800EFDA4(lbl_80359F48) + lbl_8035B960;
                b.z = b.y = b.x = lbl_8035BA00;
                if (p->x260[0]->x120) fn_80107F3C(p->x260[0]->x120, &b);
                if (p->x308[0]->x120) fn_80107F3C(p->x308[0]->x120, &b);
                a.x = s; a.y = s; a.z = s;
                if (p->x236[0]->x120) fn_80107F3C(p->x236[0]->x120, &a);
                if (p->x284[0]->x120) fn_80107F3C(p->x284[0]->x120, &a);
            } else {
                b.x = lbl_8035BA04; b.y = lbl_8035BA04; b.z = lbl_8035BA04;
                if (p->x260[0]->x120) fn_80107F3C(p->x260[0]->x120, &b);
                if (p->x308[0]->x120) fn_80107F3C(p->x308[0]->x120, &b);
                a.z = a.y = a.x = lbl_8035B960;
                if (p->x236[0]->x120) fn_80107F3C(p->x236[0]->x120, &a);
                if (p->x284[0]->x120) fn_80107F3C(p->x284[0]->x120, &a);
            }
        } else {
            p->x236[0]->fl &= ~0x800;
            p->x260[0]->fl &= ~0x800;
            p->x284[0]->fl &= ~0x800;
            p->x308[0]->fl &= ~0x800;
        }
        bit <<= 1;
        if (o->x580->x12 != 2) {
            p->x236[0]->fl &= ~0x800;
            p->x260[0]->fl &= ~0x800;
        }
    }
}

} /* extern "C" */
