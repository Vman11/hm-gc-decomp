// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364840;
extern char lbl_802A1098[];
void fn_80107244(void *, f32 *);
void fn_80060568(const char *, s32, s32, s32);

void fn_8017BB84(u8 *p, u8 *q, f32 *out) {
    if (*(u32 *)(p + 4) == 0) {
        if (*(void **)(q + 48) != 0) {
            fn_80107244(*(void **)(q + 48), out);
        } else {
            out[0] = lbl_80364840;
            out[1] = lbl_80364840;
            out[2] = lbl_80364840;
        }
    } else {
        if (*(void **)(q + 168) == 0) {
            fn_80060568(lbl_802A1098, 0, 0, 0);
        }
        fn_80107244(*(u8 **)(*(u8 **)(q + 168) + 36) + (*(u32 *)(p + 4) - 1) * 40, out);
    }
}

} /* extern "C" */
