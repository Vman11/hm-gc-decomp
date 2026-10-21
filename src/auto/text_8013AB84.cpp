#include "common.h"

extern "C" {
extern u8 __vt__9C8013AB84[];
extern volatile f32 lbl_803641D0;
void fn_8014CA08(void *);
}

struct C800FC3E8 {
    C800FC3E8();
    ~C800FC3E8();
};

struct C8013AB84 : C800FC3E8 {
    u8 b[0x44];
    C8013AB84();
};

C8013AB84::C8013AB84() {
    u8 *p = (u8 *)this;
    *(void * *)(p + 12) = __vt__9C8013AB84;
    fn_8014CA08(p + 16);
    *(u16 *)(p + 64) = 0;
    *(f32 *)(p + 44) = lbl_803641D0;
    *(f32 *)(p + 48) = lbl_803641D0;
    *(f32 *)(p + 52) = lbl_803641D0;
    *(u8 *)(p + 56) = 0;
}
