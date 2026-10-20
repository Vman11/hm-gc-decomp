// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B82C;
extern volatile f32 lbl_8035B828;
extern volatile f64 lbl_80367000;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357F9C[];
extern u32 lbl_80367008;
extern u32 lbl_80366FF8;
void fn_80273098(void);
void fn_800375E4(void);
extern u8 lbl_80357F90[];

void fn_8027377C(void) {
    lbl_8035B82C = lbl_803596E0[0];
    lbl_8035B828 = fn_800EFDA4(lbl_80367000);
    __register_global_object(fn_8023DC5C(lbl_80357F9C, &lbl_80367008, &lbl_80366FF8, (void *)fn_80273098, 208), (void *)fn_800375E4, lbl_80357F90);
}

__declspec(section ".ctors") static void (*const ctor_8027377C)(void) = fn_8027377C;

} /* extern "C" */
