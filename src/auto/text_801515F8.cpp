#include "common.h"

extern "C" {

struct V4_15F8 { f32 x, y, z, w; };
struct V3_15F8 { f32 x, y, z; };

void fn_801515F8(f32 m[4][4], const V4_15F8 *a, const V3_15F8 *l) {
    f32 ad = a->w;
    f32 ly = l->y;
    f32 ay = a->y;
    f32 lx = l->x;
    f32 ax = a->x;
    f32 lz = l->z;
    f32 az = a->z;
    f32 dot = ax * lx + ay * ly + az * lz;
    f32 k = dot + ad;
    m[0][0] = k - lx * ax;
    m[1][0] = -(ly * ax);
    m[2][0] = -(lz * ax);
    m[3][0] = -ax;
    m[0][1] = -(lx * ay);
    m[1][1] = k - ly * ay;
    m[2][1] = -(lz * ay);
    m[3][1] = -ay;
    m[0][2] = -(lx * az);
    m[1][2] = -(ly * az);
    m[2][2] = k - lz * az;
    m[3][2] = -az;
    m[0][3] = -(lx * ad);
    m[1][3] = -(ly * ad);
    m[2][3] = -(lz * ad);
    m[3][3] = dot;
}

} /* extern "C" */
