#include "common.h"

extern "C" {
extern u8 lbl_802E6488[];
void fn_80148310(void *);
}

struct C80148310 {
    u8 b[0x14];
    C80148310() { fn_80148310(this); }
};

struct C80210CEC {
    u8 b[0xc];
    C80210CEC();
    ~C80210CEC();
};

struct C80121E80 {
    u8 b[4];
    C80121E80();
};

// vtable pointer (stored at +0x53C before the members are constructed)
struct C802E6488 {
    C802E6488() { *(void **)((u8 *)this + 0x53c) = lbl_802E6488; }
};

struct C80148AE4 : C802E6488 {
    u8 f0;
    u8 pad1[0xf];
    u32 f10;
    u32 f14;
    u32 f18;
    C80148310 m1C;
    C80210CEC m30;
    C80121E80 m3C[0x100];
    u8 b43C[0x100];
    void *vt;
    C80148AE4();
};

C80148AE4::C80148AE4() {
    u8 *p = (u8 *)this;
    *p = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x38) = 0;
}
