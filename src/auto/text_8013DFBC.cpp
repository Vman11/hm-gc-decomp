// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R_8013DFBC { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f32 lbl_80364318;
void fn_800FAEF8(R_8013DFBC *);
u32 fn_800FB33C(R_8013DFBC *);
f32 fn_800FB2E0(R_8013DFBC *);
static inline u32 H(u8*o){return F(o,44,u32);}
static inline u32 W(u8*o){return F(o,32,u32);}
struct S_8013DFBC { u8 *obj; f32 t; u32 a, b, x, y, w; };
void fn_8013DFBC(S_8013DFBC *s, void *u, u8 *obj, R_8013DFBC *r) {
    u32 t;
    if (s->obj) { s->obj = 0; s->t = lbl_80364318; s->a = 0; s->b = 0; s->x = 0; s->y = 0; s->w = 0; }
    s->obj = obj;
    fn_800FAEF8(r);
    while ((t = r->v5()) != 6) {
        switch (t) {
        case 61:
            s->x = fn_800FB33C(r);
            if (s->x >= F(s->obj,32,u32)) r->v4(35);
            s->y = fn_800FB33C(r);
            if (s->y >= F(s->obj,44,u32)) r->v4(35);
            s->w = fn_800FB33C(r);
            if (s->y + s->w > H(s->obj) || s->x + s->w > W(s->obj)) r->v4(35);
            break;
        case 62:
            s->t = fn_800FB2E0(r);
            break;
        case 63:
            s->a = fn_800FB33C(r);
            if (!s->b) s->b = s->a + 1;
            break;
        case 64:
            s->b = fn_800FB33C(r);
            if (s->b < s->a) r->v4(35);
            break;
        default:
            r->v4(30);
            break;
        }
    }
}

} /* extern "C" */
