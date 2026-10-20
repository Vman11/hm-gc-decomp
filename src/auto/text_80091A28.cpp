// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3B4;
extern volatile f32 lbl_8035A3B0;
extern volatile f64 lbl_80360B58;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306D94[];
extern u8 lbl_80299824[];
extern u8 lbl_80299830[];
void fn_80091820(void);
void fn_800375E4(void);
extern u8 lbl_80306D88[];

void fn_80091A28(void) {
    lbl_8035A3B4 = lbl_803596E0[0];
    lbl_8035A3B0 = fn_800EFDA4(lbl_80360B58);
    __register_global_object(fn_8023DC5C(lbl_80306D94, lbl_80299824, lbl_80299830, (void *)fn_80091820, 296), (void *)fn_800375E4, lbl_80306D88);
}

__declspec(section ".ctors") static void (*const ctor_80091A28)(void) = fn_80091A28;

} /* extern "C" */
