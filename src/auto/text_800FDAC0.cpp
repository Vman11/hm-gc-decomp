// fn_800FDAC0: OBB vs OBB separating-axis test (15 axes); returns max separation,
// writes axis normal and projected radii. NonMatching draft: regs differ (prologue + 2 cross blocks).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_80363740;
extern const f64 lbl_80363748;
extern const f64 lbl_80363750;
extern f32 lbl_80363758;
extern f32 lbl_8036375C;
extern f32 lbl_80363760;

typedef struct { f32 x, y, z; } V3_800FDAC0;
typedef struct { V3_800FDAC0 c; V3_800FDAC0 e; } Box_800FDAC0;

void fn_80101744(V3_800FDAC0 *out, const V3_800FDAC0 *in);

static inline f32 sqrtf_800FDAC0(f32 x) {
    volatile f32 y;
    if (x > lbl_80363740) {
        f64 _half = lbl_80363748;
        f64 _three = lbl_80363750;
        f64 guess = __frsqrte((f64)x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        y = (f32)(x * guess);
        return y;
    }
    return x;
}

static inline f64 FA(f64 x) { return __fabs(x); }

f32 fn_800FDAC0(Box_800FDAC0 *a, Box_800FDAC0 *b, f32 *r, V3_800FDAC0 *p, V3_800FDAC0 *nrm, f32 *ora, f32 *orb) {
    V3_800FDAC0 ax[3];
    f32 best;
    f32 tx, ty, tz;
    f32 wx, wy, wz;
    f32 r0, r3, r6, r1, r4, r7, r8, r5, r2;
    f32 ra, rb, s, len, pr;
    f32 nx, ny, nz, d, eb;

    best = -lbl_803596E0[0];
    wx = b->c.x * r[0];
    wx += b->c.y * r[3];
    wx += b->c.z * r[6];
    wy = b->c.x * r[1];
    wy += b->c.y * r[4];
    wy += b->c.z * r[7];
    wz = b->c.x * r[2];
    wz += b->c.y * r[5];
    wz += b->c.z * r[8];
    r0 = FA(r[0]);
    r3 = FA(r[3]);
    r6 = FA(r[6]);
    tx = p->x - a->c.x;
    tx += wx;
    ty = p->y - a->c.y;
    ty += wy;
    tz = p->z - a->c.z;
    tz += wz;
    rb = r0 * b->e.x + r3 * b->e.y + r6 * b->e.z;
    s = (f32)__fabs(tx) - (a->e.x + rb);
    if (s > best) {
        *ora = a->e.x;
        best = s;
        *orb = rb;
        nrm->x = lbl_80363758;
        nrm->y = lbl_80363740;
        nrm->z = lbl_80363740;
    }
    r1 = FA(r[1]);
    r4 = FA(r[4]);
    r7 = FA(r[7]);
    rb = r1 * b->e.x + r4 * b->e.y + r7 * b->e.z;
    s = (f32)FA(ty) - (a->e.y + rb);
    if (s > best) {
        *ora = a->e.y;
        best = s;
        *orb = rb;
        nrm->x = lbl_80363740;
        nrm->y = lbl_80363758;
        nrm->z = lbl_80363740;
    }
    r2 = FA(r[2]);
    r5 = FA(r[5]);
    r8 = FA(r[8]);
    rb = r2 * b->e.x + r5 * b->e.y + r8 * b->e.z;
    s = (f32)FA(tz) - (a->e.z + rb);
    if (s > best) {
        *ora = a->e.z;
        best = s;
        *orb = rb;
        nrm->x = lbl_80363740;
        nrm->y = lbl_80363740;
        nrm->z = lbl_80363758;
    }

    {
    fn_80101744(&ax[0], (V3_800FDAC0 *)&r[3 * 0]);
    nx = FA(ax[0].x);
    ny = FA(ax[0].y);
    nz = FA(ax[0].z);
    pr = (f32)FA(tx * nx + ty * ny + tz * nz);
    eb = b->e.x;
    ra = nx * a->e.x + ny * a->e.y + nz * a->e.z;
    rb = r0 * eb + r1 * eb + r2 * eb;
    s = pr - (ra + rb);
    if (s > best) {
        *ora = ra;
        best = s;
        *orb = eb;
        nrm->x = ax[0].x;
        nrm->y = ax[0].y;
        nrm->z = ax[0].z;
    }
    d = nx - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(tz * ax[0].y - ty * ax[0].z);
        ra = a->e.y * nz + a->e.z * ny;
        rb = b->e.y * r6 + b->e.z * r3;
        len = sqrtf_800FDAC0(ax[0].z * ax[0].z + ax[0].y * ax[0].y);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = lbl_80363740;
            nrm->y = -(ax[0].z / len);
            nrm->z = ax[0].y / len;
        }
    }
    d = ny - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(tx * ax[0].z - tz * ax[0].x);
        ra = a->e.x * nz + a->e.z * nx;
        rb = b->e.y * r7 + b->e.z * r4;
        len = sqrtf_800FDAC0(ax[0].z * ax[0].z + ax[0].x * ax[0].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = ax[0].z / len;
            nrm->y = lbl_80363740;
            nrm->z = -(ax[0].x / len);
        }
    }
    d = nz - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(ty * ax[0].x - tx * ax[0].y);
        ra = a->e.x * ny + a->e.y * nx;
        rb = b->e.y * r8 + b->e.z * r5;
        len = sqrtf_800FDAC0(ax[0].y * ax[0].y + ax[0].x * ax[0].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = -(ax[0].y / len);
            nrm->y = ax[0].x / len;
            nrm->z = lbl_80363740;
        }
    }
    }
    {
    fn_80101744(&ax[1], (V3_800FDAC0 *)&r[3 * 1]);
    nx = FA(ax[1].x);
    ny = FA(ax[1].y);
    nz = FA(ax[1].z);
    pr = (f32)FA(tx * nx + ty * ny + tz * nz);
    eb = b->e.y;
    ra = nx * a->e.x + ny * a->e.y + nz * a->e.z;
    rb = r3 * eb + r4 * eb + r5 * eb;
    s = pr - (ra + rb);
    if (s > best) {
        *ora = ra;
        best = s;
        *orb = eb;
        nrm->x = ax[1].x;
        nrm->y = ax[1].y;
        nrm->z = ax[1].z;
    }
    d = nx - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(tz * ax[1].y - ty * ax[1].z);
        ra = a->e.y * nz + a->e.z * ny;
        rb = b->e.x * r6 + b->e.z * r0;
        len = sqrtf_800FDAC0(ax[1].z * ax[1].z + ax[1].y * ax[1].y);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = lbl_80363740;
            nrm->y = -(ax[1].z / len);
            nrm->z = ax[1].y / len;
        }
    }
    d = ny - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(tx * ax[1].z - tz * ax[1].x);
        ra = a->e.x * nz + a->e.z * nx;
        rb = b->e.x * r7 + b->e.z * r1;
        len = sqrtf_800FDAC0(ax[1].z * ax[1].z + ax[1].x * ax[1].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = ax[1].z / len;
            nrm->y = lbl_80363740;
            nrm->z = -(ax[1].x / len);
        }
    }
    d = nz - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(ty * ax[1].x - tx * ax[1].y);
        ra = a->e.x * ny + a->e.y * nx;
        rb = b->e.x * r8 + b->e.z * r2;
        len = sqrtf_800FDAC0(ax[1].y * ax[1].y + ax[1].x * ax[1].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = -(ax[1].y / len);
            nrm->y = ax[1].x / len;
            nrm->z = lbl_80363740;
        }
    }
    }
    {
    fn_80101744(&ax[2], (V3_800FDAC0 *)&r[3 * 2]);
    nx = FA(ax[2].x);
    ny = FA(ax[2].y);
    nz = FA(ax[2].z);
    pr = (f32)FA(tx * nx + ty * ny + tz * nz);
    eb = b->e.z;
    ra = nx * a->e.x + ny * a->e.y + nz * a->e.z;
    rb = r6 * eb + r7 * eb + r8 * eb;
    s = pr - (ra + rb);
    if (s > best) {
        *ora = ra;
        best = s;
        *orb = eb;
        nrm->x = ax[2].x;
        nrm->y = ax[2].y;
        nrm->z = ax[2].z;
    }
    d = nx - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(tz * ax[2].y - ty * ax[2].z);
        ra = a->e.y * nz + a->e.z * ny;
        rb = b->e.x * r3 + b->e.y * r0;
        len = sqrtf_800FDAC0(ax[2].z * ax[2].z + ax[2].y * ax[2].y);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = lbl_80363740;
            nrm->y = -(ax[2].z / len);
            nrm->z = ax[2].y / len;
        }
    }
    d = ny - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {

        ra = a->e.x * nz + a->e.z * nx;
        rb = b->e.x * r4 + b->e.y * r1;
        pr = (f32)FA(tx * ax[2].z - tz * ax[2].x);
        len = sqrtf_800FDAC0(ax[2].z * ax[2].z + ax[2].x * ax[2].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = ax[2].z / len;
            nrm->y = lbl_80363740;
            nrm->z = -(ax[2].x / len);
        }
    }
    d = nz - lbl_80363758;
    if (!(d >= lbl_8036375C && d <= lbl_80363760)) {
        f32 pr, ra, rb, len, s;
        pr = (f32)FA(ty * ax[2].x - tx * ax[2].y);
        ra = a->e.x * ny + a->e.y * nx;
        rb = b->e.x * r5 + b->e.y * r2;
        len = sqrtf_800FDAC0(ax[2].y * ax[2].y + ax[2].x * ax[2].x);
        s = (pr - (ra + rb)) / len;
        if (s > best) {
            *ora = ra / len;
            *orb = rb / len;
            best = s;
            nrm->x = -(ax[2].y / len);
            nrm->y = ax[2].x / len;
            nrm->z = lbl_80363740;
        }
    }
    }
    return best;
}

}
