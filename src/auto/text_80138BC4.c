// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[16]; } E;
typedef struct { u8 p[8]; void *f8; u8 q[0x90 - 0xc]; u32 f90; s32 f94; s32 f98; u8 r[0xe0 - 0x9c]; u32 fe0; u32 fe4; E *fe8; } O;
typedef struct { u8 p[0x88]; u32 f88; } G;
extern G *lbl_8035AC5C;
void fn_8014AA14(E *, void *, u32, u32, void *);
void fn_80138BC4(O *o, void *x) {
    u32 t;
    o->f94 = -1;
    o->f98 = -1;
    if (x == 0 || o->fe4 >= o->fe0) return;
    t = lbl_8035AC5C->f88;
    if (t >= o->f90) return;
    fn_8014AA14(&o->fe8[o->fe4++], o->f8, t, o->f90 - t, x);
}
