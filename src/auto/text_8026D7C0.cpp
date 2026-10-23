// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80366DEC;
} /* extern "C" */
struct A7C0 {
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
    virtual void Update();
};
struct C7C0 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual A7C0 *GetA(u32 i);
    virtual A7C0 *GetB(u32 i);
    u32 f20;
    u32 count;
};
struct B7C0 {
    u8 pad0[12];
    void *f12;
    u8 pad1[36 - 16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual C7C0 *Get(s32 i);
};
struct D7C0 {
    u8 pad[256];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void Do(void *a, f32 t);
};
struct E7C0 { A7C0 *obj; u32 x; };
struct P7C0 {
    u8 pad0[24];
    B7C0 *f24;
    u8 pad1[40 - 28];
    A7C0 *f40;
    A7C0 *f44;
    u8 pad2[56 - 48];
    u32 f56;
    u8 pad3[68 - 60];
    u32 f68;
    E7C0 arr[1];
};
extern "C" {
extern D7C0 *lbl_8035B7C8;
extern void *lbl_8035B7C4;

static inline void UpdateArr(P7C0 *p) {
    for (u32 i = 0; i < p->f68; i++) {
        p->arr[i].obj->Update();
    }
}

void fn_8026D7C0(P7C0 *p) {
    u32 i;
    C7C0 *c;
    p->f40->Update();
    p->f44->Update();
    UpdateArr(p);
    if (p->f24 != 0 && p->f24->f12 != 0) {
        c = p->f24->Get(0);
        for (i = 0; i < p->f56; i++) {
            c->GetA(i)->Update();
        }
        for (i = 0; i < c->count; i++) {
            c->GetB(i)->Update();
        }
    }
    lbl_8035B7C8->Do(lbl_8035B7C4, lbl_80366DEC);
}

} /* extern "C" */
