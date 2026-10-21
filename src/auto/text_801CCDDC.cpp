// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual s32 Type(); };
typedef struct Item { Obj *obj; u8 pad[24]; } Item;
typedef struct P801CCDDC { u8 pad0[4]; Item *items; u32 count; } P801CCDDC;

static inline Obj *GetObj(P801CCDDC *p, u32 i, Obj **arr) {
    if (arr != 0 && arr[i] != 0) return arr[i];
    return p->items[i].obj;
}

s32 fn_801CCDDC(P801CCDDC *p, u32 *idx, Obj **out, Obj **arr) {
    for (; *idx < p->count; (*idx)++) {
        if (p->items[*idx].obj != 0) {
            if (GetObj(p, *idx, arr)->Type() == 9 || GetObj(p, *idx, arr)->Type() == 10) {
                *out = GetObj(p, *idx, arr);
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
