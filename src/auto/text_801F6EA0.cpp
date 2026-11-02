// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C4 { u8 r, g, b, a; C4() {} C4(const C4 &o) { r = o.r; g = o.g; b = o.b; a = o.a; } C4 &operator=(const C4 &o) { r = o.r; g = o.g; b = o.b; a = o.a; return *this; } };
struct C16 { u32 w[4]; };
struct Dst { u8 pad[64]; C4 c0, c1, c2, c3; };
struct P8 { u8 pad[216]; void *f216; };
struct O { u8 pad[8]; P8 *p8; s32 type; u8 pad16[24]; C4 a0, a1, a2, a3; C4 b0, b1, b2, b3; u8 pad72[8]; f32 dur; f32 remain; u8 pad88[32]; Dst *dst; };
extern f32 lbl_803654C8;
void fn_80121158(f32 t, C4 *out, const C4 *a, const C4 *b);
void fn_8019BA24(void *, Dst *);
void fn_8019B990(void *, Dst *);
void fn_801F6EA0(O *o, f32 dt) {
    f32 t;
    C4 r, b, a;
    if (o->remain == lbl_803654C8) return;
    if (o->remain <= dt) {
        *(C16 *)&o->dst->c0 = *(C16 *)&o->b0;
        o->remain = lbl_803654C8;
        if (o->type == 35) fn_8019BA24(o->p8->f216, o->dst);
        else if (o->type == 36) fn_8019B990(o->p8->f216, o->dst);
        return;
    }
    o->remain -= dt;
    t = (o->dur - o->remain) / o->dur;
    a = o->a0;
    b = o->b0;
    fn_80121158(t, &r, &a, &b);
    o->dst->c0 = r;
    a = o->a1;
    b = o->b1;
    fn_80121158(t, &r, &a, &b);
    o->dst->c1 = r;
    a = o->a3;
    b = o->b3;
    fn_80121158(t, &r, &a, &b);
    o->dst->c3 = r;
    a = o->a2;
    b = o->b2;
    fn_80121158(t, &r, &a, &b);
    o->dst->c2 = r;
}

} /* extern "C" */
