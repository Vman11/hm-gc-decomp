#include "common.h"

extern "C" {

extern char lbl_802A27B8[];
struct N801A6B34 { u8 pad[0xc]; N801A6B34 *next; void *owner; };
struct S801A6B34 { u8 pad[0x1c]; N801A6B34 *free; N801A6B34 *cur; };
void fn_80060568(char *, s32, s32, s32);
N801A6B34 *fn_800F8274(S801A6B34 *, u32);
void fn_800F87F0(S801A6B34 *, u32);
void fn_801A6948(N801A6B34 *, u32);
void fn_801A6A04(N801A6B34 *, u32);

void fn_801A6B34(S801A6B34 *p, u32 key, u32 c) {
    N801A6B34 *n;
    N801A6B34 *found;

    found = fn_800F8274(p, key);
    n = found;
    if (found == 0) {
        if (p->free == 0) {
            fn_80060568(lbl_802A27B8, 0, 0, 0);
        }
        n = p->free;
        p->free = p->free->next;
        fn_800F87F0(p, key);
        fn_801A6A04(n, key);
        n->owner = p;
    }
    p->cur = n;
    fn_801A6948(n, c);
}

} /* extern "C" */
