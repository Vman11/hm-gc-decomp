// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4DC;
extern volatile f32 lbl_8035A4D8;
extern volatile f64 lbl_803629D8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307384[];
extern u8 lbl_8029B78C[];
extern u32 lbl_803629E0;
void fn_800AEC40(void);
void fn_800375E4(void);
extern u8 lbl_80307378[];

void fn_800AED64(void) {
    lbl_8035A4DC = lbl_803596E0[0];
    lbl_8035A4D8 = fn_800EFDA4(lbl_803629D8);
    __register_global_object(fn_8023DC5C(lbl_80307384, lbl_8029B78C, &lbl_803629E0, (void *)fn_800AEC40, 280), (void *)fn_800375E4, lbl_80307378);
}

__declspec(section ".ctors") static void (*const ctor_800AED64)(void) = fn_800AED64;

} /* extern "C" */
