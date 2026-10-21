// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad0[8];
    void *active;
    u8 pad0c[24 - 12];
    u32 lo;
    u32 cur;
    u8 pad20[36 - 32];
    u32 id;
} E800F7798;
typedef struct {
    u8 pad[12];
    E800F7798 e[16];
} M800F7798;
void *fn_800F72D0(E800F7798 *e, void *y);

void *fn_800F7798(M800F7798 *m, E800F7798 *x, void *y) {
    u32 old;
    E800F7798 *e;
    E800F7798 *end;
    void *r;
    u32 v;
    r = fn_800F72D0(x, y);
    if (r != 0) return r;
    for (e = m->e, end = m->e + 16; e < end; e++) {
        if (e != x && e->active != 0 && e->id == x->id) {
            v = x->cur;
            if ((s32)v != (s32)x->lo) {
                old = e->cur;
                if (old < v) {
                    if (v <= e->lo) e->cur = e->lo; else e->cur = v;
                }
                r = fn_800F72D0(e, y);
                if (old <= e->lo) e->cur = e->lo; else e->cur = old;
            } else {
                r = fn_800F72D0(e, y);
            }
            if (r != 0) return r;
        }
    }
    return 0;
}

} /* extern "C" */
