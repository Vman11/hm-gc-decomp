// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct M { f32 x, y, z; };
struct L { u8 pad[12]; u32 n; };
struct S192 { u8 pad[4]; void *f4; };
struct T { u8 pad[192]; S192 *f192; u8 pad196[108]; f32 *f304; u8 pad308[44]; L *f352; L *f356; int f360; u8 pad364[8]; f32 f372; };
extern f32 lbl_80361F58;
extern f64 lbl_80361F70;
extern char lbl_80361F00[5];
int rand(void);
void fn_80257A84(void *, f32);
M *fn_80245F8C(L *, int);
void fn_80101820(M *);
void fn_80257A4C(void *, M *);
void fn_80241DD0(T *, char *, int, int, int, int);
static inline f32 crand() { s32 i = rand() % 10000u; f32 r = lbl_80361F58 * (f32)i; r = lbl_80361F70 - r; return r; }
static inline void vset(M *d, f32 x, f32 y, f32 z) { d->x = x; d->y = y; d->z = z; }
void fn_800A75B8(T *t) {
    f32 s;
    fn_80257A84(t->f192->f4, t->f372);
    if (t->f356) {
        M *p = fn_80245F8C(t->f356, t->f360);
        s = *t->f304;
        M o; M d;
        vset(&d, crand(), crand(), crand());
        fn_80101820(&d);
        d.x *= s; d.y *= s; d.z *= s;
        o.x = p->x + d.x; o.y = p->y + d.y; o.z = p->z + d.z;
        fn_80257A4C(t->f192->f4, &o);
    } else if (t->f352 && t->f352->n) {
        fn_80241DD0(t, lbl_80361F00, 0, 0, 0, 0);
    }
}

} /* extern "C" */
