// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A514;
extern volatile f32 lbl_8035A510;
extern volatile f64 lbl_80362FE0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803074D4[];
extern u8 lbl_8029BDB0[];
extern u32 lbl_80362FE8;
void fn_800B2CD8(void);
void fn_800375E4(void);
extern u8 lbl_803074C8[];

void fn_800B2E00(void) {
    lbl_8035A514 = lbl_803596E0[0];
    lbl_8035A510 = fn_800EFDA4(lbl_80362FE0);
    __register_global_object(fn_8023DC5C(lbl_803074D4, lbl_8029BDB0, &lbl_80362FE8, (void *)fn_800B2CD8, 284), (void *)fn_800375E4, lbl_803074C8);
}

__declspec(section ".ctors") static void (*const ctor_800B2E00)(void) = fn_800B2E00;

} /* extern "C" */
