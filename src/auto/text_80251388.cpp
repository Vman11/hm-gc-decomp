// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B5CC;
extern volatile f32 lbl_8035B5C8;
extern volatile f64 lbl_80366500;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035771C[];
extern u32 lbl_80366508;
extern u32 lbl_80366510;
void fn_8025122C(void);
void fn_800375E4(void);
extern u8 lbl_80357710[];

void fn_80251388(void) {
    lbl_8035B5CC = lbl_803596E0[0];
    lbl_8035B5C8 = fn_800EFDA4(lbl_80366500);
    __register_global_object(fn_8023DC5C(lbl_8035771C, &lbl_80366508, &lbl_80366510, (void *)fn_8025122C, 304), (void *)fn_800375E4, lbl_80357710);
}

__declspec(section ".ctors") static void (*const ctor_80251388)(void) = fn_80251388;

} /* extern "C" */
