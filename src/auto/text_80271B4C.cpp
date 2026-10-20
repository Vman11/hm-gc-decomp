// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B7FC;
extern volatile f32 lbl_8035B7F8;
extern volatile f64 lbl_80366F30;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357F6C[];
extern u32 lbl_80366F38;
extern u32 lbl_80366F28;
void fn_802708A8(void);
void fn_800375E4(void);
extern u8 lbl_80357F60[];

void fn_80271B4C(void) {
    lbl_8035B7FC = lbl_803596E0[0];
    lbl_8035B7F8 = fn_800EFDA4(lbl_80366F30);
    __register_global_object(fn_8023DC5C(lbl_80357F6C, &lbl_80366F38, &lbl_80366F28, (void *)fn_802708A8, 348), (void *)fn_800375E4, lbl_80357F60);
}

__declspec(section ".ctors") static void (*const ctor_80271B4C)(void) = fn_80271B4C;

} /* extern "C" */
