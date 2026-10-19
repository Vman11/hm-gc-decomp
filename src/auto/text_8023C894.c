// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_80366078, lbl_80366080, lbl_80366088, lbl_80366090, lbl_80366098, lbl_803660A0;
s32 fn_800F05D0(void *, void *);

s32 fn_8023C894(void *p, void *s) {
    if (fn_800F05D0(s, &lbl_80366078) == 0) {
        return 0;
    }
    if (fn_800F05D0(s, &lbl_80366080) == 0) {
        return 3;
    }
    if (fn_800F05D0(s, &lbl_80366088) == 0) {
        return 4;
    }
    if (fn_800F05D0(s, &lbl_80366090) == 0) {
        return 5;
    }
    if (fn_800F05D0(s, &lbl_80366098) == 0) {
        return 2;
    }
    return fn_800F05D0(s, &lbl_803660A0) == 0;
}
