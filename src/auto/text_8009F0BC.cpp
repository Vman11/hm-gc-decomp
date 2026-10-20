// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A434;
extern volatile f32 lbl_8035A430;
extern volatile f64 lbl_80361970;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306FD4[];
extern u8 lbl_8029A66C[];
extern u8 lbl_8029A678[];
void fn_8009EFD4(void);
void fn_800375E4(void);
extern u8 lbl_80306FC8[];

void fn_8009F0BC(void) {
    lbl_8035A434 = lbl_803596E0[0];
    lbl_8035A430 = fn_800EFDA4(lbl_80361970);
    __register_global_object(fn_8023DC5C(lbl_80306FD4, lbl_8029A66C, lbl_8029A678, (void *)fn_8009EFD4, 424), (void *)fn_800375E4, lbl_80306FC8);
}

__declspec(section ".ctors") static void (*const ctor_8009F0BC)(void) = fn_8009F0BC;

} /* extern "C" */
