// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6BC;
extern volatile f32 lbl_8035B6B8;
extern volatile f64 lbl_80366798;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803579FC[];
extern u32 lbl_803667A0;
extern u32 lbl_803667A8;
void __ct__9C80258A58Fv(void);
void fn_800375E4(void);
extern u8 lbl_803579F0[];

void fn_80258E7C(void) {
    lbl_8035B6BC = lbl_803596E0[0];
    lbl_8035B6B8 = fn_800EFDA4(lbl_80366798);
    __register_global_object(fn_8023DC5C(lbl_803579FC, &lbl_803667A0, &lbl_803667A8, (void *)__ct__9C80258A58Fv, 176), (void *)fn_800375E4, lbl_803579F0);
}

__declspec(section ".ctors") static void (*const ctor_80258E7C)(void) = fn_80258E7C;

} /* extern "C" */
