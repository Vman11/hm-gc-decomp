// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6EB8[];
void fn_80131C34(void *);
extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C8015A820 {
    u8 b[8];
    C8015A820() {
        fn_80131C34(this);
        *(u8 **)(b + 0x0) = lbl_802E6EB8;
    }
};

C8015A820 *fn_8015A820(void) {
    C8015A820 *p;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACD8);
    p = new C8015A820;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
