// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct B8019777C {
    u32 flags;
    u8 pad[100];
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
struct S8019777C : B8019777C {
    u8 pad2[36];
    u32 f144;
    u32 f148;
    u32 f152;
    u8 pad3[20];
    f32 m[9];
};
extern "C" {
void fn_801A1060(S8019777C *p, void *a, S8019777C *b, void *c);
void fn_80197514(S8019777C *p, void *a);

void fn_8019777C(S8019777C *p, void *a, S8019777C *b, void *c) {
    if (p->flags & 1) {
        p->v10();
    }
    fn_801A1060(p, a, b, c);
    p->flags |= b->flags & 0x10000;
    p->flags |= b->flags & 0x20000;
    p->f144 = b->f144;
    p->m[0] = b->m[0];
    p->m[1] = b->m[1];
    p->m[2] = b->m[2];
    p->m[3] = b->m[3];
    p->m[4] = b->m[4];
    p->m[5] = b->m[5];
    p->m[6] = b->m[6];
    p->m[7] = b->m[7];
    p->m[8] = b->m[8];
    p->f152 = b->f152;
    fn_80197514(p, a);
}

} /* extern "C" */
