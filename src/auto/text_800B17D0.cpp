// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A504;
extern volatile f32 lbl_8035A500;
extern volatile f64 lbl_80362EA0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307474[];
extern u8 lbl_8029BBA0[];
extern u8 lbl_8029BBAC[];
void fn_800B1700(void);
void fn_800375E4(void);
extern u8 lbl_80307468[];

void fn_800B17D0(void) {
    lbl_8035A504 = lbl_803596E0[0];
    lbl_8035A500 = fn_800EFDA4(lbl_80362EA0);
    __register_global_object(fn_8023DC5C(lbl_80307474, lbl_8029BBA0, lbl_8029BBAC, (void *)fn_800B1700, 324), (void *)fn_800375E4, lbl_80307468);
}

__declspec(section ".ctors") static void (*const ctor_800B17D0)(void) = fn_800B17D0;

} /* extern "C" */
