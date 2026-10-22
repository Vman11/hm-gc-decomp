// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node_8010CB34 {
    s32 a;
    char *name;
    struct Node_8010CB34 *owner;
    struct Node_8010CB34 *next;
    struct Node_8010CB34 *child;
    s32 valid;
} Node_8010CB34;

extern void *lbl_8035AAC0;
void __dla__FPv(void *);
void *__nwa__FUl(u32);
u32 strlen(const char *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800EB764(char *, const char *);

s32 fn_8010CB34(Node_8010CB34 *n, const char *name, s32 a, Node_8010CB34 *parent) {
    Node_8010CB34 *cur;
    Node_8010CB34 *last;
    if (n->valid != 0) {
        if (n->name != 0) {
            __dla__FPv(n->name);
        }
        n->a = 0;
        n->name = 0;
        n->owner = 0;
        n->next = 0;
        n->child = 0;
        n->valid = 0;
    }
    n->a = a;
    n->owner = parent;
    if (name != 0) {
        if (lbl_8035AAC0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AAC0);
        n->name = (char *)__nwa__FUl(strlen(name) + 1);
        fn_800F7E98();
        if (n->name == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        fn_800EB764(n->name, name);
    } else {
        n->name = 0;
    }
    n->owner = parent;
    if (parent != 0) {
        last = parent->child;
        if (last != 0) {
            do {
                Node_8010CB34 *nx = last->next;
                cur = last;
                last = nx;
            } while (last != 0);
            cur->next = n;
        } else {
            parent->child = n;
        }
    }
    n->valid = 1;
    return 0;
}

} /* extern "C" */
