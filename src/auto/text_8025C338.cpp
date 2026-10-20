// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6D4;
extern volatile f32 lbl_8035B6D0;
extern volatile f64 lbl_80366900;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357A8C[];
extern u32 lbl_80366908;
extern u8 lbl_802A9BD4[];
void fn_8025BB30(void);
void fn_800375E4(void);
extern u8 lbl_80357A80[];

void fn_8025C338(void) {
    lbl_8035B6D4 = lbl_803596E0[0];
    lbl_8035B6D0 = fn_800EFDA4(lbl_80366900);
    __register_global_object(fn_8023DC5C(lbl_80357A8C, &lbl_80366908, lbl_802A9BD4, (void *)fn_8025BB30, 204), (void *)fn_800375E4, lbl_80357A80);
}

__declspec(section ".ctors") static void (*const ctor_8025C338)(void) = fn_8025C338;

} /* extern "C" */
