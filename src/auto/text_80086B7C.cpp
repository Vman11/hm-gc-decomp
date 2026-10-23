// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 __vt__9C80086AF8[];
extern void *lbl_8035B320;
extern f32 lbl_8035FDF8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8005F59C(void *);
} /* extern "C" */

struct C8005F938 {
    C8005F938();
    ~C8005F938();
};

struct C80086AF8 {
    u8 pad[924];
    C80086AF8();
    ~C80086AF8();
};

struct C80086B7C : C8005F938 {
    u8 *vt;
    u8 pad[604];
    s32 f260;
    u8 pad2[276];
    u32 f378;
    u32 f37c;
    f32 f380[4];
    f32 f390;
    u8 pad3[4];
    u32 f398;
    C80086B7C() {
        vt = __vt__9C80086AF8;
        f37c = 0;
        for (int i = 0; i < 4; i++) f380[i] = lbl_8035FDF8;
        f378 = 0;
        f390 = lbl_8035FDF8;
        f398 = 0;
        f260 = 4;
        fn_8005F59C(this);
    }
};

extern "C" {

void *__ct__9C80086B7CFv(s32 n) {
    void *p;

    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C80086B7C;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return p;
    }
    if (lbl_8035B320 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B320);
    p = new C80086AF8[n];
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
