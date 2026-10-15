/* Functions from 0x80104BCC to 0x80104BF0, found by decomp-toolkit. */
#include "common.h"
typedef struct UnkNode_80104BCC {
    u8 pad0[0x4];
    struct UnkNode_80104BCC* next;
    u8 pad8[0x18];
    u32 flags;
} UnkNode_80104BCC;

typedef struct {
    u8 pad0[0x8];
    UnkNode_80104BCC* head;
} UnkList_80104BCC;

void fn_80104BCC(UnkList_80104BCC* list, u32 flags) {
    UnkNode_80104BCC* node;

    for (node = list->head; node != NULL; node = node->next) {
        node->flags |= flags;
    }
}
