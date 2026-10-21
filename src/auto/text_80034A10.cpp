#include "common.h"

extern "C" {
extern u8 lbl_802AFA70[];
void fn_80033824(void *);
}

struct C8025577C {
    u8 b[0x2f0];
    C8025577C();
    ~C8025577C();
};

struct C80111028 {
    u8 b[0x1f0];
    C80111028();
    ~C80111028();
};

struct C8010B8F8 {
    u8 b[0x14];
    C8010B8F8();
    ~C8010B8F8();
};

struct C801AD710 {
    u8 b[0x78];
    C801AD710();
    ~C801AD710();
};

struct C80037F20 {
    u8 b[0x5c];
    C80037F20();
    ~C80037F20();
};

struct C800390F8 {
    u8 b[0x38];
    C800390F8();
    ~C800390F8();
};

struct C80037904 {
    u8 b[0x14];
    C80037904();
    ~C80037904();
};

struct C8002F9F4 {
    u8 b[0x358];
    C8002F9F4();
    ~C8002F9F4();
};

// vtable pointer at +0x2F0 (stored after the base, before the members)
struct C802AFA70 {
    void *vt;
    C802AFA70() { vt = lbl_802AFA70; }
};

struct C80034A10 : C8025577C {
    C802AFA70 vt;
    u8 b2F4[0x10];
    C80111028 m304;
    C80111028 m4F4;
    C8010B8F8 m6E4;
    C801AD710 m6F8;
    C80037F20 m770;
    C800390F8 m7CC;
    C80037904 m804;
    C8002F9F4 m818;
    C80034A10();
};

C80034A10::C80034A10() {
    fn_80033824(this);
}
