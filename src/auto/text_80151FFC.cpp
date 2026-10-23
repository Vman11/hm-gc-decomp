// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec80151FFC;
void fn_80101744(Vec80151FFC *);
void fn_80101820(Vec80151FFC *);

void fn_80151FFC(f32 (*m)[4], void *unused, Vec80151FFC *v) {
    Vec80151FFC u;
    Vec80151FFC w;
    f32 d, cx, cy, cz;
    fn_80101744(&u);
    d = v->x * u.x + v->y * u.y + v->z * u.z;
    w.x = v->x;
    w.y = v->y;
    w.z = v->z;
    w.x = w.x - d * u.x;
    w.y = w.y - d * u.y;
    w.z = w.z - d * u.z;
    fn_80101820(&w);
    cx = w.y * u.z - w.z * u.y;
    cy = w.z * u.x - w.x * u.z;
    cz = w.x * u.y - w.y * u.x;
    m[0][0] = cx;
    m[1][0] = cy;
    m[2][0] = cz;
    m[0][1] = w.x;
    m[1][1] = w.y;
    m[2][1] = w.z;
    m[0][2] = u.x;
    m[1][2] = u.y;
    m[2][2] = u.z;
}

} /* extern "C" */
