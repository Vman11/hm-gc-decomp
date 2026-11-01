// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O801DDB90 { virtual void v0(); virtual void v1(); };
struct N801DDB90 { O801DDB90 *o; u8 pad[4]; N801DDB90 *next; };
struct S801DDB90 { u8 pad[0x88]; N801DDB90 *head; };
void fn_801C0A70(S801DDB90 *p);
void fn_801DD938(S801DDB90 *p);
void __dl__FPv(void *p);
void fn_801DDB90(S801DDB90 *p) {
    N801DDB90 *n;
    N801DDB90 *next;
    for (n = p->head; n != 0; n = next) {
        next = n->next;
        n->o->v1();
    }
    fn_801C0A70(p);
    while (p->head != 0) {
        n = p->head;
        p->head = n->next;
        __dl__FPv(n);
    }
    fn_801DD938(p);
}

} /* extern "C" */
