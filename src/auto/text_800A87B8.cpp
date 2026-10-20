// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A494;
extern volatile f32 lbl_8035A490;
extern volatile f64 lbl_80362020;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803071D4[];
extern u8 lbl_8029AFCC[];
extern u8 lbl_8029AFD8[];
void fn_800A85D0(void);
void fn_800375E4(void);
extern u8 lbl_803071C8[];

void fn_800A87B8(void) {
    lbl_8035A494 = lbl_803596E0[0];
    lbl_8035A490 = fn_800EFDA4(lbl_80362020);
    __register_global_object(fn_8023DC5C(lbl_803071D4, lbl_8029AFCC, lbl_8029AFD8, (void *)fn_800A85D0, 296), (void *)fn_800375E4, lbl_803071C8);
}

__declspec(section ".ctors") static void (*const ctor_800A87B8)(void) = fn_800A87B8;

} /* extern "C" */
