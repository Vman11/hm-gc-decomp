#include "common.h"

extern "C" {

void fn_800EB6F4(void *, void *);
void fn_800EB764(void *, void *);

void fn_80207E5C(u8 *param_1, void *param_2) {
    fn_800EB764(param_1 + 0x80, param_1);
    if (*(s32 *)(param_1 + 0x698) != -1) {
        fn_800EB6F4(param_1 + 0x80, param_1 + *(s32 *)(param_1 + 0x698) * 0x80 + 0x298);
    }
    fn_800EB6F4(param_1 + 0x80, param_2);
}

} /* extern "C" */
