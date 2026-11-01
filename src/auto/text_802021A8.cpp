#include "common.h"
namespace m802021A8 {
namespace m802021A8 {
extern "C" {
struct X4 { u8 pad[4]; s32 f4; };
struct P16 { u8 pad[8]; u32 f8; u8 pad2[24]; X4 *p36; };
struct N {
    u8 pad[4]; f32 f4; f32 f8; f32 f12; P16 *p16; u8 pad20[8];
    u8 fl; u8 pad29[7]; s32 f36; u8 pad40[112]; u8 f152[4]; s32 f156; u8 pad160[56]; s32 f216; u8 pad220[224]; s32 f444;
};
} }
extern "C" {
__declspec(section ".sdata2") f32 lbl_80365720 = 1000.0f;
__declspec(section ".sdata2") f32 lbl_80365724 = 0.02f;
}
namespace m802021A8 { extern "C" {
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
} }
extern "C" {
__declspec(section ".sdata2") char lbl_80365730[4] = {0};
__declspec(section ".sdata2") f32 lbl_80365734 = 1.0f;
__declspec(section ".sdata2") f32 lbl_80365738 = -90.4f;
__declspec(section ".sdata2") f32 lbl_8036573C = 6.0f;
}
namespace m802022C8 { extern "C" {
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

} /* namespace m802021A8 */

namespace m80202958 {

extern "C" {

extern const f32 lbl_8036573C;
extern const f32 lbl_80365738;
void fn_800BB2F8(void *, u32, u32);
void fn_800BB32C(void *);
void fn_800BB714(void *);
void fn_800BB730(void *);
void fn_800BB788(void *);
void fn_800BBAC8(void *, void *);
f64 fn_801FC1F4(f64);
void fn_80206620(void *, void *, void *);

void fn_80202958(u8 *param_1, u8 *param_2, u32 param_3, void *param_4) {
    f64 dVar1;

    fn_800BB2F8(param_1 + 0x34, param_3, *(u32 *)(param_2 + 4));
    fn_800BB730(param_1 + 0x74);
    fn_800BB788(param_1 + 0x80);
    fn_800BB714(param_1 + 0x8c);
    if (*(u8 **)(param_1 + 0x18) != 0) {
        dVar1 = (f64)fn_801FC1F4((f64)(*(f32 *)(*(u8 **)(param_1 + 0x18) + 0x10) *
                                                                                *(f32 *)(param_1 + 0x2c)));
        if (dVar1 < lbl_80365738) {
            dVar1 = lbl_80365738;
        }
        if (dVar1 > lbl_8036573C) {
            dVar1 = lbl_8036573C;
        }
        *(u32 *)(param_1 + 0x88) = (s32)dVar1 * 0xa0000;
    }
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x74);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x80);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x8c);
    if (param_4 != 0) {
        fn_80206620(param_1 + 0x98, param_4, param_1 + 0x34);
    }
    fn_800BB32C(param_1 + 0x34);
}

} /* extern "C" */

} /* namespace m80202958 */

namespace m80202A50 {

extern "C" {

extern const f32 lbl_8036573C;
extern const f32 lbl_80365738;
void fn_800BB2F8(void *, u32, u32);
void fn_800BB32C(void *);
void fn_800BB6A4(void *);
void fn_800BB730(void *);
void fn_800BB788(void *);
void fn_800BBAC8(void *, void *);
f64 fn_801FC1F4(f64);
void fn_80206620(void *, void *, void *);

void fn_80202A50(u8 *param_1, u8 *param_2, u32 param_3, void *param_4) {
    f64 dVar1;

    fn_800BB2F8(param_1 + 0x34, param_3, *(u32 *)(param_2 + 4));
    fn_800BB6A4(param_1 + 0x48);
    fn_800BB730(param_1 + 0x74);
    fn_800BB788(param_1 + 0x80);
    if (*(u8 **)(param_1 + 0x14) != 0) {
        dVar1 = (f64)fn_801FC1F4((f64)(*(f32 *)(*(u8 **)(param_1 + 0x14) + 0x10) *
                                                                                *(f32 *)(param_1 + 0x2c)));
        if (dVar1 < lbl_80365738) {
            dVar1 = lbl_80365738;
        }
        if (dVar1 > lbl_8036573C) {
            dVar1 = lbl_8036573C;
        }
        *(u32 *)(param_1 + 0x88) = (s32)dVar1 * 0xa0000;
    }
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x48);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x74);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x80);
    if (param_4 != 0) {
        fn_80206620(param_1 + 0x98, param_4, param_1 + 0x34);
    }
    fn_800BB32C(param_1 + 0x34);
}

} /* extern "C" */

} /* namespace m80202A50 */

