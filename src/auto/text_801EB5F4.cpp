// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FAEF8(void *);
} /* extern "C" */
struct B801EB5F4 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual u32 v5();
};
struct A801EB5F4 {
    u8 pad[16];
    u32 x10;
    virtual void v0(B801EB5F4 *, u32);
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
extern "C" {

void fn_801EB5F4(A801EB5F4 *a, u32 p2, B801EB5F4 *b) {
    u32 tok;
    if (a->x10) a->v3();
    a->x10 = p2;
    fn_800FAEF8(b);
    while ((tok = b->v5()) != 6) {
        a->v0(b, tok);
    }
}

} /* extern "C" */
