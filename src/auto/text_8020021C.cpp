// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802030D8 { C802030D8(); u8 pad[476]; };
extern "C" { extern void *lbl_8035B168; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_80202C08(void *); }

void *fn_8020021C(u8 *p) {
    C802030D8 *o;
    if (lbl_8035B168 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B168);
    o = new C802030D8;
    fn_800F7E98();
    if (o == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (o != NULL && *(void **)(p + 200) != NULL) {
        fn_80202C08(o);
    }
    return o;
}

} /* extern "C" */
