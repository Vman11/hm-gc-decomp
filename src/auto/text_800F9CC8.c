/* Functions from 0x800F9CC8 to 0x800F9FE0, found by decomp-toolkit. */
#include "common.h"

typedef struct TreeNode_800F9F44 {
    struct TreeNode_800F9F44 *parent;
    struct TreeNode_800F9F44 *right;
    struct TreeNode_800F9F44 *left;
} TreeNode_800F9F44;

typedef struct RBNode_800F9CC8 {
    struct RBNode_800F9CC8 *parent;
    struct RBNode_800F9CC8 *right;
    struct RBNode_800F9CC8 *left;
    u8 black;
} RBNode_800F9CC8;

static inline void RBNode_rotateLeft(RBNode_800F9CC8 **root, RBNode_800F9CC8 *x) {
    RBNode_800F9CC8 *y = x->left;
    x->left = y->right;
    if (x->left != NULL) {
        x->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL) {
        *root = y;
    } else if (x == x->parent->right) {
        x->parent->right = y;
    } else {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

static inline void RBNode_rotateRight(RBNode_800F9CC8 **root, RBNode_800F9CC8 *x) {
    RBNode_800F9CC8 *y = x->right;
    x->right = y->left;
    if (x->right != NULL) {
        x->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL) {
        *root = y;
    } else if (x == x->parent->right) {
        x->parent->right = y;
    } else {
        x->parent->left = y;
    }
    y->left = x;
    x->parent = y;
}

void fn_800F9CC8(RBNode_800F9CC8 **root, RBNode_800F9CC8 *x) {
}

TreeNode_800F9F44 *fn_800F9F44(TreeNode_800F9F44 *node) {
    TreeNode_800F9F44 *parent;
    if (node->left != NULL) {
        node = node->left;
        while (node->right != NULL) {
            node = node->right;
        }
        return node;
    }
    while ((parent = node->parent) != NULL && node == parent->left) {
        node = parent;
    }
    return parent;
}

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
