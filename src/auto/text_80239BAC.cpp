// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B320;
extern u8 lbl_802F189C[];
extern u8 lbl_802F069C[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8010344C(void *);
void fn_80222BE8(void *);
void fn_8023994C(void *);
}

struct C8022DFC8 {
    C8022DFC8();
    ~C8022DFC8();
};

struct C80031B94 {
    u32 x0;
    C80031B94() { fn_8010344C(this); }
    ~C80031B94();
};

struct M80239B40 : C80031B94 {
    void *vt;
    u8 pad8[212];
    M80239B40() {
        vt = lbl_802F069C;
        fn_80222BE8(this);
    }
    ~M80239B40();
};

struct V80239B40 {
    void *vt;
    V80239B40() { vt = lbl_802F189C; }
};

struct C80239B40 : C8022DFC8 {
    V80239B40 v;
    u8 pad4[372];
    M80239B40 m;
    C80239B40();
    ~C80239B40();
};

C80239B40::C80239B40() { fn_8023994C(this); }

extern "C" {
void *fn_80239BAC(s32 n) {
    if (n <= 1) {
        C80239B40 *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new C80239B40;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80239B40 *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new C80239B40[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
