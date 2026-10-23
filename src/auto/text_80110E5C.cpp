// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
} E_80110E5C;

typedef struct {
    u8 pad0[8];
    u8 m8[28];
    void *f24;
    void *f28;
    u8 pad2C[4];
    s32 f30;
    void *f34;
    E_80110E5C arr[13];
    u8 pad1D8[4];
    s32 f1DC;
    u8 pad1E0[4];
    void *f1E4;
    s32 f1E8;
} S_80110E5C;

void __dla__FPv(void *);
void fn_802071EC(void *, S_80110E5C *);
void fn_80112190(E_80110E5C *);
void fn_8010CB34(void *, s32, s32, s32);

static inline void initE_80110E5C(E_80110E5C *e) {
    e->f0 = 0;
    e->f4 = 4;
    e->f8 = 0;
    e->fC = 0;
    e->f10 = 0;
    e->f14 = 0;
    e->f18 = 0;
    e->f1C = 0;
}

static inline void init_80110E5C(S_80110E5C *p) {
    u32 i;
    p->f24 = p;
    p->f34 = 0;
    for (i = 0; i < 13; i++) {
        initE_80110E5C(&p->arr[i]);
        initE_80110E5C(&p->arr[i]);
        p->arr[i].f0 = 0;
        p->arr[i].f4 = 0;
        p->arr[i].f8 = i;
    }
    p->f1E8 = 0;
    p->f1DC = 0;
    p->f1E4 = 0;
}

void fn_80110E5C(S_80110E5C *p) {
    u32 i;
    if (p->f34 != 0) {
        __dla__FPv(p->f34);
        p->f34 = 0;
    }
    if (p->f1E8 != 0) {
        if (p->f28 != 0) {
            fn_802071EC(p->f28, p);
        }
        for (i = 0; i < 13; i++) {
            fn_80112190(&p->arr[i]);
        }
        if (p->f1E4 != 0) {
            __dla__FPv(p->f1E4);
        }
        p->f28 = 0;
        p->f30 = 0;
        fn_8010CB34(p->m8, 0, 0, 0);
        init_80110E5C(p);
    }
}

} /* extern "C" */
