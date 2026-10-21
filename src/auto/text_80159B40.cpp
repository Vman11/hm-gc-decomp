// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8015C808[];
void fn_8012F9AC(void *);
extern u32 lbl_8035ACD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C80159B40 {
    u8 b[0x50];
    C80159B40() {
        fn_8012F9AC(this);
        *(u8 **)(b + 0x4c) = __vt__9C8015C808;
    }
};

C80159B40 *fn_80159B40(void) {
    C80159B40 *p;

    if (lbl_8035ACD8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACD8);
    p = new C80159B40;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
