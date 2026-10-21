#include "common.h"

extern "C" {
extern u8 lbl_802E6DB0[];
extern s32 lbl_8035ACE8;
extern void *memset(void *, int, unsigned long);
}

struct C80155460 {
    C80155460();
    ~C80155460();
};

struct C8015B350 : C80155460 {
    u8 b[0x70];
    C8015B350();
};

C8015B350::C8015B350() {
    u8 *p = (u8 *)this;
    *(u8 **)(p + 0x20) = lbl_802E6DB0;
    lbl_8035ACE8 = 0;
    *(u32 *)(p + 0x6c) = 0;
    memset(p + 0x50, 0, 8);
    *(u32 *)(p + 0x5c) = 0;
    *(u32 *)(p + 0x60) = 0;
    *(u32 *)(p + 0x58) = 0;
    *(u32 *)(p + 100) = 0;
}
