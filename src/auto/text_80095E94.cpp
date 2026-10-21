#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802CBDF8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80095D20(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80095E94 : C8024262C {
    u8 pad[0x13C];
    C80095E94() {
        *(void **)this = lbl_802CBDF8;
        fn_80095D20(this);
    }
};

extern "C" void *fn_80095E94(void) {
    C80095E94 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80095E94;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
