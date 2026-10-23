// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V801520F4;

void fn_80101744(V801520F4 *, void *);
void fn_80101820(V801520F4 *);

void fn_801520F4(f32 (*m)[4], void *src, const V801520F4 *dir) {
    V801520F4 up;
    V801520F4 w;
    V801520F4 c;
    f32 d;
    fn_80101744(&up, src);
    w = *dir;
    d = w.x * up.x + w.y * up.y + w.z * up.z;
    w.x -= d * up.x;
    w.y -= d * up.y;
    w.z -= d * up.z;
    fn_80101820(&w);
    c.x = w.y * up.z - w.z * up.y;
    c.y = w.z * up.x - w.x * up.z;
    c.z = w.x * up.y - w.y * up.x;
    m[0][0] = up.x;
    m[1][0] = up.y;
    m[2][0] = up.z;
    m[0][1] = c.x;
    m[1][1] = c.y;
    m[2][1] = c.z;
    m[0][2] = w.x;
    m[1][2] = w.y;
    m[2][2] = w.z;
}

} /* extern "C" */
