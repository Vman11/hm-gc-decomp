// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct P { u32 a; } P;
typedef struct O { u8 p0[0x2C]; u32 fl; u8 p30[0x23D8 - 0x30]; s32 on; u8 pdc[4]; f32 a, b, c, d; P p; } O;
void fn_800D9610(int, P *, f32, f32, f32, f32);
void fn_8016B9D4(O *o) {
    o->fl &= ~0x100;
    if (o->on) {
        P t;
        o->on = 0;
        t = o->p;
        fn_800D9610(0, &t, o->a, o->b, o->c, o->d);
    }
}

} /* extern "C" */
