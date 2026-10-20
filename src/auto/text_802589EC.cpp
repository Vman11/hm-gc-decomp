// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6B4;
extern volatile f32 lbl_8035B6B0;
extern volatile f64 lbl_80366770;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803579CC[];
extern u32 lbl_80366778;
extern u32 lbl_80366764;
void fn_80257838(void);
void fn_800375E4(void);
extern u8 lbl_803579C0[];

void fn_802589EC(void) {
    lbl_8035B6B4 = lbl_803596E0[0];
    lbl_8035B6B0 = fn_800EFDA4(lbl_80366770);
    __register_global_object(fn_8023DC5C(lbl_803579CC, &lbl_80366778, &lbl_80366764, (void *)fn_80257838, 304), (void *)fn_800375E4, lbl_803579C0);
}

__declspec(section ".ctors") static void (*const ctor_802589EC)(void) = fn_802589EC;

} /* extern "C" */
