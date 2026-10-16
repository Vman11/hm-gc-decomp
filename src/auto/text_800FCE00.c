/* Functions from 0x800FCE00 to 0x800FCED8, found by decomp-toolkit. */
#include "common.h"

typedef struct Elem800FCE00 {
    u8 pad0[0x78];
    s32 unk78;
    u8 pad7C[0x84 - 0x7C];
    s32 unk84;
    s32 unk88;
    u8 pad8C[0x90 - 0x8C];
} Elem800FCE00;

typedef struct Pool800FCE00 {
    u8 pad0[0x4];
    Elem800FCE00* unk4;
    u8 pad8[0x14 - 0x8];
    s32 unk14;
    u32 unk18;
    s32 unk1C;
} Pool800FCE00;
