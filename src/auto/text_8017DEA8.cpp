// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct C0 { u8 pad[68]; u32 f68; } C0;
typedef struct A { C0 *f0; u8 pad[8]; u32 f12; void *f16; } A;
typedef struct B { u8 pad[560]; s32 f560; u8 f564[12]; u32 f576; void *f580; } B;
extern u32 lbl_8035ADD0;
void fn_8017DBDC(A *, B *, void *);
void fn_8017E05C(C0 *, B *);

s32 fn_8017DEA8(A *a, B *b) {
    if (a->f0->f68 != lbl_8035ADD0) {
        if (b->f560 == 0) {
            a->f12 = lbl_8035ADD0;
            b->f576 = 0;
            a->f16 = b->f564;
            fn_8017DBDC(a, b, b->f564);
        }
        fn_8017E05C(a->f0, b);
        a->f0->f68 = lbl_8035ADD0;
    }
    if (a->f12 != lbl_8035ADD0) {
        return 0;
    }
    b->f580 = a->f16;
    return 1;
}

} /* extern "C" */
