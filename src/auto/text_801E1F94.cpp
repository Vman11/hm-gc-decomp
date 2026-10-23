// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C800322B0 {
    s32 a;
    s32 b;
    s32 c;
    C800322B0() { a = 0; c = 0; b = 0; }
    ~C800322B0() {}
};
struct A801E1F94 {
    u8 pad[20];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void Fa();
};
struct B801E1F94 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void Fb();
};
struct NA801E1F94 { NA801E1F94 *next; u32 f4; A801E1F94 *obj; };
struct NB801E1F94 { NB801E1F94 *next; u32 f4; B801E1F94 *obj; };
struct St801E1F94 { u32 flags; u8 pad[44]; u32 f30; };
struct Ent801E1F94 { u8 pad[176]; St801E1F94 *st; };
struct Obj801E1F94 {
    u8 pad0[20];
    Ent801E1F94 *ent;
    u8 pad18[8];
    NA801E1F94 *listA;
    u8 pad24[32];
    void *f44;
    NB801E1F94 *listB;
    u8 pad4c[40];
    s32 f74;
};

void fn_801089F0(void *, C800322B0 *);

void fn_801E1F94(Obj801E1F94 *o) {
    C800322B0 m;
    if (o->f74 != 0) {
        if (o->f44 != 0) {
            m.b = 1;
            m.a = (s32)o->f44;
            fn_801089F0(o->f44, &m);
        }
        {
            C800322B0 m2;
            NB801E1F94 *nb;
            NA801E1F94 *na;
            na = o->listA;
            nb = o->listB;
            if (o->f74 != 0) {
                o->f74 = 0;
                for (; na != 0; na = na->next) {
                    na->obj->Fa();
                }
                for (; nb != 0; nb = nb->next) {
                    nb->obj->Fb();
                }
                if (o->ent != 0 && (o->ent->st->f30 & 1)) {
                    o->ent->st->flags &= ~2;
                }
            }
            if (o->ent != 0) {
                o->ent->st->f30 &= ~1;
            }
        }
    }
}

} /* extern "C" */
