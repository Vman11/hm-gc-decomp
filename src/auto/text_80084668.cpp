// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A314;
extern volatile f32 lbl_8035A310;
extern volatile f64 lbl_8035FD30;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306A34[];
extern u8 lbl_80298CAC[];
extern u8 lbl_80298CB8[];
void fn_80084450(void);
void fn_800375E4(void);
extern u8 lbl_80306A28[];

void fn_80084668(void) {
    lbl_8035A314 = lbl_803596E0[0];
    lbl_8035A310 = fn_800EFDA4(lbl_8035FD30);
    __register_global_object(fn_8023DC5C(lbl_80306A34, lbl_80298CAC, lbl_80298CB8, (void *)fn_80084450, 300), (void *)fn_800375E4, lbl_80306A28);
}

__declspec(section ".ctors") static void (*const ctor_80084668)(void) = fn_80084668;

} /* extern "C" */
