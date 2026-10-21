#include "common.h"

extern "C" {

struct N801A6948 { u32 f0; N801A6948 *parent; N801A6948 *next; u32 fc; u32 f10; };
void fn_801A6A4C(u32);

void fn_801A6948(N801A6948 *self, N801A6948 *node) {
    N801A6948 *parent;
    N801A6948 **pp;
    N801A6948 *n;

    parent = node->parent;
    if (parent != 0) {
        pp = &parent->next;
        n = parent->next;
        while (n != 0) {
            if (n == node) {
                *pp = n->next;
                n->parent = 0;
                if (parent->next == 0 && parent->f10 != 0) {
                    fn_801A6A4C(parent->f10);
                }
                break;
            }
            pp = &n->next;
            n = n->next;
        }
    }
    node->next = self->next;
    self->next = node;
    node->parent = self;
}

} /* extern "C" */
