// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 d[44]; } E44;
typedef struct { u8 pad[60]; E44 *f60; } S216;
typedef struct { u8 pad[216]; S216 *f216; } S16;
typedef struct {
    u8 pad[16];
    S16 *f16;
    u32 f20;
    E44 *f24;
    u32 f28;
    u32 f32;
} Obj;
s32 fn_800FB33C(void *);
void fn_801EB474(Obj *, void *, s32);
void fn_801E6104(Obj *o, void *a, s32 msg) {
    switch (msg) {
    case 90:
        { s32 i = fn_800FB33C(a); o->f24 = &o->f16->f216->f60[i]; }
        break;
    case 69: o->f32 |= 1; break;
    case 70: o->f32 |= 2; break;
    case 71: o->f32 |= 4; break;
    case 127: o->f28 = 0; break;
    case 128: o->f28 = 1; break;
    case 129: o->f28 = 2; break;
    case 130: o->f28 = 3; break;
    default:
        fn_801EB474(o, a, msg);
        break;
    }
}

} /* extern "C" */
