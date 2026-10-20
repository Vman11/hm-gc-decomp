// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2DC;
extern volatile f32 lbl_8035A2D8;
extern volatile f64 lbl_8035F8F8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306914[];
extern u8 lbl_8029875C[];
extern u32 lbl_8035F900;
void fn_8007C798(void);
void fn_800375E4(void);
extern u8 lbl_80306908[];

void fn_8007C838(void) {
    lbl_8035A2DC = lbl_803596E0[0];
    lbl_8035A2D8 = fn_800EFDA4(lbl_8035F8F8);
    __register_global_object(fn_8023DC5C(lbl_80306914, lbl_8029875C, &lbl_8035F900, (void *)fn_8007C798, 332), (void *)fn_800375E4, lbl_80306908);
}

__declspec(section ".ctors") static void (*const ctor_8007C838)(void) = fn_8007C838;

} /* extern "C" */
