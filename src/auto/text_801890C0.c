/* Functions from 0x801890C0 to 0x801891E4, found by decomp-toolkit. */
#include "common.h"

typedef struct SortNode {
    f32 min;
    f32 max;
    void* owner;
    u8 pad0C[0x14 - 0x0C];
    struct SortNode* self;
    struct SortNode* next;
    struct SortNode* prev;
} SortNode;

typedef struct SortList {
    u8 pad00[0x10];
    s32 axis;
    SortNode* heads[1];
} SortList;

typedef struct SortType {
    u8 pad00[0x4C];
    u32 kind;
} SortType;

typedef struct SortObj {
    SortType* type;
    f32 x;
    f32 y;
    f32 z;
} SortObj;

void fn_801890C0(SortList* list, SortObj* obj, SortNode* node, f32 radius) {
    u32 kind;
    SortNode* first;
    SortNode* prev;
    SortNode* cur;

    kind = obj->type->kind;
    first = list->heads[kind];
    node->owner = list;
    if (node->self == NULL) {
        node->self = node;
    }
    if (kind >= 2) {
        list->heads[kind] = node;
        node->prev = NULL;
        node->next = first;
        if (first != NULL) {
            first->prev = node;
        }
        return;
    }
    switch (list->axis) {
    case 0:
        node->min = obj->x - radius;
        node->max = radius + obj->x;
        break;
    case 1:
        node->min = obj->y - radius;
        node->max = radius + obj->y;
        break;
    case 2:
        node->min = obj->z - radius;
        node->max = radius + obj->z;
        break;
    }
    prev = NULL;
    for (cur = first; cur != NULL; cur = cur->next) {
        if (cur->min >= node->min) {
            break;
        }
        prev = cur;
    }
    node->prev = prev;
    node->next = cur;
    if (prev == NULL) {
        list->heads[kind] = node;
    } else {
        prev->next = node;
    }
    if (cur != NULL) {
        cur->prev = node;
    }
}
