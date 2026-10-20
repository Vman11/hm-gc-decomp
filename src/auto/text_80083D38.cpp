// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A30C;
extern volatile f32 lbl_8035A308;
extern volatile f64 lbl_8035FC60;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306A04[];
extern u8 lbl_80298C88[];
extern u8 lbl_80298C94[];
void fn_80083C38(void);
void fn_800375E4(void);
extern u8 lbl_803069F8[];

void fn_80083D38(void) {
    lbl_8035A30C = lbl_803596E0[0];
    lbl_8035A308 = fn_800EFDA4(lbl_8035FC60);
    __register_global_object(fn_8023DC5C(lbl_80306A04, lbl_80298C88, lbl_80298C94, (void *)fn_80083C38, 468), (void *)fn_800375E4, lbl_803069F8);
}

__declspec(section ".ctors") static void (*const ctor_80083D38)(void) = fn_80083D38;

} /* extern "C" */
