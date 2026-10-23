// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct {
    u8 pad0[12];
    void (*fC)(void *, const f32 *);
    u8 pad1[32];
    void (*f30)(void *, f32 *, s32);
} T80129710;
extern T80129710 lbl_803286D0;
extern u32 lbl_80363E80;
typedef struct { u8 pad[16]; void *f10; u8 pad2[12]; u32 f20; } P80129710;
void fn_80129710(P80129710 *p, const f32 *b, const f32 *a, s32 d) {
    f32 v[3];
    v[0] = a[0] - b[0];
    v[1] = a[1] - b[1];
    v[2] = a[2] - b[2];
    lbl_803286D0.f30(p->f10, v, d);
    p->f20 |= lbl_80363E80;
    lbl_803286D0.fC(p->f10, b);
    p->f20 |= lbl_80363E80;
}

} /* extern "C" */
