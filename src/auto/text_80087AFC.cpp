// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A334;
extern volatile f32 lbl_8035A330;
extern volatile f64 lbl_8035FE98;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306AF4[];
extern u8 lbl_80298E98[];
extern u8 lbl_80298EA4[];
void fn_80087984(void);
void fn_800375E4(void);
extern u8 lbl_80306AE8[];

void fn_80087AFC(void) {
    lbl_8035A334 = lbl_803596E0[0];
    lbl_8035A330 = fn_800EFDA4(lbl_8035FE98);
    __register_global_object(fn_8023DC5C(lbl_80306AF4, lbl_80298E98, lbl_80298EA4, (void *)fn_80087984, 916), (void *)fn_800375E4, lbl_80306AE8);
}

__declspec(section ".ctors") static void (*const ctor_80087AFC)(void) = fn_80087AFC;

} /* extern "C" */
