/* Functions from 0x8018BF8C to 0x8018C0DC, found by decomp-toolkit. */
#include "common.h"

typedef struct Elem8018BF8C {
    u8 pad0[0x78];
    s32 unk78;
    u8 pad7C[0x84 - 0x7C];
    s32 unk84;
    s32 unk88;
    u8 pad8C[0x90 - 0x8C];
    s32* unk90;
    s32 unk94;
} Elem8018BF8C;

typedef struct Pool8018BF8C {
    u8 pad0[0x14];
    s32 unk14;
    u32 unk18;
    u8 pad1C[0x34 - 0x1C];
    Elem8018BF8C* unk34;
    u8 pad38[0x3C - 0x38];
    s32 unk3C;
} Pool8018BF8C;

void fn_8018BF8C(Pool8018BF8C* pool) {
    Elem8018BF8C* e = pool->unk34;
    Elem8018BF8C* end = e + pool->unk14;

    for (; e < end; e++) {
        e->unk84 = 0;
        e->unk78 = 0;
        e->unk88 = 0;
        e->unk90[0] = 0;
        e->unk90[1] = 0;
        e->unk90[2] = 0;
        e->unk94 = 0;
    }
    pool->unk3C = 0;
    pool->unk18 &= ~4;
}

u8* fn_8018C0C0(u8* arg0) {
    return *(u8**)(arg0 + 0x34) + (*(s32*)(arg0 + 0x14))++ * 0x98;
}
