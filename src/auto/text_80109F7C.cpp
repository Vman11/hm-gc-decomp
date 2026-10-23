// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010C3BC(void *, void *);
void *fn_800FB284(void *);
void fn_800FB9D4(void *, void *, void *);
void fn_800FA5D8(void *, void *);
} /* extern "C" */
struct V80109F7C {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct O80109F7C : V80109F7C {
    u32 buf1[5];
    u32 buf2[5];
    s32 x34;
};
extern "C" {

s32 fn_80109F7C(O80109F7C *o, void *p2, void *p3, void *p4, void *p5) {
    u32 *cur = o->x34 ? o->buf2 : o->buf1;
    void *r;
    if (cur[0]) o->v2();
    fn_8010C3BC(o, p2);
    r = fn_800FB284(p3);
    fn_800FB9D4(o->buf1, p4, p5);
    fn_800FA5D8(o->buf1, r);
    o->x34 = 0;
    return 0;
}

} /* extern "C" */
