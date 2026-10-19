// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80205A08 { virtual void p0(); virtual s32 m(); };
extern f32 lbl_80365774;
extern f32 lbl_80365778;
void fn_801FB848(void *, f32);
s32 fn_80202B68(void *);
f32 fn_801FC1F4(f32);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);

void fn_80205A08(u8 *p, f32 f) {
    u8 *q;
    fn_801FB848(p, f);
    for (q = *(u8 **)(p + 0xB0); q != NULL; q = *(u8 **)(q + 0x1D4)) {
        if (((V_80205A08 *)q)->m() != 0 || fn_80202B68(q) != 0) {
            f32 g;
            s32 lv;
            f *= *(f32 *)(q + 0x2C);
            g = fn_801FC1F4(f);
            if (g < lbl_80365774) {
                g = lbl_80365774;
            }
            if (g > lbl_80365778) {
                g = lbl_80365778;
            }
            lv = OSDisableInterrupts();
            *(s32 *)(q + 0x88) = (s32)g * 0xA0000;
            OSRestoreInterrupts(lv);
        }
    }
}

} /* extern "C" */
