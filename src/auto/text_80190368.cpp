#include "common.h"
namespace m80192330 {  extern "C" s32 __dt__9C80192398Fv(s32 param_1, s16 param_2); }
namespace m80190368 { struct Vec80190368; extern "C" void fn_80190368(u8 *self, const Vec80190368 *v); }
namespace m801903F4 { struct P; struct V3; extern "C" void fn_801903F4(P *self, const V3 *v); }
namespace m80190480 { struct S80190480; extern "C" void fn_80190480(S80190480 *p, const f32 *v); }
namespace m801909F4 {  extern "C" void fn_801909F4(u32 param_1, u32 param_2, u32 param_3, u32 param_4); }
namespace m80190A24 { struct O; struct R; extern "C" void fn_80190A24(O *o, R *r, void *x); }
namespace m80190C94 {  extern "C" int fn_80190C94(int a); }
namespace m80190DEC {  extern "C" s32 fn_80190DEC(void *arg0); }
namespace m80190DEC {  extern "C" s32 fn_80190DF4(void *arg0); }
namespace m80190DFC {  extern "C" void fn_80190DFC(s32 param_1); }
namespace m80190F14 { struct N; extern "C" void fn_80190F14(N *n); }
namespace m80191160 { struct V_80191160; extern "C" void fn_80191160(V_80191160 *q); }
namespace m80191484 { struct B; struct R; struct T; extern "C" void fn_80191484(T *t, B *b, R *r, u32 tok); }
namespace m80191DBC { struct E80191DBC; struct S80191DBC; extern "C" void fn_80191DBC(S80191DBC *self, void *src, E80191DBC *err, s32 type); }
namespace m80191EA8 { struct D80191EA8; struct S80191EA8; extern "C" void fn_80191EA8(S80191EA8 *self, u32 a1, const D80191EA8 *desc); }
namespace m80191F88 { struct O; struct S; extern "C" void fn_80191F88(S *s, O *o, S *src); }
namespace m80192210 { struct P80192210; struct S80192210; extern "C" void fn_80192210(P80192210 *p, u32 a, void *b, S80192210 *s); }
extern "C" void *lbl_802E9218[19] = { 0, 0, (void *)m80191DBC::fn_80191DBC, (void *)m80191484::fn_80191484, (void *)m80191160::fn_80191160, (void *)m80190DEC::fn_80190DF4, (void *)m80190DEC::fn_80190DEC, (void *)m80190C94::fn_80190C94, (void *)m80192330::__dt__9C80192398Fv, (void *)m80192210::fn_80192210, (void *)m80191EA8::fn_80191EA8, (void *)m80191F88::fn_80191F88, (void *)m80190F14::fn_80190F14, (void *)m80190DFC::fn_80190DFC, (void *)m80190A24::fn_80190A24, (void *)m801909F4::fn_801909F4, (void *)m801903F4::fn_801903F4, (void *)m80190368::fn_80190368, (void *)m80190480::fn_80190480 };
namespace m80190368 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_803286D0[];
struct Vec80190368 { f32 x, y, z; };

void fn_80190368(u8 *self, const Vec80190368 *v) {
    u8 *p = *(u8 **)(self + 48);
    if (p != 0) {
        Vec80190368 t;
        (*(void (**)(void *, const Vec80190368 *, Vec80190368 *))(lbl_803286D0 + 404))(*(void **)(p + 16), v, &t);
        Vec80190368 *d = (Vec80190368 *)(*(u8 **)(self + 52) + 24);
        d->x = t.x;
        d->y = t.y;
        d->z = t.z;
    } else {
        Vec80190368 *d = (Vec80190368 *)(*(u8 **)(self + 52) + 24);
        d->x = v->x;
        d->y = v->y;
        d->z = v->z;
    }
}

} /* extern "C" */

} /* namespace m80190368 */

namespace m801903F4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
struct V3 { f32 x, y, z; };
typedef struct Q { u8 pad[16]; void *f16; } Q;
struct P { u8 pad[48]; Q *f48; V3 *f52; };
extern u8 lbl_803286D0[];
void fn_801903F4(P *self, const V3 *v) {
    Q *q = self->f48;
    if (q != 0) {
        V3 t;
        (*(void (**)(void *, const V3 *, V3 *))(lbl_803286D0 + 0x194))(q->f16, v, &t);
        *self->f52 = t;
    } else {
        *self->f52 = *v;
    }
}

} /* extern "C" */

} /* namespace m801903F4 */

namespace m80190480 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
struct S80190480 { u8 pad[8]; f32 v[4]; };
void fn_80190C98(S80190480 *p);
void fn_80190480(S80190480 *p, const f32 *v) {
    p->v[0] = v[0];
    p->v[1] = v[1];
    p->v[2] = v[2];
    p->v[3] = v[3];
    fn_80190C98(p);
}

} /* extern "C" */

} /* namespace m80190480 */

namespace m801904C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
void fn_801044C4(void *s, s32 a, s32 b);
void fn_80134C30(void *q, void *p8, void *r, s32 a, s32 b, s32 c);

} /* extern "C" */

