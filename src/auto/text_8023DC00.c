/* Functions from 0x8023DC00 to 0x8023DC24, found by decomp-toolkit. */
#include "common.h"

extern s32* lbl_8035B460;
extern s32 lbl_8035B464;

static inline void fn_8023DC00_clear(s32* p) {
    p[2] = 0;
    p[0] = 0;
    p[1] = 0;
    p[3] = 0;
    p[4] = 0;
}

void fn_8023DC00(s32* arg0) {
    lbl_8035B464 = 0;
    arg0[2] = 0;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    lbl_8035B460 = arg0;
}
