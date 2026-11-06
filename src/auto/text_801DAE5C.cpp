#include "common.h"

#define V4(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3();
struct Obj { V4(a) V4(b) V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) V4(i) V4(j) virtual int m(void *, void *); };
struct Node { Obj *o; int pad; Node *next; };
struct Mgr { char pad[0x88]; Node *head; };
extern "C" {
void fn_801DAE5C(Mgr *self, void *arg) {
    Node *n;
    int fail = 0;
    for (n = self->head; n != 0; n = n->next) {
        if (!n->o->m(self, arg)) fail = 1;
    }
    if (fail) return;
}
}
