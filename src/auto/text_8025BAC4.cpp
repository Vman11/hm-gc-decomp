// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6CC;
extern volatile f32 lbl_8035B6C8;
extern volatile f64 lbl_803668B8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357A5C[];
extern u32 lbl_803668C0;
extern u32 lbl_803668AC;
void fn_8025B028(void);
void fn_800375E4(void);
extern u8 lbl_80357A50[];

void fn_8025BAC4(void) {
    lbl_8035B6CC = lbl_803596E0[0];
    lbl_8035B6C8 = fn_800EFDA4(lbl_803668B8);
    __register_global_object(fn_8023DC5C(lbl_80357A5C, &lbl_803668C0, &lbl_803668AC, (void *)fn_8025B028, 256), (void *)fn_800375E4, lbl_80357A50);
}

__declspec(section ".ctors") static void (*const ctor_8025BAC4)(void) = fn_8025BAC4;

} /* extern "C" */
