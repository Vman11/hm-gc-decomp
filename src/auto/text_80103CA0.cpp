// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { void (*f0)(void *, void *); u8 pad[316]; } T80103CA0;
extern T80103CA0 lbl_803286D0;
extern u32 lbl_80363870;
typedef struct { u8 pad[16]; void *f10; u8 pad2[12]; u32 f20; } P80103CA0;
typedef struct { u8 pad[16]; void *f10; } Q80103CA0;
void fn_80103CA0(P80103CA0 *p, const Q80103CA0 *q) {
    lbl_803286D0.f0(p->f10, q->f10);
    p->f20 |= lbl_80363870;
}

} /* extern "C" */
