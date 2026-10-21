#include "common.h"

extern "C" {
extern u8 lbl_802E3E40[];
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
struct C802E3E40 {
    C802E3E40() { *(void **)((u8 *)this + 0x7c) = lbl_802E3E40; }
};

struct C8011C518 : C802E3E40 {
    u32 f0;
    C800F9688 m4;
    C800F9688 m1C;
    C800F9B64 m34;
    C800F9B64 m58;
    void *vt;
    C8011C518();
};

C8011C518::C8011C518() {
    f0 = 0;
}
