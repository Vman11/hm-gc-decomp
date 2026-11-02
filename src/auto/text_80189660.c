// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { f32 x0, x1, y0, y1, z0, z1; s32 f18; s32 f1c; } B;
typedef struct { u8 p[0xc]; s32 fc; s32 axis; } O;
void fn_8019A3A4(O *, B *);
void fn_80189660(O *__restrict o, B *__restrict b) {
    f32 dx, dy, dz;
    fn_8019A3A4(o, b);
    dx = b->x1 - b->x0;
    dy = b->y1 - b->y0;
    o->fc = b->f1c;
    dz = b->z1 - b->z0;
    if (dx > dy) {
        if (dx > dz) o->axis = 0;
        else o->axis = 2;
    } else {
        if (dy > dz) o->axis = 1;
        else o->axis = 2;
    }
}
