// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A144;
extern volatile f32 lbl_8035A140;
extern volatile f64 lbl_8035D660;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803028FC[];
extern u8 lbl_80295FE8[];
extern u32 lbl_8035D668;
void fn_8004DBA0(void);
void fn_800375E4(void);
extern u8 lbl_803028F0[];

void fn_8004DD3C(void) {
    lbl_8035A144 = lbl_803596E0[0];
    lbl_8035A140 = fn_800EFDA4(lbl_8035D660);
    __register_global_object(fn_8023DC5C(lbl_803028FC, lbl_80295FE8, &lbl_8035D668, (void *)fn_8004DBA0, 384), (void *)fn_800375E4, lbl_803028F0);
}

__declspec(section ".ctors") static void (*const ctor_8004DD3C)(void) = fn_8004DD3C;

} /* extern "C" */
