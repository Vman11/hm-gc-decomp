// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A14C;
extern volatile f32 lbl_8035A148;
extern volatile f64 lbl_8035D6C0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030292C[];
extern u8 lbl_802960E8[];
extern u32 lbl_8035D6C8;
void fn_8004E024(void);
void fn_800375E4(void);
extern u8 lbl_80302920[];

void fn_8004E158(void) {
    lbl_8035A14C = lbl_803596E0[0];
    lbl_8035A148 = fn_800EFDA4(lbl_8035D6C0);
    __register_global_object(fn_8023DC5C(lbl_8030292C, lbl_802960E8, &lbl_8035D6C8, (void *)fn_8004E024, 412), (void *)fn_800375E4, lbl_80302920);
}

__declspec(section ".ctors") static void (*const ctor_8004E158)(void) = fn_8004E158;

} /* extern "C" */
