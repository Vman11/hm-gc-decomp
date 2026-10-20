// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B56C;
extern volatile f32 lbl_8035B568;
extern volatile f64 lbl_803663A0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035768C[];
extern u32 lbl_803663A8;
extern u32 lbl_803663B0;
void fn_8024BFCC(void);
void fn_800375E4(void);
extern u8 lbl_80357680[];

void fn_8024C120(void) {
    lbl_8035B56C = lbl_803596E0[0];
    lbl_8035B568 = fn_800EFDA4(lbl_803663A0);
    __register_global_object(fn_8023DC5C(lbl_8035768C, &lbl_803663A8, &lbl_803663B0, (void *)fn_8024BFCC, 112), (void *)fn_800375E4, lbl_80357680);
}

__declspec(section ".ctors") static void (*const ctor_8024C120)(void) = fn_8024C120;

} /* extern "C" */
