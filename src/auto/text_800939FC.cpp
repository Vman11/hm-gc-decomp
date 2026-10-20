// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3CC;
extern volatile f32 lbl_8035A3C8;
extern volatile f64 lbl_80360DA8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306E24[];
extern u8 lbl_80299A78[];
extern u8 lbl_80299A84[];
void fn_800938C4(void);
void fn_800375E4(void);
extern u8 lbl_80306E18[];

void fn_800939FC(void) {
    lbl_8035A3CC = lbl_803596E0[0];
    lbl_8035A3C8 = fn_800EFDA4(lbl_80360DA8);
    __register_global_object(fn_8023DC5C(lbl_80306E24, lbl_80299A78, lbl_80299A84, (void *)fn_800938C4, 300), (void *)fn_800375E4, lbl_80306E18);
}

__declspec(section ".ctors") static void (*const ctor_800939FC)(void) = fn_800939FC;

} /* extern "C" */
