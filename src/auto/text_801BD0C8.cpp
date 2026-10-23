// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { f32 x, y, z, w; } Q4_801BD0C8;
void fn_801A5128(void *p, Q4_801BD0C8 *q);
void fn_801BD0C8(void *p, s32 unused, const Q4_801BD0C8 *v) {
    Q4_801BD0C8 q;
    q.x = v->x;
    q.y = v->y;
    q.z = v->z;
    q.w = v->w;
    fn_801A5128(p, &q);
}

} /* extern "C" */