struct A_801904C0 {
    u8 pad[24];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void m(void *, void *, void *, s32);
};

struct Q_801904C0 {
    u8 pad[6448];
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
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual s32 m67();
    virtual s32 m68();
    virtual void m69(s32, s32);
};

struct P_801904C0 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void *m4();
};

extern "C" {

void fn_801904C0(P_801904C0 *p, Q_801904C0 *q, void *r, void *s) {
    A_801904C0 *a = *(A_801904C0 **)((u8 *)p + 0x38);
    if (a != 0) {
        a->m(r, q, p, 0);
    }
    if (*(f32 *)((u8 *)p + 0x14) < lbl_803596E0[0]) {
        if (s == 0) {
            s = p->m4();
        }
        if (s != 0) {
            fn_801044C4(s, q->m67(), q->m68());
            q->m69(0, *(s32 *)((u8 *)s + 0x14));
        } else {
            q->m69(0, q->m67());
        }
        fn_80134C30(q, (u8 *)p + 8, r, 6, 6, 0);
    }
}

} /* extern "C" */

} /* namespace m801904C0 */

namespace m80190604 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V1_80190604 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void *g(); };
struct V2_80190604 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(void *); };
extern char lbl_802A1BD8[];
void fn_80060568(const char *, s32, s32, s32);
V2_80190604 *fn_800F8274(void *, void *);
void fn_80190C98(void *);

void fn_80190604(V1_80190604 *p, u8 *q, void *s) {
    void *r = p->g();
    u8 *e;
    u8 **pp;
    if (r == NULL) {
        fn_80060568(lbl_802A1BD8, 0, 0, 0);
    }
    fn_800F8274(*(void **)(q + 0xA8), s)->m(r);
    e = *(u8 **)(q + 0x58);
    pp = (u8 **)(q + 0x58);
    while (e != NULL) {
        if (e == (u8 *)p) {
            *pp = *(u8 **)(e + 0x54);
            *(u8 **)(e + 0x54) = 0;
            *(u8 **)(e + 0x50) = 0;
            break;
        }
        pp = (u8 **)(e + 0x54);
        e = *(u8 **)(e + 0x54);
    }
    fn_80190C98(p);
}

} /* extern "C" */

} /* namespace m80190604 */

namespace m801906E0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern char lbl_802A1BD8[];
void fn_80060568(char *, s32, s32, s32);
void fn_80190C98(void *);
} /* extern "C" */
struct I801906E0 {
    u8 pad[36];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(void *o);
};
struct O801906E0 {
    u8 pad[80];
    u32 f80;
    O801906E0 *f84;
    O801906E0 *f88;
    u8 pad2[104 - 92];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void *v3();
};
extern "C" {
void fn_801906E0(O801906E0 *a, O801906E0 *b) {
    I801906E0 *pb;
    void *pa;
    O801906E0 **pp;
    O801906E0 *e;
    pa = a->v3();
    pb = (I801906E0 *)b->v3();
    if (pa == 0 || pb == 0) {
        fn_80060568(lbl_802A1BD8, 0, 0, 0);
    }
    pb->v5(pa);
    for (pp = &b->f88, e = b->f88; e != 0; pp = &e->f84, e = e->f84) {
        if (e == a) {
            *pp = e->f84;
            e->f84 = 0;
            e->f80 = 0;
            break;
        }
    }
    fn_80190C98(a);
}

} /* extern "C" */

} /* namespace m801906E0 */

namespace m801907D8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */
struct Q801907D8;
struct R801907D8 {
    u8 pad[36];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(Q801907D8 *q);
};
struct Q801907D8 { R801907D8 *r; };
struct Self801907D8;
struct Owner801907D8 { u8 pad[88]; Self801907D8 *head; };
struct Self801907D8 {
    u8 pad[80];
    Owner801907D8 *owner;
    Self801907D8 *next;
    u8 pad2[104 - 88];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual Q801907D8 *GetQ();
};
extern "C" {
void fn_80190C98(Self801907D8 *p);

static inline void Unlink801907D8(Owner801907D8 *o, Self801907D8 *p) {
    Self801907D8 *n;
    Self801907D8 **pp;
    n = o->head;
    pp = &o->head;
    for (; n != 0; n = n->next) {
        if (n == p) {
            *pp = n->next;
            n->next = 0;
            n->owner = 0;
            return;
        }
        pp = &n->next;
    }
}

void fn_801907D8(Self801907D8 *p) {
    Q801907D8 *q = p->GetQ();
    if (q->r == 0 || p->owner == 0) {
        return;
    }
    q->r->v5(q);
    Unlink801907D8(p->owner, p);
    fn_80190C98(p);
}

} /* extern "C" */

} /* namespace m801907D8 */

