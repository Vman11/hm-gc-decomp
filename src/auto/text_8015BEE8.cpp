#include "common.h"

extern "C" {
extern u8 lbl_802E6DF0[];
}

struct C8012EE18 {
    u8 b[0x38];
    C8012EE18();
    ~C8012EE18();
};

struct C801717DC {
    u8 b[0x40];
    C801717DC();
    ~C801717DC();
};

struct C80155460 {
    u8 b[0x20];
    C80155460();
    ~C80155460();
};

// vtable pointer at +0x38 (stored after the base, before the members)
struct C802E6DF0 {
    void *vt;
    C802E6DF0() { vt = lbl_802E6DF0; }
};

struct C8015BEE8 : C8012EE18 {
    C802E6DF0 vt;
    C801717DC m3C;
    C80155460 m7C;
    C8015BEE8();
};

C8015BEE8::C8015BEE8() {
}
