// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N { N *next; N *prev; };
struct O { u8 p[188]; N *head; N *tail; f32 f; u32 a, b; };
extern f32 lbl_80365D28;
}
void operator delete(void *);
static inline N *pop(O *o) {
    N *n = o->head;
    if (n) {
        if ((o->head = n->next) != 0) o->head->prev = 0;
        else o->tail = 0;
    }
    return n;
}
extern "C" {
void fn_8022D6FC(O *o) {
    o->f = lbl_80365D28;
    o->a = 0;
    o->b = 0;
    while (o->head) delete pop(o);
}

} /* extern "C" */
