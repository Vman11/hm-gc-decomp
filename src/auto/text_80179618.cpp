#include "common.h"

extern "C" {
extern u8 lbl_802E8530[];
}

struct C80128E3C {
    u8 b[0x34];
    C80128E3C();
    ~C80128E3C();
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

// vtable pointer at +0x34 (stored after the base, before the members)
struct C802E8530 {
    void *vt;
    C802E8530() { vt = lbl_802E8530; }
};

struct C80179618 : C80128E3C {
    C802E8530 vt;
    u8 b38[0x24];
    C801717DC m5C;
    C80155460 m9C;
    C80179618();
};

C80179618::C80179618() {
}
