// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 r, g, b, a; } C;
typedef struct O { u8 pad[0x2c]; u32 f2c; u8 pad2[0x23d8 - 0x30]; s32 f23d8; void *f23dc; f32 a, b, c, d; C col; } O;
extern u32 lbl_803646F4;
void fn_800D9610(void *, f32, f32, f32, f32, C);
void fn_8016BA38(O *o) {
    o->f2c |= lbl_803646F4;
    if (o->f23d8 == 0) {
        o->f23d8 = 1;
        fn_800D9610(o->f23dc, o->a, o->b, o->c, o->d, o->col);
    }
}
