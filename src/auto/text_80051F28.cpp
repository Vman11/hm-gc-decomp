#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802BA100[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80051B50(void *);

} /* extern "C" */

struct C800A3008 {
    C800A3008();
    ~C800A3008();
};

struct C80051F28 : C800A3008 {
    u8 pad[0x27C];
    C80051F28() {
        *(void **)this = lbl_802BA100;
        fn_80051B50(this);
    }
};

extern "C" void *fn_80051F28(void) {
    C80051F28 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80051F28;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
