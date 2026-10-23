// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct O801CCA8C {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual s32 State();
};
struct E801CCA8C { O801CCA8C *obj; u8 pad[24]; };
struct S801CCA8C {
    u32 f0;
    E801CCA8C *arr;
    u32 count;
    O801CCA8C *Get(u32 i, O801CCA8C **ov) { if (ov != 0 && ov[i] != 0) return ov[i]; return arr[i].obj; }
};
extern "C" {

BOOL fn_801CCA8C(S801CCA8C *self, u32 *pIdx, O801CCA8C **out, O801CCA8C **ov) {
    for (; *pIdx < self->count; (*pIdx)++) {
        if (self->arr[*pIdx].obj != 0) {
            if (self->Get(*pIdx, ov)->State() == 2) {
                *out = self->Get(*pIdx, ov);
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
