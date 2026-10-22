// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct V8020F580 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 v4(u32 off);
};
extern "C" {

typedef struct {
    u8 pad[1764];
    V8020F580 *dev;
} S8020F580_2;

typedef struct {
    u8 pad[28];
    S8020F580_2 *b;
} S8020F580_1;

typedef struct {
    u32 pos;
    u32 size;
    u32 flags;
    u8 pad[8];
    S8020F580_1 *a;
    u32 base;
} S8020F580;

s32 fn_8020F580(S8020F580 *p, u32 pos) {
    if (pos >= p->size) {
        return 8;
    }
    if (p->a->b->dev->v4(p->base + p->pos + pos) != 0) {
        return 3;
    }
    p->flags &= ~0x20000;
    p->pos = pos;
    return 0;
}

} /* extern "C" */
