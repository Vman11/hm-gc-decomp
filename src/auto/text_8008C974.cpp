#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C7558[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8008C734(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8008C974 : C8024262C {
    u8 pad[0x13C];
    C8008C974() {
        *(void **)this = lbl_802C7558;
        fn_8008C734(this);
    }
};

extern "C" void *fn_8008C974(void) {
    C8008C974 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8008C974;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
