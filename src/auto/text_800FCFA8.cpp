// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FCFA8 { u8 pad[0x30]; virtual void p0(); virtual void m(); };
extern "C" { extern volatile f32 lbl_80363714; void __dla__FPv(void *); }

void fn_800FCFA8(V_800FCFA8 *q) {
    u8 *p = (u8 *)q;
    if (*(u8 **)(p + 16) != NULL) {
        if (*(u8 **)(p + 16) != NULL) {
            __dla__FPv(*(u8 **)(p + 16) - 16);
        }
    }
    if (*(void **)(p + 12) != NULL) {
        __dla__FPv(*(void **)(p + 12));
    }
    q->m();
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(f32 *)(p + 32) = lbl_80363714;
    *(f32 *)(p + 36) = lbl_80363714;
    *(f32 *)(p + 40) = lbl_80363714;
    *(f32 *)(p + 44) = lbl_80363714;
    *(s32 *)(p + 28) = 0;
}

} /* extern "C" */
