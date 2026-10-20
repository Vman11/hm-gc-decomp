// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A32C;
extern volatile f32 lbl_8035A328;
extern volatile f64 lbl_8035FE48;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306AC4[];
extern u8 lbl_80298E4C[];
extern u8 lbl_80298E58[];
void __ct__9C80086B7CFv(void);
void fn_800375E4(void);
extern u8 lbl_80306AB8[];

void fn_80086D00(void) {
    lbl_8035A32C = lbl_803596E0[0];
    lbl_8035A328 = fn_800EFDA4(lbl_8035FE48);
    __register_global_object(fn_8023DC5C(lbl_80306AC4, lbl_80298E4C, lbl_80298E58, (void *)__ct__9C80086B7CFv, 924), (void *)fn_800375E4, lbl_80306AB8);
}

__declspec(section ".ctors") static void (*const ctor_80086D00)(void) = fn_80086D00;

} /* extern "C" */
