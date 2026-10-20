// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A424;
extern volatile f32 lbl_8035A420;
extern volatile f64 lbl_803617F0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306F74[];
extern u8 lbl_8029A414[];
extern u8 lbl_8029A420[];
void fn_8009CE2C(void);
void fn_800375E4(void);
extern u8 lbl_80306F68[];

void fn_8009D080(void) {
    lbl_8035A424 = lbl_803596E0[0];
    lbl_8035A420 = fn_800EFDA4(lbl_803617F0);
    __register_global_object(fn_8023DC5C(lbl_80306F74, lbl_8029A414, lbl_8029A420, (void *)fn_8009CE2C, 308), (void *)fn_800375E4, lbl_80306F68);
}

__declspec(section ".ctors") static void (*const ctor_8009D080)(void) = fn_8009D080;

} /* extern "C" */
