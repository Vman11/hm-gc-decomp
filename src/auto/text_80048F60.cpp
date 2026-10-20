// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A124;
extern volatile f32 lbl_8035A120;
extern volatile f64 lbl_8035D1D8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030283C[];
extern u8 lbl_80295B80[];
extern u32 lbl_8035D1E0;
void fn_80048EC0(void);
void fn_800375E4(void);
extern u8 lbl_80302830[];

void fn_80048F60(void) {
    lbl_8035A124 = lbl_803596E0[0];
    lbl_8035A120 = fn_800EFDA4(lbl_8035D1D8);
    __register_global_object(fn_8023DC5C(lbl_8030283C, lbl_80295B80, &lbl_8035D1E0, (void *)fn_80048EC0, 436), (void *)fn_800375E4, lbl_80302830);
}

__declspec(section ".ctors") static void (*const ctor_80048F60)(void) = fn_80048F60;

} /* extern "C" */
