// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C801CDA60 { f32 x, y, z, w; C801CDA60(); };
struct E28 { u32 a, b, c, d, e, f, g; };
struct T {
    u32 x0; E28 *p4; u32 n; C801CDA60 *p12; C801CDA60 *p16; int *p20; u32 *p24; u32 *p28;
    u32 x32, x36, x40; u32 pad44; int x48;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    C801CDA60 *g12(u32 i) { return &p12[i]; }
    int g20(u32 i) { return i < n ? p20[i] : 0; }
    C801CDA60 *g16(u32 i) { return p20[i] ? &p16[i] : 0; }
    void op(T *s);
};
extern "C" {
extern u32 lbl_8035B024;
extern f32 lbl_80365088;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
static inline void zero(C801CDA60 *v) { v->x = lbl_80365088; v->y = lbl_80365088; v->z = lbl_80365088; v->w = lbl_80365088; }
static inline void cpy(C801CDA60 *d, C801CDA60 *s) { d->x = s->x; d->y = s->y; d->z = s->z; d->w = s->w; }
void fn_801CDFC8(T *d, T *s) {
    u32 i;
    if (d->x48) d->v4();
    d->x48 = s->x48;
    d->x0 = s->x0;
    d->n = s->n;
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p4 = new E28[d->n];
    fn_800F7E98();
    if (!d->p4) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p24 = new u32[d->n];
    fn_800F7E98();
    if (!d->p24) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p28 = new u32[d->n];
    fn_800F7E98();
    if (!d->p28) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p12 = new C801CDA60[d->n];
    fn_800F7E98();
    if (!d->p12) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p16 = new C801CDA60[d->n];
    fn_800F7E98();
    if (!d->p16) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B024);
    d->p20 = new int[d->n];
    fn_800F7E98();
    if (!d->p20) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < d->n; i++) {
        d->p4[i].a = s->p4[i].a;
        {
            E28 *q = &d->p4[i];
            q->c = s->p4[i].c;
            q->b = s->p4[i].b;
        }
        {
            E28 *q = &d->p4[i];
            q->d = s->p4[i].d;
            q->e = s->p4[i].e;
            q->f = s->p4[i].f;
            q->g = s->p4[i].g;
        }
        d->p24[i] = s->p24[i];
        d->p28[i] = s->p28[i];
        if (s->g12(i)) cpy(&d->p12[i], s->g12(i));
        else zero(&d->p12[i]);
        d->p20[i] = s->g20(i);
        if (s->g16(i)) cpy(&d->p16[i], s->g16(i));
        else zero(&d->p16[i]);
    }
    d->x32 = s->x32;
    d->x36 = s->x36;
    d->x40 = s->x40;
}

} /* extern "C" */
