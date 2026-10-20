// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B580;
extern volatile f32 lbl_8035B578;
extern volatile f64 lbl_80366418;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803576BC[];
extern u32 lbl_80366420;
extern u32 lbl_80366428;
void fn_8024D62C(void);
void fn_800375E4(void);
extern u8 lbl_803576B0[];

void fn_8024D778(void) {
    lbl_8035B580 = lbl_803596E0[0];
    lbl_8035B578 = fn_800EFDA4(lbl_80366418);
    __register_global_object(fn_8023DC5C(lbl_803576BC, &lbl_80366420, &lbl_80366428, (void *)fn_8024D62C, 168), (void *)fn_800375E4, lbl_803576B0);
}

__declspec(section ".ctors") static void (*const ctor_8024D778)(void) = fn_8024D778;

} /* extern "C" */
