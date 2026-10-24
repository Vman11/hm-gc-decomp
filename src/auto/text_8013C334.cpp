// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct SB { virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3(); virtual void v4(); };
struct S : SB { u8 *cur; u8 *end; s32 bits; };
struct R { S *s; };
struct C { u32 pad0; u32 w; u32 h; u32 pad12[2]; s32 dc; };
struct D {
    R *r;
    u8 pad4[52];
    s32 err;
    u8 pad60[6916];
    u16 ri;
    u8 pad6978[18382];
    u32 ncomp;
    C *comp[258];
    u32 mcux;
    u32 mcuy;
    s32 next;
};
extern char lbl_8029FA38[];
extern char lbl_8029FA58[];
void fn_80060568(char *, int, int, int);
u8 fn_801F36D8(S *);
void fn_801F3D50(C *, R *, u32, u32);

static inline void resetdc(D *d) {
    u32 i;
    for (i = 0; i < d->ncomp; i++) d->comp[i]->dc = 0;
}

static inline int restart(D *d) {
    R *r = d->r;
    u8 c;
    if (r->s->bits >= 0) {
        if (*r->s->cur == 0xFF) {
            r->s->cur++;
            if (r->s->cur >= r->s->end) {
                bool ok;
                r->s->v4();
                ok = false;
                if (r->s->cur < r->s->end || r->s->v3() == 0) ok = true;
                if (!ok) fn_80060568(lbl_8029FA38, 0, 0, 0);
            }
            if (*r->s->cur != 0) fn_80060568(lbl_8029FA58, 0, 0, 0);
            r->s->cur++;
        } else {
            r->s->cur++;
        }
        r->s->bits = -1;
    }
    c = fn_801F36D8(d->r->s);
    if (c != 0xFF) return 0;
    while (c == 0xFF) c = fn_801F36D8(d->r->s);
    if (c < 0xD0 || c > 0xD7) return 0;
    if ((c & 0xF) != d->next) return 0;
    d->next++;
    d->next %= 8;
    resetdc(d);
    if (d->r->s->bits < 0) d->r->s->bits = 8;
    return 1;
}

int fn_8013C334(D *d) {
    u32 y, x, n, ci, v, yy, u;
    n = 0;
    resetdc(d);
    for (y = 0; y < d->mcuy; y++) {
        for (x = 0; x < d->mcux; x++, n++) {
            if (d->ri != 0 && d->ri == n) {
                if (!restart(d)) {
                    d->err = 1;
                    return 0;
                }
                n = 0;
            }
            for (ci = 0; ci < d->ncomp; ci++) {
                for (v = 0; v < d->comp[ci]->h; v++) {
                    yy = v + y * d->comp[ci]->h;
                    for (u = 0; u < d->comp[ci]->w; u++) {
                        fn_801F3D50(d->comp[ci], d->r, yy, u + x * d->comp[ci]->w);
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
