#include "common.h"

// Uses the renamed symbol dtor_801379E8 -> __dt__9C801379E8Fv (base, whose ctor is inline: vtable lbl_802E5568).

extern "C" {
extern u8 lbl_802E5568[];
extern u8 lbl_802E82C0[];
void fn_80148310(void *);
void __construct_array(void *, void *, void *, u32, u32);
}

struct C801379E8 {
    C801379E8() { *(void **)this = lbl_802E5568; }
    ~C801379E8();
};

// vtable pointer at +0x0 (stored after the base, before the members)
struct C802E82C0 {
    void *vt;
    C802E82C0() { vt = lbl_802E82C0; }
};

// arrays of 0x14-byte elements whose constructor is fn_80148310
struct C80148310_3 {
    u8 b[3][0x14];
    C80148310_3() { __construct_array(this, (void *)fn_80148310, 0, 0x14, 3); }
};

struct C80148310_8 {
    u8 b[8][0x14];
    C80148310_8() { __construct_array(this, (void *)fn_80148310, 0, 0x14, 8); }
};

struct C80148310_12 {
    u8 b[12][0x14];
    C80148310_12() { __construct_array(this, (void *)fn_80148310, 0, 0x14, 12); }
};

struct C80171288 : C801379E8 {
    C802E82C0 vt;
    u32 f4;
    C80148310_3 m8;
    u32 f44;
    C80148310_8 m48;
    u32 fE8;
    C80148310_12 mEC;
    u32 f1DC;
    C80171288();
};

C80171288::C80171288() {
    f4 = 0;
    f44 = 0;
    fE8 = 0;
    f1DC = 0;
}
