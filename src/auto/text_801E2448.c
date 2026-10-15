/* Functions from 0x801E2448 to 0x801E24A8, found by decomp-toolkit. */
#include "common.h"

typedef struct UnkNode_801E2448 {
    struct UnkNode_801E2448 *next;
    u32 unk4;
    u32 unk8;
} UnkNode_801E2448;

typedef struct {
    u8 unk0[0x20];
    UnkNode_801E2448 *unk20;
    u8 unk24[0x24];
    UnkNode_801E2448 *unk48;
} Unk801E2448;

s32 fn_801E2448(Unk801E2448 *arg0, u32 arg1) {
    UnkNode_801E2448 *node;
    for (node = arg0->unk48; node != NULL; node = node->next) {
        if (arg1 == node->unk8) return 1;
    }
    return 0;
}
