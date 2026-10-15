/* Functions from 0x80076E54 to 0x80076E94, found by decomp-toolkit. */
#include "common.h"

f32 fn_80076E54(f32 val, f32 deadzone) {
    if ((f32)__fabs(val) < deadzone) {
        return 0.0f;
    }
    if (val > 0.0f) {
        val -= deadzone;
    } else {
        val += deadzone;
    }
    return val / (1.0f - deadzone);
}