namespace m80190888 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
u32 fn_800F8274(int, int);
void fn_80190C98(int);
struct VCall_fn_80190888_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80190888_1 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_80190888(u32 param_1, u32 *param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;

    iVar1 = ((VCall_fn_80190888_0 *)(param_1))->m();
    if ((iVar1 != 0) && (iVar2 = fn_800F8274((int)(param_2[0x2a]), (int)(param_3)), iVar2 != 0)) {
        *param_2 = *param_2 & 0xfff7ffff;
        ((VCall_fn_80190888_1 *)(iVar2))->m((u32)(iVar1));
        if (*(u32 **)(param_1 + 0x50) != param_2) {
            *(u32 **)(param_1 + 0x50) = param_2;
            *(u32 *)(param_1 + 0x54) = param_2[0x16];
            param_2[0x16] = param_1;
        }
        fn_80190C98((int)(param_1));
    }
}
}

} /* namespace m80190888 */

namespace m80190940 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80190C98(u8 *);
struct VCall_fn_80190940_2 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(u32); };
struct VCall_fn_80190940_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual u32 m(); };
struct VCall_fn_80190940_1 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual VCall_fn_80190940_2 *m(); };

void fn_80190940(u8 *param_1, u8 *param_2) {
    u32 iVar1;
    VCall_fn_80190940_2 *iVar2;

    iVar1 = ((VCall_fn_80190940_0 *)param_1)->m();
    iVar2 = ((VCall_fn_80190940_1 *)param_2)->m();
    if (iVar1 == 0 || iVar2 == 0) {
        return;
    }
    iVar2->m(iVar1);
    if (*(u8 **)(param_1 + 0x50) != param_2) {
        *(u8 **)(param_1 + 0x50) = param_2;
        *(u32 *)(param_1 + 0x54) = *(u32 *)(param_2 + 0x58);
        *(u8 **)(param_2 + 0x58) = param_1;
    }
    fn_80190C98(param_1);
}

} /* extern "C" */

} /* namespace m80190940 */

namespace m801909F4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8018B76C(int, int, int);

void fn_801909F4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    fn_8018B76C((int)(param_2), (int)(param_1), (int)(param_4));
}

} /* extern "C" */

} /* namespace m801909F4 */

namespace m80190A24 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V { f32 x, y, z; };
struct Seg { V a, b; };
struct R { u32 f0; Seg s; V *pa; V *pb; Seg s2; V a60; V b72; int f84; int f88; f32 f92; V d96; };
struct O { u32 f0; u8 pad4[20]; u8 f24[32]; void *f56; u8 pad60[44]; virtual void a0(); virtual void a1(); virtual void upd(); virtual void a3(); virtual void *def(); };
extern u32 lbl_80364B38;
extern O *lbl_8035AE40;
int fn_80100B10(void *, R *);
void fn_8017C824(void *, O *, void *, R *);
f32 fn_80101590(V *, V *);
void fn_80101820(V *);
int fn_801009DC(void *, int, int, f32 *, V *, V *, f32 *, int);
int fn_800FC4A0(R *, f32);
void fn_8018B500(R *, int);
void fn_80190A24(O *o, R *r, void *x) {
    if (o->f0 & 4) o->upd();
    if (r->f0 & 8) {
        r->a60 = *r->pa;
        r->b72 = *r->pb;
        r->s2.a.x = r->s.a.x;
        r->s2.a.y = r->s.a.y;
        r->s2.a.z = r->s.a.z;
        r->s2.b.x = r->s.b.x;
        r->s2.b.y = r->s.b.y;
        r->s2.b.z = r->s.b.z;
        r->f0 &= ~8;
        r->f0 |= lbl_80364B38;
    }
    lbl_8035AE40 = o;
    if (o->f56) {
        if (!fn_80100B10(o->f24, r)) return;
        if (!x) x = o->def();
        fn_8017C824(o->f56, o, x, r);
        return;
    }
    V hit;
    f32 t;
    int a = r->f84;
    int b = r->f88;
    if (r->f0 & 4) {
        r->f92 = fn_80101590(&r->s.a, &r->s.b);
        r->f0 &= ~4;
    }
    f32 len = r->f92;
    if (r->f0 & 1) {
        r->d96.x = r->b72.x - r->a60.x;
        r->d96.y = r->b72.y - r->a60.y;
        r->d96.z = r->b72.z - r->a60.z;
        fn_80101820(&r->d96);
        r->f0 &= ~1;
    }
    if (fn_801009DC(o->f24, a, b, &len, &r->d96, &hit, &t, 0) && fn_800FC4A0(r, t)) fn_8018B500(r, 1);
}

} /* extern "C" */

} /* namespace m80190A24 */

namespace m80190C48 {
extern "C" {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

void fn_8017C324(void *a, void *b, void *c, void *d, void *e);
typedef struct { u8 pad[0x38]; void *p; } S80190C48;
void fn_80190C48(S80190C48 *a, S80190C48 *b, void *c) { if (a->p == 0 || b->p == 0) return; fn_8017C324(a->p, a, b->p, b, c); }

} /* extern "C" (c unit) */
} /* namespace m80190C48 */

