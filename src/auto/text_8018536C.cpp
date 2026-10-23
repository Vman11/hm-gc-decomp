// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8018536C {
    u8 pad[104];
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
    virtual void v24(void *a, void *b);
};
struct I8018536C : V8018536C {
    u32 f0x;
};
struct S8018536C : V8018536C {
    u8 pad2[36];
    void *f144;
    u8 pad3[4];
    u32 f152;
    I8018536C **f156;
};
extern "C" {
s32 fn_80195798(void *p);
s32 fn_80195744(void *p);
s32 fn_801957EC(void *p);
void *fn_8019547C(void *p);
void *fn_801953A4(void *p);
void *fn_80195410(void *p);
void fn_8017F368(void *a, void *b);
void fn_8017F42C(void *a, void *b);
void fn_8017F2A8(void *a, void *b);

void fn_8018536C(S8018536C *self, void *a, void *b) {
    u32 i;
    if (b == 0) b = self->v4();
    for (i = 0; i < self->f152; i++) {
        if (*(u32 *)self->f156[i] & 0x800) {
            if (fn_80195798(self->f156[i])) {
                fn_8017F368(self->f144, fn_8019547C(self->f156[i]));
            } else if (fn_80195744(self->f156[i])) {
                fn_8017F42C(self->f144, fn_801953A4(self->f156[i]));
            } else if (fn_801957EC(self->f156[i])) {
                fn_8017F2A8(self->f144, fn_80195410(self->f156[i]));
            } else {
                self->f156[i]->v24(a, b);
            }
        }
    }
}

} /* extern "C" */
