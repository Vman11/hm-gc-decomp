#include "common.h"

extern "C" {
extern u8 lbl_802E5780[];
extern void *memset(void *, int, unsigned long);
}

struct C8013FC44 {
    C8013FC44();
    ~C8013FC44();
};

struct C8013919C : C8013FC44 {
    u8 b[0xf8];
    C8013919C();
};

C8013919C::C8013919C() {
    u8 *p = (u8 *)this;
    *(u8 **)(p + 0xf4) = lbl_802E5780;
    *(u32 *)(p + 0xb8) = 0;
    memset(p + 0xbc, 0, 0x10);
    memset(p + 0xcc, 0, 0x10);
    *(u32 *)(p + 0xdc) = 0;
    *(u32 *)(p + 0xf0) = 0xffffffff;
    *(u32 *)(p + 0xec) = 0;
    *(u32 *)(p + 0xe0) = 0;
    *(u32 *)(p + 0xe4) = 0;
    *(u32 *)(p + 0xe8) = 0;
}
