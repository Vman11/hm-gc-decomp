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
