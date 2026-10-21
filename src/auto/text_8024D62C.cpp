// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B570;
extern u8 lbl_802F1EDC[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
class C8023D2AC { public: u8 d[20]; C8023D2AC(); ~C8023D2AC(); };
class C8024BF7C : public C8023D2AC { public: u8 e[92]; C8024BF7C(); ~C8024BF7C(); };
struct V_8024D62C {
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void init();
};
class C8024D5DC { public: u8 d[168]; C8024D5DC(); ~C8024D5DC(); };
struct N_8024D62C : C8024BF7C {
    u8 f[56];
    N_8024D62C() { *(u8 **)this = lbl_802F1EDC; ((V_8024D62C *)this)->init(); }
};

void *fn_8024D62C(s32 n) {
    if (n <= 1) {
        N_8024D62C *p;
        if (!lbl_8035B570) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        p = new N_8024D62C;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8024D5DC *p;
        if (!lbl_8035B570) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        p = new C8024D5DC[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
