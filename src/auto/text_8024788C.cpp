// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80366250;
void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_80264840(void *);
} /* extern "C" */

struct A80247A00 {
    u32 x;
    A80247A00();
};

struct C80247A00 {
    s32 f0;
    s16 f4;
    f32 f8;
    u32 f12;
    u32 f16;
    u32 f20;
    A80247A00 *f24;
    A80247A00 *f28;
    A80247A00 *f32;
    u8 *f36;
    u8 *f40;
    u8 *f44;
    u8 *f48;
    u8 *f52;
    u8 *f56;
    u8 *f60;
    u32 f64;
    u8 *f68;
    u32 f72;
    u8 pad[28];
    u32 f104;
};

extern "C" {

C80247A00 *__dt__9C80247A00Fv(C80247A00 *p, s16 f) {
    if (p) {
        if (p->f12 != 0) {
            delete[] p->f24;
            delete[] p->f56;
            delete[] p->f60;
            if (p->f28) delete[] p->f28;
            if (p->f32) delete[] p->f32;
            if (p->f36) delete[] p->f36;
            if (p->f44) delete[] p->f44;
            if (p->f48) delete[] p->f48;
            if (p->f52) delete[] p->f52;
            if (p->f40) delete[] p->f40;
        }
        if (p->f68) delete[] p->f68;
        p->f0 = 1;
        p->f8 = lbl_80366250;
        p->f12 = 0;
        p->f16 = 0;
        p->f20 = 0;
        p->f24 = 0;
        p->f28 = 0;
        p->f32 = 0;
        p->f36 = 0;
        p->f44 = 0;
        p->f48 = 0;
        p->f40 = 0;
        p->f52 = 0;
        p->f64 = 0;
        p->f68 = 0;
        p->f56 = 0;
        p->f60 = 0;
        fn_80264840(&p->f72);
        p->f72 = 0;
        p->f4 = 0;
        p->f104 = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
