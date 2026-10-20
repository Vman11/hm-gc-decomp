// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A164;
extern volatile f32 lbl_8035A160;
extern volatile f64 lbl_8035DB00;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803029BC[];
extern u8 lbl_80296360[];
extern u8 lbl_8029636C[];
void fn_800500DC(void);
void fn_800375E4(void);
extern u8 lbl_803029B0[];

void fn_80050288(void) {
    lbl_8035A164 = lbl_803596E0[0];
    lbl_8035A160 = fn_800EFDA4(lbl_8035DB00);
    __register_global_object(fn_8023DC5C(lbl_803029BC, lbl_80296360, lbl_8029636C, (void *)fn_800500DC, 364), (void *)fn_800375E4, lbl_803029B0);
}

__declspec(section ".ctors") static void (*const ctor_80050288)(void) = fn_80050288;

} /* extern "C" */
