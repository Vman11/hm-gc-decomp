// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct R80272CD4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual u32 v3();
};
struct S80272CD4 {
    u32 a, b, c;
    R80272CD4 *obj;
    u32 d;
};
struct D80272CD4 {
    u32 a, b, c, d;
    R80272CD4 *obj;
    u32 h;
    u32 x18;
};
extern "C" {
void fn_80216B50(R80272CD4 *, u32);

static inline void Reset(D80272CD4 *p) {
    if (p->h) fn_80216B50(p->obj, p->h);
    p->a = 0;
    p->b = 0;
    p->c = 0;
    p->obj = 0;
    p->d = 0;
    p->h = 0;
    p->x18 = 0;
}

void fn_80272CD4(D80272CD4 *__restrict dst, S80272CD4 *__restrict src) {
    if (dst->h) Reset(dst);
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->obj = src->obj;
    dst->d = src->d;
    dst->h = src->obj->v3();
}

} /* extern "C" */