namespace m80190C94 {
extern "C" {
/* Functions from 0x80190C94 to 0x80190C98, found by decomp-toolkit. */

int fn_80190C94(int a) { return a; }

} /* extern "C" (c unit) */
} /* namespace m80190C94 */

namespace m80190C98 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct Owner80190C98 {
    u8 pad[0x50];
    struct Node80190C98 *heads[4];
} Owner80190C98;

typedef struct Node80190C98 {
    Owner80190C98 *owner;
    u8 pad4[0x10];
    struct Node80190C98 *next;
    u8 pad18[4];
    struct Node80190C98 *link;
} Node80190C98;

typedef struct Obj80190C98 {
    u32 flags;
    u8 pad4[0x3C];
    Node80190C98 *lists[4];
    u8 pad50[4];
    struct Obj80190C98 *sibling;
    struct Obj80190C98 *child;
} Obj80190C98;

void fn_80190C98(Obj80190C98 *p) {
    Obj80190C98 *q;
    if ((p->flags & 4) == 0) {
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[0];
            if (n != 0 && (p->flags & 0x20) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[0];
                    o->heads[0] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x20;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[1];
            if (n != 0 && (p->flags & 0x40) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[1];
                    o->heads[1] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x40;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[2];
            if (n != 0 && (p->flags & 0x80) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[2];
                    o->heads[2] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x80;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[3];
            if (n != 0 && (p->flags & 0x100) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[3];
                    o->heads[3] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x100;
            }
        }
        p->flags |= 4;
        for (q = p->child; q != 0; q = q->sibling) {
            fn_80190C98(q);
        }
    }
}

} /* extern "C" */

} /* namespace m80190C98 */

namespace m80190DEC {
extern "C" {
/* Functions from 0x80190DEC to 0x80190DFC, found by decomp-toolkit. */

s32 fn_80190DEC(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}

s32 fn_80190DF4(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}


} /* extern "C" (c unit) */
} /* namespace m80190DEC */

namespace m80190DFC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80106B40(int, int);
void fn_80190C98(int);

void fn_80190DFC(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x34) != 0) && (*(u32 *)(param_1 + 0x30) != 0)) {
        fn_80106B40((int)(*(u32 *)(param_1 + 0x34)), (int)(*(u32 *)(param_1 + 0x30)));
        fn_80190C98((int)(param_1));
    }
}

} /* extern "C" */

} /* namespace m80190DFC */

namespace m80190E48 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */
struct R {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void set(u32);
};
struct Q {
    u8 pad[48];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual R *get();
};
struct H {
    u8 pad[16];
    u32 f16;
    u32 f20;
    u8 pad2[36 - 24];
    virtual void v0(); virtual void v1();
    virtual ~H();
};
struct S44 { u32 f0; Q *f4; };
struct P { u32 flags; u8 pad[40]; S44 *f44; H *f48; };
extern "C" {
void fn_80190E48(P *p) {
    if (p->f48 != 0 && (p->flags & 8)) {
        R *r = p->f44->f4->get();
        r->set(p->f48->f16);
        r->set(p->f48->f20);
        delete p->f48;
        p->flags &= ~8;
    }
    p->f48 = 0;
}

} /* extern "C" */

} /* namespace m80190E48 */

namespace m80190F14 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern "C" void *memset(void *, int, unsigned long);
extern f32 lbl_80364B3C;
extern f32 lbl_803596E0[];
struct D48 { u8 pad[16]; void *f16; void *f20; u8 pad24[12]; virtual void d0(); virtual void d1(); virtual ~D48(); };
struct R { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void use(void *); };
struct Q { u8 pad[48]; virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual R *get(); };
struct H44 { u8 pad[4]; Q *f4; };
struct X0 { u8 pad[4]; };
struct N { u32 f0; u8 pad4[4]; f32 f8, f12, f16, f20, f24, f28, f32_, f36, f40; H44 *f44; D48 *f48; void *f52; u32 f56; u32 f60; u8 f64[4]; void **f68; u8 pad72[4]; void **f76; N *f80; N *f84; N *f88; int f92; int f96; };
void fn_8019B380(void *, N *);
void fn_8019B048(void *, N *);
static inline void rm(N *p, N *n) {
    N *c = p->f88;
    N **pp = &p->f88;
    for (; c; c = c->f84) {
        if (c == n) {
            *pp = c->f84;
            c->f84 = 0;
            c->f80 = 0;
            return;
        }
        pp = &c->f84;
    }
}
void fn_80190F14(N *n) {
    if (n->f68) fn_8019B380(*n->f68, n);
    if (n->f76) fn_8019B048(*n->f76, n);
    if (n->f80) rm(n->f80, n);
    N *c = n->f88;
    while (c) {
        N *nx = c->f84;
        rm(n, c);
        c = nx;
    }
    if (n->f48 && (n->f0 & 8)) {
        R *r = n->f44->f4->get();
        r->use(n->f48->f16);
        r->use(n->f48->f20);
        delete n->f48;
        n->f0 &= ~8;
    }
    n->f48 = 0;
    if (n->f52 && (n->f0 & 0x10)) delete (u8 *)n->f52;
    n->f0 = 0;
    n->f8 = lbl_80364B3C;
    n->f12 = lbl_80364B3C;
    n->f16 = lbl_80364B3C;
    n->f20 = lbl_803596E0[0];
    n->f24 = lbl_80364B3C;
    n->f28 = lbl_80364B3C;
    n->f32_ = lbl_80364B3C;
    n->f36 = lbl_803596E0[0];
    n->f40 = lbl_803596E0[0];
    n->f44 = 0;
    n->f48 = 0;
    n->f52 = 0;
    n->f56 = 0;
    n->f60 = 0;
    memset(n->f64, 0, 16);
    n->f80 = 0;
    n->f84 = 0;
    n->f88 = 0;
    n->f92 = -1;
    n->f96 = -1;
}

} /* extern "C" */

} /* namespace m80190F14 */

