// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802D1ED4[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8023C398(void *);
void fn_800A91A0(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

// vtable pointer (stored at +0x0 before the members are constructed)
struct V800A95E4 {
    u8 *vt;
    V800A95E4() { vt = lbl_802D1ED4; }
};

struct H8023C398 {
    u8 b[0x10];
    H8023C398() { fn_8023C398(this); }
};

struct C8023D65C {
    u8 b[0x2C];
    C8023D65C();
    ~C8023D65C();
};

struct C800A95E4 : C8024262C {
    V800A95E4 v;
    u8 pad4[0x164];
    H8023C398 m168;
    H8023C398 m178;
    C8023D65C m188;
    C8023D65C m1B4;
    u8 pad1E0[0x1C];
    C800A95E4() { fn_800A91A0(this); }
};

extern "C" void *fn_800A95E4(void) {
    C800A95E4 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800A95E4;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
