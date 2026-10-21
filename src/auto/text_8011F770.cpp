#include "common.h"

extern "C" {
extern u8 lbl_802E3E88[];
void fn_8011F634(void *);
}

struct C800FB754 {
    u8 b[0x14];
    C800FB754();
};

struct C80119180 {
    u8 b[0x98];
    C80119180();
    ~C80119180();
};

// vtable pointer (stored at +0xD0 before the members are constructed)
struct C802E3E88 {
    C802E3E88() { *(void **)((u8 *)this + 0xd0) = lbl_802E3E88; }
};

struct C8011F770 : C802E3E88 {
    u8 b0[0x24];
    C800FB754 m24;
    C80119180 m38;
    void *vt;
    C8011F770();
};

C8011F770::C8011F770() {
    fn_8011F634(this);
}
