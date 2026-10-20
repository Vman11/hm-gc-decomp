// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A184;
extern volatile f32 lbl_8035A180;
extern volatile f64 lbl_8035E280;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302A7C[];
extern u8 lbl_80296EA8[];
extern u8 lbl_80296EB4[];
void fn_80059FBC(void);
void fn_800375E4(void);
extern u8 lbl_80302A70[];

void fn_8005A128(void) {
    lbl_8035A184 = lbl_803596E0[0];
    lbl_8035A180 = fn_800EFDA4(lbl_8035E280);
    __register_global_object(fn_8023DC5C(lbl_80302A7C, lbl_80296EA8, lbl_80296EB4, (void *)fn_80059FBC, 436), (void *)fn_800375E4, lbl_80302A70);
}

__declspec(section ".ctors") static void (*const ctor_8005A128)(void) = fn_8005A128;

} /* extern "C" */
