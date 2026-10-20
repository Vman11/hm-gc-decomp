// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B35C;
extern volatile f32 lbl_8035B358;
extern volatile f64 lbl_80365DC8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356FD4[];
extern u8 lbl_802A8718[];
extern u32 lbl_80365DD0;
void fn_8022FE10(void);
void fn_800375E4(void);
extern u8 lbl_80356FC8[];

void fn_8022FF54(void) {
    lbl_8035B35C = lbl_803596E0[0];
    lbl_8035B358 = fn_800EFDA4(lbl_80365DC8);
    __register_global_object(fn_8023DC5C(lbl_80356FD4, lbl_802A8718, &lbl_80365DD0, (void *)fn_8022FE10, 608), (void *)fn_800375E4, lbl_80356FC8);
}

__declspec(section ".ctors") static void (*const ctor_8022FF54)(void) = fn_8022FF54;

} /* extern "C" */
