// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B37C;
extern volatile f32 lbl_8035B378;
extern volatile f64 lbl_80365EA8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357034[];
extern u8 lbl_802A8884[];
extern u32 lbl_80365EB0;
void fn_802350A4(void);
void fn_800375E4(void);
extern u8 lbl_80357028[];

void fn_80235374(void) {
    lbl_8035B37C = lbl_803596E0[0];
    lbl_8035B378 = fn_800EFDA4(lbl_80365EA8);
    __register_global_object(fn_8023DC5C(lbl_80357034, lbl_802A8884, &lbl_80365EB0, (void *)fn_802350A4, 1104), (void *)fn_800375E4, lbl_80357028);
}

__declspec(section ".ctors") static void (*const ctor_80235374)(void) = fn_80235374;

} /* extern "C" */
