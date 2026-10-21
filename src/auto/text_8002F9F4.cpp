#include "common.h"

// Uses the renamed symbols dtor_8010946C -> __dt__9C8010946CFv (base) and dtor_8003C59C -> __dt__9C8003C604Fv (member;
// its ctor is fn_8003C604).

extern "C" {
extern u8 lbl_802E2558[];
extern u8 lbl_802AF7D0[];
extern u8 lbl_802AF7E0[];
extern u8 lbl_802EB7B0[];
extern u8 lbl_802B01C4[];
extern u8 lbl_802B00F0[];
extern void *lbl_80359F2C;
void fn_8002FAE4(void *);
void fn_8002FADC(void *);
void fn_8003C604(void *);
void fn_8002F120(void *);
void __construct_array(void *, void *, void *, u32, u32);
}

struct C8010946C {
    C8010946C() { *(void **)this = lbl_802E2558; }
    ~C8010946C();
};

// vtable pointer at +0x0 (stored after the base, before the members)
struct C802AF7D0 {
    void *vt;
    C802AF7D0() { vt = lbl_802AF7D0; }
};

// 6 elements of 0x18 bytes whose constructor is fn_8002FAE4
struct C8002FAE4 {
    u8 b[6][0x18];
    C8002FAE4() { __construct_array(this, (void *)fn_8002FAE4, 0, 0x18, 6); }
};

struct C8003C604 {
    u8 b[8];
    C8003C604() { fn_8003C604(this); }
    ~C8003C604();
};

struct C802AF7E0 {
    void *vt;
    C802AF7E0() { vt = lbl_802AF7E0; }
};

struct C802EB7B0 : C802AF7E0 {
    C802EB7B0() { vt = lbl_802EB7B0; }
};

struct C802B01C4 : C802EB7B0 {
    C802B01C4() { vt = lbl_802B01C4; }
};

struct C802B00F0 : C802AF7E0 {
    C802B00F0() { vt = lbl_802B00F0; }
};

struct C8023D65C {
    u8 b[0x4c];
    C8023D65C();
    ~C8023D65C();
};

struct C8002FAE0 {
    u8 b[0xc];
    C8002FAE0();
};

// 3 elements of 0x10 bytes whose constructor is fn_8002FADC
struct C8002FADC {
    u8 b[3][0x10];
    C8002FADC() { __construct_array(this, (void *)fn_8002FADC, 0, 0x10, 3); }
};

struct C8002F9F4 : C8010946C {
    C802AF7D0 vt;
    u8 b4[8];
    C8002FAE4 mC;
    C8003C604 m9C;
    C802B01C4 mA4;
    C802B00F0 mA8;
    u8 bAC[0x20c];
    C8023D65C m2B8;
    C8002FAE0 m304[3];
    C8002FADC m328;
    C8002F9F4();
};

C8002F9F4::C8002F9F4() {
    lbl_80359F2C = this;
    fn_8002F120(this);
}
