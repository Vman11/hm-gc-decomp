// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B6DC;
extern volatile f32 lbl_8035B6D8;
extern volatile f64 lbl_803669E8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80357ABC[];
extern u32 lbl_803669F0;
extern u8 lbl_802A9CC8[];
void fn_8025C444(void);
void fn_800375E4(void);
extern u8 lbl_80357AB0[];

void fn_8025E684(void) {
    lbl_8035B6DC = lbl_803596E0[0];
    lbl_8035B6D8 = fn_800EFDA4(lbl_803669E8);
    __register_global_object(fn_8023DC5C(lbl_80357ABC, &lbl_803669F0, lbl_802A9CC8, (void *)fn_8025C444, 432), (void *)fn_800375E4, lbl_80357AB0);
}

__declspec(section ".ctors") static void (*const ctor_8025E684)(void) = fn_8025E684;

} /* extern "C" */
