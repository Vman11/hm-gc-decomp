// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B65C;
extern u32 lbl_80365D30;
void fn_8019B7E8(void *a, void *b);

static inline u8 inRange(u16 v) {
    u8 r = 0;
    if (v >= 1 && v <= 13) r = 1;
    return r;
}

void fn_8022C630(u8 *p) {
    u8 *q = *(u8 **)(p + 156);
    if (q != 0 && inRange(*(u16 *)(q + 4))) {
        if (!(*(u32 *)q & 0x800)) {
            if (*(void **)(q + 136) == 0) {
                fn_8019B7E8(*(void **)(lbl_8035B65C + 12), q);
            }
            *(u32 *)q |= lbl_80365D30;
        }
        *(u32 *)(p + 180) |= 2;
    }
}

} /* extern "C" */
