#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B4EC0[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80046AB0(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80046D68 : C8024262C {
    u8 pad[0x150];
    C80046D68() {
        *(void **)this = lbl_802B4EC0;
        fn_80046AB0(this);
    }
};

extern "C" void *fn_80046D68(void) {
    C80046D68 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80046D68;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
