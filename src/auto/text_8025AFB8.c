// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6C4;
extern volatile f32 lbl_8035B6C0;
extern volatile f64 lbl_80366850;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357A2C[];
extern u32 lbl_80366858;
extern u8 lbl_802A9B24[];
void fn_80259220(void);
void fn_800375E4(void);
extern u8 lbl_80357A20[];

void fn_8025AFB8(void) {
    lbl_8035B6C4 = lbl_803596E0[0];
    lbl_8035B6C0 = fn_800EFDA4(lbl_80366850);
    __register_global_object(fn_8023DC5C(lbl_80357A2C, &lbl_80366858, lbl_802A9B24, (void *)fn_80259220, 200), (void *)fn_800375E4, lbl_80357A20);
}

__declspec(section ".ctors") static void (*const ctor_8025AFB8)(void) = fn_8025AFB8;
