// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Entry { u16 flags; u16 id; u32 a; u32 b; u8 pad[8]; } Entry;
typedef struct Self { u8 pad[8]; Entry e[3]; } Self;
extern u32 fn_80147F98(Entry *e);
extern void fn_801481D4(void *out, u16 id, u32 a, u32 b, u32 flag);

void fn_80170ECC(Self *self, u32 id, u32 v, void *out) {
    Entry *p;
    Entry *end;
    Entry *q;
    Entry *best;
    s32 bestd;
    s32 d;
    p = self->e;
    end = p + 3;
    for (; p < end; p++) {
        if (id == p->id && v == fn_80147F98(p)) {
            fn_801481D4(out, p->id, p->a, p->b, (p->flags >> 10) & 1);
            return;
        }
    }
    for (p = self->e; p < end; p++) {
        if (p->id >= id && fn_80147F98(p) >= v) {
            fn_801481D4(out, p->id, p->a, p->b, (p->flags >> 10) & 1);
            return;
        }
    }
    bestd = 0x80000000;
    best = 0;
    for (q = self->e; q < end; q++) {
        d = q->id - id;
        if (d > bestd) {
            bestd = d;
            best = q;
        }
    }
    if (best) {
        fn_801481D4(out, best->id, best->a, best->b, (best->flags >> 10) & 1);
    } else {
        fn_801481D4(out, self->e[0].id, self->e[0].a, self->e[0].b, (self->e[0].flags >> 10) & 1);
    }
}

} /* extern "C" */
