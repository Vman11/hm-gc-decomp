// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A484;
extern volatile f32 lbl_8035A480;
extern volatile f64 lbl_80361EB0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307174[];
extern u8 lbl_8029AE7C[];
extern u32 lbl_80361EB8;
void fn_800A6AB4(void);
void fn_800375E4(void);
extern u8 lbl_80307168[];

void fn_800A6B8C(void) {
    lbl_8035A484 = lbl_803596E0[0];
    lbl_8035A480 = fn_800EFDA4(lbl_80361EB0);
    __register_global_object(fn_8023DC5C(lbl_80307174, lbl_8029AE7C, &lbl_80361EB8, (void *)fn_800A6AB4, 324), (void *)fn_800375E4, lbl_80307168);
}

__declspec(section ".ctors") static void (*const ctor_800A6B8C)(void) = fn_800A6B8C;

} /* extern "C" */
