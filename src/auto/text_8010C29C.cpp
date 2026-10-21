// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 __vt__9C8010C29C[];
extern u8 *lbl_8035AAB4;
}

struct C800F92E8 { u8 pad[0x10]; C800F92E8(); ~C800F92E8(); };

// vtable pointer (stored at +0x10 between the base and the member constructors)
struct V8010C29C { u8 *vt; V8010C29C() { vt = __vt__9C8010C29C; } };

struct C8010C29C : C800F92E8 {
    V8010C29C v;
    s32 f14, f18, f1C;
    C800F92E8 m20;
    u8 pad30[0x10];
    s32 f40;
    u8 *next;
    s32 f48, f4C;
    C8010C29C();
};

C8010C29C::C8010C29C() {
    u8 *p, *q;
    f14 = 0;
    f18 = 0;
    f1C = 0;
    f48 = 0;
    lbl_8035AAB4 = 0;
    next = 0;
    f4C = 0;
    f40 = 1;
    if (lbl_8035AAB4 != 0) {
        p = lbl_8035AAB4;
        q = p;
        while (p != 0) {
            q = p;
            p = *(u8 **)(p + 68);
        }
        *(u8 **)(q + 68) = (u8 *)this;
    } else {
        lbl_8035AAB4 = (u8 *)this;
    }
}
