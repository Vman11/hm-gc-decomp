// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80138DD8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void *m(s32); };
extern u8 *lbl_8035AC5C;
extern u8 lbl_803286D0[];
void *fn_80129514(void *);

void fn_80138DD8(u8 *p, s32 a, void *b) {
    void *r = (*(V_80138DD8 **)(p + 0xB8))->m(a + 1);
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(r, b, fn_80129514(*(void **)(lbl_8035AC5C + 4)));
}

} /* extern "C" */
