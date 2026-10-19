// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FEF0C { virtual void p0(); virtual s32 m(); };
extern f32 lbl_803656F4;
extern f32 lbl_803656F8;
void fn_801FB848(void *, f32);
s32 fn_80202B68(void *);
f32 fn_801FC1F4(f32);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);

void fn_801FEF0C(u8 *p, f32 f) {
    u8 *q;
    fn_801FB848(p, f);
    for (q = *(u8 **)(p + 0x68); q != NULL; q = *(u8 **)(q + 0x1D4)) {
        if (((V_801FEF0C *)q)->m() != 0 || fn_80202B68(q) != 0) {
            f32 g;
            s32 lv;
            f *= *(f32 *)(q + 0x2C);
            g = fn_801FC1F4(f);
            if (g < lbl_803656F4) {
                g = lbl_803656F4;
            }
            if (g > lbl_803656F8) {
                g = lbl_803656F8;
            }
            lv = OSDisableInterrupts();
            *(s32 *)(q + 0x88) = (s32)g * 0xA0000;
            OSRestoreInterrupts(lv);
        }
    }
}

} /* extern "C" */
