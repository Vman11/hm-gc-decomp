#include "common.h"
namespace m802021A8 {
extern "C" {
struct X4 { u8 pad[4]; s32 f4; };
struct P16 { u8 pad[8]; u32 f8; u8 pad2[24]; X4 *p36; };
struct N {
    u8 pad[4]; f32 f4; f32 f8; f32 f12; P16 *p16; u8 pad20[8];
    u8 fl; u8 pad29[7]; s32 f36; u8 pad40[112]; u8 f152[4]; s32 f156; u8 pad160[56]; s32 f216; u8 pad220[224]; s32 f444;
};
extern f32 lbl_80365720;
extern f32 lbl_80365724;
void fn_80206888(u8 *);
void fn_802037C4(u8 *);
void fn_80205330(u8 *);
void fn_802021A8(N *n, u32 dt) {
    if (dt) {
        f32 t = n->f4 + (f32)dt / lbl_80365720;
        n->fl |= 2;
        if (n->fl) {
            if (n->f12 < n->f8) n->f8 = n->f12 - lbl_80365724;
        }
        n->f12 = t;
        return;
    }
    {
        u32 f = n->p16->f8;
        if (f & 0x400) {
            if (f & 0x80) {
                fn_80206888(n->f152);
                n->f156 = n->f36;
            } else {
                fn_802037C4(n->f152);
                n->f156 = n->f36;
            }
        } else if (f & 0x800) {
            n->fl |= 8;
            n->f444 = n->f36;
            fn_80205330(n->f152);
            n->f216 = n->p16->p36->f4;
        }
    }
    n->fl |= 1;
    n->fl &= ~2;
}

}

} /* namespace m802021A8 */

namespace m802022C8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

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

} /* namespace m802022C8 */

namespace m802025B8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct L;
struct MV { u8 pad[4]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void *get(); };
struct Fx { u8 pad[20]; s32 f20; void *f24; };
struct N;
struct P16 { u8 pad[8]; u32 f8; u8 pad2[32]; N *head; N *tail; };
struct P20 { u8 pad[152]; MV *m; u8 pad2[20]; N *head; N *tail; };
struct P24 { u8 pad[92]; MV *m; u8 pad2[8]; N *head; N *tail; };
struct N {
    u8 pad[4]; f32 f4; f32 f8; f32 f12; P16 *p16; P20 *p20; P24 *p24;
    u8 fl; u8 pad28[3];
    s32 i32; s32 f36; s32 f40; f32 f44; s32 f48; u8 f52[100]; u8 f152[8]; Fx *p160; u8 pad164[8]; Fx *p172; u8 pad176[280]; Fx *p456;
    N *prev; N *next; N *prev2; N *next2;
};
extern "C" {
extern const f32 lbl_80365720;
extern f32 lbl_80365724;
extern f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_800BB5FC(u8 *);
void fn_80206860(u8 *);
void fn_8020379C(u8 *);
void fn_80205308(u8 *);
void fn_80205150(u8 *);
void fn_802050E0(u8 *);
void fn_801FE454(MV *, void *);
void fn_800C7240(Fx *);
void fn_801FFB90(void *, N *);

void fn_802025B8(N *n, u32 dt) {
    MV *m;
    if (n->p24) m = n->p24->m;
    else m = n->p20->m;
    if (dt) {
        f32 t = n->f4 + (f32)dt / lbl_80365720;
        if (n->fl & 2) {
            if (t < n->f12) return;
            t = n->f12 - lbl_80365724;
            n->fl |= 4;
        }
        n->f8 = t;
        n->fl |= 4;
        return;
    }
    n->fl &= ~1;
    n->fl &= ~4;
    fn_800BB5FC(n->f52);
    {
        u32 f = n->p16->f8;
        if (f & 0x400) {
            if (f & 0x80) {
                if (n->p172) {
                    fn_80206860(n->f152);
                    fn_801FE454(m, n->p172->f24);
                    n->p172->f20 = 0;
                    fn_800C7240(n->p172);
                    n->p172 = 0;
                }
            } else if (n->p160) {
                fn_8020379C(n->f152);
                fn_801FE454(m, n->p160->f24);
                n->p160->f20 = 0;
                fn_800C7240(n->p160);
                n->p160 = 0;
            }
        } else if (f & 0x800) {
            if (n->p456) {
                fn_80205308(n->f152);
                fn_80205150(n->f152);
                fn_802050E0(n->f152);
                fn_801FE454(m, n->p456->f24);
                n->p456->f20 = 0;
                fn_800C7240(n->p456);
                n->p456 = 0;
            }
        }
    }
    if (n->next) {
        if ((n->next->prev = n->prev) != 0) n->prev->next = n->next;
        else n->p16->tail = n->next;
    } else {
        if ((n->p16->head = n->prev) != 0) n->p16->head->next = 0;
        else n->p16->tail = 0;
    }
    if (n->i32) {
        if (n->next2) {
            if ((n->next2->prev2 = n->prev2) != 0) n->prev2->next2 = n->next2;
            else n->p20->tail = n->next2;
        } else {
            if ((n->p20->head = n->prev2) != 0) n->p20->head->next2 = 0;
            else n->p20->tail = 0;
        }
    } else {
        if (n->next2) {
            if ((n->next2->prev2 = n->prev2) != 0) n->prev2->next2 = n->next2;
            else n->p24->tail = n->next2;
        } else {
            if ((n->p24->head = n->prev2) != 0) n->p24->head->next2 = 0;
            else n->p24->tail = 0;
        }
    }
    if (n->f40 == 0) {
        fn_801FFB90(m->get(), n);
    } else {
        n->p16 = 0;
        n->p24 = 0;
        n->p20 = 0;
        n->f48 = 0;
        n->fl = 0;
        n->i32 = 0;
        n->f36 = 0;
        n->f4 = lbl_80365730;
        n->f8 = lbl_80365730;
        n->f12 = lbl_80365730;
        n->f40 = 0;
        n->f44 = lbl_80365734;
    }
}
}

} /* extern "C" */

} /* namespace m802025B8 */
