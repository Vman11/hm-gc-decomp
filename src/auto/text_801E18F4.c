/* Functions from 0x801E18F4 to 0x801E1B1C, found by decomp-toolkit. */
#include "common.h"

typedef struct Node801E1A5C {
    struct Node801E1A5C* next;
    struct Node801E1A5C* prev;
    u32 id;
} Node801E1A5C;

typedef struct List801E1A5C {
    u8 pad[0x20];
    Node801E1A5C* head;
    Node801E1A5C* tail;
    Node801E1A5C* freeHead;
    Node801E1A5C* freeTail;
    s32 count;
} List801E1A5C;

typedef struct List801E18F4 {
    u8 pad[0x48];
    Node801E1A5C* head;
    Node801E1A5C* tail;
    Node801E1A5C* freeHead;
    Node801E1A5C* freeTail;
    Node801E1A5C* head2;
    Node801E1A5C* tail2;
    Node801E1A5C* freeHead2;
    Node801E1A5C* freeTail2;
    s32 count;
} List801E18F4;

void fn_801E18F4(List801E18F4* list, u32 id) {
    Node801E1A5C* node;
    for (node = list->head; node != NULL; node = node->next) {
        if (node->id == id) {
            if (node->prev != NULL) {
                if ((node->prev->next = node->next) != NULL) {
                    node->next->prev = node->prev;
                } else {
                    list->tail = node->prev;
                }
            } else {
                if ((list->head = node->next) != NULL) {
                    list->head->prev = NULL;
                } else {
                    list->tail = NULL;
                }
            }
            if ((node->prev = list->freeTail) != NULL) {
                list->freeTail->next = node;
            } else {
                list->freeHead = node;
            }
            list->freeTail = node;
            node->next = NULL;
            list->count--;
            node = list->head2;
            while (node != NULL) {
                if (node->id == id) {
                    if (node->prev != NULL) {
                        if ((node->prev->next = node->next) != NULL) {
                            node->next->prev = node->prev;
                        } else {
                            list->tail2 = node->prev;
                        }
                    } else {
                        if ((list->head2 = node->next) != NULL) {
                            list->head2->prev = NULL;
                        } else {
                            list->tail2 = NULL;
                        }
                    }
                    if ((node->prev = list->freeTail2) != NULL) {
                        list->freeTail2->next = node;
                    } else {
                        list->freeHead2 = node;
                    }
                    list->freeTail2 = node;
                    node->next = NULL;
                }
            }
            return;
        }
    }
}

void fn_801E1A5C(List801E1A5C* list, u32 id) {
    Node801E1A5C* node;
    for (node = list->head; node != NULL; node = node->next) {
        if (node->id == id) {
            if (node->prev != NULL) {
                if ((node->prev->next = node->next) != NULL) {
                    node->next->prev = node->prev;
                } else {
                    list->tail = node->prev;
                }
            } else {
                if ((list->head = node->next) != NULL) {
                    list->head->prev = NULL;
                } else {
                    list->tail = NULL;
                }
            }
            if ((node->prev = list->freeTail) != NULL) {
                list->freeTail->next = node;
            } else {
                list->freeHead = node;
            }
            list->freeTail = node;
            node->next = NULL;
            list->count--;
            return;
        }
    }
}
