// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80159C0C[];
extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C8013919C {
    C8013919C();
};

struct C80159C6C : C8013919C {
    u8 b[0xf8];
    C80159C6C() {
        *(u8 **)(b + 0xf4) = __vt__9C80159C0C;
    }
};

C80159C6C *fn_80159C6C(void) {
    C80159C6C *p;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACD8);
    p = new C80159C6C;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
