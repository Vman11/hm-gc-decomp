#include "common.h"

extern "C" {
extern u8 lbl_802E4D28[];
void fn_800FBF24(void *);
}

struct C800FC1D4 {
    u8 b[0x14];
    C800FC1D4();
    ~C800FC1D4();
};

struct C8013ECE4 {
    u8 b[8];
    C8013ECE4();
    ~C8013ECE4();
};

// vtable pointer at +0x14 (stored after the base, before the members)
struct C802E4D28 {
    void *vt;
    C802E4D28() { vt = lbl_802E4D28; }
};

struct C8013282C : C800FC1D4 {
    C802E4D28 vt;
    u32 f18;
    C8013ECE4 m1C;
    u8 b24[0x18];
    C8013282C();
};

C8013282C::C8013282C() {
    u8 *p = (u8 *)this;
    fn_800FBF24(p + 0x24);
    *(u32 *)(p + 0x34) = 0;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x38) = 0;
}
