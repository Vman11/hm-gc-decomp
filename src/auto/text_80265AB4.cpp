// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B774;
extern volatile f32 lbl_8035B770;
extern volatile f64 lbl_80366BC0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357EDC[];
extern u32 lbl_80366BC8;
extern u32 lbl_80366BB8;
void fn_80265604(void);
void fn_800375E4(void);
extern u8 lbl_80357ED0[];

void fn_80265AB4(void) {
    lbl_8035B774 = lbl_803596E0[0];
    lbl_8035B770 = fn_800EFDA4(lbl_80366BC0);
    __register_global_object(fn_8023DC5C(lbl_80357EDC, &lbl_80366BC8, &lbl_80366BB8, (void *)fn_80265604, 192), (void *)fn_800375E4, lbl_80357ED0);
}

__declspec(section ".ctors") static void (*const ctor_80265AB4)(void) = fn_80265AB4;

} /* extern "C" */
