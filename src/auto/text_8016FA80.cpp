// fn_8016FA80: NonMatching (DIFF 212; decl order ax,az,ay then c), billboard quad emit; logic right, uv consts reload + v3/v4 colour loads match; left: FP scheduling/regalloc (target keeps z1 in f31, 4 more insns); see hm-work/wA_80189BA4/STATUS.txt
#include "common.h"

extern "C" {

struct Vec { f32 x, y, z; };
struct Strm { u8 *pos; s32 posStride; u8 pad[24]; u8 *col; s32 colStride; u8 pad2[8]; u8 *uv; u8 pad3[28]; s32 uvStride; };
struct Part { Vec pos; f32 sx; f32 sy; };
struct Emi { u8 pad[4]; u32 f4; u32 f8; u8 pad1[4]; u32 col[4]; u8 pad2[84 - 32]; s32 colOff; Vec a; Vec b; };
extern f32 lbl_80364718;
extern f32 lbl_8036471C;

#define EMIT(s, x, y, z, U, V, c) \
    *(f32 *)(s->pos + 0) = x; \
    *(f32 *)(s->pos + 4) = y; \
    *(f32 *)(s->pos + 8) = z; \
    s->pos += s->posStride; \
    *(f32 *)(s->uv + 0) = U; \
    *(f32 *)(s->uv + 4) = V; \
    s->uv += s->uvStride; \
    *(u32 *)s->col = c; \
    s->col += s->colStride;

void fn_8016FA80(Emi *e, Part *p, Strm *s) {
//P{
    f32 ax, az, ay;
    f32 cx, cy, cz;
    f32 bx, by, bz;
    u32 *cp;
    s32 st;
    u32 tmp;
//P}
    cx = p->pos.x; cy = p->pos.y; cz = p->pos.z;
    if (e->f4 & 0x18) {
        ax = e->a.x; ay = e->a.y; az = e->a.z;
        bx = e->b.x; by = e->b.y; bz = e->b.z;
    } else if (e->f8 & 2) {
        f32 sc = p->sx;
        ax = e->a.x * sc; ay = e->a.y * sc; az = e->a.z * sc;
        bx = e->b.x * sc; by = e->b.y * sc; bz = e->b.z * sc;
    } else if (e->f8 & 4) {
        f32 sb = p->sx;
        f32 sa = p->sy;
        bx = e->b.x * sb; by = e->b.y * sb; bz = e->b.z * sb;
        ax = e->a.x * sa; ay = e->a.y * sa; az = e->a.z * sa;
    } else {
        ax = e->a.x; ay = e->a.y; az = e->a.z;
        bx = e->b.x; by = e->b.y; bz = e->b.z;
    }
    if (e->f4 & 6) {
        cp = e->col; st = 1;
    } else if (e->f8 & 8) {
        cp = (u32 *)((u8 *)p + e->colOff); st = 0;
    } else if (e->f8 & 0x10) {
        cp = (u32 *)((u8 *)p + e->colOff); st = 1;
    } else {
        tmp = 0xFFFFFFFF; cp = &tmp; st = 0;
    }
    {
        f32 x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3;
        u32 c0, c1;
        x0 = cx + ax; y0 = cy + ay; z0 = cz + az;
        c0 = cp[0];
        cp += st;
        x1 = x0; y1 = y0; z1 = z0;
        c1 = cp[0];
        cp += st;
        x0 -= bx; y0 -= by; z0 -= bz;
        x2 = cx - ax; y2 = cy - ay; z2 = cz - az;
        x3 = x2; y3 = y2; z3 = z2;
        x1 += bx; y1 += by; z1 += bz;
        x2 -= bx; y2 -= by; z2 -= bz;
        x3 += bx; y3 += by; z3 += bz;
        EMIT(s, x0, y0, z0, lbl_80364718, lbl_80364718, c0);
        EMIT(s, x1, y1, z1, lbl_8036471C, lbl_80364718, c1);
        {
        u32 c2, c3;
        *(f32 *)(s->pos + 0) = x2;
        *(f32 *)(s->pos + 4) = y2;
        *(f32 *)(s->pos + 8) = z2;
        s->pos += s->posStride;
        *(f32 *)(s->uv + 0) = lbl_80364718;
        *(f32 *)(s->uv + 4) = lbl_8036471C;
        s->uv += s->uvStride;
        c2 = cp[0];
        c3 = cp[st];
        *(u32 *)s->col = c2;
        s->col += s->colStride;
        EMIT(s, x3, y3, z3, lbl_8036471C, lbl_8036471C, c3);
        }
    }
}

} /* extern "C" */
