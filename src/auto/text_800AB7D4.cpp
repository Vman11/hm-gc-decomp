// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4C4;
extern volatile f32 lbl_8035A4C0;
extern volatile f64 lbl_803623D0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803072F4[];
extern u8 lbl_8029B2E8[];
extern u32 lbl_803623D8;
void fn_800AB6A8(void);
void fn_800375E4(void);
extern u8 lbl_803072E8[];

void fn_800AB7D4(void) {
    lbl_8035A4C4 = lbl_803596E0[0];
    lbl_8035A4C0 = fn_800EFDA4(lbl_803623D0);
    __register_global_object(fn_8023DC5C(lbl_803072F4, lbl_8029B2E8, &lbl_803623D8, (void *)fn_800AB6A8, 284), (void *)fn_800375E4, lbl_803072E8);
}

__declspec(section ".ctors") static void (*const ctor_800AB7D4)(void) = fn_800AB7D4;

} /* extern "C" */
