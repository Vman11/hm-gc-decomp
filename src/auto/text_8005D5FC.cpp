// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A19C;
extern volatile f32 lbl_8035A198;
extern volatile f64 lbl_8035E490;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302B0C[];
extern u8 lbl_80297130[];
extern u8 lbl_8029713C[];
void fn_8005D470(void);
void fn_800375E4(void);
extern u8 lbl_80302B00[];

void fn_8005D5FC(void) {
    lbl_8035A19C = lbl_803596E0[0];
    lbl_8035A198 = fn_800EFDA4(lbl_8035E490);
    __register_global_object(fn_8023DC5C(lbl_80302B0C, lbl_80297130, lbl_8029713C, (void *)fn_8005D470, 836), (void *)fn_800375E4, lbl_80302B00);
}

__declspec(section ".ctors") static void (*const ctor_8005D5FC)(void) = fn_8005D5FC;

} /* extern "C" */
