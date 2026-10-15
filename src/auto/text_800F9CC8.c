/* Functions from 0x800F9CC8 to 0x800F9FE0, found by decomp-toolkit. */
#include "common.h"

typedef struct TreeNode_800F9F44 {
    struct TreeNode_800F9F44 *parent;
    struct TreeNode_800F9F44 *right;
    struct TreeNode_800F9F44 *left;
} TreeNode_800F9F44;

s32 fn_800F9F94(void *arg0) {
    u32 temp_r5;

    M2C_FIELD(arg0, u32 *, 0xC) = (u32) M2C_FIELD(arg0, u32 *, 0x10);
    temp_r5 = M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 8);
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) >= temp_r5) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(arg0, u32 *, 0x10) + 0x100);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) > temp_r5) {
        M2C_FIELD(arg0, u32 *, 0x10) = temp_r5;
    }
    return 1;
}
