// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802CFAA4[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800A0920(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800A0B78 : C8024262C {
    u8 pad[404];
    C800A0B78() {
        *(void **)this = lbl_802CFAA4;
        *(s32 *)((u8 *)this + 388) = 0;
        *(s32 *)((u8 *)this + 392) = 0;
        fn_800A0920(this);
    }
};

extern "C" void *fn_800A0B78(void) {
    C800A0B78 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800A0B78;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
