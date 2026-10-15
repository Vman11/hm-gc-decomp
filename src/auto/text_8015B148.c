/* Functions from 0x8015B148 to 0x8015B1CC, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_803645C8;
extern u16 lbl_803645CA;
extern u16 lbl_803645CC;

void fn_8015B148(void* arg0) {
    *(u16*)((u8*)arg0 + 0x1A) &= ~0x1C;
}
