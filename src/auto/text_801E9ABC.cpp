// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Y_9ABC { u8 pad[16]; void *f16; u8 pad2[12]; u32 f32; } Y_9ABC;
typedef struct O_9ABC { u8 pad[48]; Y_9ABC *f48; } O_9ABC;
typedef struct P_9ABC { u8 pad[40]; O_9ABC *f40; O_9ABC *f44; O_9ABC *f48; O_9ABC *f52; u8 f56[28]; u8 f84[12]; u8 f96[12]; int f108; } P_9ABC;
extern u8 lbl_803286D0[];
extern u32 lbl_80365360;
void fn_80190C98(O_9ABC *);
void fn_801E9ABC(P_9ABC *p) {
    O_9ABC *o = p->f44 ? p->f44 : p->f40;
    Y_9ABC *y;
    if (p->f108) {
        y = o->f48;
        if (y) {
            (*(void (**)(void *, void *, void *))(lbl_803286D0 + 44))(y->f16, p->f96, p->f84);
            y->f32 |= lbl_80365360;
            fn_80190C98(o);
        }
    } else {
        if (p->f48) {
            O_9ABC *z = p->f52 ? p->f52 : p->f48;
            Y_9ABC *w = z->f48;
            if (w) (*(void (**)(void *, void *))(lbl_803286D0 + 300))(w->f16, p->f56);
        }
        y = o->f48;
        if (y) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 24))(y->f16, p->f56);
            y->f32 |= lbl_80365360;
            fn_80190C98(o);
        }
    }
}

} /* extern "C" */
