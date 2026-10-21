// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802ED9A8[];
}

struct C800F9688 {
    u8 b[0x18];
    C800F9688() throw();
};

struct C800F9B64 {
    u8 b[0x24];
    C800F9B64();
    ~C800F9B64();
};

// vtable pointer (stored at +0xEC before the members are constructed)
struct VB801E44C8 {
    VB801E44C8() { *(u8 **)((u8 *)this + 0xEC) = lbl_802ED9A8; }
};

struct C801E44C8 : VB801E44C8 {
    C800F9688 m0;
    C800F9B64 m18;
    C800F9688 m3C;
    C800F9B64 m54;
    C800F9688 m78;
    C800F9B64 m90;
    s32 fB4, fB8, fBC, fC0, fC4, fC8, fCC, fD0, fD4, fD8, fDC, fE0, fE4, fE8;
    u8 *vt;
    C801E44C8();
};

C801E44C8::C801E44C8() {
    fC0 = 0;
    fC8 = 0;
    fCC = 0;
    fB8 = 0;
    fD4 = 0;
    fE0 = 0;
    fE4 = 0;
    fD0 = 0;
    fD8 = 0;
    fDC = 0;
    fC4 = 0;
    fB4 = 0;
    fBC = 0;
}