namespace m80202B48 {
extern "C" {
/* Functions from 0x80202B48 to 0x80203040, found by decomp-toolkit. */

extern f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_80202B48(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) | 4);
}

void fn_80202B58(u8* arg0) {
    arg0[0x1C] |= 1;
}

s32 fn_80202B68(u8* arg0) {
    u8 flags = arg0[0x1C];
    if ((flags & 2) || flags != 0) {
        return 1;
    }
    return 0;
}

s32 fn_80202B8C(u8* arg0) {
    u8* p = *(u8**)(arg0 + 0x10);
    u32 flags;
    u8* q;

    if (p != NULL) {
        flags = *(u32*)(p + 0x8);
        if (flags & 0x400) {
            if (flags & 0x80) {
                q = *(u8**)(arg0 + 0xAC);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            } else {
                q = *(u8**)(arg0 + 0xA0);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            }
        } else if (flags & 0x800) {
            return arg0[0x1C] & 1;
        }
    }
    return 0;
}

void fn_80202C08(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

void fn_80202C50(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

void fn_80202C98(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x1D0);
    if (temp_r4 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x1CC);
        M2C_FIELD(temp_r4, void **, 0x1CC) = temp_r0;
        if (temp_r0 != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1CC), void **, 0x1D0) = (void *) M2C_FIELD(arg0, void **, 0x1D0);
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x1D0);
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, void **, 0x1CC);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x2C) = temp_r0_2;
        if (temp_r0_2 != NULL) {
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x2C), s32 *, 0x1D0) = 0;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x30) = 0;
        }
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x1D8);
    if (temp_r4_2 != NULL) {
        temp_r0_3 = M2C_FIELD(arg0, void **, 0x1D4);
        M2C_FIELD(temp_r4_2, void **, 0x1D4) = temp_r0_3;
        if (temp_r0_3 != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D4), void **, 0x1D8) = (void *) M2C_FIELD(arg0, void **, 0x1D8);
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB4) = (void *) M2C_FIELD(arg0, void **, 0x1D8);
        return;
    }
    temp_r0_4 = M2C_FIELD(arg0, void **, 0x1D4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB0) = temp_r0_4;
    if (temp_r0_4 != NULL) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB0), s32 *, 0x1D8) = 0;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB4) = 0;
}

s32 fn_80202D7C(u8* arg0, u8* arg1, u8* arg2) {
    s32 found = 0;
    u8* p;
    u8* owner;

    *(s32*)(arg0 + 0x18) = 0;
    arg0[0x1C] = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
    *(u8**)(arg0 + 0x10) = arg1;
    *(u8**)(arg0 + 0x14) = arg2;
    *(s32*)(arg0 + 0x20) = 1;
    *(s32*)(arg0 + 0x24) = *(s32*)(*(u8**)(arg0 + 0x10) + 0xC);

    for (p = *(u8**)(arg1 + 0x2C); p != 0; p = *(u8**)(p + 0x1CC)) {
        if (p == arg0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D0) = *(u8**)(*(u8**)(arg0 + 0x10) + 0x30)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x10) + 0x30) = arg0;
        *(u8**)(arg0 + 0x1CC) = 0;
    }

    for (p = *(u8**)(arg2 + 0xB0); p != 0; p = *(u8**)(p + 0x1D4)) {
        if (p == arg0) {
            if (!found) {
                owner = *(u8**)(arg0 + 0x10);
                if ((*(u8**)(owner + 0x30) = *(u8**)(*(u8**)(owner + 0x30) + 0x1D0)) != NULL) {
                    *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = 0;
                } else {
                    *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = 0;
                }
                found = 1;
            }
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D8) = *(u8**)(*(u8**)(arg0 + 0x14) + 0xB4)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x14) + 0xB4) + 0x1D4) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x14) + 0xB0) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x14) + 0xB4) = arg0;
        *(u8**)(arg0 + 0x1D4) = 0;
    }
    return found;
}

