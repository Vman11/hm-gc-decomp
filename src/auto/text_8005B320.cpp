// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A18C;
extern volatile f32 lbl_8035A188;
extern volatile f64 lbl_8035E388;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302AAC[];
extern u8 lbl_80296F8C[];
extern u32 lbl_8035E390;
void fn_8005B280(void);
void fn_800375E4(void);
extern u8 lbl_80302AA0[];

void fn_8005B320(void) {
    lbl_8035A18C = lbl_803596E0[0];
    lbl_8035A188 = fn_800EFDA4(lbl_8035E388);
    __register_global_object(fn_8023DC5C(lbl_80302AAC, lbl_80296F8C, &lbl_8035E390, (void *)fn_8005B280, 340), (void *)fn_800375E4, lbl_80302AA0);
}

__declspec(section ".ctors") static void (*const ctor_8005B320)(void) = fn_8005B320;

} /* extern "C" */
