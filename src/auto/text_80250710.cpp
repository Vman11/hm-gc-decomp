// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80250710 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *); };
extern "C" { extern V_80250710 *lbl_8035B7C0; extern f32 lbl_803664C0; void fn_8023D1A0(void *); }

void fn_80250710(u8 *p) {
    if (*(void **)(p + 56) != NULL) {
        lbl_8035B7C0->m(*(void **)(p + 56));
    }
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 1;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(f32 *)(p + 48) = lbl_803664C0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 64) = 0;
    fn_8023D1A0(p);
}

} /* extern "C" */
