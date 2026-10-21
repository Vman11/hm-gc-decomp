// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B {
    u8 pad[152];
    u8 f152[4];
};
struct Node {
    u32 flags;
    u8 pad[20];
    u8 f24[80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void *v4();
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
    virtual void v24(B *, void *);
};
struct Group : Node {
    u8 pad2[152 - 108];
    u32 n;
    Node **children;
    f32 *thresholds;
    s32 offset;
};
f32 fn_8010155C(void *, void *);

static inline u32 FindIdx(Group *self, f32 t) {
    u32 i;
    for (i = 0; i < self->n; i++) {
        if (t <= self->thresholds[i]) break;
    }
    return i;
}
static inline s32 Clamp(s32 v, s32 lo, u32 hi) {
    if (v < lo) v = lo;
    else if (v > hi) v = hi;
    return v;
}
void fn_8018C818(Group *self, B *b, void *c) {
    s32 off;
    void *pos;
    s32 idx;
    if (c == 0) c = self->v4();
    pos = b->f152;
    off = self->offset;
    if (self->flags & 4) self->v2();
    idx = FindIdx(self, fn_8010155C(self->f24, pos));
    idx = Clamp(idx + off, 0, self->n);
    if (idx < self->n) {
        Node *o = self->children[idx];
        if (o->flags & 0x800) o->v24(b, c);
    }
}

} /* extern "C" */
