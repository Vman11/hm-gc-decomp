#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802EB0E8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801B31A4(void *);
void fn_801B89B4(void *);

} /* extern "C" */

struct C801B31A4 {
    C801B31A4() { fn_801B31A4(this); }
    ~C801B31A4();
};

struct C801B8C00 : C801B31A4 {
    u8 pad[0x1D8];
    C801B8C00() {
        *(void **)(pad + 0x80) = lbl_802EB0E8;
        fn_801B89B4(this);
    }
};

extern "C" void *fn_801B8C00(void) {
    C801B8C00 *r;
    if (lbl_8035AFCC == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801B8C00;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
