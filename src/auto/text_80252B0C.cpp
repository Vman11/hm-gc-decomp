// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80252244 { C80252244(); u8 pad[144]; };
struct V_80252B0C { u8 pad[16]; virtual void d(s32); virtual void m1(); };
extern "C" {
    extern void *volatile lbl_8035B620;
    void fn_802522D4(void *); void fn_80252ACC(void *); void fn_802538F8(void *);
    void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void);
    void fn_80251C08(void *, s32, s32, s32, s32);
}

void fn_80252B0C(s32 *p, u8 *b) {
    if (p[2] != 0) {
        if ((V_80252B0C *)p[0] != 0) {
            ((V_80252B0C *)p[0])->m1();
            if ((V_80252B0C *)p[0] != 0) {
                ((V_80252B0C *)p[0])->d(1);
            }
        }
        p[2] = 0;
        p[0] = 0;
        p[1] = 0;
    }
    p[2] = 1;
    p[1] = *(s32 *)(b + 4);
    lbl_8035B620 = *(void **)(b + 8);
    fn_802522D4(lbl_8035B620);
    fn_80252ACC(lbl_8035B620);
    fn_802538F8(lbl_8035B620);
    if (lbl_8035B620 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B620);
    p[0] = (s32)new C80252244;
    fn_800F7E98();
    if ((void *)p[0] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_80251C08((void *)p[0], p[1], *(s32 *)(b + 16), *(s32 *)(b + 20), *(s32 *)(b + 12));
}

} /* extern "C" */
