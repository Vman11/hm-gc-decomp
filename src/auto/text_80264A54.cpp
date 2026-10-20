// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B75C;
extern volatile f32 lbl_8035B758;
extern volatile f64 lbl_80366B88;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357EAC[];
extern u32 lbl_80366B90;
extern u32 lbl_80366B5C;
void fn_802636DC(void);
void fn_800375E4(void);
extern u8 lbl_80357EA0[];

void fn_80264A54(void) {
    lbl_8035B75C = lbl_803596E0[0];
    lbl_8035B758 = fn_800EFDA4(lbl_80366B88);
    __register_global_object(fn_8023DC5C(lbl_80357EAC, &lbl_80366B90, &lbl_80366B5C, (void *)fn_802636DC, 260), (void *)fn_800375E4, lbl_80357EA0);
}

__declspec(section ".ctors") static void (*const ctor_80264A54)(void) = fn_80264A54;

} /* extern "C" */
