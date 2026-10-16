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
    if ((x->left = y->right) != NULL) {
        x->left->parent = x;
    }
    if ((y->parent = x->parent) != NULL) {
        if (x == x->parent->right) {
            x->parent->right = y;
        } else {
            x->parent->left = y;
        }
    } else {
        *root = y;
    }
    y->right = x;
    x->parent = y;
}

static inline void RBNode_rotateRight(RBNode_800F9CC8 **root, RBNode_800F9CC8 *x) {
    RBNode_800F9CC8 *y = x->right;
    if ((x->right = y->left) != NULL) {
        x->right->parent = x;
    }
    if ((y->parent = x->parent) != NULL) {
        if (x == x->parent->right) {
            x->parent->right = y;
        } else {
            x->parent->left = y;
        }
    } else {
        *root = y;
    }
    y->left = x;
    x->parent = y;
}

void fn_800F9CC8(RBNode_800F9CC8 **root, RBNode_800F9CC8 *x) {
    RBNode_800F9CC8 *y;

    x->black = 0;
    while (x->parent != NULL && !x->parent->black) {
        if (x->parent == x->parent->parent->right) {
            y = x->parent->parent->left;
            if (y != NULL && !y->black) {
                y->black = 1;
                x->parent->black = 1;
                x = x->parent->parent;
                x->black = 0;
            } else {
                if (x == x->parent->left) {
                    x = x->parent;
                    RBNode_rotateLeft(root, x);
                }
                x->parent->black = 1;
                x->parent->parent->black = 0;
                RBNode_rotateRight(root, x->parent->parent);
            }
        } else {
            y = x->parent->parent->right;
            if (y != NULL && !y->black) {
                y->black = 1;
                x->parent->black = 1;
                x = x->parent->parent;
                x->black = 0;
            } else {
                if (x == x->parent->right) {
                    x = x->parent;
                    RBNode_rotateRight(root, x);
                }
                x->parent->black = 1;
                x->parent->parent->black = 0;
                RBNode_rotateLeft(root, x->parent->parent);
            }
        }
    }
    (*root)->black = 1;
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
