// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B5AC;
extern volatile f32 lbl_8035B5A8;
extern volatile f64 lbl_803664D0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803576EC[];
extern u32 lbl_803664D8;
extern u32 lbl_803664E0;
void fn_802509C0(void);
void fn_800375E4(void);
extern u8 lbl_803576E0[];

void fn_80250B34(void) {
    lbl_8035B5AC = lbl_803596E0[0];
    lbl_8035B5A8 = fn_800EFDA4(lbl_803664D0);
    __register_global_object(fn_8023DC5C(lbl_803576EC, &lbl_803664D8, &lbl_803664E0, (void *)fn_802509C0, 76), (void *)fn_800375E4, lbl_803576E0);
}

__declspec(section ".ctors") static void (*const ctor_80250B34)(void) = fn_80250B34;

} /* extern "C" */
