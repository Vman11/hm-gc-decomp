// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801B0834 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual s32 m(void *, void *); };
void fn_801D829C(void *, void *);

s32 fn_801B0834(u8 *p, void *a) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801B0834 **)q)->m(p, a) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    if (*(u32 *)(p + 0x144) == 32) {
        if (a == NULL) {
            *(u32 *)(p + 0x16C) = !*(u32 *)(p + 0x16C);
        } else {
            fn_801D829C(p, a);
        }
    }
    return 0;
}

} /* extern "C" */