namespace m80191160 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_80191160 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *m(); };
extern "C" void fn_80104004(void *, void *, void *);

void fn_80191160(V_80191160 *q) {
    u8 *p = (u8 *)q;
    void *r = q->m();
    if (r != NULL) {
        fn_80104004(r, p + 8, p + 24);
    } else {
        *(f32 *)(p + 24) = *(f32 *)(p + 8);
        *(f32 *)(p + 28) = *(f32 *)(p + 12);
        *(f32 *)(p + 32) = *(f32 *)(p + 16);
    }
    *(f32 *)(p + 36) = *(f32 *)(p + 20);
    *(u32 *)p &= ~4;
}

} /* extern "C" */

} /* namespace m80191160 */

namespace m801911DC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
typedef struct V801911DC {
    f32 x, y, z;
} V801911DC;
extern f32 lbl_80364B3C;
extern f32 lbl_80364B40;
void fn_80107244(void *, V801911DC *);
void fn_801077B0(void *, V801911DC *, V801911DC *, V801911DC *, s32);

struct S801911DC {
    u8 pad[48];
    void *f48;
};

void fn_801911DC(S801911DC *p, void *q) {
    V801911DC posB;
    V801911DC posA;
    V801911DC diff;
    V801911DC up;
    if (p->f48 == 0) {
        return;
    }
    if (p->f48) {
        fn_80107244(p->f48, &posB);
    } else {
        posB.x = lbl_80364B3C;
        posB.y = lbl_80364B3C;
        posB.z = lbl_80364B3C;
    }
    fn_80107244(q, &posA);
    {
        volatile V801911DC *d = &diff;
        volatile V801911DC *u = &up;
        f32 z;
        d->x = posA.x - posB.x;
        d->y = posA.y - posB.y;
        d->z = posA.z - posB.z;
        z = *(volatile f32 *)&lbl_80364B3C;
        u->x = z;
        u->y = z;
        u->z = *(volatile f32 *)&lbl_80364B40;
    }
    fn_801077B0(p->f48, &diff, &up, &posB, 0);
}

} /* extern "C" */

} /* namespace m801911DC */

namespace m801912A4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80364B3C;
extern f32 lbl_80364B40;
typedef struct V3_801912A4 { f32 x, y, z; } V3_801912A4;
typedef struct P_801912A4 { u8 pad[48]; void *f30; } P_801912A4;
void fn_80107244(void *, V3_801912A4 *);
void fn_801077B0(void *, V3_801912A4 *, V3_801912A4 *, V3_801912A4 *, void *);

static inline void GetPos_801912A4(P_801912A4 *p, V3_801912A4 *out) {
    if (p->f30) fn_80107244(p->f30, out);
    else { out->x = lbl_80364B3C; out->y = lbl_80364B3C; out->z = lbl_80364B3C; }
}
void fn_801912A4(P_801912A4 *self, V3_801912A4 *pos) {
    V3_801912A4 c; volatile V3_801912A4 d; volatile V3_801912A4 up;
    f32 z;
    if (self->f30) {
        GetPos_801912A4(self, &c);
        d.x = pos->x - c.x;
        d.y = pos->y - c.y;
        d.z = pos->z - c.z;
        z = *(volatile f32 *)&lbl_80364B3C;
        up.x = z;
        up.y = z;
        up.z = *(volatile f32 *)&lbl_80364B40;
        fn_801077B0(self->f30, (V3_801912A4 *)&d, (V3_801912A4 *)&up, &c, 0);
    }
}

} /* extern "C" */

} /* namespace m801912A4 */

namespace m80191360 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
typedef struct V80191360 {
    f32 x, y, z;
} V80191360;
extern f32 lbl_80364B3C;
extern f32 lbl_80364B40;
void fn_80107244(void *, V80191360 *);
void fn_801077B0(void *, V80191360 *, V80191360 *, V80191360 *, s32);

struct S80191360 {
    u8 pad[48];
    void *f48;
};

