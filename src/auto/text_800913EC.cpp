// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3AC;
extern volatile f32 lbl_8035A3A8;
extern volatile f64 lbl_80360A00;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306D64[];
extern u8 lbl_802997E0[];
extern u32 lbl_80360A08;
void fn_8009126C(void);
void fn_800375E4(void);
extern u8 lbl_80306D58[];

void fn_800913EC(void) {
    lbl_8035A3AC = lbl_803596E0[0];
    lbl_8035A3A8 = fn_800EFDA4(lbl_80360A00);
    __register_global_object(fn_8023DC5C(lbl_80306D64, lbl_802997E0, &lbl_80360A08, (void *)fn_8009126C, 304), (void *)fn_800375E4, lbl_80306D58);
}

__declspec(section ".ctors") static void (*const ctor_800913EC)(void) = fn_800913EC;

} /* extern "C" */
