#include "common.h"

extern "C" {
void fn_8014CA08(void *);
void fn_801586F0(void *);
void __construct_array(void *, void *, void *, u32, u32);
}

// two 0x1C-byte elements whose constructor is fn_8014CA08
struct C8014CA08 {
    u8 b[2][0x1c];
    C8014CA08() { __construct_array(this, (void *)fn_8014CA08, 0, 0x1c, 2); }
};

struct C80175748 {
    u8 b[0x30];
    C80175748();
    ~C80175748();
};

struct C80158A08 {
    C8014CA08 m0;
    u8 b38[0x4a0];
    C80175748 m4D8[16];
    C80158A08();
};

C80158A08::C80158A08() {
    fn_801586F0(this);
}
