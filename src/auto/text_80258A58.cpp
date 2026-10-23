// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B738;
extern u8 __vt__9C80258E38[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80261AAC(void *);

struct C80261CB0 {
    C80261CB0();
    ~C80261CB0();
};
struct N_80258A58 : C80261CB0 {
    u8 *vt;
    u8 pad[172];
    N_80258A58() {
        vt = __vt__9C80258E38;
        fn_80261AAC(this);
    }
};
struct C80258E38 {
    u8 d[176];
    C80258E38();
    ~C80258E38();
};

void *__ct__9C80258A58Fv(s32 n) {
    if (n <= 1) {
        N_80258A58 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_80258A58;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80258E38 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C80258E38[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
