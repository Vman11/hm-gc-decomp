#include "common.h"

// Uses the renamed symbols dtor_8011FB60 -> __dt__9C8011FBC8Fv (base) and dtor_8014E124 -> __dt__9C8014E1E0Fv
// (element of the member array) and __ct__9C8014E1E0Fs -> __ct__9C8014E1E0Fv: that class has a virtual base
// (C8011F770), and MWCC mangles its ctor (hidden short flag in r4) as Fv; an explicit (s16 = 1) ctor gives __defctor__.

extern "C" {
extern u8 lbl_802E6758[];
void fn_8011FBC8(void *);
void *memset(void *, s32, u32);
}

struct C8011FBC8 {
    C8011FBC8() { fn_8011FBC8(this); }
    ~C8011FBC8();
};

struct C8011F770 {
    u8 b[0xd8];
    C8011F770();
    ~C8011F770();
};

struct C8014E1E0 : virtual C8011F770 {
    u8 b[0x220];
    C8014E1E0();
    ~C8014E1E0();
};

// vtable pointer at +0x0 (stored after the base, before the members)
struct C802E6758 {
    void *vt;
    C802E6758() { vt = lbl_802E6758; }
};

struct C8014E960 : C8011FBC8 {
    C802E6758 vt;
    u8 b4[0x5c];
    C8014E1E0 m60[4];
    u8 bC50[4];
    C8014E960();
};

C8014E960::C8014E960() {
    u8 *p = (u8 *)this;
    memset(p + 48, 0, 48);
    *(s32 *)(p + 3152) = 0;
}
