// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A104;
extern volatile f32 lbl_8035A100;
extern volatile f64 lbl_8035CC20;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030277C[];
extern u8 lbl_80295700[];
extern u32 lbl_8035CC28;
void fn_800451D8(void);
void fn_800375E4(void);
extern u8 lbl_80302770[];

void fn_800452D0(void) {
    lbl_8035A104 = lbl_803596E0[0];
    lbl_8035A100 = fn_800EFDA4(lbl_8035CC20);
    __register_global_object(fn_8023DC5C(lbl_8030277C, lbl_80295700, &lbl_8035CC28, (void *)fn_800451D8, 128), (void *)fn_800375E4, lbl_80302770);
}

__declspec(section ".ctors") static void (*const ctor_800452D0)(void) = fn_800452D0;

} /* extern "C" */
