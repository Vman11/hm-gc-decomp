// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4F4;
extern volatile f32 lbl_8035A4F0;
extern volatile f64 lbl_80362C20;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307414[];
extern u8 lbl_8029B900[];
extern u8 lbl_8029B90C[];
void fn_800B0428(void);
void fn_800375E4(void);
extern u8 lbl_80307408[];

void fn_800B057C(void) {
    lbl_8035A4F4 = lbl_803596E0[0];
    lbl_8035A4F0 = fn_800EFDA4(lbl_80362C20);
    __register_global_object(fn_8023DC5C(lbl_80307414, lbl_8029B900, lbl_8029B90C, (void *)fn_800B0428, 320), (void *)fn_800375E4, lbl_80307408);
}

__declspec(section ".ctors") static void (*const ctor_800B057C)(void) = fn_800B057C;

} /* extern "C" */
