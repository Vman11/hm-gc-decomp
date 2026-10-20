// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A31C;
extern volatile f32 lbl_8035A318;
extern volatile f64 lbl_8035FDA8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306A64[];
extern u8 lbl_80298DA8[];
extern u8 lbl_80298DB4[];
void fn_80085078(void);
void fn_800375E4(void);
extern u8 lbl_80306A58[];

void fn_80085118(void) {
    lbl_8035A31C = lbl_803596E0[0];
    lbl_8035A318 = fn_800EFDA4(lbl_8035FDA8);
    __register_global_object(fn_8023DC5C(lbl_80306A64, lbl_80298DA8, lbl_80298DB4, (void *)fn_80085078, 340), (void *)fn_800375E4, lbl_80306A58);
}

__declspec(section ".ctors") static void (*const ctor_80085118)(void) = fn_80085118;

} /* extern "C" */