void fn_80191360(S80191360 *p, S80191360 *q, V80191360 *off) {
    V80191360 posB;
    V80191360 posA;
    V80191360 diff;
    V80191360 up;
    if (p->f48 == 0) {
        return;
    }
    if (q->f48) {
        fn_80107244(q->f48, &posA);
    } else {
        posA.x = lbl_80364B3C;
        posA.y = lbl_80364B3C;
        posA.z = lbl_80364B3C;
    }
    if (off) {
        posA.x += off->x;
        posA.y += off->y;
        posA.z += off->z;
    }
    if (p->f48) {
        fn_80107244(p->f48, &posB);
    } else {
        posB.x = lbl_80364B3C;
        posB.y = lbl_80364B3C;
        posB.z = lbl_80364B3C;
    }
    {
        volatile V80191360 *d = &diff;
        volatile V80191360 *u = &up;
        f32 z;
        d->x = posA.x - posB.x;
        d->y = posA.y - posB.y;
        d->z = posA.z - posB.z;
        z = *(volatile f32 *)&lbl_80364B3C;
        u->x = z;
        u->y = z;
        u->z = *(volatile f32 *)&lbl_80364B40;
    }
    fn_801077B0(p->f48, &diff, &up, &posB, 0);
}

} /* extern "C" */

} /* namespace m80191360 */

namespace m80191484 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct V3 { f32 x, y, z; };
struct Q4 { f32 v[4]; };
struct Q { u8 pad_[36]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void set(void *); };
struct X { u8 pad[16]; void *f16; u8 pad2[12]; u32 g32; };
struct P { V3 a; u8 pad[12]; V3 b; };
struct T {
    u32 f0;
    u32 f4;
    f32 f8, f12, f16, f20;
    f32 g24, g28, g32, g36;
    f32 f40;
    u32 f44;
    X *f48;
    P *f52;
    void *f56;
    u8 pad60[20];
    T *f80;
    T *f84;
    T *f88;
    u8 pad92[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void *get3(); virtual Q *get4();
    u8 pad108[60];
    void *f168;
};
struct B { u8 pad[144]; u8 f144[24]; u8 f168[216]; u8 f384[24]; u8 f408[4]; };
struct FT { void *f0, *f4, *f8; void (*f12)(void *, V3 *); void *f16, *f20; void (*f24)(void *, Q4 *); void *f28, *f32, *f36, *f40; void (*f44)(void *, V3 *, V3 *); };
extern FT lbl_803286D0;
extern u32 lbl_80364B44;
s32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_800FB064(R *, void *);
void fn_80101124(void *, R *);
void fn_800FF9E8(void *, R *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
T *fn_8019556C(T *);
Q *fn_800F8274(void *, void *);
void fn_80190C98(T *);
static inline void *look(B *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b->f144, id);
    return fn_800F9788(b->f168, nm, id);
}
static inline void *look2(B *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b->f384, id);
    return fn_800F9788(b->f408, nm, id);
}
static inline void *G3(T *o) { return o->get3(); }
static inline Q *G4(T *o) { return o->get4(); }
static inline T *LK(B *b, u8 *id, char *nm) { T *o; if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id); return o; }
void fn_80191484(T *t, B *b, R *r, u32 tok) {
    u8 id[8];
    char nm[8];
    V3 v88;
    V3 w76;
    V3 a64;
    V3 b52;
    V3 v40;
    Q4 c;
    switch (tok) {
    case 146: fn_800FB33C(r); break;
    case 147: fn_800FB33C(r); break;
    case 104: t->f0 |= 2; break;
    case 105: t->f0 &= ~2; break;
    case 93:
        fn_80101124(&t->f8, r);
        t->f20 = fn_800FB2E0(r);
        t->g24 = t->f8;
        t->g28 = t->f12;
        t->g32 = t->f16;
        t->g36 = t->f20;
        break;
    case 94:
        t->f40 = fn_800FB2E0(r);
        t->f40 = t->f40 * t->f40;
        break;
    case 96: {
        T *o, *o2;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id);
        if (!o) r->err(37);
        o2 = fn_8019556C(o);
        if (!o2) r->err(35);
        fn_800FB064(r, id);
        p = t->get3();
        if (!p) break;
        q = fn_800F8274(o2->f168, id);
        if (!q) break;
        o2->f0 &= ~0x80000;
        q->set(p);
        if (t->f80 != o2) {
            t->f80 = o2;
            t->f84 = o2->f88;
            o2->f88 = t;
        }
        fn_80190C98(t);
        break;
    }
    case 97: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        o = LK(b, id, nm);
        if (!o) r->err(37);
        p = G3(t);
        q = o->get4();
        if (!p || !q) break;
        q->set(p);
        if (t->f80 != o) {
            t->f80 = o;
            t->f84 = o->f88;
            o->f88 = t;
        }
        fn_80190C98(t);
        break;
    }
    case 158: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id);
        if (!o) r->err(37);
        t = fn_8019556C(t);
        if (!t) r->err(35);
        fn_800FB064(r, id);
        p = o->get3();
        if (!p) break;
        q = fn_800F8274(t->f168, id);
        if (!q) break;
        t->f0 &= ~0x80000;
        q->set(p);
        if (o->f80 != t) {
            o->f80 = t;
            o->f84 = t->f88;
            t->f88 = o;
        }
        fn_80190C98(o);
        break;
    }
    case 159: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        o = LK(b, id, nm);
        if (!o) r->err(37);
        p = G3(o);
        q = t->get4();
        if (!p || !q) break;
        q->set(p);
        if (o->f80 != t) {
            o->f80 = t;
            o->f84 = t->f88;
            t->f88 = o;
        }
        fn_80190C98(o);
        break;
    }
    case 98: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&v88, r);
        x = t->f48;
        lbl_803286D0.f12(x->f16, &v88);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 99: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&a64, r);
        fn_80101124(&b52, r);
        x = t->f48;
        lbl_803286D0.f44(x->f16, &a64, &b52);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 100: {
        X *x;
        if (!t->f48) r->err(39);
        fn_800FF9E8(&c, r);
        x = t->f48;
        lbl_803286D0.f24(x->f16, &c);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 101: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&v88, r);
        x = t->f48;
        lbl_803286D0.f12(x->f16, &v88);
        x->g32 |= lbl_80364B44;
        fn_80101124(&w76, r);
        a64.x = w76.x - v88.x;
        a64.y = w76.y - v88.y;
        a64.z = w76.z - v88.z;
        fn_80101124(&b52, r);
        x = t->f48;
        lbl_803286D0.f44(x->f16, &a64, &b52);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 102:
        if (!t->f52) r->err(39);
        fn_80101124(&v40, r);
        { P *pp = t->f52; pp->a.x = v40.x; pp->a.y = v40.y; pp->a.z = v40.z; }
        break;
    case 103:
        if (!t->f52) r->err(39);
        fn_80101124(&v40, r);
        { P *pp = t->f52; pp->b.x = v40.x; pp->b.y = v40.y; pp->b.z = v40.z; }
        break;
    case 119:
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        t->f56 = look2(b, nm, id);
        if (!t->f56) r->err(37);
        break;
    case 120: t->f0 |= 0x200; break;
    case 121: t->f0 &= ~0x200; break;
    case 142: case 143: case 144: case 145: break;
    default: r->err(30); break;
    }
}

} /* extern "C" */

} /* namespace m80191484 */

