// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80229B18 { u8 b[0x60]; C80229B18(); };
struct C80233F18 { u8 b[0x18]; C80233F18(); };
struct C8022F4E0 { u8 b[0x18]; C8022F4E0(); };
struct C80270840 { u8 b[0x10c]; C80270840(); };
struct C80236A0C { u8 b[0x90]; C80236A0C(); };
struct C802357C8 { u8 b[0x314]; C802357C8(); };
struct wA_A { u8 pad[0x10]; virtual ~wA_A(); virtual void shutdown(); };
struct wA_G { u8 pad[0x20]; u32 on; };
extern wA_G lbl_80357064;
extern wA_G lbl_80356E84;
extern wA_G lbl_80356EE4;
extern wA_G lbl_80357004;
extern wA_G lbl_80356FD4;
extern wA_G lbl_80356F74;
extern wA_G lbl_80356F44;
extern wA_G lbl_80357034;
extern wA_G lbl_80356EB4;
extern wA_G lbl_80356F14;
extern wA_G lbl_80356FA4;
extern wA_G lbl_80357094;
extern void *lbl_8035B330;
void fn_80233CE8(void *p);
void fn_8022F2A0(void *p);
void fn_80270320(void *p);
void fn_80236628(void *p);
void fn_802356C8(void *p);
void fn_80233DEC(void *p, s32 f);
void fn_8022F3B0(void *p, s32 f);
void fn_802707E8(void *p, s32 f);
void fn_80236808(void *p, s32 f);
void fn_80235728(void *p, s32 f);
void fn_80229B70(void *h);
void fn_8022E018(void *h);
void fn_80233F3C(void *h);
void fn_8022F504(void *h);
void fn_80270868(void *h);
void fn_80236A80(void *h);
void fn_80226BE0(void *h);
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);

void fn_8022E16C(void **m, u8 *arg) {
    if (lbl_8035B330 != 0) {
        if (m[0] != 0) {
            ((wA_A *)m[0])->shutdown();
            delete (wA_A *)m[0];
        }
        if (m[1] != 0) {
            fn_80233CE8(m[1]);
            fn_80233DEC(m[1], 1);
        }
        if (m[2] != 0) {
            fn_8022F2A0(m[2]);
            fn_8022F3B0(m[2], 1);
        }
        if (m[3] != 0) {
            fn_80270320(m[3]);
            fn_802707E8(m[3], 1);
        }
        if (m[5] != 0) {
            fn_80236628(m[5]);
            fn_80236808(m[5], 1);
        }
        if (m[6] != 0) {
            fn_802356C8(m[6]);
            fn_80235728(m[6], 1);
        }
        lbl_8035B330 = 0;
        m[0] = 0;
        m[1] = 0;
        m[2] = 0;
        m[4] = 0;
        m[3] = 0;
        m[5] = 0;
        m[6] = 0;
    }
    lbl_80357064.on = 1;
    lbl_80356E84.on = 1;
    lbl_80356EE4.on = 1;
    lbl_80357004.on = 1;
    lbl_80356FD4.on = 1;
    lbl_80356F74.on = 1;
    lbl_80356F44.on = 1;
    lbl_80357034.on = 1;
    lbl_80356EB4.on = 1;
    lbl_80356F14.on = 1;
    lbl_80356FA4.on = 1;
    lbl_80357094.on = 1;
    lbl_8035B330 = *(void **)(arg + 4);
    fn_80229B70(*(void *volatile *)&lbl_8035B330);
    fn_8022E018(lbl_8035B330);
    fn_80233F3C(lbl_8035B330);
    fn_8022F504(lbl_8035B330);
    fn_80270868(lbl_8035B330);
    fn_80236A80(lbl_8035B330);
    fn_80226BE0(lbl_8035B330);
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[0] = new C80229B18;
    fn_800F7E98();
    if (m[0] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[1] = new C80233F18;
    fn_800F7E98();
    if (m[1] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[2] = new C8022F4E0;
    fn_800F7E98();
    if (m[2] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[3] = new C80270840;
    fn_800F7E98();
    if (m[3] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[5] = new C80236A0C;
    fn_800F7E98();
    if (m[5] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B330 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B330);
    m[6] = new C802357C8;
    fn_800F7E98();
    if (m[6] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
}

} /* extern "C" */
