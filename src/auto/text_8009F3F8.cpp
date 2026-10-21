// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803596E0[];
extern volatile f32 lbl_8035A43C;
extern volatile f32 lbl_8035A438;
extern volatile f64 lbl_80361980;
extern u8 lbl_8029A6C0[];
extern u8 lbl_802CF038[];
extern u32 lbl_80306FF8[];
double fn_800EFDA4(double);
void fn_800F6FBC(void *, void *);
void fn_8009F350(void);
void fn_801DDE58(void *);

void fn_8009F3F8(void) {
    lbl_8035A43C = lbl_803596E0[0];
    lbl_8035A438 = fn_800EFDA4(lbl_80361980);
    fn_800F6FBC(lbl_8029A6C0, &lbl_80306FF8[1]);
    lbl_80306FF8[0] = (u32)fn_8009F350;
    lbl_80306FF8[4] = (u32)lbl_802CF038;
    lbl_80306FF8[5] = 4;
    fn_801DDE58(lbl_80306FF8);
}

__declspec(section ".ctors") static void (*const ctor_8009F3F8)(void) = fn_8009F3F8;

} /* extern "C" */
