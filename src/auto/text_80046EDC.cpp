// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A114;
extern volatile f32 lbl_8035A110;
extern volatile f64 lbl_8035CF10;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803027DC[];
extern u8 lbl_80295990[];
extern u32 lbl_8035CF18;
void fn_80046D68(void);
void fn_800375E4(void);
extern u8 lbl_803027D0[];

void fn_80046EDC(void) {
    lbl_8035A114 = lbl_803596E0[0];
    lbl_8035A110 = fn_800EFDA4(lbl_8035CF10);
    __register_global_object(fn_8023DC5C(lbl_803027DC, lbl_80295990, &lbl_8035CF18, (void *)fn_80046D68, 336), (void *)fn_800375E4, lbl_803027D0);
}

__declspec(section ".ctors") static void (*const ctor_80046EDC)(void) = fn_80046EDC;

} /* extern "C" */
