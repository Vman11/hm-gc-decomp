#include "common.h"

extern "C" {

void __dla__FPv(void *);
void fn_800FB064(void *, void *);
void fn_800FB0F8(void *, void *);
void fn_801A6EC8(void);
s32 fn_80207198(void *, void *, void *);

void fn_801CB314(u8 *param_1, s32 param_2, u32 param_3, void *param_4) {
    void *local_18;
    u8 auStack_14[12];

    switch (param_2) {
    case 0x74:
        fn_800FB0F8(param_4, &local_18);
        fn_800FB064(param_4, auStack_14);
        *(s32 *)(param_1 + 0x168) = fn_80207198(*(void **)(*(u8 **)(param_1 + 0x74) + 8), local_18, auStack_14);
        __dla__FPv(local_18);
        break;
    default:
        fn_801A6EC8();
    }
}

} /* extern "C" */
