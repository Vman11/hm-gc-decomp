// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802120C0 { C802120C0(); u8 pad[1772]; };
extern "C" { extern void *lbl_8035B1C8; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_80211BB4(void *, void *, void *); }

void *fn_80211298(void *x, void *a, void *b) {
    C802120C0 *o;
    if (lbl_8035B1C8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B1C8);
    o = new C802120C0;
    fn_800F7E98();
    if (o == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_80211BB4(o, b, a);
    return o;
}

} /* extern "C" */
