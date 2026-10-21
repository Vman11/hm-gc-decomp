#include "common.h"

extern "C" {
extern u8 lbl_802E4418[];
void fn_80129B88(void *);
}

struct C800F92E8 {
    u8 b[0x14];
    C800F92E8();
    ~C800F92E8();
};

// vtable pointer (stored at +0xA4 before the members are constructed)
struct C802E4418 {
    C802E4418() { *(void **)((u8 *)this + 0xa4) = lbl_802E4418; }
};

struct C8012C28C : C802E4418 {
    u8 b0[0x28];
    C800F92E8 m28;
    C800F92E8 m3C;
    C800F92E8 m50;
    C800F92E8 m64;
    u8 b78[0x2c];
    void *vt;
    C8012C28C();
};

C8012C28C::C8012C28C() {
    fn_80129B88(this);
}
