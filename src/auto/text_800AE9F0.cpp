// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4D4;
extern volatile f32 lbl_8035A4D0;
extern volatile f64 lbl_803629A0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307354[];
extern u8 lbl_8029B768[];
extern u8 lbl_8029B774[];
void fn_800AE7E4(void);
void fn_800375E4(void);
extern u8 lbl_80307348[];

void fn_800AE9F0(void) {
    lbl_8035A4D4 = lbl_803596E0[0];
    lbl_8035A4D0 = fn_800EFDA4(lbl_803629A0);
    __register_global_object(fn_8023DC5C(lbl_80307354, lbl_8029B768, lbl_8029B774, (void *)fn_800AE7E4, 400), (void *)fn_800375E4, lbl_80307348);
}

__declspec(section ".ctors") static void (*const ctor_800AE9F0)(void) = fn_800AE9F0;

} /* extern "C" */
