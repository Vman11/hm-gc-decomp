// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A474;
extern volatile f32 lbl_8035A470;
extern volatile f64 lbl_80361DB8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307114[];
extern u8 lbl_8029ACE0[];
extern u8 lbl_8029ACEC[];
void fn_800A4FBC(void);
void fn_800375E4(void);
extern u8 lbl_80307108[];

void fn_800A5164(void) {
    lbl_8035A474 = lbl_803596E0[0];
    lbl_8035A470 = fn_800EFDA4(lbl_80361DB8);
    __register_global_object(fn_8023DC5C(lbl_80307114, lbl_8029ACE0, lbl_8029ACEC, (void *)fn_800A4FBC, 300), (void *)fn_800375E4, lbl_80307108);
}

__declspec(section ".ctors") static void (*const ctor_800A5164)(void) = fn_800A5164;

} /* extern "C" */
