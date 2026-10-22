// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[88]; void (*f58)(void *); u8 pad2[224]; } T80107F3C;
extern T80107F3C lbl_803286D0;
extern u32 lbl_8036390C;
typedef struct { u8 pad[16]; void *f10; u8 pad2[12]; u32 f20; u8 pad3[4]; f32 v[3]; } P80107F3C;
void fn_80107F3C(P80107F3C *p, const f32 *v) {
    p->v[0] = v[0];
    p->v[1] = v[1];
    p->v[2] = v[2];
    lbl_803286D0.f58(p->f10);
    p->f20 |= lbl_8036390C;
}

} /* extern "C" */
