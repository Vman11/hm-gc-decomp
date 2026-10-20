// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2FC;
extern volatile f32 lbl_8035A2F8;
extern volatile f64 lbl_8035FAC0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803069A4[];
extern u8 lbl_80298A04[];
extern u8 lbl_80298A10[];
void fn_8007FA64(void);
void fn_800375E4(void);
extern u8 lbl_80306998[];

void fn_8007FC10(void) {
    lbl_8035A2FC = lbl_803596E0[0];
    lbl_8035A2F8 = fn_800EFDA4(lbl_8035FAC0);
    __register_global_object(fn_8023DC5C(lbl_803069A4, lbl_80298A04, lbl_80298A10, (void *)fn_8007FA64, 300), (void *)fn_800375E4, lbl_80306998);
}

__declspec(section ".ctors") static void (*const ctor_8007FC10)(void) = fn_8007FC10;

} /* extern "C" */
