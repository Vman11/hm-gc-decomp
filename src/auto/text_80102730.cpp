// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 w; f32 v[4]; } E20_80102730;
typedef struct { f32 w; f32 v[3]; } E16_80102730;
typedef struct { u8 pad[16]; void *h; u8 pad2[12]; u32 flags; u8 pad3[4]; } O40_80102730;
typedef struct { u8 d[52]; } O52_80102730;
typedef struct {
    E20_80102730 *a;
    E16_80102730 *b;
    E16_80102730 *c;
    u32 na;
    u32 nc;
} Src80102730;
typedef struct {
    u8 pad[36];
    O40_80102730 *objs;
    O52_80102730 *objs2;
} Dst80102730;
typedef struct {
    u8 pad[12];
    void (*f12)(void *h, f32 *v);
    u8 pad2[8];
    void (*f24)(void *h, f32 *v);
} Tab80102730;
extern Tab80102730 lbl_803286D0;
extern f32 lbl_80363864;
extern const u32 lbl_80363860;
void fn_80107F3C(O52_80102730 *o, f32 *v);

static inline O40_80102730 *getObj_80102730(Dst80102730 *d, u32 i) { return &d->objs[i]; }
void fn_80102730(Src80102730 *src, Dst80102730 *dst) {
    u32 i;
    u32 j;
    for (i = 0; i < src->na; i++) {
        O40_80102730 *o = getObj_80102730(dst, i);
        if (lbl_80363864 != src->a[i].w) {
            lbl_803286D0.f24(o->h, src->a[i].v);
            o->flags |= lbl_80363860;
        }
        if (lbl_80363864 != src->b[i].w) {
            lbl_803286D0.f12(o->h, src->b[i].v);
            o->flags |= lbl_80363860;
        }
    }
    for (j = 0; j < src->nc; j++) {
        O52_80102730 *o2 = &dst->objs2[j];
        if (lbl_80363864 != src->c[j].w) {
            fn_80107F3C(o2, src->c[j].v);
        }
    }
}

} /* extern "C" */
