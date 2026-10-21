// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CF058[];
extern u32 lbl_8035AFCC;
void fn_800F7E98(void);
void fn_801BBC04(void *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(u32);

struct C8009F350 {
    u8 b[0x18c];
    C8009F350() {
        fn_801BBC04(this);
        *(u8 **)(b + 0x80) = lbl_802CF058;
        b[0x174] = 0;
        b[0x17c] = 0;
    }
};

u32 fn_8009F350(void) {
    C8009F350 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C8009F350;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return (u32)p;
}

} /* extern "C" */
