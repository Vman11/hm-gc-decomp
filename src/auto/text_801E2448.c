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
