// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80299DC8[];
extern char lbl_803611F4[1];
extern char lbl_803614D0[4];
extern char lbl_803610D8[8];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(u8 *);
#pragma opt_propagation off
void fn_80098A98(u8 *p) {
    char *s = lbl_80299DC8;
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, lbl_803614D0, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 648, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 660, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 676, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 692, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 708, 1, 0);
    *(s32 *)(p + 308) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 724, 1, 0);
    *(s32 *)(p + 312) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 740, 1, 0);
    *(s32 *)(p + 316) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 756, 1, 0);
    *(s32 *)(p + 320) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 772, 1, 0);
    *(s32 *)(p + 324) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 788, 1, 0);
    *(s32 *)(p + 328) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 808, 1, 0);
    *(s32 *)(p + 332) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 828, 1, 0);
    *(s32 *)(p + 336) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 844, 1, 0);
    *(s32 *)(p + 340) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 864, 1, 0);
    *(s32 *)(p + 344) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 880, 1, 0);
    *(s32 *)(p + 348) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 904, 1, 0);
    *(s32 *)(p + 352) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 924, 1, 0);
    *(s32 *)(p + 356) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 936, 1, 0);
    *(s32 *)(p + 360) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 948, 1, 0);
    *(s32 *)(p + 364) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 964, 1, 0);
    *(s32 *)(p + 368) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 976, 1, 0);
    *(s32 *)(p + 372) = fn_8023F52C(p, lbl_803611F4, lbl_803611F4, s + 988, 1, 0);
    *(s32 *)(p + 376) = fn_8023F52C(p, lbl_803611F4, lbl_803610D8, s + 1000, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
