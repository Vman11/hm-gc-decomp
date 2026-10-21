// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FA1A0(void *p);

struct Inner80214E80 {
    u8 pad[8];
    u32 flags;
};

struct Obj80214E80 {
    u8 pad[4];
    Inner80214E80 *inner;
};

struct C80214E80 {
    u8 pad[24];
    virtual void f0();
    virtual void f1();
};

static inline s32 isBusy80214E80(Obj80214E80 *o) {
    Inner80214E80 *i = o->inner;
    u8 r;
    if (i == 0) return 0;
    r = (i->flags & 4) || (i->flags & 8);
    return r;
}

void fn_80214E80(u8 *p) {
    Obj80214E80 *o = *(Obj80214E80 **)(p + 28);
    if (o != 0) {
        if (o != 0 && isBusy80214E80(o)) {
            ((C80214E80 *)p)->f1();
        }
    }
    *(u32 *)(p + 28) = 0;
    *(u32 *)(p + 32) = 0;
    fn_800FA1A0(p);
}

} /* extern "C" */
