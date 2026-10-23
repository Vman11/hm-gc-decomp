// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct B8024C768 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
struct P8024C768 : B8024C768 {
    u8 pad4[24];
    u32 f28;
    s32 fl32;
    s32 f36;
    u8 pad40[8];
    s32 f48;
    s32 f52;
    s32 f56;
    u8 f60[8];
    u8 f68[8];
    f32 f76;
    f32 f80;
};
struct G8024C768 {
    u8 pad[844];
    s32 *f844;
};
extern "C" {
extern G8024C768 *lbl_8035B594;
extern f32 lbl_803663B8;
s32 fn_800F6CD0(void *a, void *b);
void fn_8024C768(P8024C768 *p, void *a, void *b) {
    if (p->f36 != 0 && (p->fl32 != 0 || lbl_8035B594->f844[p->f48] != 0)) {
        return;
    }
    if (p->f28 == 1 && p->f56 != 0 && fn_800F6CD0(a, p->f60) && fn_800F6CD0(b, p->f68)) {
        p->fl32 = 1;
        lbl_8035B594->f844[p->f48] = 1;
        p->f56 = 0;
        p->v6();
    }
    if (p->f28 == 0) {
        if (p->f76 > lbl_803663B8) {
            p->fl32 = 1;
            lbl_8035B594->f844[p->f48] = 1;
            p->f80 = p->f76;
            p->f28 = 1;
        } else if (p->f52 != 0) {
            p->f56 = 1;
            p->f28 = 1;
        } else {
            p->fl32 = 1;
            lbl_8035B594->f844[p->f48] = 1;
            p->v6();
        }
    }
}

} /* extern "C" */
