// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6A4;
extern volatile f32 lbl_8035B6A0;
extern volatile f64 lbl_80366698;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035796C[];
extern u32 lbl_803666A0;
extern u32 lbl_803666A8;
void fn_8025673C(void);
void fn_800375E4(void);
extern u8 lbl_80357960[];

void fn_80256D90(void) {
    lbl_8035B6A4 = lbl_803596E0[0];
    lbl_8035B6A0 = fn_800EFDA4(lbl_80366698);
    __register_global_object(fn_8023DC5C(lbl_8035796C, &lbl_803666A0, &lbl_803666A8, (void *)fn_8025673C, 216), (void *)fn_800375E4, lbl_80357960);
}

__declspec(section ".ctors") static void (*const ctor_80256D90)(void) = fn_80256D90;

} /* extern "C" */
