#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802BC5E0[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8005B094(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8005B280 : C8024262C {
    u8 pad[0x154];
    C8005B280() {
        *(void **)this = lbl_802BC5E0;
        fn_8005B094(this);
    }
};

extern "C" void *fn_8005B280(void) {
    C8005B280 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8005B280;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
