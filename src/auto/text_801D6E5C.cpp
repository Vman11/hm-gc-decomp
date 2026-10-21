// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node { void *a; void *b; struct Node *next; } Node;
extern void *lbl_8035AFCC;
void fn_800604C4(s32 a, s32 b, s32 c, s32 d);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void *__nw__FUl(u32 size);

void fn_801D6E5C(u8 *p, void *a, void *b, s32 append) {
    Node *n;
    Node *t;
    if (a != 0) {
        if (lbl_8035AFCC == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        n = (Node *)__nw__FUl(12);
        fn_800F7E98();
        if (n == 0) fn_800604C4(-4, 0, 0, 0);
        n->b = b;
        n->a = a;
        (*(s32 *)(p + 140))++;
        if (append) {
            n->next = 0;
            t = *(Node **)(p + 136);
            if (t == 0) {
                *(Node **)(p + 136) = n;
            } else {
                while (t->next != 0) t = t->next;
                t->next = n;
            }
        } else {
            n->next = *(Node **)(p + 136);
            *(Node **)(p + 136) = n;
        }
    }
}

} /* extern "C" */
