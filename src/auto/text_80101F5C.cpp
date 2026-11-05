// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct V3 { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };
struct CH { u8 pad[10]; u16 node; };
struct CL { u8 pad[24]; void *data; CH *rot; CH *pos; CH *scl; u8 pad40[4]; CH *oth; };
struct AN { CL *clip; u8 pad4[28]; u16 r0, rn, p0, pn, s0, sn; u8 pad44[4]; u16 o0, on, pad52, frame; };
struct ND { u8 pad[16]; void *h; u8 pad20[12]; u32 fl; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void s7(V4 *); };
struct S52 { u8 b[52]; };
struct TG { u8 pad[36]; ND *nodes; S52 *s40; };
struct T { u8 pad[12]; void (*f12)(void *, V3 *); u8 pad16[8]; void (*f24)(void *, V4 *); };
extern T lbl_803286D0;
extern u32 lbl_80363850;
void fn_8021BE0C(void *, CH *, u16, V4 *, f32);
void fn_8021BD48(void *, CH *, u16, V3 *, f32);
void fn_8021BC84(void *, CH *, u16, V3 *, f32);
void fn_8021BBC0(void *, CH *, u16, V4 *, f32);
void fn_80107F3C(S52 *, V3 *);

void fn_80101F5C(AN *a, TG *tg, V3 *scale, f32 t) {
    V4 q;
    V3 p, s;
    V4 o;
    void *data;
    ND *n;
    u32 end;
    u32 i;
    CH *ch;
    end = a->r0 + a->rn;
    data = a->clip->data;
    for (i = a->r0; i < end; i++) {
        ch = &a->clip->rot[i];
        fn_8021BE0C(data, ch, a->frame, &q, t);
        n = &tg->nodes[ch->node];
        lbl_803286D0.f24(n->h, &q);
        n->fl |= lbl_80363850;
    }
    end = a->p0 + a->pn;
    i = a->p0;
    if (!scale) {
        for (; i < end; i++) {
            ch = &a->clip->pos[i];
            fn_8021BD48(data, ch, a->frame, &p, t);
            n = &tg->nodes[ch->node];
            lbl_803286D0.f12(n->h, &p);
            n->fl |= lbl_80363850;
        }
    } else {
        for (; i < end; i++) {
            ch = &a->clip->pos[i];
            fn_8021BD48(data, ch, a->frame, &p, t);
            p.x *= scale->x;
            p.y *= scale->y;
            p.z *= scale->z;
            n = &tg->nodes[ch->node];
            lbl_803286D0.f12(n->h, &p);
            n->fl |= lbl_80363850;
        }
    }
    for (i = a->s0, end = a->s0 + a->sn; i < end; i++) {
        ch = &a->clip->scl[i];
        fn_8021BC84(data, ch, a->frame, &s, t);
        fn_80107F3C(&tg->s40[ch->node], &s);
    }
    for (i = a->o0, end = a->o0 + a->on; i < end; i++) {
        ch = &a->clip->oth[i];
        fn_8021BBC0(data, ch, a->frame, &o, t);
        tg->nodes[ch->node].s7(&o);
    }
}
}
