// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N { u32 key; u32 v; N *next; };
struct O { u8 p[136]; N *head; s32 cnt; };
}
void operator delete(void *);
extern "C" {
void fn_801D6DD8(O *o, u32 k) {
    N *h = o->head; N *n = h; N *prev = h;
    while (n) {
        if (n->key == k) break;
        prev = n;
        n = n->next;
    }
    if (n) {
        o->cnt--;
        if (prev == n) o->head = o->head->next;
        else prev->next = n->next;
        delete n;
    }
}

} /* extern "C" */
