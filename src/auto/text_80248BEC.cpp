// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80248BEC { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual f32 *m(s32); };
extern "C" { extern f32 *lbl_8035B51C; extern f32 *lbl_8035B520; extern u8 *lbl_8035B65C; extern char lbl_803662C4[8]; extern char lbl_803662CC[8]; V_80248BEC *fn_80207198(void *, const char *, s32); void fn_8023D1B4(void *); }

void fn_80248BEC(u8 *p) {
    if (lbl_8035B51C == NULL) {
        lbl_8035B51C = fn_80207198(*(u8 **)(lbl_8035B65C + 36) + 992, lbl_803662C4, 0)->m(0);
    }
    if (lbl_8035B520 == NULL) {
        lbl_8035B520 = fn_80207198(*(u8 **)(lbl_8035B65C + 36) + 992, lbl_803662CC, 0)->m(0);
    }
    *(f32 *)(p + 28) = *lbl_8035B51C;
    *(f32 *)(p + 32) = *lbl_8035B520;
    fn_8023D1B4(p);
}

} /* extern "C" */
