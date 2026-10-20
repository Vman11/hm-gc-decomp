// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4A4;
extern volatile f32 lbl_8035A4A0;
extern volatile f64 lbl_80362138;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307234[];
extern u8 lbl_8029B124[];
extern u8 lbl_8029B130[];
void fn_800A99DC(void);
void fn_800375E4(void);
extern u8 lbl_80307228[];

void fn_800A9AF8(void) {
    lbl_8035A4A4 = lbl_803596E0[0];
    lbl_8035A4A0 = fn_800EFDA4(lbl_80362138);
    __register_global_object(fn_8023DC5C(lbl_80307234, lbl_8029B124, lbl_8029B130, (void *)fn_800A99DC, 284), (void *)fn_800375E4, lbl_80307228);
}

__declspec(section ".ctors") static void (*const ctor_800A9AF8)(void) = fn_800A9AF8;

} /* extern "C" */