s32 fn_80202EE0(u8* arg0, u8* arg1, u8* arg2) {
    s32 found = 0;
    u8* p;
    u8* owner;

    *(s32*)(arg0 + 0x14) = 0;
    arg0[0x1C] = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
    *(u8**)(arg0 + 0x10) = arg1;
    *(u8**)(arg0 + 0x18) = arg2;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = *(s32*)(*(u8**)(arg0 + 0x10) + 0xC);

    for (p = *(u8**)(arg1 + 0x2C); p != 0; p = *(u8**)(p + 0x1CC)) {
        if (p == arg0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D0) = *(u8**)(*(u8**)(arg0 + 0x10) + 0x30)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x10) + 0x30) = arg0;
        *(u8**)(arg0 + 0x1CC) = 0;
    }

    for (p = *(u8**)(arg2 + 0x68); p != 0; p = *(u8**)(p + 0x1D4)) {
        if (p == arg0) {
            if (!found) {
                owner = *(u8**)(arg0 + 0x10);
                if ((*(u8**)(owner + 0x30) = *(u8**)(*(u8**)(owner + 0x30) + 0x1D0)) != NULL) {
                    *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = 0;
                } else {
                    *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = 0;
                }
                found = 1;
            }
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D8) = *(u8**)(*(u8**)(arg0 + 0x18) + 0x6C)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x18) + 0x6C) + 0x1D4) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x18) + 0x68) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x18) + 0x6C) = arg0;
        *(u8**)(arg0 + 0x1D4) = 0;
    }
    return found;
}


} /* extern "C" */
} /* namespace m80202B48 */

namespace m80203040 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern "C" {
extern u8 lbl_802EF7C0[];
void fn_802069C8(void *, s32);
void __dt__9C802054B0Fv(void *, s32);
void __dt__9C80203800Fv(void *, s32);
void __dt__9C801FD4C4Fv(void *, s32);
void __dl__FPv(void *);
}
struct V_80203040 { virtual void p0(); virtual void p1(); virtual void m(); };

void *fn_80203040(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802EF7C0;
        ((V_80203040 *)p)->m();
        fn_802069C8(p + 152, -1);
        __dt__9C802054B0Fv(p + 152, -1);
        __dt__9C80203800Fv(p + 152, -1);
        __dt__9C801FD4C4Fv(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */

} /* namespace m80203040 */


/* Uses the renamed symbols dtor_801FD4C4 -> __dt__9C801FD4C4Fv (base class), dtor_80203800 -> __dt__9C80203800Fv and
 * dtor_802054B0 -> __dt__9C802054B0Fv (members of the anonymous union at 0x98). */

extern "C" {
extern u8 lbl_802EF7C0[];
extern volatile f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_801FD50C(void *p);
void fn_8020383C(void *p);
void fn_802054EC(void *p);
void fn_80206A04(void *p);
}

struct C801FD4C4 { C801FD4C4() { fn_801FD50C(this); } ~C801FD4C4(); };
struct V802EF7C0 { u8 *vt; V802EF7C0() { vt = lbl_802EF7C0; } };
struct C80203800 { C80203800() { fn_8020383C(this); } ~C80203800(); };
struct C802054B0 { C802054B0() { fn_802054EC(this); } ~C802054B0(); u8 b[0x10]; };
struct C80206A04 { C80206A04() { fn_80206A04(this); } };

struct C802030D8 : C801FD4C4 {
    V802EF7C0 m0;
    f32 m4;
    f32 m8;
    f32 mC;
    s32 m10;
    s32 m14;
    s32 m18;
    u8 m1C;
    s32 m20;
    s32 m24;
    s32 m28;
    f32 m2C;
    s32 m30;
    u8 pad34[0x98 - 0x34];
    union { C80203800 m98a; C802054B0 m98b; C80206A04 m98c; };
    C802030D8();
};

C802030D8::C802030D8() {
    m10 = 0;
    m18 = 0;
    m14 = 0;
    m30 = 0;
    m1C = 0;
    m20 = 0;
    m24 = 0;
    m4 = lbl_80365730;
    m8 = lbl_80365730;
    mC = lbl_80365730;
    m28 = 0;
    m2C = lbl_80365734;
}

