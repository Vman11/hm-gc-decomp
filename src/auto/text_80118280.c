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
