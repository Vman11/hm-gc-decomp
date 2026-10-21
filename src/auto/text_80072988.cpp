// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec_80072988;

extern f32 lbl_8035F448;
extern s32 lbl_8035A238;
extern f32 lbl_8035F44C;
extern f32 lbl_8035F450;
extern f32 lbl_8035F3EC;
f32 fn_80101664(Vec_80072988 *);

s32 fn_80072988(u8 *p, Vec_80072988 * __restrict dir)
{
    Vec_80072988 v;
    f32 d;

    v.x = dir->x;
    v.y = dir->y;
    v.z = dir->z;
    if (fn_80101664(&v) < lbl_8035F448) {
        return 0;
    }
    d = v.x * *(f32 *)(p + 20) + v.y * *(f32 *)(p + 24) + v.z * *(f32 *)(p + 28);
    if (lbl_8035A238 != 0) {
        if (d > lbl_8035F44C) {
            return 2;
        }
        if (d < lbl_8035F450) {
            return 1;
        }
        if (v.x * *(f32 *)(p + 32) + v.y * *(f32 *)(p + 36) + v.z * *(f32 *)(p + 40) > lbl_8035F3EC) {
            return 4;
        }
        return 3;
    } else {
        if (d > lbl_8035F44C) {
            return 1;
        }
        if (d < lbl_8035F450) {
            return 2;
        }
        if (v.x * *(f32 *)(p + 32) + v.y * *(f32 *)(p + 36) + v.z * *(f32 *)(p + 40) > lbl_8035F3EC) {
            return 3;
        }
        return 4;
    }
}

} /* extern "C" */
