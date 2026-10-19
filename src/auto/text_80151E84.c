/* Functions from 0x80151E84 to 0x80151F08, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

extern f32 lbl_8036453C;
extern f32 lbl_80364544;

static inline void Mtx44Trans(f32 *m, f32 x, f32 y, f32 z) {
    m[0] = lbl_8036453C;
    m[1] = lbl_80364544;
    m[2] = lbl_80364544;
    m[3] = x;
    m[4] = lbl_80364544;
    m[5] = lbl_8036453C;
    m[6] = lbl_80364544;
    m[7] = y;
    m[8] = lbl_80364544;
    m[9] = lbl_80364544;
    m[10] = lbl_8036453C;
    m[11] = z;
    m[12] = lbl_80364544;
    m[13] = lbl_80364544;
    m[14] = lbl_80364544;
    m[15] = lbl_8036453C;
}

extern f32 lbl_8036453C;
extern f32 lbl_80364544;
void fn_80151E84(f32 *m, f32 *v) {
    f32 x, y, z;
    x = v[0];
    m[0] = lbl_8036453C;
    y = v[1];
    z = v[2];
    m[1] = lbl_80364544;
    m[2] = lbl_80364544;
    m[3] = x;
    m[4] = lbl_80364544;
    m[5] = lbl_8036453C;
    m[6] = lbl_80364544;
    m[7] = y;
    m[8] = lbl_80364544;
    m[9] = lbl_80364544;
    m[10] = lbl_8036453C;
    m[11] = z;
    m[12] = lbl_80364544;
    m[13] = lbl_80364544;
    m[14] = lbl_80364544;
    m[15] = lbl_8036453C;
}
