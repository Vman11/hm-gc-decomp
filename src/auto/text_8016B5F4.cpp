// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803646DC;
typedef struct { u8 pad[25]; u8 b25; u8 b26[24]; u8 c[7]; } D8016B5F4;
typedef struct { u8 pad[816]; const D8016B5F4 *p; u8 c[7]; } T8016B5F4;
void fn_800D7264(u8 a, const u8 *b, s32 c, u8 *d);
void fn_8016B5F4(T8016B5F4 *t, u32 x) {
    f32 s = (f32)x * lbl_803646DC;
    t->c[0] = (f32)t->p->c[0] * s;
    t->c[1] = (f32)t->p->c[1] * s;
    t->c[2] = (f32)t->p->c[2] * s;
    t->c[3] = (f32)t->p->c[3] * s;
    t->c[4] = (f32)t->p->c[4] * s;
    t->c[5] = (f32)t->p->c[5] * s;
    t->c[6] = (f32)t->p->c[6] * s;
    fn_800D7264(t->p->b25, t->p->b26, 1, t->c);
}

} /* extern "C" */
