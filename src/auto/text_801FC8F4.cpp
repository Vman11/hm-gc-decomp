// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FC8F4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *); };
extern "C" { extern volatile f32 lbl_80365614; extern volatile f32 lbl_80365618; void fn_80104ED0(void *); }

void fn_801FC8F4(u8 *p) {
    if (*(void **)(p + 64) != NULL) {
        (*(V_801FC8F4 **)(*(u8 **)(p + 64) + 4))->m(*(void **)(p + 16));
        (*(V_801FC8F4 **)(*(u8 **)(p + 64) + 4))->m(*(void **)(p + 20));
    }
    fn_80104ED0(p);
    *(f32 *)(p + 48) = lbl_80365614;
    *(f32 *)(p + 40) = lbl_80365614;
    *(f32 *)(p + 44) = lbl_80365614;
    *(f32 *)(p + 52) = lbl_80365618;
    *(f32 *)(p + 56) = lbl_80365618;
    *(f32 *)(p + 60) = lbl_80365618;
    *(s32 *)(p + 64) = 0;
}

} /* extern "C" */
