// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A46C;
extern volatile f32 lbl_8035A468;
extern volatile f64 lbl_80361CF0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803070E4[];
extern u8 lbl_8029AC54[];
extern u32 lbl_80361CF8;
void fn_800A4898(void);
void fn_800375E4(void);
extern u8 lbl_803070D8[];

void fn_800A4938(void) {
    lbl_8035A46C = lbl_803596E0[0];
    lbl_8035A468 = fn_800EFDA4(lbl_80361CF0);
    __register_global_object(fn_8023DC5C(lbl_803070E4, lbl_8029AC54, &lbl_80361CF8, (void *)fn_800A4898, 388), (void *)fn_800375E4, lbl_803070D8);
}

__declspec(section ".ctors") static void (*const ctor_800A4938)(void) = fn_800A4938;

} /* extern "C" */
