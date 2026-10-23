// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_8035FCF4[7];
extern char lbl_8035FCFC[8];
extern char lbl_8035FD14[6];
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, const char *, s32, s32, s32, s32);
void fn_8023FE08(void *, f32);

struct S800841F0 {
    u8 pad[284];
    s32 f284;
    s32 f288;
    s32 f292;
    s32 f296;
};

void fn_800841F0(S800841F0 *p, f32 f) {
    s32 i;
    s32 j;
    if (p->f296 != 0) {
        for (i = 0; i < p->f284 + p->f288; i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        p->f296 = 0;
    }
    if (p->f292 != 0) {
        for (i = 0; i < (j = p->f284); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCF4, 0, 0, 0, 0);
            fn_80242BC0(fn_80242144(p, i), lbl_8035FD14, 0, 0, 0, 0);
        }
        for (; j < p->f284 + p->f288; j++) {
            fn_80242BC0(fn_80242144(p, j), lbl_8035FCFC, 0, 0, 0, 0);
        }
        p->f292 = 0;
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
