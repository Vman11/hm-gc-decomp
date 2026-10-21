#include "common.h"

extern "C" {
extern u8 lbl_802E7090[];
extern void *memset(void *, int, unsigned long);
}

struct C80134094 {
    C80134094();
    ~C80134094();
};

struct C801611A4 : C80134094 {
    u16 h0;
    u16 h2;
    u8 *p4;
    u8 b[0x14];
    C801611A4();
};

C801611A4::C801611A4() {
    u16 *p = (u16 *)this;
    *(u8 **)(p + 2) = lbl_802E7090;
    *p = 0;
    p[1] = 0;
    *(u32 *)(p + 10) = 0;
    memset(p + 4, 0, 0xc);
    *(u32 *)(p + 0xc) = 0;
}
