#include "common.h"

extern "C" {

void fn_8011C804(void *, u32, u32, s32);
void fn_8011CA98(void *, u32, u32, u32, s32);
void fn_8011D1C4(void *, u32, s32, s32);
void fn_801E4754(void *, void *);
void fn_801EB5F4(void);

void fn_801E4A94(u8 *param_1) {
    fn_801EB5F4();
    fn_801E4754(param_1 + 0x6c, param_1);
    fn_8011D1C4(param_1 + 0x1c, **(u32 **)(*(u8 **)(param_1 + 0x10) + 0xb4), 1, 1);
    if (*(s32 *)(param_1 + 0x74) == 2) {
        fn_8011C804(param_1 + 0x1c, *(u32 *)(param_1 + 0x18), *(u32 *)(param_1 + 0x78), 0);
    }
    else {
        fn_8011CA98(param_1 + 0x1c, *(u32 *)(param_1 + 0x18), *(u32 *)(param_1 + 0x78), *(u32 *)(param_1 + 0x7c), 0);
    }
    *(u8 **)(param_1 + 0x30) = param_1 + 0x6c;
}

} /* extern "C" */
