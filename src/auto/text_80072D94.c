/* Functions from 0x80072D94 to 0x80072DB8, found by decomp-toolkit. */
#include "common.h"

void fn_80072D94(void* arg0, s32 arg1, f32 farg0) {
    extern f32 lbl_8035F45C;
    f32* p = (f32*)((u8*)arg0 + 0x66C);
    if (arg1 != 0) {
        p[1] = farg0;
        p[0] = farg0;
        return;
    }
    {
        f32 value = lbl_8035F45C;
        p[1] = value;
        p[0] = value;
    }
}
