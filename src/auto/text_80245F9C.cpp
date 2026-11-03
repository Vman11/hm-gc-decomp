// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Trk { s32 type; u16 flags; u8 pad6[2]; f32 tens; u32 n; s32 loop; u8 pad14[4]; V3 *pos; V3 *a; V3 *b; f32 *s; };
extern f32 lbl_80366250, lbl_80366258, lbl_80366260;
void fn_80101624(V3 *, V3 *, V3 *, f32);

static inline V3 *NextV(Trk *t, V3 *arr, u32 i, V3 *cur) {
    if (t->loop && i == t->n - 1) return arr;
    if (i + 1 < t->n) return &arr[i + 1];
    return cur;
}
static inline void Scl(V3 *d, V3 *v, f32 k) { d->x = v->x * k; d->y = v->y * k; d->z = v->z * k; }
static inline void Mad(V3 *d, V3 *v, f32 k) { d->x += k * v->x; d->y += k * v->y; d->z += k * v->z; }
static inline void Spl(Trk *t, V3 *d, V3 **parr, u32 im1, u32 i, u32 ip2, f32 b0, f32 b1, f32 b2, f32 b3) {
    Scl(d, &(*parr)[im1], b0);
    Mad(d, &(*parr)[i % t->n], b1);
    Mad(d, &(*parr)[(i + 1) % t->n], b2);
    Mad(d, &(*parr)[ip2], b3);
}

void fn_80245F9C(Trk *t, u32 i, V3 *pos, V3 *pa, V3 *pb, f32 *ps, f32 u) {
    if (i >= t->n) i = t->n - 1;
    switch (t->type) {
    case 1: {
        V3 *cur = &t->pos[i];
        V3 *nx;
        if (t->loop && i == t->n - 1) nx = t->pos;
        else nx = &t->pos[i + 1];
        if (pos) {
            if (!(u >= -0.000005f && u <= 0.000005f)) {
                fn_80101624(pos, cur, nx, u);
            } else {
                pos->x = cur->x; pos->y = cur->y; pos->z = cur->z;
            }
        }
        if (pa && (t->flags & 4)) {
            cur = &t->a[i];
            fn_80101624(pa, cur, NextV(t, t->a, i, cur), u);
        }
        if (pb && (t->flags & 8)) {
            cur = &t->b[i];
            fn_80101624(pb, cur, NextV(t, t->b, i, cur), u);
        }
        if (ps && (t->flags & 0x10)) {
            f32 c = t->s[i];
            f32 nv;
            if (t->loop && i == t->n - 1) nv = t->s[0];
            else if (i + 1 < t->n) nv = t->s[i + 1];
            else nv = c;
            *ps = c * (lbl_80366258 - u) + nv * u;
        }
        break;
    }
    case 2: {
        f32 s, u2, u3, b0, b1, b2, b3;
        u32 im1, ip2;
        if (u < lbl_80366250) u = lbl_80366250;
        else if (u > lbl_80366258) u = lbl_80366258;
        u2 = u * u;
        u3 = u2 * u;
        s = lbl_80366260 * (lbl_80366258 - t->tens);
        b0 = s * (u2 + (-u3 + u2) - u);
        b1 = lbl_80366258 + ((2.0f - s) * u3 + (s - 3.0f) * u2);
        b2 = s * u + ((s - 2.0f) * u3 + (3.0f - 2.0f * s) * u2);
        b3 = s * (u3 - u2);
        if (i == 0) {
            if (t->loop) im1 = t->n - 1;
            else im1 = 0;
        } else im1 = i - 1;
        if (i == t->n - 2) {
            if (t->loop) ip2 = 0;
            else ip2 = t->n - 1;
        } else {
            ip2 = (i + 2) % t->n;
        }
        if (pos) Spl(t, pos, &t->pos, im1, i, ip2, b0, b1, b2, b3);
        if (pa && (t->flags & 4)) Spl(t, pa, &t->a, im1, i, ip2, b0, b1, b2, b3);
        if (pb && (t->flags & 8)) Spl(t, pb, &t->b, im1, i, ip2, b0, b1, b2, b3);
        if (ps && (t->flags & 0x10)) {
            *ps = b0 * t->s[im1];
            *ps += b1 * t->s[i % t->n];
            *ps += b2 * t->s[(i + 1) % t->n];
            *ps += b3 * t->s[ip2];
        }
        break;
    }
    }
}

} /* extern "C" */
