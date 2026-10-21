// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z, w; } V4_80192398;
typedef struct {
    s32 f0;
    s16 f4;
    V4_80192398 a;
    V4_80192398 b;
    f32 f40;
    s32 f44, f48, f52, f56, f60;
    u8 buf[16];
    s32 f80, f84, f88, f92, f96, f100;
    void *vt;
} C80192398;
extern u8 lbl_802E9218[];
extern f32 lbl_80364B3C;
extern f32 lbl_803596E0[];
void fn_80100CF4(V4_80192398 *p);
void *memset(void *p, s32 c, u32 n);

C80192398 *__ct__9C80192398Fv(C80192398 *p) {
    p->vt = lbl_802E9218;
    fn_80100CF4(&p->a);
    fn_80100CF4(&p->b);
    p->f4 = 0;
    p->f100 = 0;
    p->f0 = 0;
    p->a.x = lbl_80364B3C;
    p->a.y = lbl_80364B3C;
    p->a.z = lbl_80364B3C;
    p->a.w = lbl_803596E0[0];
    p->b.x = lbl_80364B3C;
    p->b.y = lbl_80364B3C;
    p->b.z = lbl_80364B3C;
    p->b.w = lbl_803596E0[0];
    p->f40 = lbl_803596E0[0];
    p->f44 = 0;
    p->f48 = 0;
    p->f52 = 0;
    p->f56 = 0;
    p->f60 = 0;
    memset(p->buf, 0, 16);
    p->f80 = 0;
    p->f84 = 0;
    p->f88 = 0;
    p->f92 = -1;
    p->f96 = -1;
    return p;
}

} /* extern "C" */
