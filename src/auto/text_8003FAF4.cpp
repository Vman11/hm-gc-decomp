// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0BC;
extern volatile f32 lbl_8035A0B8;
extern volatile f64 lbl_8035C2F0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030265C[];
extern u8 lbl_80294F20[];
extern u8 lbl_80294F2C[];
void fn_8003F940(void);
void fn_800375E4(void);
extern u8 lbl_80302650[];

void fn_8003FAF4(void) {
    lbl_8035A0BC = lbl_803596E0[0];
    lbl_8035A0B8 = fn_800EFDA4(lbl_8035C2F0);
    __register_global_object(fn_8023DC5C(lbl_8030265C, lbl_80294F20, lbl_80294F2C, (void *)fn_8003F940, 384), (void *)fn_800375E4, lbl_80302650);
}

__declspec(section ".ctors") static void (*const ctor_8003FAF4)(void) = fn_8003FAF4;

} /* extern "C" */
