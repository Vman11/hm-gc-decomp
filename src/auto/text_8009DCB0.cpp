// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A42C;
extern volatile f32 lbl_8035A428;
extern volatile f64 lbl_803618B0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306FA4[];
extern u8 lbl_8029A514[];
extern u8 lbl_8029A520[];
void fn_8009DB94(void);
void fn_800375E4(void);
extern u8 lbl_80306F98[];

void fn_8009DCB0(void) {
    lbl_8035A42C = lbl_803596E0[0];
    lbl_8035A428 = fn_800EFDA4(lbl_803618B0);
    __register_global_object(fn_8023DC5C(lbl_80306FA4, lbl_8029A514, lbl_8029A520, (void *)fn_8009DB94, 324), (void *)fn_800375E4, lbl_80306F98);
}

__declspec(section ".ctors") static void (*const ctor_8009DCB0)(void) = fn_8009DCB0;

} /* extern "C" */
