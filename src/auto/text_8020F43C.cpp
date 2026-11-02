// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V8020F43C {
    u32 cur;
    u8 pad[12];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 v4(u32 off);
    virtual s32 v5(void *buf, u32 len, u32 *out, s32 arg);
};
extern "C" {
typedef struct {
    u8 pad[1764];
    V8020F43C *dev;
} S8020F43C_2;
typedef struct {
    u8 pad[28];
    S8020F43C_2 *b;
} S8020F43C_1;
typedef struct {
    u32 pos;
    u32 size;
    volatile u32 flags;
    u8 pad[8];
    S8020F43C_1 *a;
    u32 base;
} S8020F43C;
extern u32 lbl_80365830;

s32 fn_8020F43C(S8020F43C *p, void *buf, u32 len, u32 *out, s32 arg) {
    V8020F43C *dev;
    u32 old;
    s32 r;
    if (out) {
        *out = 0;
    }
    if (p->a == 0 || !(p->flags & 0x10000)) {
        return 2;
    }
    if (len == 0) {
        return 0;
    }
    if (p->pos >= p->size) {
        p->flags |= lbl_80365830;
        return 8;
    }
    if (p->pos + len >= p->size) {
        p->flags |= lbl_80365830;
        len -= p->pos + len - p->size;
    }
    dev = p->a->b->dev;
    if (dev->v4(p->base + p->pos) != 0) {
        return 3;
    }
    old = dev->cur;
    r = dev->v5(buf, len, out, arg);
    p->pos += dev->cur - old;
    return r;
}
}

} /* extern "C" */
