// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B494;
extern volatile f32 lbl_8035B490;
extern volatile f64 lbl_803661B8;
extern u8 lbl_803575DC[];
extern u8 lbl_803575D0[];
double fn_800EFDA4(double);
void *__ct__9C8024826CFv(void *);
void fn_802481F8(void);
void __register_global_object(void *, void *, void *);

void fn_802426F0(void) {
    lbl_8035B494 = lbl_803596E0[0];
    lbl_8035B490 = fn_800EFDA4(lbl_803661B8);
    __register_global_object(__ct__9C8024826CFv(lbl_803575DC), (void *)fn_802481F8, lbl_803575D0);
}

__declspec(section ".ctors") static void (*const ctor_802426F0)(void) = fn_802426F0;

} /* extern "C" */
