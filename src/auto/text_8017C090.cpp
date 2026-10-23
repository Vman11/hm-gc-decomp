// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N17C {
    u8 pad[0x10]; N17C *f10; N17C *f14;
    virtual void v0(); virtual s32 test(N17C *);
};

void fn_8017C090(N17C *a, N17C *b) {
    N17C *x;
    N17C *y;
    if (!a->test(b)) return;
    if (a->f14) {
        if (b->f14) {
            x = a->f14;
            do {
                y = b->f14;
                do {
                    fn_8017C090(x, y);
                    y = y->f10;
                } while (y);
                x = x->f10;
            } while (x);
        } else {
            x = a->f14;
            do {
                fn_8017C090(x, b);
                x = x->f10;
            } while (x);
        }
    } else if (b->f14) {
        y = b->f14;
        do {
            fn_8017C090(a, y);
            y = y->f10;
        } while (y);
    }
}

} /* extern "C" */
