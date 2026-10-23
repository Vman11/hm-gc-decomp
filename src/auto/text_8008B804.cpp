// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_80299080[];
extern u8 lbl_803600E0[4];
extern u8 lbl_8036013C[7];
extern u8 lbl_80360144[6];
s32 fn_8023F52C(u8 *p, void *a, void *b, void *c, s32 d, s32 e);
void fn_8023F214(u8 *p);

#pragma opt_propagation off
void fn_8008B804(u8 *p) {
    char *str = lbl_80299080;
    *(s32 *)(p + 280) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, lbl_8036013C, 1, 0);
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, lbl_80360144, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 72, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 88, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 104, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 120, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 132, 1, 0);
    *(s32 *)(p + 308) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 148, 1, 0);
    *(s32 *)(p + 312) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 164, 1, 0);
    *(s32 *)(p + 316) = fn_8023F52C(p, lbl_803600E0, lbl_803600E0, str + 184, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
