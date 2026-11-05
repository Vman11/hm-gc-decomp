#include "common.h"
extern "C" {
struct V { f32 x, y, z; };
struct S;
struct N { u8 pad[8]; virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual void n5(); virtual void n6(); virtual void n7(); virtual void n8(); virtual void n9(); virtual void visit(S *); };
struct S { u8 pad[28]; V *a; V *b; u8 pad36[80]; u32 f116; u8 pad120[12]; u32 f132; };
struct P { u8 pad[12]; N *front; N *back; V n; f32 d; };
extern f32 lbl_80364C60;
void fn_80101624(V *, V *, V *, f32);
void fn_801980EC(P *p, S *s) {
    V *a = s->a;
    V *b = s->b;
    f32 da = p->d + (a->x * p->n.x + a->y * p->n.y + a->z * p->n.z);
    f32 db = p->d + (b->x * p->n.x + b->y * p->n.y + b->z * p->n.z);
    V m;
    if (da >= *(f32 *)&lbl_80364C60) {
        if (db < lbl_80364C60) {
            fn_80101624(&m, a, b, da / (da - db));
            if (p->front) { V *sv = s->b; s->b = &m; p->front->visit(s); s->b = sv; }
            if (s->f132 < s->f116 && p->back) { V *sv = s->a; s->a = &m; p->back->visit(s); s->a = sv; }
        } else {
            if (p->front) p->front->visit(s);
        }
    } else {
        if (db >= lbl_80364C60) {
            fn_80101624(&m, a, b, da / (da - db));
            if (p->back) { V *sv = s->b; s->b = &m; p->back->visit(s); s->b = sv; }
            if (s->f132 < s->f116 && p->front) { V *sv = s->a; s->a = &m; p->front->visit(s); s->a = sv; }
        } else {
            if (p->back) p->back->visit(s);
        }
    }
}
}
