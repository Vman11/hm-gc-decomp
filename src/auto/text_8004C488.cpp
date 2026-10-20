// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A13C;
extern volatile f32 lbl_8035A138;
extern volatile f64 lbl_8035D3E0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803028CC[];
extern u8 lbl_80295E58[];
extern u8 lbl_80295E64[];
void fn_8004C36C(void);
void fn_800375E4(void);
extern u8 lbl_803028C0[];

void fn_8004C488(void) {
    lbl_8035A13C = lbl_803596E0[0];
    lbl_8035A138 = fn_800EFDA4(lbl_8035D3E0);
    __register_global_object(fn_8023DC5C(lbl_803028CC, lbl_80295E58, lbl_80295E64, (void *)fn_8004C36C, 280), (void *)fn_800375E4, lbl_803028C0);
}

__declspec(section ".ctors") static void (*const ctor_8004C488)(void) = fn_8004C488;

} /* extern "C" */
