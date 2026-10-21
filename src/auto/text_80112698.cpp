#include "common.h"

extern "C" {

extern char lbl_8029D208[];
struct N80112698 { u8 pad[0xc]; N80112698 *next; void *owner; };
struct S80112698 { u8 pad[0x1c]; N80112698 *free; N80112698 *cur; };
void fn_80060568(char *, s32, s32, s32);
N80112698 *fn_800F8274(S80112698 *, u32);
void fn_800F87F0(S80112698 *, u32);
void fn_8011241C(N80112698 *, u32);
void fn_801124D8(N80112698 *, u32);

void fn_80112698(S80112698 *p, u32 key, u32 c) {
    N80112698 *n;
    N80112698 *found;

    found = fn_800F8274(p, key);
    n = found;
    if (found == 0) {
        if (p->free == 0) {
            fn_80060568(lbl_8029D208, 0, 0, 0); /* "Atlas Base: Name space database overflow." */
        }
        n = p->free;
        p->free = p->free->next;
        fn_800F87F0(p, key);
        fn_801124D8(n, key);
        n->owner = p;
    }
    p->cur = n;
    fn_8011241C(n, c);
}

} /* extern "C" */
