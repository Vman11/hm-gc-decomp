// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct A801CE4B0 {
    u8 d[16];
    A801CE4B0();
};
extern "C" {
typedef struct S801CE4B0 {
    u32 f0;
    u8 *f4;
    u32 f8;
    A801CE4B0 *f12;
    A801CE4B0 *f16;
    u8 *f20;
    u8 *f24;
    u8 *f28;
    u32 f32;
    u32 f36;
    u32 f40;
    u32 f44;
    u32 f48;
} S801CE4B0;

void fn_801CE4B0(S801CE4B0 *p) {
    if (p->f4) {
        u32 i;
        for (i = 0; i < p->f8; i++) {
        }
        delete[] p->f4;
    }
    if (p->f24) delete[] p->f24;
    if (p->f28) delete[] p->f28;
    if (p->f12) delete[] p->f12;
    if (p->f16) delete[] p->f16;
    if (p->f20) delete[] p->f20;
    p->f48 = 0;
    p->f0 = 0;
    p->f40 = 0;
    p->f4 = 0;
    p->f8 = 0;
    p->f12 = 0;
    p->f16 = 0;
    p->f20 = 0;
    p->f24 = 0;
    p->f28 = 0;
    p->f32 = 0;
    p->f36 = 0;
}

} /* extern "C" */
