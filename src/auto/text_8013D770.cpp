// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

struct VB801F5AC4 {
    u8 b[0x14];
};

// has a virtual base: its ctor takes the hidden "most derived" flag (1 here)
struct C801F5AC4 : virtual VB801F5AC4 {
    u8 c[0x14];
    C801F5AC4();
    ~C801F5AC4();
};

struct C801F591C {
    u8 b[0x19C];
    C801F591C();
    ~C801F591C();
};

struct C801F5108 {
    u8 b[0x388];
    C801F5108();
    ~C801F5108();
};

struct C801F4708 {
    u8 b[0x44];
    C801F4708();
    ~C801F4708();
};

struct C8013D770 {
    C801F5AC4 m0;
    s32 f2C, f30, f34, f38;
    C801F591C a3C[4];
    C801F591C a6AC[4];
    u8 padD1C[4];
    C801F5108 aD20[4];
    u16 f1B40;
    u8 pad1B42[2];
    s32 f1B44, f1B48, f1B4C, f1B50;
    u8 pad1B54[0x3FC];
    C801F4708 a1F50[255];
    s32 f630C, f6310;
    u8 pad6314[0x3FC];
    s32 f6710, f6714, f6718, f671C, f6720, f6724, f6728;
    C8013D770();
};

C8013D770::C8013D770() {
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f630C = 0;
    f6710 = 0;
    f1B40 = 0;
    f1B44 = 0;
    f1B48 = 0xc0;
    f1B4C = 0;
    f1B50 = 0;
    f6310 = 0;
    f6710 = 0;
    f6714 = 0;
    f6718 = 0;
    f671C = 0;
    f6720 = 0;
    f6724 = 0;
    f6728 = 0;
}
