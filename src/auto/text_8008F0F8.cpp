// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A39C;
extern volatile f32 lbl_8035A398;
extern volatile f64 lbl_803606C8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306D04[];
extern u8 lbl_8029958C[];
extern u8 lbl_80299598[];
void fn_8008EF8C(void);
void fn_800375E4(void);
extern u8 lbl_80306CF8[];

void fn_8008F0F8(void) {
    lbl_8035A39C = lbl_803596E0[0];
    lbl_8035A398 = fn_800EFDA4(lbl_803606C8);
    __register_global_object(fn_8023DC5C(lbl_80306D04, lbl_8029958C, lbl_80299598, (void *)fn_8008EF8C, 392), (void *)fn_800375E4, lbl_80306CF8);
}

__declspec(section ".ctors") static void (*const ctor_8008F0F8)(void) = fn_8008F0F8;

} /* extern "C" */
