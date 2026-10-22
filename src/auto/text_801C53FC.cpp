// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct C1C5;
struct N1C5 { C1C5 *obj; s32 on; N1C5 *next; };
struct C1C5 {
    virtual s32 has(s32);
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
    virtual s32 upd(void *, f32);
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
    virtual void neg(void *);
    virtual void pos(void *);
};
struct K1C5 {
    u8 pad_K1C5[0x80];
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
    virtual u32 kind();
};
struct Q1C5 {
    u8 pad_Q1C5[0x80];
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
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void fire(f32);
    u8 pad84[4]; N1C5 *f88; u8 pad8c[0x144 - 0x8c]; u32 f144; u8 pad148[0x16c - 0x148]; u8 *f16c; f32 f170; f32 f174; f32 f178; f32 f17c;
};

struct M1C5 { u8 pad[0x11c]; K1C5 *f11c; };
void fn_801D1120(f32, void *);
void fn_801D104C(f32, void *);
extern f32 lbl_80364FFC;

#define FX(o, off) (*(f32 *)((u8 *)(o) + (off)))
#define SX(o, off) (*(s32 *)((u8 *)(o) + (off)))
#define PX(o, off) (*(u8 **)((u8 *)(o) + (off)))

static inline void Neg1C5(u8 *o) {
    N1C5 *n;
    for (n = *(N1C5 **)(o + 0x88); n != NULL; n = n->next) {
        if (n->obj->has(0x12) != 0 && n->on != 0) {
            n->obj->neg(o);
        }
    }
    if (SX(o, 0x168) != 0) fn_801D1120(-FX(o, 0x1c0), o);
    if (SX(o, 0x180) != 0) fn_801D104C(-FX(o, 0x1c0), o);
}

static inline void Pos1C5(u8 *o) {
    N1C5 *n;
    for (n = *(N1C5 **)(o + 0x88); n != NULL; n = n->next) {
        if (n->obj->has(0x12) != 0 && n->on != 0) {
            n->obj->pos(o);
        }
    }
    if (SX(o, 0x168) != 0) fn_801D1120(FX(o, 0x1c0), o);
    if (SX(o, 0x180) != 0) fn_801D104C(FX(o, 0x1c0), o);
}

void fn_801C53FC(Q1C5 *p, f32 f) {
    N1C5 *n;
    s32 r = 0;
    for (n = p->f88; n != NULL; n = n->next) {
        if (n->obj->upd(p, f) == 0) r = 1;
    }
    if (r != 0) return;
    p->f170 += f;
    if (p->f170 > p->f174 && p->f144 == 0x40) {
        if (SX(p->f16c, 0x168) != 0) {
            if (p->f178 > FX(p->f16c, 0x50)) {
                p->f170 = lbl_80364FFC;
                if (((M1C5 *)p->f16c)->f11c) {
                    if (((M1C5 *)((M1C5 *)p->f16c)->f11c)->f11c->kind() == 0x79) {
                        Neg1C5(p->f16c);
                    }
                } else {
                    Pos1C5(p->f16c);
                }
                if (p->f178 < FX(p->f16c, 0x48)) p->fire(p->f178);
            }
            if (p->f178 < FX(p->f16c, 0x48)) {
                p->f170 = lbl_80364FFC;
                if (((M1C5 *)p->f16c)->f11c) {
                    if (((M1C5 *)((M1C5 *)p->f16c)->f11c)->f11c->kind() == 0x79) {
                        Pos1C5(p->f16c);
                    }
                } else {
                    Neg1C5(p->f16c);
                }
                if (p->f178 > FX(p->f16c, 0x50)) p->fire(p->f178);
            }
        }
        if (SX(p->f16c, 0x180) != 0) {
            if (p->f17c > FX(p->f16c, 0x54)) {
                p->f170 = lbl_80364FFC;
                Pos1C5(p->f16c);
                if (p->f17c < FX(p->f16c, 0x4c)) p->fire(p->f17c);
            }
            if (p->f17c < FX(p->f16c, 0x4c)) {
                p->f170 = lbl_80364FFC;
                Neg1C5(p->f16c);
                if (p->f17c > FX(p->f16c, 0x54)) p->fire(p->f17c);
            }
        }
    }
}

} /* extern "C" */

} /* extern "C" */
