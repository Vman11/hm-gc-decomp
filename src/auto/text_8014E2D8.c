/* Functions from 0x8014E2D8 to 0x8014E434, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad[0x2FC];
} Unk8014E3F0Elem;

typedef struct {
    u8 pad[0x60];
    Unk8014E3F0Elem elems[1];
} Unk8014E3F0;

void fn_8014D7A0(void* arg0);
void fn_8014E2D8(void* arg0) {
    fn_8014D7A0((u8*)arg0 + *(s32*)((u8*)arg0 + 0xD4) - 0x224);
}

void* fn_8014E3F0(Unk8014E3F0* arg0, s32 arg1) {
    return &arg0->elems[arg1];
}

