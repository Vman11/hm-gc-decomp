// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Tbl_801B3844 {
    void *f0, *f4, *f8;
    void (*set1)(void *, void *);
    void *f10[(44 - 16) / 4];
    void (*set2)(void *, void *, void *);
    void (*set3)(void *, void *, void *);
};
extern Tbl_801B3844 lbl_803286D0;
extern u32 lbl_80364F2C;
extern u32 lbl_80364F20;
extern u32 lbl_80364F24;
extern u32 lbl_80364F28;
struct Hnd_801B3844 { u8 pad[16]; void *h; u8 pad14[12]; u32 flags; };
struct CbObj_801B3844;
struct Elem_801B3844 {
    u32 flags;
    u8 pad4[8];
    CbObj_801B3844 *cb;
    u8 pad10[48 - 16];
    u32 flags2;
    u8 pad34[60 - 52];
};
struct CbObj_801B3844 {
    u8 pad[4];
    virtual void v0();
    virtual void notify(Elem_801B3844 *);
};
struct Model_801B3844 { u8 pad[48]; Hnd_801B3844 *hnd; u8 pad34[176 - 52]; Elem_801B3844 *elems; };
struct Obj_801B3844 {
    u8 pad0[64];
    u8 v64[12];
    u8 v76[12];
    u8 v88[12];
    s32 f100;
    s32 f104;
    s32 f108;
    Model_801B3844 *model;
    void *f116;
    s32 f120;
    u8 pad7C[164 - 124];
    s32 idx;
};
void fn_80190C98(Model_801B3844 *);
void fn_80103BB4(Elem_801B3844 *, void *);

void fn_801B3844(Obj_801B3844 *o, s32 force) {
    Hnd_801B3844 *h;
    Model_801B3844 *m;

    if (o->f104 != 0) {
        m = o->model;
        h = m->hnd;
        if (h != NULL) {
            lbl_803286D0.set1(h->h, o->v64);
            h->flags |= lbl_80364F2C;
            fn_80190C98(m);
        }
    }
    if (o->f108 != 0) {
        if (o->f100 != 0) {
            m = o->model;
            h = m->hnd;
            if (h != NULL) {
                lbl_803286D0.set2(h->h, o->v76, o->v88);
                h->flags |= lbl_80364F2C;
                fn_80190C98(m);
            }
        } else {
            m = o->model;
            h = m->hnd;
            if (h != NULL) {
                lbl_803286D0.set3(h->h, o->v88, o->v76);
                h->flags |= lbl_80364F2C;
                fn_80190C98(m);
            }
        }
    }
    if ((force != 0 || (o->model->elems->flags & 0x10)) && o->f116 != NULL) {
        h = (Hnd_801B3844 *)&o->model->elems[o->idx];
        fn_80103BB4((Elem_801B3844 *)h, o->f116);
        ((Elem_801B3844 *)h)->flags |= lbl_80364F20;
        if (((Elem_801B3844 *)h)->cb != NULL) {
            ((Elem_801B3844 *)h)->cb->notify((Elem_801B3844 *)h);
        }
        ((Elem_801B3844 *)h)->flags2 |= lbl_80364F24;
        {
            Elem_801B3844 *x = &o->model->elems[o->idx];
            if (o->f120 != 0) {
                x->flags |= lbl_80364F28;
            } else {
                x->flags &= ~4;
            }
        }
    }
}

} /* extern "C" */
