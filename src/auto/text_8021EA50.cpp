#include "common.h"

// text_8021EA50 + text_8021EDC4 + text_8021EFA8 merged (one TU: fn_8021EA50 inlines/calls fn_8021EFA8 defined later; GC/2.0p1 + lmw).
extern "C" {

struct V21E { f32 x, y, z, w; };
struct N21E { f32 nx, ny, nz, d; u8 pad10[8]; N21E *f18; N21E *f1c; };
struct Cb21E { u8 pad[0x30]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void hit(N21E *); };
f32 fn_8021EFA8(f32 *arg0, f32 *arg1);

extern f32 lbl_803659A0;
extern u32 lbl_8035B25C;

typedef struct V3_8021EDC4 { f32 x, y, z; } V3_8021EDC4;
typedef struct Node_8021EDC4 {
    f32 nx, ny, nz, d;
    u8 pad10[8];
    struct Node_8021EDC4 *front;
    struct Node_8021EDC4 *back;
} Node_8021EDC4;
typedef struct Seg_8021EDC4 {
    u8 pad0[84];
    V3_8021EDC4 *pa;
    V3_8021EDC4 *pb;
    u8 pad5C[116 - 92];
    u32 limit;
} Seg_8021EDC4;

void fn_80101624(V3_8021EDC4 *, V3_8021EDC4 *, V3_8021EDC4 *, f32);
void fn_8021E508(Node_8021EDC4 *, Seg_8021EDC4 *, V3_8021EDC4 *);

static inline f32 Dot(Node_8021EDC4 *n, V3_8021EDC4 *a) {
    return n->d + (a->x * n->nx + a->y * n->ny + a->z * n->nz);
}


extern s32 lbl_8035B258;




s32 fn_8021EFEC(void) {
    return 0;
}

void fn_8021EFE4(s32 arg0) {
    lbl_8035B258 = arg0;
}

void fn_8021EFD8(void) {
    lbl_8035B25C = 0;
}

f32 fn_8021EFA8(f32 *arg0, f32 *arg1) {
    return arg0[3] + (arg1[0] * arg0[0] + arg1[1] * arg0[1] + arg1[2] * arg0[2]);
}

void fn_8021EDC4(Node_8021EDC4 *n, Seg_8021EDC4 *s) {
    V3_8021EDC4 hit;
    V3_8021EDC4 *save;
    V3_8021EDC4 *a = s->pa;
    V3_8021EDC4 *b = s->pb;
    f32 da = Dot(n, a);
    f32 db = Dot(n, b);

    if (da >= *(f32 *)&lbl_803659A0) {
        if (db < lbl_803659A0) {
            fn_80101624(&hit, a, b, da / (da - db));
            if (n->front != NULL) {
                save = s->pb;
                s->pb = &hit;
                fn_8021EDC4(n->front, s);
                s->pb = save;
            }
            fn_8021E508(n, s, &hit);
            if (lbl_8035B25C < s->limit && n->back != NULL) {
                save = s->pa;
                s->pa = &hit;
                fn_8021EDC4(n->back, s);
                s->pa = save;
            }
        } else if (n->front != NULL) {
            fn_8021EDC4(n->front, s);
        }
    } else {
        if (db >= lbl_803659A0) {
            fn_80101624(&hit, a, b, da / (da - db));
            if (n->back != NULL) {
                save = s->pb;
                s->pb = &hit;
                fn_8021EDC4(n->back, s);
                s->pb = save;
            }
            fn_8021E508(n, s, &hit);
            if (lbl_8035B25C < s->limit && n->front != NULL) {
                save = s->pa;
                s->pa = &hit;
                fn_8021EDC4(n->front, s);
                s->pa = save;
            }
        } else if (n->back != NULL) {
            fn_8021EDC4(n->back, s);
        }
    }
}

void fn_8021EA50(N21E *n, Cb21E *cb, const V21E *s) {
    f32 d = fn_8021EFA8((f32 *)n, (f32 *)s);
    if (d >= s->w) {
        if (n->f18) fn_8021EA50(n->f18, cb, s);
    } else if (d < -s->w) {
        if (n->f1c) fn_8021EA50(n->f1c, cb, s);
    } else {
        cb->hit(n);
    }
}

} /* extern "C" */
