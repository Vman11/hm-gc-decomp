// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A17C;
extern volatile f32 lbl_8035A178;
extern volatile f64 lbl_8035E1E8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302A4C[];
extern u8 lbl_80296C24[];
extern u32 lbl_8035E1F0;
void fn_8005836C(void);
void fn_800375E4(void);
extern u8 lbl_80302A40[];

void fn_80058478(void) {
    lbl_8035A17C = lbl_803596E0[0];
    lbl_8035A178 = fn_800EFDA4(lbl_8035E1E8);
    __register_global_object(fn_8023DC5C(lbl_80302A4C, lbl_80296C24, &lbl_8035E1F0, (void *)fn_8005836C, 600), (void *)fn_800375E4, lbl_80302A40);
}

__declspec(section ".ctors") static void (*const ctor_80058478)(void) = fn_80058478;

} /* extern "C" */
