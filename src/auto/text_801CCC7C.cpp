// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual s32 type();
};
typedef struct { Obj *obj; u8 pad[24]; } Item;
typedef struct { u8 pad0[4]; Item *items; u32 count; u8 padC[12]; u32 *flags; } P1;

static inline Obj *GetObj(P1 *p, u32 i, Obj **over) {
    Obj *o;
    if (over != 0 && (o = over[i]) != 0) {
        return o;
    }
    return p->items[i].obj;
}
static inline bool Check(P1 *p, s32 i, s32 hi, s32 lo) {
    u32 v = p->flags[i];
    s32 vh = v >> 16;
    s32 vl = v & 0xffff;
    return (vh == hi || vh == 0) && ((vl & lo) != 0 || vl == 0x4000);
}

s32 fn_801CCC7C(P1 *p, u32 *idx, Obj **out, u32 mask, Obj **over) {
    s32 lo = mask & 0xffff;
    s32 hi = mask >> 16;
    while (*idx < p->count) {
        if (GetObj(p, *idx, over)->type() == 9 || GetObj(p, *idx, over)->type() == 10) {
            u32 i = *idx;
            if (Check(p, i, hi, lo)) {
                *out = GetObj(p, i, over);
                return 1;
            }
        }
        (*idx)++;
    }
    return 0;
}

} /* extern "C" */
