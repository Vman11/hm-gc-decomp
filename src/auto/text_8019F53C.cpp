// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8019F53C { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void m(const void *a, void *b); };
extern "C" {
typedef struct { f32 x; f32 y; f32 z; } E8019F53C;
typedef struct { u8 pad[96]; E8019F53C e[9]; u8 pad2[4]; u32 n; } P8019F53C;
typedef struct { u8 pad[12]; V8019F53C *f12; V8019F53C *f16; f32 f20; } T8019F53C;
extern volatile f32 lbl_80364D70;
void fn_8019F53C(T8019F53C *t, const P8019F53C *p, void *q) {
    u32 i = 1;
    u32 n;
    f32 base;
    if (p->e[0].x - t->f20 < lbl_80364D70) {
        t->f16->m(p, q);
        base = t->f20;
        n = p->n;
        do {
            if (p->e[i].x - base >= lbl_80364D70) { t->f12->m(p, q); return; }
            i++;
        } while (i < n);
    } else {
        t->f12->m(p, q);
        base = t->f20;
        n = p->n;
        do {
            if (p->e[i].x - base < lbl_80364D70) { t->f16->m(p, q); return; }
            i++;
        } while (i < n);
    }
}

} /* extern "C" */
