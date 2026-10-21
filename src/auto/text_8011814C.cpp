// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memcpy(void *, const void *, u32);
typedef struct {
    u8 pad[4];
    s32 type;
} Data;
typedef struct Node {
    struct Node *next;
    struct Node *prev;
    Data *data;
} Node;
typedef struct {
    u8 pad[8];
    Node *head;
    Node *tail;
    Node *freeHead;
    Node *freeTail;
    u8 pad2[12];
    s32 count;
} List;

int fn_8011814C(List *self, void *dst, int flags) {
    Node *node;
    for (node = self->head; node; node = node ? node->next : self->head) {
        int m = (node->data->type == 1) ? (flags & 2) : (flags & 1);
        if (m) {
            if (node->prev) {
                if ((node->prev->next = node->next) != 0) node->next->prev = node->prev;
                else self->tail = node->prev;
            } else {
                if ((self->head = node->next) != 0) self->head->prev = 0;
                else self->tail = 0;
            }
            memcpy(dst, node->data, 28);
            if ((node->next = self->freeHead) != 0) self->freeHead->prev = node;
            else self->freeTail = node;
            self->freeHead = node;
            node->prev = 0;
            self->count--;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
