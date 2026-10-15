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
