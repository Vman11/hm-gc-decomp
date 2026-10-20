// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4BC;
extern volatile f32 lbl_8035A4B8;
extern volatile f64 lbl_80362240;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803072C4[];
extern u8 lbl_8029B1FC[];
extern u32 lbl_80362248;
void fn_800AAF08(void);
void fn_800375E4(void);
extern u8 lbl_803072B8[];

void fn_800AB02C(void) {
    lbl_8035A4BC = lbl_803596E0[0];
    lbl_8035A4B8 = fn_800EFDA4(lbl_80362240);
    __register_global_object(fn_8023DC5C(lbl_803072C4, lbl_8029B1FC, &lbl_80362248, (void *)fn_800AAF08, 284), (void *)fn_800375E4, lbl_803072B8);
}

__declspec(section ".ctors") static void (*const ctor_800AB02C)(void) = fn_800AB02C;

} /* extern "C" */
