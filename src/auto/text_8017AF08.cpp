// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct P8017AF08 {
    u32 f0;
    f32 f4;
    u8 pad8[8];
    void *f16;
    u8 pad20[4];
    u8 f24[24];
    u32 f48;
    void *f52;
    void *f56;
} P8017AF08;

void fn_80102730(void *x, void *a);
void fn_80101E38(void *a, void *b, f32 f, void *c);
void fn_80106560(void *x, void *a);
void fn_80101F5C(void *a, void *b, f32 f, void *c);
void fn_8017AF08(P8017AF08 *p, void *a) {
    void *x;
    void *c;
    if (p->f48 & 1) {
        if (p->f56 != 0) {
            fn_80102730(p->f56, a);
        } else if (p->f48 & 8) {
            c = 0;
            x = p->f52;
            if (p->f0 & 0x400) {
                c = p->f24;
            }
            fn_80101E38(p->f16, x, p->f4, c);
            fn_80106560(x, a);
        } else {
            c = 0;
            if (p->f0 & 0x400) {
                c = p->f24;
            }
            fn_80101F5C(p->f16, a, p->f4, c);
        }
    }
}

} /* extern "C" */
