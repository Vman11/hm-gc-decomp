#include "common.h"

extern "C" {
extern u8 lbl_802AF9BC[];
void fn_8008E44C(void *);
}

struct C80255A20 {
    u8 b[0xc0];
    C80255A20();
    ~C80255A20();
};

struct C8003EFF4 {
    u8 b[0xfc];
    C8003EFF4();
    ~C8003EFF4();
};

// vtable pointer at +0xC0 (stored after the base, before the members)
struct C802AF9BC {
    void *vt;
    C802AF9BC() { vt = lbl_802AF9BC; }
};

struct C80030270 : C80255A20 {
    C802AF9BC vt;
    C8003EFF4 mC4;
    u8 b1C0[0x10];
    C80030270();
};

C80030270::C80030270() {
    u8 *p = (u8 *)this;
    fn_8008E44C(p + 0x1c8);
    *(u32 *)(p + 0xac) = 0;
    *(u32 *)(p + 0x1c4) = 0;
    *(u32 *)(p + 0x1c0) = 0;
}
