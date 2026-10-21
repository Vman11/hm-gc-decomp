#include "common.h"

extern "C" {

void fn_8017F368(u32, u32);
u32 fn_801A1538(void);

u32 fn_80196600(u32 param_1, u32 param_2, u32 param_3) {
    u32 r;

    r = fn_801A1538();
    if (r == 0x40) {
        r = 0x40;
    } else {
        switch ((*(u32 *)(*(u32 *)(param_1 + 0x90) + 0xc) & 0x2000)) {
        case 0:
            *(u32 *)(param_1 + 0xdc) = param_3;
            fn_8017F368(param_2, param_1);
            r = 0x40;
        }
    }
    return r;
}

} /* extern "C" */
