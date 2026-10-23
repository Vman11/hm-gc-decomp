// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0188[];
extern u8 lbl_80356DAC[];
extern u8 lbl_80356DA0[];
void fn_80219AA4(void);
void __register_global_object(void *, void *, void *);

void fn_80219B68(void) {
    *(u8 **)(lbl_80356DAC + 20) = lbl_802F0188;
    *(u32 *)(lbl_80356DAC + 0) = 0;
    *(u32 *)(lbl_80356DAC + 4) = 0;
    *(u32 *)(lbl_80356DAC + 12) = 0;
    *(u32 *)(lbl_80356DAC + 16) = 0;
    __register_global_object(lbl_80356DAC, (void *)fn_80219AA4, lbl_80356DA0);
}

__declspec(section ".ctors") static void (*const ctor_80219B68)(void) = fn_80219B68;

} /* extern "C" */
