// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern void *lbl_8035B530;
extern u8 lbl_802CDD64[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8009C2B0(void *);
}

struct C80273018 {
    C80273018();
    ~C80273018();
};

// vtable pointer (stored at +0x0 after the base, before the members)
struct V8009C44C {
    u8 *vt;
    V8009C44C() { vt = lbl_802CDD64; }
};

struct C80214C34 {
    u8 b[0x4];
    C80214C34();
    ~C80214C34();
};

struct C8009C44C : C80273018 {
    V8009C44C v;
    u8 pad4[0xF4];
    C80214C34 mF8;
    u8 padFC[0x214];
    C8009C44C() { fn_8009C2B0(this); }
};

extern "C" void *fn_8009C44C(void) {
    C8009C44C *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8009C44C;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
