/* Functions from 0x80076E54 to 0x80076E94, found by decomp-toolkit. */
#include "common.h"

f32 fn_80076E54(f32 val, f32 deadzone) {
    extern f32 lbl_8035F3EC;
    extern f32 lbl_8035F490;

    if ((f32)__fabs(val) < deadzone) {
        return lbl_8035F3EC;
    }
    if (val > lbl_8035F3EC) {
        val -= deadzone;
    } else {
        val += deadzone;
    }
    return val / (lbl_8035F490 - deadzone);
}
