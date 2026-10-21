#include "common.h"

extern "C" {

extern u8 __vt__9C8020E5C0[];
void __dl__FPv(void *);
u8 *__dt__9C8021151CFv(u8 *, s16);

u8 *__dt__9C8020E5C0Fv(u8 *param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x6b8) = __vt__9C8020E5C0;
        __dt__9C8021151CFv(param_1, 0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
