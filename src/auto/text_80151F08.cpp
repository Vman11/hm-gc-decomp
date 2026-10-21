// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec;
void fn_80101744(Vec *, void *);
void fn_80101820(Vec *);

void fn_80151F08(f32 (*out)[4], void *p2, Vec *v) {
    Vec a;
    Vec b;
    f32 d;
    Vec c;
    fn_80101744(&a, p2);
    d = v->x * a.x + v->y * a.y + v->z * a.z;
    b.x = v->x;
    b.y = v->y;
    b.z = v->z;
    b.x -= d * a.x;
    b.y -= d * a.y;
    b.z -= d * a.z;
    fn_80101820(&b);
    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;
    out[0][0] = a.x;
    out[1][0] = a.y;
    out[2][0] = a.z;
    out[0][1] = b.x;
    out[1][1] = b.y;
    out[2][1] = b.z;
    out[0][2] = c.x;
    out[1][2] = c.y;
    out[2][2] = c.z;
}

} /* extern "C" */
