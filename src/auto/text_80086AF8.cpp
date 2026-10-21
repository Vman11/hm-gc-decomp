#include "common.h"

extern "C" {
extern u8 __vt__9C80086AF8[];
extern volatile f32 lbl_8035FDF8;
void fn_8005F59C(void *);
}

struct C8005F938 {
    C8005F938();
    ~C8005F938();
};

struct C80086AF8 : C8005F938 {
    u8 b[0x39c];
    C80086AF8();
};

C80086AF8::C80086AF8() {
    u8 *p = (u8 *)this;
    *(void * *)(p + 0) = __vt__9C80086AF8;
    *(s32 *)(p + 892) = 0;
    *(f32 *)(p + 896) = lbl_8035FDF8;
    *(f32 *)(p + 900) = lbl_8035FDF8;
    *(f32 *)(p + 904) = lbl_8035FDF8;
    *(f32 *)(p + 908) = lbl_8035FDF8;
    *(s32 *)(p + 888) = 0;
    *(f32 *)(p + 912) = lbl_8035FDF8;
    *(s32 *)(p + 920) = 0;
    *(s32 *)(p + 608) = 4;
    fn_8005F59C(p);
}
