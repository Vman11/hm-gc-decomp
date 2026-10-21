#include "common.h"

extern "C" {
extern u8 lbl_802E4D88[];
extern void *memset(void *, int, unsigned long);
}

struct C800FC2E0 {
    C800FC2E0();
    ~C800FC2E0();
};

struct C8013352C : C800FC2E0 {
    u8 b[0x3c];
    C8013352C();
};

C8013352C::C8013352C() {
    u8 *p = (u8 *)this;
    *(u8 **)(p + 0x30) = lbl_802E4D88;
    *(u32 *)(p + 0x34) = 0;
    memset(p + 0x38, 0, 4);
}
