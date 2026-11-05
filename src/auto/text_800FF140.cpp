// fn_800FF140: OBB vs OBB separating-axis overlap test (15 axes), returns true if overlapping.
// NonMatching draft: instructions identical (SDIFF 0), DIFF 90 = prologue FP regs (r[1]/b->c.z land in saved regs).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V3_800FF140;
typedef struct { V3_800FF140 c; V3_800FF140 e; } Box_800FF140;

void fn_80101744(V3_800FF140 *out, const V3_800FF140 *in);

static inline f64 FA(f64 x) { return __fabs(x); }

bool fn_800FF140(Box_800FF140 *a, Box_800FF140 *b, f32 *r, V3_800FF140 *p) {
    V3_800FF140 ax[3];
    f32 tx, ty, tz;
    V3_800FF140 w;
    f32 r0, r3, r6, r1, r4, r7, r2, r5, r8;
    f32 nx, ny, nz, e;

    w.x = b->c.x * r[0];
    w.x += b->c.y * r[3];
    w.x += b->c.z * r[6];
    w.y = b->c.x * r[1];
    w.y += b->c.y * r[4];
    w.y += b->c.z * r[7];
    w.z = b->c.x * r[2];
    w.z += b->c.y * r[5];
    w.z += b->c.z * r[8];
    r0 = FA(r[0]);
    r3 = FA(r[3]);
    r6 = FA(r[6]);
    tx = p->x - a->c.x;
    tx += w.x;
    ty = p->y - a->c.y;
    ty += w.y;
    tz = p->z - a->c.z;
    tz += w.z;
    if ((f32)FA(tx) > a->e.x + r0 * b->e.x + r3 * b->e.y + r6 * b->e.z) return 0;
    r1 = FA(r[1]);
    r4 = FA(r[4]);
    r7 = FA(r[7]);
    if ((f32)FA(ty) > a->e.y + r1 * b->e.x + r4 * b->e.y + r7 * b->e.z) return 0;
    r2 = FA(r[2]);
    r5 = FA(r[5]);
    r8 = FA(r[8]);
    if ((f32)FA(tz) > a->e.z + r2 * b->e.x + r5 * b->e.y + r8 * b->e.z) return 0;

    fn_80101744(&ax[0], (V3_800FF140 *)&r[0]);
    nx = FA(ax[0].x);
    ny = FA(ax[0].y);
    nz = FA(ax[0].z);
    e = b->e.x;
    if ((f32)FA(tx * nx + ty * ny + tz * nz) > r0 * e + r1 * e + r2 * e + nx * a->e.x + ny * a->e.y + nz * a->e.z) return 0;
    if ((f32)FA(tz * ax[0].y - ty * ax[0].z) > a->e.y * nz + a->e.z * ny + b->e.y * r6 + b->e.z * r3) return 0;
    if ((f32)FA(tx * ax[0].z - tz * ax[0].x) > a->e.x * nz + a->e.z * nx + b->e.y * r7 + b->e.z * r4) return 0;
    if ((f32)FA(ty * ax[0].x - tx * ax[0].y) > a->e.x * ny + a->e.y * nx + b->e.y * r8 + b->e.z * r5) return 0;

    fn_80101744(&ax[1], (V3_800FF140 *)&r[3]);
    nx = FA(ax[1].x);
    ny = FA(ax[1].y);
    nz = FA(ax[1].z);
    e = b->e.y;
    if ((f32)FA(tx * nx + ty * ny + tz * nz) > r3 * e + r4 * e + r5 * e + nx * a->e.x + ny * a->e.y + nz * a->e.z) return 0;
    if ((f32)FA(tz * ax[1].y - ty * ax[1].z) > a->e.y * nz + a->e.z * ny + b->e.x * r6 + b->e.z * r0) return 0;
    if ((f32)FA(tx * ax[1].z - tz * ax[1].x) > a->e.x * nz + a->e.z * nx + b->e.x * r7 + b->e.z * r1) return 0;
    if ((f32)FA(ty * ax[1].x - tx * ax[1].y) > a->e.x * ny + a->e.y * nx + b->e.x * r8 + b->e.z * r2) return 0;

    fn_80101744(&ax[2], (V3_800FF140 *)&r[6]);
    nx = FA(ax[2].x);
    ny = FA(ax[2].y);
    nz = FA(ax[2].z);
    e = b->e.z;
    if ((f32)FA(tx * nx + ty * ny + tz * nz) > r6 * e + r7 * e + r8 * e + nx * a->e.x + ny * a->e.y + nz * a->e.z) return 0;
    if ((f32)FA(tz * ax[2].y - ty * ax[2].z) > a->e.y * nz + a->e.z * ny + b->e.x * r3 + b->e.y * r0) return 0;
    if ((f32)FA(tx * ax[2].z - tz * ax[2].x) > a->e.x * nz + a->e.z * nx + b->e.x * r4 + b->e.y * r1) return 0;
    return !((f32)FA(ty * ax[2].x - tx * ax[2].y) > a->e.x * ny + a->e.y * nx + b->e.x * r5 + b->e.y * r2);
}

}
