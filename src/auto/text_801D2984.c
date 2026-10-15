/* Functions from 0x801D2984 to 0x801D29F8, found by decomp-toolkit. */
#include "common.h"

typedef struct Node {
    u8 unk0[0x10];
    struct Node* next;
    u8 unk14[0x8];
    s32 unk1C;
} Node;

typedef struct {
    u8 unk0[0x314];
    Node* head;
} NodeOwner;

void fn_801D2984(NodeOwner* owner, Node* node) {
    Node* prev = NULL;
    Node* cur;

    if (node->unk1C == 0) {
        return;
    }
    if (owner->head == node) {
        owner->head = owner->head->next;
        node->next = NULL;
        node->unk1C = 0;
        return;
    }
    for (cur = owner->head; cur != node && cur != NULL; cur = cur->next) {
        prev = cur;
    }
    if (cur != NULL) {
        prev->next = node->next;
        node->next = NULL;
        node->unk1C = 0;
    }
}
