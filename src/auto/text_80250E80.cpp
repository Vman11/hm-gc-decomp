#include "common.h"
extern "C" {
extern void *lbl_8035B818;
void fn_80272A48(void *);

#pragma scheduling off
void fn_80250E80(u8 *p) {
    fn_80272A48(lbl_8035B818);
    p[0x11c] &= 0xfb;
}
#pragma scheduling reset
}
