// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A234;
extern volatile f32 lbl_8035A230;
extern volatile f64 lbl_8035F6A8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306844[];
extern u8 lbl_80298470[];
extern u32 lbl_8035F6B0;
void fn_80078BF8(void);
void fn_800375E4(void);
extern u8 lbl_80306838[];

void fn_80078D58(void) {
    lbl_8035A234 = lbl_803596E0[0];
    lbl_8035A230 = fn_800EFDA4(lbl_8035F6A8);
    __register_global_object(fn_8023DC5C(lbl_80306844, lbl_80298470, &lbl_8035F6B0, (void *)fn_80078BF8, 1860), (void *)fn_800375E4, lbl_80306838);
}

__declspec(section ".ctors") static void (*const ctor_80078D58)(void) = fn_80078D58;

} /* extern "C" */