namespace m80191DBC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */
struct E80191DBC {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 code);
};
extern "C" {

struct S80191DBC {
    u8 pad[48];
    void *f48;
    void *f52;
};

void *fn_80193B68(void *src, E80191DBC *err);
void *fn_80193A98(void *src, E80191DBC *err);

void fn_80191DBC(S80191DBC *self, void *src, E80191DBC *err, s32 type) {
    switch (type) {
    case 58:
        if (self->f48 != 0) {
            err->v4(39);
        }
        self->f48 = fn_80193B68(src, err);
        break;
    case 60:
        if (self->f52 != 0) {
            err->v4(39);
        }
        self->f52 = fn_80193A98(src, err);
        break;
    default:
        err->v4(30);
        break;
    }
}

} /* extern "C" */

} /* namespace m80191DBC */

namespace m80191EA8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C4_80191EA8 {
    f32 r, g, b, a;
};
struct P5_80191EA8 {
    C4_80191EA8 c;
    f32 e;
};
struct D80191EA8 {
    s32 f0;
    P5_80191EA8 p;
    u32 f24;
    u32 f28;
    u32 f32;
};
struct S80191EA8 {
    u32 flags;
    u32 f4;
    C4_80191EA8 cur;
    P5_80191EA8 p;
    u32 f44;
    u32 f48;
    u32 f52;
    u8 pad[104 - 56];
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
};
extern "C" {

void fn_80190C98(S80191EA8 *self);

void fn_80191EA8(S80191EA8 *self, u32 a1, const D80191EA8 *desc) {
    if (self->flags & 1) {
        self->v10();
    }
    self->flags = 1;
    if (desc->f0 != 0) {
        self->flags |= 2;
    }
    self->cur = desc->p.c;
    self->p.c = desc->p.c;
    self->p.e = desc->p.e;
    self->f44 = a1;
    if (desc->f28 != 0) {
        self->f48 = desc->f28;
    }
    if (desc->f32 != 0) {
        self->f52 = desc->f32;
    }
    fn_80190C98(self);
}

} /* extern "C" */

} /* namespace m80191EA8 */

struct C80106E10 { u8 pad[48]; C80106E10(); };
namespace m80191F88 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 __vt__9C80129A9C[];
void __ct__9C80105074Fv(void *);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(void *);
}
struct C80105818 {
    u8 pad[36];
    u8 *vt;
    C80105818() { __ct__9C80105074Fv(this); vt = __vt__9C80129A9C; }
};
struct R { virtual void *g(); };
struct Q { u8 pad[48]; virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7(); virtual void q8(); virtual void q9(); virtual void q10(); virtual void q11(); virtual void q12(); virtual void q13(); virtual void q14(); virtual R *get(); };
struct O { u32 f0; Q *q; };
struct S { u32 f0; u16 f4; u16 pad6; f32 v[8]; f32 f40; O *o; C80105818 *a; C80106E10 *b; u32 f56; u32 f60; u8 pad64[104 - 64];
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void reset();
    u8 pad108[136 - 108]; u32 f136; };
