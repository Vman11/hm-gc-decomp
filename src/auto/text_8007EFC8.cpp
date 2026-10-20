// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2EC;
extern volatile f32 lbl_8035A2E8;
extern volatile f64 lbl_8035F9C8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306944[];
extern u8 lbl_80298900[];
extern u8 lbl_8029890C[];
void fn_8007EEAC(void);
void fn_800375E4(void);
extern u8 lbl_80306938[];

void fn_8007EFC8(void) {
    lbl_8035A2EC = lbl_803596E0[0];
    lbl_8035A2E8 = fn_800EFDA4(lbl_8035F9C8);
    __register_global_object(fn_8023DC5C(lbl_80306944, lbl_80298900, lbl_8029890C, (void *)fn_8007EEAC, 280), (void *)fn_800375E4, lbl_80306938);
}

__declspec(section ".ctors") static void (*const ctor_8007EFC8)(void) = fn_8007EFC8;

} /* extern "C" */
