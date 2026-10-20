// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020643C { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void *m(); };
extern "C" { extern volatile f32 lbl_80365790; void fn_801FA404(void *, void *); }

void fn_8020643C(u8 *p, u8 *q) {
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 160) = 0;
    *(f32 *)(p + 164) = lbl_80365790;
    *(f32 *)(p + 168) = lbl_80365790;
    *(f32 *)(p + 172) = lbl_80365790;
    *(s32 *)(p + 176) = 0;
    *(s32 *)(p + 180) = 0;
    fn_801FA404(p, q);
    *(void **)(p + 152) = *(void **)(q + 8);
    *(void **)(p + 160) = (*(V_8020643C **)(p + 152))->m();
}

} /* extern "C" */
