#include "common.h"

extern "C" {

void fn_800F6E88(void *, void *);
void fn_800F9324(void *);
void fn_800F96F0(void *, void *, u32, s8 *);

void fn_801FA614(u8 *param_1, u32 param_2, s8 *param_3, void *param_4) {
    fn_800F9324(param_1 + 0x48);
    if (*param_3 == '\0') {
        fn_800F6E88(param_4, *(void **)(param_1 + 0x6c));
        fn_800F96F0(param_1 + 0x60, param_4, param_2, param_3);
    }
    else {
        fn_800F6E88(param_4, param_1 + 0x48);
    }
}

} /* extern "C" */
