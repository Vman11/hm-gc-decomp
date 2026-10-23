// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct O8015E158 { u8 pad[32]; u32 mask; };
struct T8015E158 { u32 f0; O8015E158 **objs; };
struct A8015E158 { u8 pad[240]; u32 mask; };
struct EB8015E158 {
    u8 pad[36];
    u16 flags;
    u16 idx;
    u8 pad2[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void Handle(A8015E158 *a, void *b);
};
struct E8015E158 : EB8015E158 { u8 rest[48]; };
struct S8015E158 {
    u8 pad[8];
    u32 count;
    u8 pad2[16];
    T8015E158 tbl;
    u8 pad3[40];
    E8015E158 *elems;
};
extern "C" {

void fn_8015E158(S8015E158 *self, A8015E158 *a, void *b, T8015E158 *tbl) {
    E8015E158 *p;
    E8015E158 *end;
    if (tbl == 0) tbl = &self->tbl;
    p = self->elems;
    end = p + self->count;
    for (; p < end; p++) {
        if ((p->flags & 1) && (a->mask & tbl->objs[p->idx]->mask)) {
            p->Handle(a, b);
        }
    }
}

} /* extern "C" */
