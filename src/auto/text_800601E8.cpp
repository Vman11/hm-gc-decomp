// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1B4;
extern volatile f32 lbl_8035A1B0;
extern volatile f64 lbl_8035E530;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302B6C[];
extern u8 lbl_802971F0[];
extern u8 lbl_802971FC[];
void fn_8006007C(void);
void fn_800375E4(void);
extern u8 lbl_80302B60[];

void fn_800601E8(void) {
    lbl_8035A1B4 = lbl_803596E0[0];
    lbl_8035A1B0 = fn_800EFDA4(lbl_8035E530);
    __register_global_object(fn_8023DC5C(lbl_80302B6C, lbl_802971F0, lbl_802971FC, (void *)fn_8006007C, 912), (void *)fn_800375E4, lbl_80302B60);
}

__declspec(section ".ctors") static void (*const ctor_800601E8)(void) = fn_800601E8;

} /* extern "C" */
