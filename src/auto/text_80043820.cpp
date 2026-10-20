// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern "C" void fn_800604C4(s32, s32, s32, s32);
extern "C" void fn_800F7EC0(void *);
extern "C" void fn_800F7E98(void);
extern "C" void fn_800435EC(void *);
class C80040F68 {
public:
    C80040F68();
    ~C80040F68();
    virtual void b0();
    u8 pad[432];
};
class CV802B2C18 : public C80040F68 {
public:
    CV802B2C18() { fn_800435EC(this); }
    virtual void v0();
};
extern "C" void *fn_80043820(void) {
    CV802B2C18 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new CV802B2C18;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
