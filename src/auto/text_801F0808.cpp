// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80365458;
void fn_801EB7B0(void *);

void fn_801F0808(u8 *p) {
    fn_801EB7B0(p);
    *(s32 *)(p + 0x24) = 0;
    *(f32 *)(p + 0x18) = lbl_80365458;
    *(f32 *)(p + 0x20) = lbl_80365458;
    *(f32 *)(p + 0x1C) = lbl_80365458;
    *(s32 *)(p + 0x28) = 0;
}

} /* extern "C" */
