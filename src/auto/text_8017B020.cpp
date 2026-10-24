// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key { u8 d[8]; };
struct Vec { f32 x, y, z; };
struct L { u8 pad[4]; virtual void p0(); virtual void upd(void *); };
struct D { u8 pad[4]; f32 f4; u8 pad2[46]; u16 h54; };
struct O { u32 f0; f32 f4; f32 f8; L *p12; D *p16; u8 pad[4]; Vec v; f32 f36; f32 f40; void *f44; u32 f48; void *f52; };
struct X { u8 pad[684]; u8 a684[24]; u8 a708[24]; u8 a732[24]; };
extern const f32 lbl_80364828;
extern u32 lbl_8036480C, lbl_80364810, lbl_80364814, lbl_80364818, lbl_8036481C, lbl_80364820, lbl_80364824;
void fn_800FB000(R *, s32);
void fn_800FAEF8(R *);
void fn_800FB064(R *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F8274(void *, Key *);
void fn_80103BB4(O *, void *);
u32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_80101124(Vec *, R *);

void fn_8017B020(O *o, X *x, R *r, s32 tag) {
    Key key;
    Vec v;
    f32 val = lbl_80364828;
    s32 has = 0;
    u32 k;
    fn_800FB000(r, tag);
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch (k) {
        case 69: {
            void *t;
            fn_800FB064(r, &key);
            t = fn_800F9398(x->a732, &key);
            if (t == 0) r->err(37);
            fn_800FB064(r, &key);
            t = fn_800F8274(t, &key);
            if (t == 0) r->err(37);
            fn_80103BB4(o, t);
            o->f0 |= lbl_8036480C;
            if (o->p12) o->p12->upd(o);
            o->f48 |= lbl_80364810;
            o->f0 |= lbl_80364814;
            {
                u32 n = fn_800FB33C(r);
                if (o->f48 & 1) o->f4 = (s32)(n % o->p16->h54);
            }
            break;
        }
        case 70: {
            void *t;
            fn_800FB064(r, &key);
            t = fn_800F9398(x->a708, &key);
            if (t == 0) r->err(37);
            fn_800FB064(r, &key);
            o->f44 = fn_800F8274(t, &key);
            if (o->f44 == 0) r->err(37);
            break;
        }
        case 71:
            o->f40 = fn_800FB2E0(r);
            break;
        case 102:
            o->f48 |= lbl_80364818;
            break;
        case 103:
            o->f48 |= lbl_8036481C;
            break;
        case 72:
            val = fn_800FB2E0(r);
            has = 1;
            break;
        case 127:
            fn_800FB064(r, &key);
            o->f52 = fn_800F9398(x->a684, &key);
            if (o->f52 == 0) r->err(37);
            break;
        case 128:
            o->f48 |= lbl_80364820;
            break;
        case 129:
            o->f48 &= ~8;
            break;
        case 137:
            fn_80101124(&v, r);
            o->f0 |= lbl_80364824;
            o->v.x = v.x;
            o->v.y = v.y;
            o->v.z = v.z;
            break;
        default:
            r->err(30);
            break;
        }
    }
    if (has) {
        o->f8 = val;
        if (o->p16) o->f36 = o->f8 / o->p16->f4;
    }
}
}

} /* extern "C" */
