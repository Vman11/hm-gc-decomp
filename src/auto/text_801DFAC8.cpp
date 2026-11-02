// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_FAC8 { u8 pad_[4];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual int f28(void *); virtual void f32(void *); virtual void v7();
    virtual void v8(); virtual void f44(void *);
};
struct E_FAC8 { u8 pad[12]; O_FAC8 *o; u8 pad2[44]; };
struct Q_FAC8 { u8 pad[172]; u32 n; E_FAC8 *e; };
struct P_FAC8 { u8 pad[24]; u8 f24[8]; void *f32; u8 pad2[4]; int f40; u8 pad3[8]; O_FAC8 f52; };
extern "C" {
int fn_801EB764(P_FAC8 *);
Q_FAC8 *fn_8019556C(void *);
static inline void A_FAC8(P_FAC8 *p) {
    Q_FAC8 *t = fn_8019556C(p->f32);
    s32 lo, hi;
    if (t == 0) return;
    if (p->f40 >= 0) {
        lo = p->f40; hi = lo;
    } else {
        lo = 0;
        hi = t->n - 1;
    }
    for (u32 i = lo; i <= (u32)hi; i++) {
        O_FAC8 *o = t->e[i].o;
        if (o) o->f32(p->f24);
        else p->f52.f32(p->f24);
    }
}
static inline void B_FAC8(P_FAC8 *p) {
    E_FAC8 *e;
    Q_FAC8 *t = fn_8019556C(p->f32);
    s32 lo, hi;
    if (t == 0) return;
    if (p->f40 >= 0) {
        lo = p->f40; hi = lo;
    } else {
        lo = 0;
        hi = t->n - 1;
    }
    for (u32 i = lo; i <= (u32)hi; i++) {
        e = &t->e[i];
        if (e->o) e->o->f28(p->f24);
        else if (p->f52.f28(p->f24)) p->f52.f44(e);
    }
}
int fn_801DFAC8(P_FAC8 *p) {
    if (!fn_801EB764(p)) return 0;
    A_FAC8(p);
    B_FAC8(p);
    return 1;
}
}
extern "C" {

} /* extern "C" */
