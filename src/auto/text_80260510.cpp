// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8025F94C {
    C8025F94C();
    ~C8025F94C();
    u8 pad[160];
    virtual void v0();
    virtual void m1(void *);
};
struct V_80260510 { u8 pad[16]; virtual void v0(); virtual void m1(); };
extern "C" {
    extern void *lbl_8035B728;
    extern char lbl_80366A50[8];
    s32 fn_8025F9C8(void *, void *);
    void fn_800F8E38(void *, s32);
    void fn_800604C4(s32, s32, s32, s32);
    void fn_800F7EC0(void *);
    void fn_800F7E98(void);
    void fn_800F87F0(void *, char *, void *);
    void fn_8025FF94(void *, void *, void *);
}

s32 fn_80260510(u8 *p, u8 *b) {
    s32 one;
    if (*(s32 *)(p + 20) != 0) {
        ((V_80260510 *)p)->m1();
    }
    *(s32 *)(p + 24) = fn_8025F9C8(p, *(void **)(b + 16)) + 1;
    fn_800F8E38(p, *(s32 *)(p + 24));
    if (lbl_8035B728 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B728);
    *(C8025F94C **)(p + 28) = new C8025F94C[*(s32 *)(p + 24)];
    fn_800F7E98();
    if (*(C8025F94C **)(p + 28) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    one = 1;
    fn_800F87F0(p, lbl_80366A50, *(void **)(p + 28));
    (*(C8025F94C **)(p + 28))->m1(b);
    fn_8025FF94(p, *(void **)(b + 16), &one);
    return 0;
}

} /* extern "C" */
