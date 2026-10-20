// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2D4;
extern volatile f32 lbl_8035A2D0;
extern volatile f64 lbl_8035F8A8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803068E4[];
extern u8 lbl_802986D4[];
extern u32 lbl_8035F8B0;
void fn_8007BDF4(void);
void fn_800375E4(void);
extern u8 lbl_803068D8[];

void fn_8007BEEC(void) {
    lbl_8035A2D4 = lbl_803596E0[0];
    lbl_8035A2D0 = fn_800EFDA4(lbl_8035F8A8);
    __register_global_object(fn_8023DC5C(lbl_803068E4, lbl_802986D4, &lbl_8035F8B0, (void *)fn_8007BDF4, 124), (void *)fn_800375E4, lbl_803068D8);
}

__declspec(section ".ctors") static void (*const ctor_8007BEEC)(void) = fn_8007BEEC;

} /* extern "C" */
