// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802992A0[];
extern char lbl_803603F8[1];
extern char lbl_80360598[5];
s32 fn_8023F52C(u8 *p, char *a, char *b, char *c, s32 d, s32 e);
void fn_8023F214(u8 *p);

#pragma opt_propagation off
void fn_8008DBCC(u8 *p) {
    char *str = lbl_802992A0;
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_803603F8, lbl_803603F8, str + 228, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_803603F8, lbl_803603F8, str + 244, 0, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_803603F8, lbl_803603F8, str + 264, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_803603F8, lbl_803603F8, str + 280, 0, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_803603F8, lbl_80360598, str + 292, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_803603F8, lbl_80360598, str + 308, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
