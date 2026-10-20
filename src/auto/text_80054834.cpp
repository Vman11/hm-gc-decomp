// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A174;
extern volatile f32 lbl_8035A170;
extern volatile f64 lbl_8035E040;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302A1C[];
extern u8 lbl_8029679C[];
extern u32 lbl_8035E048;
void fn_800546A0(void);
void fn_800375E4(void);
extern u8 lbl_80302A10[];

void fn_80054834(void) {
    lbl_8035A174 = lbl_803596E0[0];
    lbl_8035A170 = fn_800EFDA4(lbl_8035E040);
    __register_global_object(fn_8023DC5C(lbl_80302A1C, lbl_8029679C, &lbl_8035E048, (void *)fn_800546A0, 460), (void *)fn_800375E4, lbl_80302A10);
}

__declspec(section ".ctors") static void (*const ctor_80054834)(void) = fn_80054834;

} /* extern "C" */
