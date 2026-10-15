/* Functions from 0x8023E8EC to 0x8023E96C, found by decomp-toolkit. */
#include "common.h"

typedef struct UnkNode_8023E8EC {
    u8 unk0[0x10];
    s32 unk10;
    u8 unk14[4];
    struct UnkNode_8023E8EC* next;
} UnkNode_8023E8EC;

typedef struct UnkList_8023E8EC {
    u8 unk0[0x59F4];
    UnkNode_8023E8EC* head;
} UnkList_8023E8EC;

void fn_8023E8EC(UnkList_8023E8EC* arg0) {
    UnkNode_8023E8EC* node;
    for (node = arg0->head; node != NULL; node = node->next) {
        node->unk10 = 1;
    }
    arg0->head = NULL;
}
