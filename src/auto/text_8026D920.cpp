// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A_8026D920 {
    u8 pad[88];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void update();
};
struct M_8026D920 {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual A_8026D920 *getA(u32);
    virtual A_8026D920 *getB(u32);
    u32 x14;
    u32 nb;
};
struct B_8026D920 {
    u8 pad0[12];
    void *x0C;
    u8 pad10[20];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7();
    virtual M_8026D920 *getM(s32);
};
struct G_8026D920 {
    u8 pad[256];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void set(void *, f32);
};
struct E_8026D920 { A_8026D920 *a; u32 x; };
struct T_8026D920 {
    u8 pad0[24];
    B_8026D920 *b;
    u8 pad1C[12];
    A_8026D920 *a28;
    A_8026D920 *a2C;
    u8 pad30[8];
    u32 na;
    u8 pad3C[8];
    u32 ne;
    E_8026D920 e[1];
    void upd() {
        for (u32 n = 0; n < ne; n++) {
            e[n].a->update();
        }
    }
};
extern G_8026D920 *lbl_8035B7C8;
extern void *lbl_8035B7C4;

void fn_8026D920(T_8026D920 *t, f32 dt) {
    u32 j;
    M_8026D920 *m;
    t->a28->update();
    t->a2C->update();
    t->upd();
    if (t->b != 0 && t->b->x0C != 0) {
        m = t->b->getM(0);
        for (j = 0; j < t->na; j++) {
            m->getA(j)->update();
        }
        for (j = 0; j < m->nb; j++) {
            m->getB(j)->update();
        }
    }
    lbl_8035B7C8->set(lbl_8035B7C4, dt);
}

} /* extern "C" */
