// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { u8 pad[20]; virtual void v0(); virtual void notify(); };
struct Obj { u32 flags; };
s32 fn_8017C3B8(void *, Obj *, void *, Obj *);

static inline Obj *getA(u8 *p) {
    return *(Obj **)(p + 28) ? *(Obj **)(p + 28) : *(Obj **)(p + 24);
}
static inline Obj *getB(u8 *p) {
    return *(Obj **)(p + 36) ? *(Obj **)(p + 36) : *(Obj **)(p + 32);
}

void fn_801EEB2C(u8 *p) {
    s32 cur;
    if ((getA(p)->flags & 2) && (getB(p)->flags & 2)) {
        Obj *a = getA(p);
        void *x = *(void **)(p + 52);
        Obj *b = getB(p);
        cur = fn_8017C3B8(x, b, *(void **)(p + 48), a);
    } else {
        cur = 0;
    }
    if (cur != 0 && *(s32 *)(p + 40) != 0) {
        if (*(u32 *)(p + 44) & 4) {
            ((V *)p)->notify();
        }
    } else if (cur != 0 && *(s32 *)(p + 40) == 0) {
        if (*(u32 *)(p + 44) & 1) {
            ((V *)p)->notify();
        }
    } else if (cur == 0 && *(s32 *)(p + 40) != 0) {
        if (*(u32 *)(p + 44) & 2) {
            ((V *)p)->notify();
        }
    }
    *(s32 *)(p + 40) = cur;
}

} /* extern "C" */
