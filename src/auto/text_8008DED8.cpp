// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A384;
extern volatile f32 lbl_8035A380;
extern volatile f64 lbl_803605A0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306CD4[];
extern u8 lbl_802993E4[];
extern u32 lbl_803605A8;
void fn_8008DD3C(void);
void fn_800375E4(void);
extern u8 lbl_80306CC8[];

void fn_8008DED8(void) {
    lbl_8035A384 = lbl_803596E0[0];
    lbl_8035A380 = fn_800EFDA4(lbl_803605A0);
    __register_global_object(fn_8023DC5C(lbl_80306CD4, lbl_802993E4, &lbl_803605A8, (void *)fn_8008DD3C, 388), (void *)fn_800375E4, lbl_80306CC8);
}

__declspec(section ".ctors") static void (*const ctor_8008DED8)(void) = fn_8008DED8;

} /* extern "C" */
