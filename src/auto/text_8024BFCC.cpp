// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B570;
extern u8 lbl_802F1E68[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
class C8023D2AC { public: u8 d[20]; C8023D2AC(); ~C8023D2AC(); };
class C8024BF7C : public C8023D2AC { public: u8 e[92]; C8024BF7C(); ~C8024BF7C(); };
struct V_8024BFCC {
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
struct N_8024BFCC : C8023D2AC {
    u8 e[92];
    N_8024BFCC() { *(u8 **)this = lbl_802F1E68; ((V_8024BFCC *)this)->init(); }
};

void *fn_8024BFCC(s32 n) {
    if (n <= 1) {
        N_8024BFCC *p;
        if (!lbl_8035B570) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        p = new N_8024BFCC;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8024BF7C *p;
        if (!lbl_8035B570) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        p = new C8024BF7C[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
