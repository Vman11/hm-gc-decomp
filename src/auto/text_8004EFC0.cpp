// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A15C;
extern volatile f32 lbl_8035A158;
extern volatile f64 lbl_8035D858;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030298C[];
extern u8 lbl_802961D4[];
extern u8 lbl_802961E0[];
void fn_8004EE6C(void);
void fn_800375E4(void);
extern u8 lbl_80302980[];

void fn_8004EFC0(void) {
    lbl_8035A15C = lbl_803596E0[0];
    lbl_8035A158 = fn_800EFDA4(lbl_8035D858);
    __register_global_object(fn_8023DC5C(lbl_8030298C, lbl_802961D4, lbl_802961E0, (void *)fn_8004EE6C, 308), (void *)fn_800375E4, lbl_80302980);
}

__declspec(section ".ctors") static void (*const ctor_8004EFC0)(void) = fn_8004EFC0;

} /* extern "C" */
