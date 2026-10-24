// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E;
struct O16 { u8 pad[8]; u32 fl; u8 pad12[32]; E *tail; E *head; };
struct O20 { u8 pad[152]; void *r152; u8 pad156[20]; E *tail; E *head; };
struct O24 { u8 pad[4]; void *a4; u8 pad8[84]; void *r92; u8 pad96[8]; E *tail; E *head; };
struct X24 { u8 pad[24]; void *v; };
struct VB { u8 pad[4]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void *s2(); };
struct E {
    u32 pad0;
    f32 f4, f8, f12;
    O16 *o16;
    O20 *o20;
    O24 *o24;
    u8 b28;
    u8 pad29[3];
    s32 i32;
    s32 i36;
    s32 i40;
    f32 f44;
    u32 a48;
    u32 a52;
    u32 a56;
    u8 pad60[92];
    u8 s152[8];
    X24 *x160;
    u8 pad164[8];
    X24 *x172;
    u8 pad176[280];
    X24 *x456;
    E *prev;
    E *next;
    E *prev2;
    E *next2;
};
extern volatile f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_800BB5FC(u32 *);
void fn_80206860(u8 *);
void fn_801FE454(VB *, void *);
void fn_8020379C(u8 *);
void fn_80205308(u8 *);
void fn_80205150(u8 *);
void fn_802050E0(u8 *);
void fn_801FDC30(void *, O24 *);
void fn_801FFB90(void *, E *);

#define UNLINK(e, O, PV, NX) \
    if ((e)->NX) { \
        if (((e)->NX->PV = (e)->PV) != 0) (e)->PV->NX = (e)->NX; \
        else O->head = (e)->NX; \
    } else { \
        if ((O->tail = (e)->PV) != 0) O->tail->NX = 0; \
        else O->head = 0; \
    }

void fn_802022C8(E *p) {
    VB *r;
    u32 fl;
    if (p->o24) r = (VB *)p->o24->r92;
    else r = (VB *)p->o20->r152;
    p->b28 &= ~1;
    p->b28 &= ~4;
    if (p->a52 || p->a56) fn_800BB5FC(&p->a52);
    fl = p->o16->fl;
    if (fl & 0x400) {
        if (fl & 0x80) {
            fn_80206860(p->s152);
            fn_801FE454(r, p->x172->v);
        } else {
            fn_8020379C(p->s152);
            fn_801FE454(r, p->x160->v);
            p->x160 = 0;
        }
    } else if (fl & 0x800) {
        fn_80205308(p->s152);
        fn_80205150(p->s152);
        fn_802050E0(p->s152);
        fn_801FE454(r, p->x456->v);
        p->x456 = 0;
    }
    UNLINK(p, p->o16, prev, next)
    if (p->i32) {
        UNLINK(p, p->o20, prev2, next2)
    } else {
        UNLINK(p, p->o24, prev2, next2)
        fn_801FDC30(p->o24->a4, p->o24);
    }
    if (p->i40 == 0) {
        fn_801FFB90(r->s2(), p);
    } else {
        p->o16 = 0;
        p->o24 = 0;
        p->o20 = 0;
        p->a48 = 0;
        p->b28 = 0;
        p->i32 = 0;
        p->i36 = 0;
        p->f4 = lbl_80365730;
        p->f8 = lbl_80365730;
        p->f12 = lbl_80365730;
        p->i40 = 0;
        p->f44 = lbl_80365734;
    }
}

} /* extern "C" */
