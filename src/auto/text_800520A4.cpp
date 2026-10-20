// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A16C;
extern volatile f32 lbl_8035A168;
extern volatile f64 lbl_8035DD40;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803029EC[];
extern u8 lbl_8029657C[];
extern u8 lbl_80296588[];
void fn_80051F28(void);
void fn_800375E4(void);
extern u8 lbl_803029E0[];

void fn_800520A4(void) {
    lbl_8035A16C = lbl_803596E0[0];
    lbl_8035A168 = fn_800EFDA4(lbl_8035DD40);
    __register_global_object(fn_8023DC5C(lbl_803029EC, lbl_8029657C, lbl_80296588, (void *)fn_80051F28, 636), (void *)fn_800375E4, lbl_803029E0);
}

__declspec(section ".ctors") static void (*const ctor_800520A4)(void) = fn_800520A4;

} /* extern "C" */
