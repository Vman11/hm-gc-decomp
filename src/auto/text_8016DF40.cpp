#include "common.h"

extern "C" {
extern u8 lbl_802E6EB8[];
extern u8 lbl_802E7CC4[];
void fn_80131C34(void *);
void fn_80135CB0(void *);
void fn_8016E084(void *);
void fn_8016CC50(void *);
void __construct_array(void *, void *, void *, u32, u32);
}

struct C8013644C {
    u8 b[0x30];
    C8013644C();
    ~C8013644C();
};

// vtable pointer at +0x30 (stored after the base, before the members)
struct C802E7CC4 {
    void *vt;
    C802E7CC4() { vt = lbl_802E7CC4; }
};

struct C8015B350 {
    u8 b[0x70];
    C8015B350();
    ~C8015B350();
};

struct C80157658 {
    u8 b[0x58];
    C80157658();
    ~C80157658();
};

struct C80165F70 {
    u8 b[0x1b34];
    C80165F70();
    ~C80165F70();
};

struct C80158A08 {
    u8 b[0x874];
    C80158A08();
    ~C80158A08();
};

struct C80171288 {
    u8 b[0x1e0];
    C80171288();
    ~C80171288();
};

// base constructor fn_80131C34, then vtable lbl_802E6EB8
struct C802E6EB8 {
    void *vt;
    u8 b4[4];
    C802E6EB8() {
        fn_80131C34(this);
        vt = lbl_802E6EB8;
    }
};

struct C801599F4 {
    u8 b[0x7c];
    C801599F4();
    ~C801599F4();
};

struct C8016096C {
    u8 b[0x48];
    C8016096C();
    ~C8016096C();
};

struct C800F92E8 {
    u8 b[0x14];
    C800F92E8();
    ~C800F92E8();
};

struct C8015E11C {
    u8 b[0x40c];
    C8015E11C();
    ~C8015E11C();
};

struct C80179B00 {
    u8 b[0x10];
    C80179B00();
    ~C80179B00();
};

// 2000 elements of 0x28 bytes whose constructor is fn_8016E084
struct C8016E084 {
    u8 b[2000][0x28];
    C8016E084() { __construct_array(this, (void *)fn_8016E084, 0, 0x28, 2000); }
};

struct C8015FE00 {
    u8 b[100];
    C8015FE00();
    ~C8015FE00();
};

// 0x80 elements of 0x10 bytes whose constructor is fn_80135CB0
struct C80135CB0 {
    u8 b[0x80][0x10];
    C80135CB0() { __construct_array(this, (void *)fn_80135CB0, 0, 0x10, 0x80); }
};

struct C80218720 {
    u8 b[0x4];
    C80218720();
    ~C80218720();
};

struct C8016DF40 : C8013644C, C802E7CC4 {
    u8 b34[0x314];
    C8015B350 m348;
    C80157658 m3B8;
    C80165F70 m410;
    C80158A08 m1F44;
    C80171288 m27B8;
    C802E6EB8 m2998;
    C801599F4 m29A0;
    C8016096C m2A1C;
    C800F92E8 m2A64;
    u8 b2A78[0x82c];
    C8015E11C m32A4;
    C8015E11C m36B0;
    u8 b3ABC[0x8454];
    C80179B00 mBF10;
    C80179B00 mBF20;
    C8016E084 mBF30;
    C8015E11C m1F7B0;
    u8 b1FBBC[0x440c];
    C8015FE00 m23FC8[0x80];
    C80135CB0 m271C8;
    u8 b279C8[0x44];
    C80218720 m27A0C;
    C8016DF40();
};

C8016DF40::C8016DF40() {
    *(u32 *)((u8 *)this + 0x33c) = 0;
    fn_8016CC50(this);
}
