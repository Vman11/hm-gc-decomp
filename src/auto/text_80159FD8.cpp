// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80159F78[];
extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C80129A9C {
    C80129A9C();
};

struct C80159FD8 : C80129A9C {
    u8 b[0x6c];
    C80159FD8() {
        *(u8 **)(b + 0x24) = __vt__9C80159F78;
    }
};

C80159FD8 *fn_80159FD8(void) {
    C80159FD8 *p;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACD8);
    p = new C80159FD8;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
