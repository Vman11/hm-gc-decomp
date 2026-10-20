// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FD3CC { u8 pad[0x30]; virtual void p0(); virtual void m(); };
extern "C" { extern u8 lbl_802E2290[]; extern volatile f32 lbl_80363714; void __dla__FPv(void *); void __dl__FPv(void *); }

void *fn_800FD3CC(V_800FD3CC *q, s16 f) {
    u8 *p = (u8 *)q;
    if (q != NULL) {
        *(void **)(p + 48) = lbl_802E2290;
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
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
