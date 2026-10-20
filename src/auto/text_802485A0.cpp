// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802485A0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(); };
extern "C" { extern f32 lbl_803662B8; extern f32 lbl_803662BC; void __dla__FPv(void *); void fn_8023D1A0(void *); }

void fn_802485A0(V_802485A0 *q) {
    u8 *p = (u8 *)q;
    if (q->m() != 0) {
        if (*(void **)(p + 40) != NULL) {
            __dla__FPv(*(void **)(p + 40));
    *(s32 *)(p + 40) = 0;
        }
        fn_8023D1A0(p);
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 20) = 0;
    *(f32 *)(p + 28) = lbl_803662B8;
    *(f32 *)(p + 32) = lbl_803662BC;
    *(s32 *)(p + 44) = 1;
    *(s32 *)(p + 48) = 0;
    }
}

} /* extern "C" */
