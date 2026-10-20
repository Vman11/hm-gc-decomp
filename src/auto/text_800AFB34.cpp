// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4EC;
extern volatile f32 lbl_8035A4E8;
extern volatile f64 lbl_80362B30;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803073E4[];
extern u8 lbl_8029B82C[];
extern u32 lbl_80362B38;
void fn_800AFA0C(void);
void fn_800375E4(void);
extern u8 lbl_803073D8[];

void fn_800AFB34(void) {
    lbl_8035A4EC = lbl_803596E0[0];
    lbl_8035A4E8 = fn_800EFDA4(lbl_80362B30);
    __register_global_object(fn_8023DC5C(lbl_803073E4, lbl_8029B82C, &lbl_80362B38, (void *)fn_800AFA0C, 280), (void *)fn_800375E4, lbl_803073D8);
}

__declspec(section ".ctors") static void (*const ctor_800AFB34)(void) = fn_800AFB34;

} /* extern "C" */
