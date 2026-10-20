// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A154;
extern volatile f32 lbl_8035A150;
extern volatile f64 lbl_8035D7C0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030295C[];
extern u8 lbl_80296170[];
extern u8 lbl_8029617C[];
void fn_8004E7C0(void);
void fn_800375E4(void);
extern u8 lbl_80302950[];

void fn_8004E930(void) {
    lbl_8035A154 = lbl_803596E0[0];
    lbl_8035A150 = fn_800EFDA4(lbl_8035D7C0);
    __register_global_object(fn_8023DC5C(lbl_8030295C, lbl_80296170, lbl_8029617C, (void *)fn_8004E7C0, 532), (void *)fn_800375E4, lbl_80302950);
}

__declspec(section ".ctors") static void (*const ctor_8004E930)(void) = fn_8004E930;

} /* extern "C" */
