// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A36C;
extern volatile f32 lbl_8035A368;
extern volatile f64 lbl_80360150;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306C44[];
extern u8 lbl_8029914C[];
extern u8 lbl_80299158[];
void fn_8008B9F4(void);
void fn_800375E4(void);
extern u8 lbl_80306C38[];

void fn_8008BA94(void) {
    lbl_8035A36C = lbl_803596E0[0];
    lbl_8035A368 = fn_800EFDA4(lbl_80360150);
    __register_global_object(fn_8023DC5C(lbl_80306C44, lbl_8029914C, lbl_80299158, (void *)fn_8008B9F4, 336), (void *)fn_800375E4, lbl_80306C38);
}

__declspec(section ".ctors") static void (*const ctor_8008BA94)(void) = fn_8008BA94;

} /* extern "C" */
