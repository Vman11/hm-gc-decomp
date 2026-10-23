// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802AA8D0[];
extern char lbl_80366F20[6];
f32 *fn_80261114(void *p, char *name, s32 x);
void fn_80261B18(void *p, void *a);
#pragma opt_propagation off
void fn_80271830(u8 *p, void *a) {
    char *str = lbl_802AA8D0;
    M2C_FIELD(p, f32 **, 340) = fn_80261114(p, lbl_80366F20, 0);
    if (M2C_FIELD(p, f32 **, 340) != 0) M2C_FIELD(p, f32 *, 304) = *M2C_FIELD(p, f32 **, 340);
    M2C_FIELD(p, f32 **, 344) = fn_80261114(p, str + 56, 0);
    if (M2C_FIELD(p, f32 **, 344) != 0) M2C_FIELD(p, f32 *, 320) = *M2C_FIELD(p, f32 **, 344);
    M2C_FIELD(p, f32 **, 336) = fn_80261114(p, str + 72, 0);
    if (M2C_FIELD(p, f32 **, 336) != 0) M2C_FIELD(p, f32 *, 324) = *M2C_FIELD(p, f32 **, 336);
    M2C_FIELD(p, f32 **, 332) = fn_80261114(p, str + 88, 0);
    if (M2C_FIELD(p, f32 **, 332) != 0) M2C_FIELD(p, f32 *, 316) = *M2C_FIELD(p, f32 **, 332);
    M2C_FIELD(p, f32 **, 328) = fn_80261114(p, str + 104, 0);
    if (M2C_FIELD(p, f32 **, 328) != 0) M2C_FIELD(p, f32 *, 312) = *M2C_FIELD(p, f32 **, 328);
    fn_80261B18(p, a);
}
#pragma opt_propagation reset

} /* extern "C" */
