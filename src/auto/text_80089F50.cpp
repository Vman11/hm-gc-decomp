// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A344;
extern volatile f32 lbl_8035A340;
extern volatile f64 lbl_8035FF90;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306B54[];
extern u8 lbl_80298F70[];
extern u8 lbl_80298F7C[];
void fn_80089E30(void);
void fn_800375E4(void);
extern u8 lbl_80306B48[];

void fn_80089F50(void) {
    lbl_8035A344 = lbl_803596E0[0];
    lbl_8035A340 = fn_800EFDA4(lbl_8035FF90);
    __register_global_object(fn_8023DC5C(lbl_80306B54, lbl_80298F70, lbl_80298F7C, (void *)fn_80089E30, 280), (void *)fn_800375E4, lbl_80306B48);
}

__declspec(section ".ctors") static void (*const ctor_80089F50)(void) = fn_80089F50;

} /* extern "C" */
