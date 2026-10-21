#include "common.h"

extern "C" {

extern u8 lbl_80366138[0x1];
extern const f32 lbl_80366198;
s32 fn_800EB580(void *, void *);
void fn_80248B54(f32, void *, void *, s32, u32);

void fn_802410CC(u8 *param_1, void *param_2, u32 param_3) {
    s32 iVar1;

    iVar1 = fn_800EB580(param_2, lbl_80366138);
    if ((iVar1 != 0) && (*(void **)(param_1 + 0x108) != 0)) {
        fn_80248B54(lbl_80366198, *(void **)(param_1 + 0x108), param_2, 0, param_3);
    }
}

} /* extern "C" */
