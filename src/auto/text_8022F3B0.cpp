// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E8022F3B0 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();    virtual void release();
    u8 pad2[228 - 108];
};
struct S8022F3B0 {
    s32 f0;
    u32 *counts;
    void *f8;
    u32 n;
    E8022F3B0 **arrays;
    void *f20;
};
extern s32 lbl_8035B34C;
void __dt__9C80197988Fv(void *p, s16 f);
void fn_800E1E88(void *p, void (*dtor)(void *, s16));
void __dla__FPv(void *p);
void __dl__FPv(void *p);
void __dt__9C8023C7CCFv(void *p, s16 f);

static inline void destroyAll_8022F3B0(S8022F3B0 *self) {
    u32 i;
    for (i = 0; i < self->n; i++) {
        if (self->arrays[i] != 0) {
            u32 j;
            for (j = 0; j < self->counts[i]; j++) {
                self->arrays[i][j].release();
            }
            fn_800E1E88(self->arrays[i], __dt__9C80197988Fv);
        }
    }
}
S8022F3B0 *fn_8022F3B0(S8022F3B0 *self, s16 flag) {
    if (self != 0) {
        lbl_8035B34C = 0;
        if (self->arrays != 0) {
            destroyAll_8022F3B0(self);
            __dla__FPv(self->arrays);
        }
        if (self->f8 != 0) {
            __dla__FPv(self->f8);
        }
        if (self->counts != 0) {
            __dla__FPv(self->counts);
        }
        if (self->f20 != 0) {
            __dt__9C8023C7CCFv(self->f20, 1);
        }
        self->f0 = 0;
        self->counts = 0;
        self->f8 = 0;
        self->n = 0;
        self->arrays = 0;
        self->f20 = 0;
        if (flag > 0) {
            __dl__FPv(self);
        }
    }
    return self;
}

} /* extern "C" */
