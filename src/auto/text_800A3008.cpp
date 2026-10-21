#include "common.h"

extern "C" {
extern u8 __vt__9C800A3008[];
extern f32 lbl_80361C38;
extern volatile f32 lbl_80361BD0;
void fn_800A29A4(void *);
}

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800A3008 : C8024262C {
    u8 b[0x204];
    C800A3008();
};

C800A3008::C800A3008() {
    u8 *p = (u8 *)this;
    *(void * *)(p + 0) = __vt__9C800A3008;
    *(f32 *)(p + 432) = lbl_80361C38;
    *(f32 *)(p + 472) = lbl_80361BD0;
    *(f32 *)(p + 476) = lbl_80361BD0;
    *(f32 *)(p + 480) = lbl_80361BD0;
    *(s32 *)(p + 508) = 0;
    *(s32 *)(p + 512) = 0;
    fn_800A29A4(p);
}
