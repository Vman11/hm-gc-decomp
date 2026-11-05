#include "common.h"

extern "C" {

struct C801638D4 { u8 r, g, b, a; };
struct D801638D4 { u8 pad[0x279dc]; C801638D4 c; };
struct P801638D4 { u8 pad[0xc]; u32 flags; u8 pad10[0x1930 - 0x10]; };
struct S801638D4 : P801638D4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(C801638D4 *c);
    D801638D4 *d;
};
void fn_801638D4(S801638D4 *p, C801638D4 *c) {
    if (p->flags & 2) {
        p->v30(c);
        C801638D4 *dc = &p->d->c; u8 a, b, g, r; r = c->r; g = c->g; dc->r = r; b = c->b; dc->g = g; a = c->a; dc->b = b; dc->a = a;
    }
}

} /* extern "C" */
