/* Functions from 0x8015B148 to 0x8015B1CC, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_803645C8;
extern u16 lbl_803645CA;
extern u16 lbl_803645CC;

typedef struct {
    u8 unk_0x0[0x50];
    s32 unk_0x50;
} Unk8015B158;

typedef struct {
    u8 unk_0x0[0x1A];
    u16 unk_0x1A;
    u8 unk_0x1C[0x50 - 0x1C];
    s32 unk_0x50[3];
    s32 unk_0x5C;
    u8 unk_0x60[4];
    s32 unk_0x64;
} Unk8015B158_2;

void fn_8015B148(void* arg0) {
    *(u16*)((u8*)arg0 + 0x1A) &= ~0x1C;
}

void fn_8015B158(void* arg0, s32* arg1, s32* arg2, s32 arg3) {
    u8* p = (u8*)arg0;
    Unk8015B158* indexed = (Unk8015B158*)((u32)arg0 + *(u32*)(p + 0x64) * 4);
    *arg1 = indexed->unk_0x50;
    *arg2 = *(s32*)(p + 0x5C);
    *(u16*)(p + 0x1A) |= lbl_803645C8;
    if (arg3 & 1) {
        *(u16*)(p + 0x1A) |= lbl_803645CA;
        return;
    }
    if (arg3 & 2) {
        *(u16*)(p + 0x1A) |= lbl_803645CC;
        return;
    }
    *(u16*)(p + 0x1A) |= 0x18;
}

