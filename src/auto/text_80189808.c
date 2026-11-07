/* NonMatching (wFK best + wMV): reg-masked SDIFF 0, DIFF 224 = FP register colouring of a/b/nb only (permuter candidate). */
#include "common.h"
typedef struct S { f32 *pos; s32 pst; u8 pad[24]; u32 *col; s32 cst; u32 *idx; s32 ist; f32 *uv; u8 pad2[28]; s32 ust; u8 pad3[72]; f32 ax; f32 ay; u8 pad4[8]; f32 bx; f32 by; f32 hs; u32 color; } S;
typedef struct O { u8 pad[88]; f32 sx; f32 sy; } O;
typedef struct Pt { u8 pad[4]; f32 t; f32 h; s32 rot; } Pt;
extern f32 lbl_803649F8;
extern f32 lbl_803649FC;

static inline void emit(S *s, f32 x, f32 y) {
    f32 *q = s->pos;
    q[0] = x;
    q[1] = y;
    q[2] = lbl_803649F8;
    q[3] = lbl_803649FC;
    s->pos = (f32 *)((u8 *)s->pos + s->pst);
    *s->col = s->color;
    s->col = (u32 *)((u8 *)s->col + s->cst);
    *s->idx = -1;
    s->idx = (u32 *)((u8 *)s->idx + s->ist);
}
#define UV(u, v) { f32 *w = s->uv; w[0] = u; w[1] = v; } s->uv = (f32 *)((u8 *)s->uv + s->ust);

void fn_80189808(O *o, S *s, Pt *p) {
    f32 cx = s->bx;
    f32 cy = s->by;
    f32 h;
    f32 a, b, nb;
    f32 t1, t2, t3, t4;
    cx += p->t * s->ax;
    cy += p->t * s->ay;
    h = p->h * s->hs;
    if (p->rot) {
        a = o->sx * h;
        b = o->sy * h;
    } else {
        a = lbl_803649F8;
        b = -h;
    }
    nb = -b;
    t1 = cx + a;
    t2 = cy + b;
    t3 = cx - a;
    t4 = cy - b;
    emit(s, t1 - nb, t2 - a);
    { f32 *w = s->uv; w[0] = w[1] = lbl_803649F8; } s->uv = (f32 *)((u8 *)s->uv + s->ust);
    emit(s, t1 + nb, t2 + a);
    UV(lbl_803649FC, lbl_803649F8)
    emit(s, t3 - nb, t4 - a);
    UV(lbl_803649F8, lbl_803649FC)
    emit(s, t1 + nb, t2 + a);
    UV(lbl_803649FC, lbl_803649F8)
    emit(s, t3 + nb, t4 + a);
    { f32 *w = s->uv; w[0] = w[1] = lbl_803649FC; } s->uv = (f32 *)((u8 *)s->uv + s->ust);
    emit(s, t3 - nb, t4 - a);
    UV(lbl_803649F8, lbl_803649FC)
}
