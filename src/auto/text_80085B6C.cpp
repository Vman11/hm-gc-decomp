// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A324;
extern volatile f32 lbl_8035A320;
extern volatile f64 lbl_8035FDE8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306A94[];
extern u8 lbl_80298DF0[];
extern u8 lbl_80298DD8[];
void fn_800859FC(void);
void fn_800375E4(void);
extern u8 lbl_80306A88[];

void fn_80085B6C(void) {
    lbl_8035A324 = lbl_803596E0[0];
    lbl_8035A320 = fn_800EFDA4(lbl_8035FDE8);
    __register_global_object(fn_8023DC5C(lbl_80306A94, lbl_80298DF0, lbl_80298DD8, (void *)fn_800859FC, 940), (void *)fn_800375E4, lbl_80306A88);
}

__declspec(section ".ctors") static void (*const ctor_80085B6C)(void) = fn_80085B6C;

} /* extern "C" */
