#include "common.h"

extern "C" {

void strcat(void *, void *);
void strcpy(void *, void *);

void fn_80207E5C(u8 *param_1, void *param_2) {
    strcpy(param_1 + 0x80, param_1);
    if (*(s32 *)(param_1 + 0x698) != -1) {
        strcat(param_1 + 0x80, param_1 + *(s32 *)(param_1 + 0x698) * 0x80 + 0x298);
    }
    strcat(param_1 + 0x80, param_2);
}

} /* extern "C" */
