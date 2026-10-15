/* Functions from 0x80072388 to 0x800724AC, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035A238;
f32 fn_80072388(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x20C), void **, 0xC0), void **, 0x14), f32 *, 0xE0);
}

s32 fn_800724A4(void) {
    return lbl_8035A238;
}
