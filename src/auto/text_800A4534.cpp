// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A0A4;
extern f32 lbl_80361CD8;
extern f32 lbl_80361CDC;
extern f32 lbl_80361CC4;

typedef struct {
    u8 pad0[96];
    s32 f60;
    u8 pad64[124];
    void *fE0;
    u8 padE4[136];
    s32 f16C;
    s32 f170;
    u8 pad174[8];
    s32 f17C;
    void *f180;
} S800A4534;

s32 fn_8003CC3C(void *);
s32 fn_8003CDA4(void *);
void fn_802490E0(S800A4534 *, s32, f32);
void fn_8022CC44(void *, void *, s32, f32, bool, s32, s32, f32);

static inline s32 diff800A4534(void *g) {
    s32 a = fn_8003CC3C(g);
    return a - fn_8003CDA4(g);
}

void fn_800A4534(S800A4534 *p) {
    s32 d = diff800A4534(lbl_8035A0A4);
    if (p->f60 == 0 && d == 0 && p->f17C == 0) {
        fn_802490E0(p, 2, lbl_80361CD8);
        p->f17C = 1;
    }
    if (p->f180 != 0) {
        fn_8022CC44(p->fE0, p->f180, 1, lbl_80361CDC, (u8)(p->f16C != 0 || p->f170 != 0), 0, 0, lbl_80361CC4);
        p->f180 = 0;
    }
}

} /* extern "C" */
