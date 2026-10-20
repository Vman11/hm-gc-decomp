// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3A4;
extern volatile f32 lbl_8035A3A0;
extern volatile f64 lbl_80360980;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306D34[];
extern u8 lbl_8029975C[];
extern u8 lbl_80299768[];
void fn_80090B80(void);
void fn_800375E4(void);
extern u8 lbl_80306D28[];

void fn_80090CEC(void) {
    lbl_8035A3A4 = lbl_803596E0[0];
    lbl_8035A3A0 = fn_800EFDA4(lbl_80360980);
    __register_global_object(fn_8023DC5C(lbl_80306D34, lbl_8029975C, lbl_80299768, (void *)fn_80090B80, 376), (void *)fn_800375E4, lbl_80306D28);
}

__declspec(section ".ctors") static void (*const ctor_80090CEC)(void) = fn_80090CEC;

} /* extern "C" */
