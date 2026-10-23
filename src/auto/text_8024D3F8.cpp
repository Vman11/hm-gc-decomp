// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct O3f8 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual u32 v5();
};
struct M3f8 {
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
    virtual u32 v11();
};
struct R3f8 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual u32 v5(s32);
};
struct G3f8 {
    u8 pad[36];
    u8 *f36;
};
extern "C" {
extern void *lbl_8035B7BC;
extern M3f8 *lbl_8035B7C0;
extern G3f8 *lbl_8035B65C;
extern f32 lbl_80366410;
extern char lbl_802A9320[];
void fn_800FB064(void *, void *);
s32 fn_800FB33C(void *);
f32 fn_800FB2E0(void *);
void *fn_8026D254(void *, void *);
R3f8 *fn_80207198(void *, void *, void *);
void fn_8024BB70(u8 *, O3f8 *, void *, void *, void *, void *, void *, f32);

void fn_8024D3F8(u8 *self, O3f8 *obj, void *a, void *b, void *c, void *d, void *e, f32 f) {
    if (obj->v5() == 60) {
        fn_800FB064(obj, self + 116);
        *(s32 *)(self + 112) = 0;
        if (fn_800FB33C(obj) == 1) {
            *(s32 *)(self + 112) = 1;
        }
        *(s32 *)(self + 124) = fn_800FB33C(obj);
        *(void **)(self + 156) = fn_8026D254(lbl_8035B7BC, self + 116);
    } else {
        *(s32 *)((u8 *)obj + 4) = 1;
    }
    if (obj->v5() == 62) {
        *(f32 *)(self + 128) = fn_800FB2E0(obj);
    } else {
        *(s32 *)((u8 *)obj + 4) = 1;
        *(f32 *)(self + 128) = lbl_80366410;
    }
    *(u32 *)(self + 160) = lbl_8035B7C0->v11();
    *(u32 *)(self + 164) = fn_80207198(lbl_8035B65C->f36 + 992, lbl_802A9320, 0)->v5(0);
    fn_8024BB70(self, obj, a, b, c, d, e, f);
}

} /* extern "C" */
