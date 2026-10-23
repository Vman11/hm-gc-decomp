// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8024C5E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(f32 dt);
};
struct P8024C5E0 : V8024C5E0 {
    u8 pad4[24];
    u32 f28;
    s32 x32;
    u8 pad36[4];
    s32 f40;
    u8 pad44[4];
    s32 f48;
    s32 f52;
    u8 pad56[24];
    f32 f80;
    u8 pad84[72];
    u32 f156;
    s32 f160;
};
struct O8024C5E0 {
    u8 pad[88];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19(s32 a, s32 b);
};
struct Q8024C5E0 {
    u8 pad[256];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32 a, f32 dt);
};
struct G8024C5E0 { u8 pad[40]; O8024C5E0 *f40; };
struct H8024C5E0 { u8 pad[844]; s32 *f844; };
extern "C" {
extern H8024C5E0 *lbl_8035B594;
extern G8024C5E0 *lbl_8035B7BC;
extern Q8024C5E0 *lbl_8035B7C8;
extern s32 lbl_8035B7C4;
extern f32 lbl_8035B584;
extern f32 lbl_803663E0;
extern f32 lbl_803663B8;
extern f32 lbl_803663E4;
u32 fn_800FBB9C(void);

void fn_8024C5E0(P8024C5E0 *p, s32 flag) {
    u32 t1;
    u32 t0;
    f32 dt;
    if (flag != 0) {
        if (p->f28 > 1) return;
        if (p->f52 != 0) {
            p->x32 = 1;
            lbl_8035B594->f844[p->f48] = 1;
        }
    }
    if (p->f40 != 0) return;
    if (p->f28 > 1) {
        if (p->f156 != 0) lbl_8035B7BC->f40->v19(p->f160, 0);
        p->f28 = 5;
        lbl_8035B584 = p->f156 != 0 ? lbl_803663E0 : lbl_803663B8;
        t0 = fn_800FBB9C();
        while (p->f28 != 0) {
            t1 = fn_800FBB9C();
            dt = (f32)(fn_800FBB9C() - t0) / lbl_803663E4;
            p->v9(dt);
            lbl_8035B7C8->v3(lbl_8035B7C4, dt);
            t0 = t1;
        }
    } else {
        p->f28 = 0;
        p->f80 = lbl_803663B8;
    }
}

} /* extern "C" */
