// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8021BFD8 {
    u32 flags;
    u8 pad4[12];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(void *);
    virtual void v10(void *);
    virtual void v11(void *);
    virtual void v12(void *);
    virtual void v13(void *);
};

extern u32 lbl_80365910;
extern u32 lbl_80365914;
extern u32 lbl_80365918;
void fn_8021B95C(S_8021BFD8 *, void *);

void fn_8021BFD8(S_8021BFD8 *p, void *a, void *b, void *c, void *d, void *e, void *f) {
    if (p->flags & 1) {
        p->v3();
    }
    fn_8021B95C(p, f);
    M2C_FIELD(p, void **, 0x14) = a;
    if (M2C_FIELD(p, void **, 0x14) != 0) {
        p->v9(M2C_FIELD(p, void **, 0x14));
    }
    M2C_FIELD(p, void **, 0x18) = b;
    if (M2C_FIELD(p, void **, 0x18) != 0) {
        p->v10(M2C_FIELD(p, void **, 0x18));
    }
    M2C_FIELD(p, void **, 0x1c) = c;
    if (M2C_FIELD(p, void **, 0x1c) != 0) {
        p->v11(M2C_FIELD(p, void **, 0x1c));
    }
    M2C_FIELD(p, void **, 0x20) = d;
    if (M2C_FIELD(p, void **, 0x20) != 0) {
        p->v12(M2C_FIELD(p, void **, 0x20));
    }
    M2C_FIELD(p, void **, 0x24) = e;
    if (M2C_FIELD(p, void **, 0x24) != 0) {
        p->v13(M2C_FIELD(p, void **, 0x24));
    }
    p->flags |= lbl_80365910;
    p->flags |= lbl_80365914;
    p->flags |= lbl_80365918;
}

} /* extern "C" */
