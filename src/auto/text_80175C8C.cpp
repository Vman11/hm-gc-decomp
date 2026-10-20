// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80364774;
extern u32 lbl_80364778;
extern u32 lbl_8036477C;
void fn_80175D00(void *, void *);

void fn_80175C8C(u8 *p, void *a, u32 f) {
    *(u32 *)(p + 4) |= lbl_80364774;
    if (f & 1) {
        *(u32 *)(p + 4) |= lbl_80364778;
    } else if (f & 0xE) {
        *(u32 *)(p + 4) |= lbl_8036477C;
    } else {
        *(u32 *)(p + 4) |= 12;
    }
    fn_80175D00(p, a);
}

} /* extern "C" */
