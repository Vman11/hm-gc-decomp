// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3BC;
extern volatile f32 lbl_8035A3B8;
extern volatile f64 lbl_80360C50;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306DC4[];
extern u8 lbl_80299984[];
extern u8 lbl_80299990[];
void fn_80092EEC(void);
void fn_800375E4(void);
extern u8 lbl_80306DB8[];

void fn_80092F8C(void) {
    lbl_8035A3BC = lbl_803596E0[0];
    lbl_8035A3B8 = fn_800EFDA4(lbl_80360C50);
    __register_global_object(fn_8023DC5C(lbl_80306DC4, lbl_80299984, lbl_80299990, (void *)fn_80092EEC, 372), (void *)fn_800375E4, lbl_80306DB8);
}

__declspec(section ".ctors") static void (*const ctor_80092F8C)(void) = fn_80092F8C;

} /* extern "C" */
