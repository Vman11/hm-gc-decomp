// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B3BC;
extern volatile f32 lbl_8035B3B8;
extern volatile f64 lbl_80365FF8;
double fn_800EFDA4(double);
extern u8 lbl_802F1930[];
extern u8 lbl_803570C4[];
extern u8 lbl_803570B8[];
void fn_8023A820(void);
void fn_8023A7D0(void);
void __construct_array(void *, void *, void *, u32, u32);
void __register_global_object(void *, void *, void *);

void fn_8023A824(void) {
    lbl_8035B3BC = lbl_803596E0[0];
    lbl_8035B3B8 = fn_800EFDA4(lbl_80365FF8);
    *(u8 * volatile *)(lbl_803570C4 + 1176) = lbl_802F1930;
    __construct_array(lbl_803570C4 + 12, (void *)fn_8023A820, 0, 116, 10);
    *(u32 *)lbl_803570C4 = 0;
    __register_global_object(lbl_803570C4, (void *)fn_8023A7D0, lbl_803570B8);
}

__declspec(section ".ctors") static void (*const ctor_8023A824)(void) = fn_8023A824;

} /* extern "C" */
