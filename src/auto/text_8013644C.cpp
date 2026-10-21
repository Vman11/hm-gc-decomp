#include "common.h"

extern "C" {
extern u8 lbl_802E52D8[];
}

struct C8012C5A0 {
    u8 b[0x30];
    C8012C5A0();
    ~C8012C5A0();
};

struct C800F9688 {
    u8 b[0x18];
    C800F9688();
};

struct C800F9B64 {
    u8 b[0x24];
    C800F9B64();
    ~C800F9B64();
};

// vtable pointer at +0x30 (stored after the base, before the members)
struct C802E52D8 {
    void *vt;
    C802E52D8() { vt = lbl_802E52D8; }
};

struct C8013644C : C8012C5A0 {
    C802E52D8 vt;
    u32 f34;
    u32 f38;
    C800F9688 m3C;
    C800F9B64 m54;
    C800F9688 m78;
    C800F9B64 m90;
    C800F9688 mB4;
    C800F9B64 mCC;
    C800F9688 mF0;
    C800F9B64 m108;
    C800F9688 m12C;
    C800F9B64 m144;
    C800F9688 m168;
    C800F9B64 m180;
    C800F9688 m1A4;
    C800F9B64 m1BC;
    C800F9688 m1E0;
    C800F9B64 m1F8;
    C800F9688 m21C;
    C800F9B64 m234;
    C800F9688 m258;
    C800F9B64 m270;
    C800F9688 m294;
    C800F9688 m2AC;
    C800F9688 m2C4;
    C800F9688 m2DC;
    C800F9688 m2F4;
    C800F9688 m30C;
    C8013644C();
};

C8013644C::C8013644C() {
    f34 = 0;
}
