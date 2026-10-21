#include "common.h"

extern "C" {

extern u8 __vt__9C8021151C[];
void __dl__FPv(void *);
void fn_8020804C(void *, s32);

u8 *__dt__9C8021151CFv(u8 *param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x6b8) = __vt__9C8021151C;
        fn_8020804C(param_1, -1);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
