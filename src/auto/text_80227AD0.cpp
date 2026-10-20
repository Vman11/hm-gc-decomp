// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B2EC;
extern volatile f32 lbl_8035B2E8;
extern volatile f64 lbl_80365C70;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356EE4[];
extern u8 lbl_802A83F8[];
extern u32 lbl_80365C78;
void fn_80227988(void);
void fn_800375E4(void);
extern u8 lbl_80356ED8[];

void fn_80227AD0(void) {
    lbl_8035B2EC = lbl_803596E0[0];
    lbl_8035B2E8 = fn_800EFDA4(lbl_80365C70);
    __register_global_object(fn_8023DC5C(lbl_80356EE4, lbl_802A83F8, &lbl_80365C78, (void *)fn_80227988, 604), (void *)fn_800375E4, lbl_80356ED8);
}

__declspec(section ".ctors") static void (*const ctor_80227AD0)(void) = fn_80227AD0;

} /* extern "C" */
