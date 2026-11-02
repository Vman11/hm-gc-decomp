// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { f32 x, y, z; } V3;
typedef struct O { u8 pad[0x10]; V3 v; void *f1c; s32 f20; u32 f24; } O;
extern u32 lbl_80365428;
void fn_80108B94(void *e, O *a, V3 v, s32 b);
s32 fn_801EF6AC(O *o) {
    if (o->f24 & 1) return 0;
    o->f24 |= lbl_80365428;
    if (o->f1c != NULL) {
        fn_80108B94(o->f1c, o, o->v, o->f20);
    }
    return 1;
}