extern "C" {
extern void *lbl_8035AE60;
void fn_80190C98(S *s);
void fn_80104F78(void *, void *, void *);
void fn_80103CA0(void *, void *);
void fn_80106DAC(void *, void *);

static inline int canCopy(S *src) {
    int r = 1;
    if (src->f4 >= 1 && src->f4 <= 13 && src->f136) r = 0;
    return r;
}

void fn_80191F88(S *s, O *o, S *src) {
    R *r;
    if (s->f0 & 1) s->reset();
    s->f0 = 1;
    s->f0 |= src->f0 & 0x202;
    s->v[0] = src->v[0]; s->v[1] = src->v[1]; s->v[2] = src->v[2]; s->v[3] = src->v[3];
    s->v[4] = src->v[4]; s->v[5] = src->v[5]; s->v[6] = src->v[6]; s->v[7] = src->v[7];
    fn_80190C98(s);
    s->f40 = src->f40;
    s->o = o;
    r = s->o->q->get();
    s->f56 = src->f56;
    if (src->a && canCopy(src)) {
        if (!lbl_8035AE60) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AE60);
        s->a = new C80105818;
        fn_800F7E98();
        if (!s->a) fn_800604C4(-4, 0, 0, 0);
        fn_80104F78(s->a, r->g(), r->g());
        fn_80103CA0(s->a, src->a);
        s->f0 |= 8;
    }
    if (src->b) {
        if (!lbl_8035AE60) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AE60);
        s->b = new C80106E10;
        fn_800F7E98();
        if (!s->b) fn_800604C4(-4, 0, 0, 0);
        fn_80106DAC(s->b, src->b);
        s->f0 |= 16;
    }
    s->f60 = src->f60;
}

} /* extern "C" */

} /* namespace m80191F88 */

namespace m80192210 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct S80192210 {
    u8 pad[292];
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual u32 state();
};

struct P80192210 {
    u32 flags;
    u8 pad4[40];
    u32 val;
    u8 pad48[56];
    virtual void m0(void *, S80192210 *, u32);
    virtual void m1(u32, S80192210 *, u32);
    virtual void m2();
    virtual void p3(); virtual void p4();
    virtual void m5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
    virtual void m10();
};

void fn_80192210(P80192210 *p, u32 a, void *b, S80192210 *s) {
    u32 st;
    if (p->flags & 1) {
        p->m10();
    }
    p->val = a;
    while ((st = s->state()) != 5) {
        p->m0(b, s, st);
    }
    p->m5();
    while ((st = s->state()) != 6) {
        p->m1(a, s, st);
    }
    p->m2();
    p->flags |= 1;
}

} /* extern "C" */

} /* namespace m80192210 */

namespace m80192330 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void __dl__FPv(int);
struct VCall_fn_80192330_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

s32 __dt__9C80192398Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x68) = (u8 *)lbl_802E9218;
        ((VCall_fn_80192330_0 *)(param_1))->m();
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m80192330 */

namespace m80192398 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct { f32 x, y, z, w; } V4_80192398;
typedef struct {
    s32 f0;
    s16 f4;
    V4_80192398 a;
    V4_80192398 b;
    f32 f40;
    s32 f44, f48, f52, f56, f60;
    u8 buf[16];
    s32 f80, f84, f88, f92, f96, f100;
    void *vt;
} C80192398;
extern f32 lbl_80364B3C;
extern f32 lbl_803596E0[];
void fn_80100CF4(V4_80192398 *p);
void *memset(void *p, s32 c, u32 n);

C80192398 *__ct__9C80192398Fv(C80192398 *p) {
    p->vt = (u8 *)lbl_802E9218;
    fn_80100CF4(&p->a);
    fn_80100CF4(&p->b);
    p->f4 = 0;
    p->f100 = 0;
    p->f0 = 0;
    p->a.x = lbl_80364B3C;
    p->a.y = lbl_80364B3C;
    p->a.z = lbl_80364B3C;
    p->a.w = lbl_803596E0[0];
    p->b.x = lbl_80364B3C;
    p->b.y = lbl_80364B3C;
    p->b.z = lbl_80364B3C;
    p->b.w = lbl_803596E0[0];
    p->f40 = lbl_803596E0[0];
    p->f44 = 0;
    p->f48 = 0;
    p->f52 = 0;
    p->f56 = 0;
    p->f60 = 0;
    memset(p->buf, 0, 16);
    p->f80 = 0;
    p->f84 = 0;
    p->f88 = 0;
    p->f92 = -1;
    p->f96 = -1;
    return p;
}

} /* extern "C" */

} /* namespace m80192398 */
