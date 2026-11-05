// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching (DIFF 24): first u8->f32 conversion magic/K loads scheduled above the byte-copy stb's.
extern "C" {

extern f32 lbl_80365340;
extern f32 lbl_80365344;
void fn_80121848(u8 *, void *);
typedef struct {
    u8 pad[0x28];
    f32 c0[4];
    f32 base[4];
    f32 add[4];
    u8 *q;
    s32 f5c;
    f32 f60;
    f32 f64;
} S801E8300;

void fn_801E8300(S801E8300 *p) {
    u8 c[4];
    u8 *q = p->q;
    c[0] = q[8];
    c[1] = q[9];
    c[2] = q[10];
    c[3] = q[11];
    p->add[0] = (s32)c[0] / lbl_80365344;
    p->add[1] = (s32)c[1] / lbl_80365344;
    p->add[2] = (s32)c[2] / lbl_80365344;
    p->add[3] = (s32)c[3] / lbl_80365344;
    if (p->f5c != 0) {
        p->c0[3] = p->add[3] + p->base[3];
        p->c0[1] = p->add[1] + p->base[1];
        p->c0[2] = p->add[2] + p->base[2];
        p->c0[0] = p->add[0] + p->base[0];
    } else {
        p->c0[0] = p->base[0];
        p->c0[1] = p->base[1];
        p->c0[2] = p->base[2];
        p->c0[3] = p->base[3];
    }
    if (p->f60 == lbl_80365340) {
        fn_80121848(c, p->c0);
        q = p->q;
        q[8] = c[0];
        q[9] = c[1];
        q[10] = c[2];
        q[11] = c[3];
    } else {
        p->f64 = p->f60;
    }
}

} /* extern "C" */
