// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern volatile f32 lbl_80364D78;
typedef struct { f32 t, a, b; } K8019FCB0;
typedef struct { u8 pad[100]; K8019FCB0 keys[9]; u32 n; } B8019FCB0;
} /* extern "C" */
struct V8019FCB0 { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(const B8019FCB0 *b, void *c); };
struct P8019FCB0 { u8 pad[12]; V8019FCB0 *fC; V8019FCB0 *f10; f32 f14; };
extern "C" {

void fn_8019FCB0(P8019FCB0 *p, const B8019FCB0 *b, void *c) {
    u32 i = 1;
    u32 n;
    f32 t;
    if (b->keys[0].t - p->f14 < lbl_80364D78) {
        p->f10->v6(b, c);
        t = p->f14;
        n = b->n;
        do {
            if (b->keys[i].t - t >= lbl_80364D78) {
                p->fC->v6(b, c);
                return;
            }
            i++;
        } while (i < n);
    } else {
        p->fC->v6(b, c);
        t = p->f14;
        n = b->n;
        do {
            if (b->keys[i].t - t < lbl_80364D78) {
                p->f10->v6(b, c);
                return;
            }
            i++;
        } while (i < n);
    }
}

} /* extern "C" */
