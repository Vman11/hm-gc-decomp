#include "common.h"

extern "C" {
void fn_800F9638(void *);
void fn_8018EF7C(void *);
void fn_8018F3D4(void *);
}
struct C800F9688 {
    u8 b[0x18];
    void Clear() { fn_800F9638(this); }
};
struct B16 { u8 a[0x10]; };
struct C800F9B64 : B16 {
    virtual void v0();
    virtual void Clear();
    u8 r[0x10];
    ~C800F9B64();
};
struct C8018F670 {
    u8 b[0xc];
    void Clear() { fn_8018F3D4(this); }
    ~C8018F670();
};
struct C8018F358 {
    u8 b[0x8];
    void Clear() { fn_8018EF7C(this); }
    ~C8018F358();
};
struct C80199A84 { u8 b[0xc]; };
struct E { u8 b[4]; E(); };
struct C8017FFAC {
    u32 f0, f4, f8, fC, f10, f14;
    C800F9688 m18;
    C800F9B64 m30;
    C800F9688 m54;
    C800F9B64 m6C;
    C800F9688 m90;
    C800F9B64 mA8;
    C800F9688 mCC;
    C800F9B64 mE4;
    C800F9688 m108;
    C800F9B64 m120;
    C800F9688 m144;
    C800F9B64 m15C;
    C800F9688 m180;
    C800F9B64 m198;
    C800F9688 m1BC;
    C800F9B64 m1D4;
    C800F9688 m1F8;
    C8018F670 m210;
    C8018F358 m21C;
    C8018F358 m224;
    u32 f22C;
    u32 f230;
    C80199A84 m234;
    u32 f240, f244, f248, f24C;
    E *f250;
    u8 *f254;
    u32 f258, f25C, f260, f264, f268;
    ~C8017FFAC();
};

C8017FFAC::~C8017FFAC() {
    if (f254) delete[] f254;
    if (f250) delete[] f250;
    m224.Clear();
    m21C.Clear();
    m210.Clear();
    m1F8.Clear();
    m1D4.Clear();
    m198.Clear();
    mE4.Clear();
    m15C.Clear();
    m120.Clear();
    mCC.Clear();
    mA8.Clear();
    m90.Clear();
    m30.Clear();
    m6C.Clear();
    m54.Clear();
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f14 = 0;
    f22C = 1;
    f248 = 0;
    f24C = 0;
    f230 = 0;
    f240 = 0;
    f244 = 0;
    f250 = 0;
    f254 = 0;
    f258 = 0;
    f260 = 0;
    f25C = 0;
    f264 = 0;
    f268 = 0;
}
