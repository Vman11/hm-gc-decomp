// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V80154BE0 {
    u8 pad[32];
    virtual ~V80154BE0();
    virtual void unlock();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void lock();
};
struct S80154BE0 {
    u16 fmt;
    u16 bpp;
    u8 pad4[22];
    u16 flags;
    u16 w;
    u16 h;
    u8 pad20[32];
    void *pal;
    void *data;
    V80154BE0 *src;
};
void *memcpy(void *dst, const void *src, u32 n);
void fn_801548F0(S80154BE0 *self, V80154BE0 *src);
void fn_801291CC(void *pal, V80154BE0 *src);
void DCFlushRange(void *p, u32 n);

void fn_80154BE0(S80154BE0 *self) {
    if (self->flags & 0x40) {
        self->src->lock();
        if (self->flags & 0x10) {
            if (self->fmt & 0x3E0) {
                memcpy(self->data, *(void **)((u8 *)self->src + 68), (s32)(self->w * self->h) / 2);
            } else {
                fn_801548F0(self, self->src);
            }
            if (self->pal != 0) {
                fn_801291CC(self->pal, self->src);
            }
        }
        if (self->src != 0) {
            self->src->unlock();
            delete self->src;
            self->src = 0;
        }
    }
    {
        u32 rb = (u32)(self->w * self->bpp + 7) >> 3;
        DCFlushRange(self->data, rb * self->h);
    }
    self->flags &= ~0x5C;
}

} /* extern "C" */
