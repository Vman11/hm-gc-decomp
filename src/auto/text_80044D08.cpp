// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0FC;
extern volatile f32 lbl_8035A0F8;
extern volatile f64 lbl_8035CB18;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030274C[];
extern u8 lbl_80295690[];
extern u32 lbl_8035CB20;
void fn_80044BE8(void);
void fn_800375E4(void);
extern u8 lbl_80302740[];

void fn_80044D08(void) {
    lbl_8035A0FC = lbl_803596E0[0];
    lbl_8035A0F8 = fn_800EFDA4(lbl_8035CB18);
    __register_global_object(fn_8023DC5C(lbl_8030274C, lbl_80295690, &lbl_8035CB20, (void *)fn_80044BE8, 288), (void *)fn_800375E4, lbl_80302740);
}

__declspec(section ".ctors") static void (*const ctor_80044D08)(void) = fn_80044D08;

} /* extern "C" */
