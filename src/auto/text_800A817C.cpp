// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A48C;
extern volatile f32 lbl_8035A488;
extern volatile f64 lbl_80361F80;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803071A4[];
extern u8 lbl_8029AF80[];
extern u32 lbl_80361F88;
void fn_800A8090(void);
void fn_800375E4(void);
extern u8 lbl_80307198[];

void fn_800A817C(void) {
    lbl_8035A48C = lbl_803596E0[0];
    lbl_8035A488 = fn_800EFDA4(lbl_80361F80);
    __register_global_object(fn_8023DC5C(lbl_803071A4, lbl_8029AF80, &lbl_80361F88, (void *)fn_800A8090, 388), (void *)fn_800375E4, lbl_80307198);
}

__declspec(section ".ctors") static void (*const ctor_800A817C)(void) = fn_800A817C;

} /* extern "C" */
