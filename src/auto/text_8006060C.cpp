// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1C4;
extern volatile f32 lbl_8035A1C0;
extern volatile f64 lbl_8035E568;
extern u8 lbl_80302DDC[];
extern u8 lbl_80302DD0[];
double fn_800EFDA4(double);
void *__ct__9C800642B8Fv(void *);
void fn_800641B0(void);
void __register_global_object(void *, void *, void *);

void fn_8006060C(void) {
    lbl_8035A1C4 = lbl_803596E0[0];
    lbl_8035A1C0 = fn_800EFDA4(lbl_8035E568);
    __register_global_object(__ct__9C800642B8Fv(lbl_80302DDC), (void *)fn_800641B0, lbl_80302DD0);
}

__declspec(section ".ctors") static void (*const ctor_8006060C)(void) = fn_8006060C;

} /* extern "C" */
