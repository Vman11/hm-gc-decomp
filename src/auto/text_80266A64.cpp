// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B784;
extern volatile f32 lbl_8035B780;
extern volatile f64 lbl_80366C68;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357F3C[];
extern u32 lbl_80366C70;
extern u32 lbl_80366C60;
void fn_802660E4(void);
void fn_800375E4(void);
extern u8 lbl_80357F30[];

void fn_80266A64(void) {
    lbl_8035B784 = lbl_803596E0[0];
    lbl_8035B780 = fn_800EFDA4(lbl_80366C68);
    __register_global_object(fn_8023DC5C(lbl_80357F3C, &lbl_80366C70, &lbl_80366C60, (void *)fn_802660E4, 268), (void *)fn_800375E4, lbl_80357F30);
}

__declspec(section ".ctors") static void (*const ctor_80266A64)(void) = fn_80266A64;

} /* extern "C" */
