// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node800F9BEC {
    struct Node800F9BEC *parent;
    struct Node800F9BEC *left;
    struct Node800F9BEC *right;
    u8 color;
} Node800F9BEC;

typedef struct {
    Node800F9BEC *root;
    s32 (*cmp)(Node800F9BEC *, Node800F9BEC *);
} Tree800F9BEC;

void fn_800F9CC8(Tree800F9BEC *, Node800F9BEC *);

void fn_800F9BEC(Tree800F9BEC *t, Node800F9BEC *n) {
    Node800F9BEC *cur;
    n->left = 0;
    n->right = 0;
    cur = t->root;
    if (cur != 0) {
        do {
            if (t->cmp(n, cur) > 0) {
                if (cur->right != 0) {
                    cur = cur->right;
                } else {
                    n->parent = cur;
                    cur->right = n;
                    cur = 0;
                }
            } else {
                if (cur->left != 0) {
                    cur = cur->left;
                } else {
                    n->parent = cur;
                    cur->left = n;
                    cur = 0;
                }
            }
        } while (cur != 0);
        fn_800F9CC8(t, n);
    } else {
        n->parent = 0;
        n->color = 1;
        t->root = n;
    }
}

} /* extern "C" */
