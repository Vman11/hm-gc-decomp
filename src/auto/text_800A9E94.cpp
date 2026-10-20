// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4AC;
extern volatile f32 lbl_8035A4A8;
extern volatile f64 lbl_80362170;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307264[];
extern u8 lbl_8029B158[];
extern u32 lbl_80362178;
void fn_800A9D80(void);
void fn_800375E4(void);
extern u8 lbl_80307258[];

void fn_800A9E94(void) {
    lbl_8035A4AC = lbl_803596E0[0];
    lbl_8035A4A8 = fn_800EFDA4(lbl_80362170);
    __register_global_object(fn_8023DC5C(lbl_80307264, lbl_8029B158, &lbl_80362178, (void *)fn_800A9D80, 288), (void *)fn_800375E4, lbl_80307258);
}

__declspec(section ".ctors") static void (*const ctor_800A9E94)(void) = fn_800A9E94;

} /* extern "C" */
