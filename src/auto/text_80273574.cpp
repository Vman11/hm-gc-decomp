// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80273574 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void b(); virtual void p4(); virtual s32 a(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void c(void *); };
typedef struct { u32 a, b, c, d; } T16_80273574;
extern T16_80273574 lbl_802AA9B0;
extern u8 *lbl_8035B754;
extern u32 lbl_80366FF8;
void *fn_8010FEDC(void *, void *, void *, s32);
void *fn_80110444(void *, void *, s32);
void fn_8025E6F4(void *, void *, s32, s32, s32);

void fn_80273574(V_80273574 *p, u8 *q) {
    u8 *b = (u8 *)p;
    if (p->a() != 0) {
        p->b();
    }
    *(void **)(b + 0xA8) = *(void **)(q + 0xC);
    if (*(void **)(q + 0x10) != NULL && *(void **)(b + 0xA8) != NULL) {
        *(void **)(b + 0xAC) = fn_8010FEDC(*(void **)(b + 0xA8), *(void **)(q + 0x10), &lbl_80366FF8, 1);
    }
    *(void **)(b + 0xC) = *(void **)(lbl_8035B754 + 0xC);
    *(void **)(b + 0x10) = fn_80110444(*(void **)(b + 0xC), &lbl_80366FF8, 0);
    {
        T16_80273574 t = lbl_802AA9B0;
        fn_8025E6F4(b + 0xC0, &t, 4, 0, 0);
    }
    p->c(q);
}

} /* extern "C" */
