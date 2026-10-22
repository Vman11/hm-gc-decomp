// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { f32 x, y, z, w; } Q4_801DE1F0;
typedef struct { u8 pad[108]; void *f6C; } R801DE1F0;
typedef struct { u8 pad[12]; R801DE1F0 *fC; } P801DE1F0;
void fn_801A5128(void *p, Q4_801DE1F0 *q);
void fn_801DE1F0(P801DE1F0 *p, s32 unused, const Q4_801DE1F0 *v) {
    Q4_801DE1F0 q;
    q.x = v->x;
    q.y = v->y;
    q.z = v->z;
    q.w = v->w;
    fn_801A5128(p, &q);
    p->fC->f6C = p;
}

} /* extern "C" */
