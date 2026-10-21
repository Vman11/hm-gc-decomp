// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035ACD8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8016DF40 {
    C8016DF40();
    u8 data[0x27BC0];
};

void *fn_8015A764(void *a) {
    C8016DF40 *p;
    if (lbl_8035ACD8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACD8);
    p = new C8016DF40;
    fn_800F7E98();
    if (p == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(void **)((u8 *)p + 828) = a;
    return p;
}

} /* extern "C" */
