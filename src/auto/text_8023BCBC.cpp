// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B3F4;
extern volatile f32 lbl_8035B3F0;
extern volatile f64 lbl_80366018;
extern u8 lbl_8035756C[];
extern u8 lbl_80357560[];
double fn_800EFDA4(double);
void *__ct__9C800F92E8Fv(void *);
void __dt__9C800F92E8Fv(void);
void __register_global_object(void *, void *, void *);

void fn_8023BCBC(void) {
    lbl_8035B3F4 = lbl_803596E0[0];
    lbl_8035B3F0 = fn_800EFDA4(lbl_80366018);
    __register_global_object(__ct__9C800F92E8Fv(lbl_8035756C), (void *)__dt__9C800F92E8Fv, lbl_80357560);
}

__declspec(section ".ctors") static void (*const ctor_8023BCBC)(void) = fn_8023BCBC;

} /* extern "C" */
