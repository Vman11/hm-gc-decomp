// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern const char lbl_8035EEA0[7];
extern u8 *lbl_8035B65C;
s32 fn_8007239C(void *);
void fn_800746A4(void *, void *);
void fn_8019B6B8(void *, void *);
} /* extern "C" */

struct O8006BE6C {
    u8 pad[140 - 8];
    virtual void v0();
};

struct V8006BE6C {
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
    virtual void v33(const char *, s32, s32, s32, s32);
};

struct Q8006BE6C {
    u32 f0;
    u8 pad[132];
    u32 f136;
};

struct T8006BE6C {
    u8 pad[12];
    u32 *f12;
};

struct C8006BE6C {
    u8 pad[224];
    void *f224;
    u8 pad2[52];
    void *f280;
    u8 pad3[240];
    T8006BE6C *f524;
    u8 pad4[20];
    Q8006BE6C **f548;
    V8006BE6C **f552;
    u8 pad5[4];
    u32 f560;
    u8 pad6[16];
    u8 f580[16];
    s32 f596;
};

static inline s32 Cur(C8006BE6C *p) {
    return fn_8007239C(p->f280) - 1;
}
static inline u32 Count(C8006BE6C *p) {
    return p->f524->f12[Cur(p)];
}

static inline void Remove(C8006BE6C *p, V8006BE6C *cur) {
    s32 found;
    u32 j;
    Q8006BE6C *q;

    found = -1;
    for (j = 0; j < Count(p); j++) {
        if (p->f552[j] == cur) {
            found = j;
            j = Count(p);
            p->f552[j] = 0;
        }
    }
    q = p->f548[found];
    if (q != 0) {
        q->f0 &= ~0x800;
        if (q->f136 == 0) {
            fn_8019B6B8(*(void **)(lbl_8035B65C + 12), q);
        }
    }
}

extern "C" {

void fn_8006BE6C(C8006BE6C *p) {
    u32 i;

    if (p->f596 != 0) {
        fn_800746A4(p->f224, p->f580);
    }
    for (i = 0; i < Count(p); i++) {
        if (p->f552[i] != 0) {
            p->f552[i]->v33(lbl_8035EEA0, 0, 0, 0, 0);
            Remove(p, p->f552[i]);
            p->f552[i] = 0;
        }
    }
    p->f560 = 0;
}

} /* extern "C" */
