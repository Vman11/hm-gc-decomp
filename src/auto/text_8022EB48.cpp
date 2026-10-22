// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V {
    u8 pad[104];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void update(f32 dt);
};
typedef struct { u8 pad[0x18]; void *x18; } A4;
typedef struct {
    u32 x0;
    u8 pad4[0x4c];
    void *x50;
    u8 pad54[0x44];
    volatile u32 x98;
    u8 pad9c[8];
    A4 *xA4;
    u8 padA8[228 - 0xa8];
} Elem;
typedef struct {
    u8 pad0[4];
    u32 *counts;
    u8 pad8[4];
    u32 n;
    Elem **lists;
} P;

void fn_8022EB48(P *p, f32 dt) {
    u32 j;
    u32 k;
    u32 f;
    Elem *e;
    for (j = 0; j < p->n; j++) {
        for (k = 0; k < p->counts[j]; k++) {
            e = &p->lists[j][k];
            f = e->x98;
            if (f & 1) {
                if ((f & 4) && e->x50 == 0) {
                    e->x98 &= ~1;
                    p->lists[j][k].x0 &= ~0x800;
                }
                if ((p->lists[j][k].x98 & 8) && p->lists[j][k].x50 == 0) {
                    if (p->lists[j][k].xA4->x18 == 0) {
                        p->lists[j][k].x98 &= ~8;
                        p->lists[j][k].x98 &= ~1;
                        p->lists[j][k].x0 &= ~0x800;
                    } else {
                        ((V *)&p->lists[j][k])->update(dt);
                    }
                } else if (p->lists[j][k].x0 & 0x800) {
                    ((V *)&p->lists[j][k])->update(dt);
                }
            }
        }
    }
}

} /* extern "C" */
