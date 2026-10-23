// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[32]; s32 x0; s32 y0; s32 x1; s32 y1; } S80177C60;
void fn_80177C60(const S80177C60 *p, f32 *out) {
    out[0] = p->x0;
    out[1] = p->y0;
    out[2] = p->x1 - p->x0;
    out[3] = p->y1 - p->y0;
}

} /* extern "C" */
