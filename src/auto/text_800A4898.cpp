#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802D0398[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800A46B8(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800A4898 : C8024262C {
    u8 pad[0x184];
    C800A4898() {
        *(void **)this = lbl_802D0398;
        fn_800A46B8(this);
    }
};

extern "C" void *fn_800A4898(void) {
    C800A4898 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800A4898;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
