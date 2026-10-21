#include "common.h"

extern "C" {

extern char lbl_8029CAD8[];
struct N800F9838 { u8 pad[0x10]; N800F9838 *next; void *owner; };
struct S800F9838 { u8 pad[0x1c]; N800F9838 *free; N800F9838 *cur; };
void fn_80060568(char *, s32, s32, s32);
N800F9838 *fn_800F8274(S800F9838 *, u32);
void fn_800F87F0(S800F9838 *, u32);
void fn_800F9594(N800F9838 *, u32);
void fn_800F9654(N800F9838 *, u32);

void fn_800F9838(S800F9838 *p, u32 key, u32 c) {
    N800F9838 *n;
    N800F9838 *found;

    found = fn_800F8274(p, key);
    n = found;
    if (found == 0) {
        if (p->free == 0) {
            fn_80060568(lbl_8029CAD8, 0, 0, 0); /* "Atlas Base: Name space database overflow." */
        }
        n = p->free;
        p->free = p->free->next;
        fn_800F87F0(p, key);
        fn_800F9654(n, key);
        n->owner = p;
    }
    p->cur = n;
    fn_800F9594(n, c);
}

} /* extern "C" */
