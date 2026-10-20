// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B2AC;
extern volatile f32 lbl_8035B2A8;
extern volatile f64 lbl_80365C20;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80356E84[];
extern u8 lbl_802A8250[];
extern u32 lbl_80365C28;
void fn_80225D08(void);
void fn_800375E4(void);
extern u8 lbl_80356E78[];

void fn_80225E50(void) {
    lbl_8035B2AC = lbl_803596E0[0];
    lbl_8035B2A8 = fn_800EFDA4(lbl_80365C20);
    __register_global_object(fn_8023DC5C(lbl_80356E84, lbl_802A8250, &lbl_80365C28, (void *)fn_80225D08, 816), (void *)fn_800375E4, lbl_80356E78);
}

__declspec(section ".ctors") static void (*const ctor_80225E50)(void) = fn_80225E50;

} /* extern "C" */
