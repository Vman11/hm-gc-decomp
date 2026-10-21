#include "common.h"

#pragma optEH2 on

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802ED228[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801DD938(void *);

} /* extern "C" */

struct C801C0BB4 {
    C801C0BB4();
    ~C801C0BB4();
};

struct C801DDCF4 : C801C0BB4 {
    u8 pad[0x164];
    C801DDCF4() {
        *(void **)(pad + 0x80) = lbl_802ED228;
        fn_801DD938(this);
    }
};

extern "C" void *fn_801DDCF4(void) {
    C801DDCF4 *r;
    if (lbl_8035AFCC == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801DDCF4;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
