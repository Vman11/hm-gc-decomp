// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EB528[];
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C801DDC8C {
    C801DDC8C();
};

struct C801BB148 : C801DDC8C {
    u8 b[0x168];
    C801BB148() {
        *(u8 **)(b + 0x80) = lbl_802EB528;
        *(u32 *)(b + 0x144) = 1;
    }
};

C801BB148 *fn_801BB148(void) {
    C801BB148 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801BB148;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
