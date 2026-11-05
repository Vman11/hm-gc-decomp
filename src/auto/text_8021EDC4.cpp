#include "common.h"

extern "C" {

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

void fn_8021EDC4(Node_8021EDC4 *n, Seg_8021EDC4 *s) {
    V3_8021EDC4 hit;
    V3_8021EDC4 *save;
    V3_8021EDC4 *a = s->pa;
    V3_8021EDC4 *b = s->pb;
    f32 da = n->d + (a->x * n->nx + a->y * n->ny + a->z * n->nz);
    f32 db = n->d + (b->x * n->nx + b->y * n->ny + b->z * n->nz);

    if (da >= lbl_803659A0) {
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

} /* extern "C" */
