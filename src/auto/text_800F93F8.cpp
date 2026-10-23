// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node800F93F8 {
    u8 pad[8];
    struct Node800F93F8 *next;
    struct Node800F93F8 *parent;
    u32 unk10;
    void *owner;
} Node800F93F8;

void fn_800F6E88(void *s, void *name);
s32 fn_800F6CD0(void *s, void *other);
void fn_800F96A4(void *owner, Node800F93F8 *node);

static inline void Remove800F93F8(Node800F93F8 *self, Node800F93F8 *child) {
    Node800F93F8 *n = self->next;
    Node800F93F8 **pp = &self->next;
    while (n != 0) {
        if (n == child) {
            *pp = n->next;
            n->parent = 0;
            if (self->next == 0 && self->owner != 0) fn_800F96A4(self->owner, self);
            return;
        }
        pp = &n->next;
        n = n->next;
    }
}

void fn_800F93F8(Node800F93F8 *a, Node800F93F8 *b) {
    u8 buf[16];
    fn_800F6E88(buf, b->parent);
    if (fn_800F6CD0(buf, a) != 0 && a->next != b) {
        Remove800F93F8(a, b);
        if (b->parent != 0) Remove800F93F8(b->parent, b);
        b->next = a->next;
        a->next = b;
        b->parent = a;
    }
}

} /* extern "C" */
