// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct E11E { u32 f0; u32 f4; };
class C8011F35C { public: u8 d[8]; C8011F35C(); };
struct P11E {
    u32 f0; u32 f4; u32 f8; u8 padc[0x48 - 0xc];
    E11E *f48; E11E *f4c; E11E *f50; E11E *f54; u8 pad58[0x78 - 0x58];
    u32 *f78; u32 *f7c; u32 *f80; u8 pad84[0x94 - 0x84];
    C8011F35C *f94; C8011F35C *f98; u32 *f9c; u32 *fa0; u32 *fa4; u32 pada8; u32 fac;
    u8 padb0[0xd0 - 0xb0];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual u32 v30(); virtual u32 v34(); virtual u32 v38();
};
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *memset(void *, s32, u32);
extern void *lbl_8035AB58;

s32 fn_8011EDA8(P11E *p) {
    u32 n;
    u32 m;
    u32 k;
    u32 i;

    n = p->v30() + p->v34() + p->v38();
    m = p->v34();
    k = p->v38();
    if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB58);
    p->f48 = new E11E[n];
    fn_800F7E98();
    if (!p->f48) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB58);
    p->f78 = new u32[n];
    fn_800F7E98();
    if (!p->f78) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB58);
    p->f7c = new u32[n];
    fn_800F7E98();
    if (!p->f7c) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB58);
    p->f80 = new u32[n];
    fn_800F7E98();
    if (!p->f80) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB58);
    p->f94 = new C8011F35C[n];
    fn_800F7E98();
    if (!p->f94) fn_800604C4(-4, 0, 0, 0);
    p->f4c = p->f48;
    p->f50 = p->f4c + p->f0;
    p->f54 = p->f50 + p->f4;
    memset(p->f78, 0, n * 4);
    memset(p->f7c, 0, n * 4);
    memset(p->f80, 0, n * 4);
    for (i = 0; i < n; i++) {
        p->f48[i].f4 = 0;
    }
    if (m) {
        if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB58);
        p->f98 = new C8011F35C[p->fac];
        fn_800F7E98();
        if (!p->f98) fn_800604C4(-4, 0, 0, 0);
    }
    if (k) {
        u32 sz;
        if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB58);
        sz = k * 4;
        p->fa0 = (u32 *)new u8[sz];
        fn_800F7E98();
        if (!p->fa0) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB58);
        p->fa4 = (u32 *)new u8[sz];
        fn_800F7E98();
        if (!p->fa4) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035AB58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB58);
        p->f9c = (u32 *)new u8[sz];
        fn_800F7E98();
        if (!p->f9c) fn_800604C4(-4, 0, 0, 0);
        memset(p->fa0, 0, sz);
        memset(p->fa4, 0, sz);
        for (i = 0; i < p->f8; i++) {
            p->f9c[i] = 8;
        }
    }
    return 0;
}

}

} /* extern "C" */
