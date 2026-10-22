// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[308]; void (*f)(void *, s32, s32, s32); } T80076A98;
extern T80076A98 lbl_803286D0;
typedef struct { u8 pad[16]; void *f10; } Q80076A98;
typedef struct { u8 pad[48]; Q80076A98 *f30; } P80076A98;
void fn_80076A98(const P80076A98 *p, s32 a, s32 b, s32 c) {
    const Q80076A98 *q = p->f30;
    if (q) lbl_803286D0.f(q->f10, a, b, c);
}

} /* extern "C" */
