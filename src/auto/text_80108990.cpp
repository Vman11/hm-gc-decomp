#include "common.h"

extern "C" {
extern u8 lbl_802E2508[];
}

struct C800F9688 {
    u8 b[0x18];
    C800F9688();
};

struct C800F9B64 {
    u8 b[0x24];
    C800F9B64();
    ~C800F9B64();
};

// vtable pointer (stored at +0x7C before the members are constructed)
struct C802E2508 {
    C802E2508() { *(void **)((u8 *)this + 0x7c) = lbl_802E2508; }
};

struct C80108990 : C802E2508 {
    u32 f0;
    C800F9688 m4;
    C800F9B64 m1C;
    C800F9688 m40;
    C800F9B64 m58;
    void *vt;
    C80108990();
};

C80108990::C80108990() {
}
