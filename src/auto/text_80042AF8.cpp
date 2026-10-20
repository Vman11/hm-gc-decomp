// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0DC;
extern volatile f32 lbl_8035A0D8;
extern volatile f64 lbl_8035C7D0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803026BC[];
extern u8 lbl_80295350[];
extern u32 lbl_8035C7D8;
void fn_800429A4(void);
void fn_800375E4(void);
extern u8 lbl_803026B0[];

void fn_80042AF8(void) {
    lbl_8035A0DC = lbl_803596E0[0];
    lbl_8035A0D8 = fn_800EFDA4(lbl_8035C7D0);
    __register_global_object(fn_8023DC5C(lbl_803026BC, lbl_80295350, &lbl_8035C7D8, (void *)fn_800429A4, 312), (void *)fn_800375E4, lbl_803026B0);
}

__declspec(section ".ctors") static void (*const ctor_80042AF8)(void) = fn_80042AF8;

} /* extern "C" */
