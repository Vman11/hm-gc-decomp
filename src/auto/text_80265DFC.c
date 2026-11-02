// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p[0x118]; V3 v; u8 q[0x154 - 0x124]; f32 s; } P;
typedef struct { u8 p[0x80]; V3 v; u8 q[0x94 - 0x8c]; f32 s; u8 r[4]; P *p9c; u8 t[0xb0 - 0xa0]; void *fb0; } O;
extern f32 lbl_80366BD0;
void fn_80261AA8(O *);
void fn_80265DFC(O *o) {
    if (o->fb0 == 0) {
        P *p;
        f32 s;
        o->v.x = lbl_80366BD0;
        o->v.y = lbl_80366BD0;
        o->v.z = lbl_80366BD0;
        o->s = lbl_80366BD0;
        s = o->s;
        p = o->p9c;
        p->v.x = o->v.x;
        p->v.y = o->v.y;
        p->v.z = o->v.z;
        p->s = s;
    }
    fn_80261AA8(o);
}
