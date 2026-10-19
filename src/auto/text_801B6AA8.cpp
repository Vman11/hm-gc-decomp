// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801B6AA8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual s32 m(void *, f32); };
extern f32 lbl_80364F40;
void fn_801C4D40(void *);
void fn_801C4C88(void *);

void fn_801B6AA8(u8 *p, f32 f) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if ((*(V_801B6AA8 **)q)->m(p, f) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return;
    }
    *(f32 *)(p + 0x1A8) += f;
    if (*(f32 *)(p + 0x1A8) > *(f32 *)(p + 0x1A4)) {
        *(f32 *)(p + 0x1A8) = lbl_80364F40;
        if (*(u32 *)(p + 0x144) == 128 && *(void **)(p + 0x1B4) != NULL) {
            if (*(s32 *)(p + 0x168) != 0) {
                fn_801C4D40(*(void **)(p + 0x1B4));
            } else if (*(s32 *)(p + 0x16C) != 0) {
                fn_801C4C88(*(void **)(p + 0x1B4));
            }
        }
    }
}

} /* extern "C" */
