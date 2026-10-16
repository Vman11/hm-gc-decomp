/* Functions from 0x80118280 to 0x8011836C, found by decomp-toolkit. */
#include "common.h"
typedef struct Node80118280 {
    struct Node80118280* next;
    struct Node80118280* prev;
    s32* data;
} Node80118280;

typedef struct List80118280 {
    u8 pad0[0x8];
    Node80118280* head;
    Node80118280* tail;
    Node80118280* freeHead;
    Node80118280* freeTail;
    u8 pad18[0xC];
    s32 count;
} List80118280;

void fn_80118280(List80118280* list, u32 flags) {
    Node80118280* node = list->head;
    while (node != NULL) {
        s32 match;
        if (node->data[1] == 1) {
            match = flags & 2;
        } else {
            match = flags & 1;
        }
        if (match != 0) {
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
            if ((node->next = list->freeHead) != NULL) {
                list->freeHead->prev = node;
            } else {
                list->freeTail = node;
            }
            list->freeHead = node;
            node->prev = NULL;
            node = NULL;
            list->count--;
        }
        if (node != NULL) {
            node = node->next;
        } else {
            node = list->head;
        }
    }
}
