// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Vec { f32 x, y, z; };
struct Q { f32 x, y, z, w; };
struct Arr { u8 pad[36]; u8 *items; };
struct B { u8 pad[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *v4(); u8 pad2[168 - 108]; Arr *arr; };
struct A { u8 pad[4]; u32 idx; u8 pad2[20]; Vec pos; };
struct C { u32 type; u8 pad[24]; Vec pos; f32 w; };
struct M33 { f32 m[3][3]; };
extern M33 lbl_80330228;
extern Vec lbl_8033024C;
extern const f32 lbl_80364888;
void fn_8017BCCC(A *a, C *c);
f32 fn_800FDAC0(Vec *a, Vec *b, M33 *m, Vec *l, Vec *out, s32 p7, s32 p8);
f32 fn_800FD530(Vec *a, Q *b, Vec *out, s32 p7, s32 p8);
void fn_80103F78(void *m, Vec *in, Vec *out, s32 n);
void fn_80101820(Vec *v);
void fn_80100CF4(Q *q);

static inline void mulv(M33 *m, Vec *v, Vec *o) {
    f32 z, y, x;
    x = v->x * m->m[0][0]; y = v->x * m->m[0][1]; z = v->x * m->m[0][2];
    x += v->y * m->m[1][0]; y += v->y * m->m[1][1]; z += v->y * m->m[1][2];
    x += v->z * m->m[2][0]; y += v->z * m->m[2][1]; z += v->z * m->m[2][2];
    o->x = x; o->y = y; o->z = z;
}
static inline void post(A *a, B *b, Vec *tmp, Vec *out) {
    if (a->idx == 0) {
        void *m = b->v4();
        if (m) fn_80103F78(m, tmp, out, 1);
        else *out = *tmp;
    } else {
        fn_80103F78(b->arr->items + (a->idx - 1) * 40, tmp, out, 1);
    }
    fn_80101820(out);
}

f32 fn_8017D594(A *a, B *b, C *c, s32 unused, Vec *out, s32 p8, s32 p9) {
    Vec tmp;
    f32 r;
    if (c->type == 0) {
        fn_8017BCCC(a, c);
        r = fn_800FDAC0(&a->pos, &c->pos, &lbl_80330228, &lbl_8033024C, &tmp, p8, p9);
        post(a, b, &tmp, out);
        if (lbl_8033024C.x * tmp.x + lbl_8033024C.y * tmp.y + lbl_8033024C.z * tmp.z < lbl_80364888) {
            out->x = -out->x; out->y = -out->y; out->z = -out->z;
        }
        return r;
    } else if (c->type == 1) {
        Q q;
        fn_80100CF4(&q);
        fn_8017BCCC(a, c);
        Vec d;
        d.x = lbl_8033024C.x - a->pos.x;
        d.y = lbl_8033024C.y - a->pos.y;
        d.z = lbl_8033024C.z - a->pos.z;
        Vec rv;
        mulv(&lbl_80330228, &c->pos, &rv);
        q.x = d.x + rv.x;
        q.y = d.y + rv.y;
        q.z = d.z + rv.z;
        q.w = c->w;
        r = fn_800FD530(&a->pos, &q, &tmp, p8, p9);
        post(a, b, &tmp, out);
        if (lbl_8033024C.x * tmp.x + lbl_8033024C.y * tmp.y + lbl_8033024C.z * tmp.z < lbl_80364888) {
            out->x = -out->x; out->y = -out->y; out->z = -out->z;
        }
        return r;
    }
    return lbl_80364888;
}
}

} /* extern "C" */
