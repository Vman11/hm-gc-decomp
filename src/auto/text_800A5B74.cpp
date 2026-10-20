// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A47C;
extern volatile f32 lbl_8035A478;
extern volatile f64 lbl_80361E30;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307144[];
extern u8 lbl_8029ADB8[];
extern u8 lbl_8029ADC4[];
void fn_800A5AD4(void);
void fn_800375E4(void);
extern u8 lbl_80307138[];

void fn_800A5B74(void) {
    lbl_8035A47C = lbl_803596E0[0];
    lbl_8035A478 = fn_800EFDA4(lbl_80361E30);
    __register_global_object(fn_8023DC5C(lbl_80307144, lbl_8029ADB8, lbl_8029ADC4, (void *)fn_800A5AD4, 344), (void *)fn_800375E4, lbl_80307138);
}

__declspec(section ".ctors") static void (*const ctor_800A5B74)(void) = fn_800A5B74;

} /* extern "C" */
