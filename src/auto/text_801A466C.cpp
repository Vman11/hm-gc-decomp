// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { f32 x, y, z, w; } Q4_801A466C;
typedef struct { u8 pad[36]; void *f; } P801A466C;
void fn_801A5128(void *p, Q4_801A466C *q);
void fn_801A0CBC(void *a, s32 b);
void fn_801A466C(P801A466C *p, s32 x, const Q4_801A466C *v) {
    Q4_801A466C q;
    q.x = v->x;
    q.y = v->y;
    q.z = v->z;
    q.w = v->w;
    fn_801A5128(p, &q);
    fn_801A0CBC(p->f, x);
}

} /* extern "C" */
