// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B320;
extern u8 __vt__9C80225CBC[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80239B40 {
    C80239B40();
    ~C80239B40();
};
struct C8023D65C {
    u8 d[816 - 0x2A8];
    C8023D65C();
    ~C8023D65C();
};
struct V_80225D08 {
    u8 *vt;
    V_80225D08() { vt = __vt__9C80225CBC; }
};
struct N_80225D08;
void fn_80225264(N_80225D08 *);
struct N_80225D08 : C80239B40 {
    V_80225D08 v;
    u8 pad[0x2A8 - 4];
    C8023D65C m;
    N_80225D08() { fn_80225264(this); }
};
struct C80225CBC {
    u8 d[816];
    C80225CBC();
    ~C80225CBC();
};

void *fn_80225D08(s32 n) {
    if (n <= 1) {
        N_80225D08 *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new N_80225D08;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80225CBC *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new C80225CBC[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
