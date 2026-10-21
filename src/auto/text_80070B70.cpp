// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#pragma optEH2 on

extern "C" {
extern void *lbl_8035B530;
extern u8 lbl_802C2418[];
extern u8 lbl_802C1E1C[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80070490(void *);
}

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80070B70 : C8024262C {
    u8 pad[668];
    C80070B70() {
        *(void **)this = lbl_802C2418;
        *(s32 *)((u8 *)this + 316) = 0;
    }
    ~C80070B70();
};

struct D80070B70 : C80070B70 {
    D80070B70() {
        *(void **)this = lbl_802C1E1C;
        fn_80070490(this);
    }
};

extern "C" void *fn_80070B70(void) {
    D80070B70 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new D80070B70;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
