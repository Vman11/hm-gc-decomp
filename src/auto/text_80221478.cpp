// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80220C38[];
void fn_80220A20(void *);
extern u32 lbl_8035B290;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C80221478 {
    u8 b[0xc];
    C80221478() {
        fn_80220A20(this);
        *(u8 **)(b + 8) = __vt__9C80220C38;
    }
};

C80221478 *fn_80221478(void) {
    C80221478 *p;

    if (lbl_8035B290 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B290);
    p = new C80221478;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
