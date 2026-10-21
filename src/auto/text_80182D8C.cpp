// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y; } Vec2;
typedef struct P80182D8C { u8 pad0[0x40]; f32 f40; f32 f44; f32 f48; u8 pad4C[0x1E4 - 0x4C]; f32 m[9]; } P80182D8C;
void fn_80101820(f32 *);
void fn_80100D68(Vec2 *);
f64 fn_800F045C(f64);
f64 fn_800F030C(f64);
extern f32 lbl_803648F8;
extern f32 lbl_803648E8;

void fn_80182D8C(P80182D8C *p) {
    Vec2 d;
    f32 a, y, z, b;
    fn_80101820(&p->f40);
    if (lbl_803648F8 == p->f40 && lbl_803648F8 == p->f44) {
        p->m[0] = lbl_803648E8;
        p->m[1] = lbl_803648F8;
        p->m[2] = lbl_803648F8;
        p->m[3] = lbl_803648F8;
        p->m[4] = lbl_803648E8;
        p->m[5] = lbl_803648F8;
        p->m[6] = lbl_803648F8;
        p->m[7] = lbl_803648F8;
        p->m[8] = lbl_803648E8;
    } else {
        d.x = p->f40;
        d.y = p->f44;
        fn_80100D68(&d);
        y = d.y;
        a = fn_800F030C((f32)fn_800F045C(y));
        z = p->f48;
        b = fn_800F030C((f32)fn_800F045C(z));
        p->m[0] = y;
        p->m[1] = -a;
        p->m[2] = lbl_803648F8;
        p->m[3] = z * a;
        p->m[4] = z * y;
        p->m[5] = -b;
        p->m[6] = b * a;
        p->m[7] = b * y;
        p->m[8] = z;
    }
}

} /* extern "C" */
