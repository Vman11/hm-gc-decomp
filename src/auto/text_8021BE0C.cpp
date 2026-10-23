// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Q4 { f32 x, y, z, w; };
struct Key { u32 f0; u32 f4; u16 f8; };
struct A {
    u32 f0;
    u8 pad[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void lookup(u32, u16, void *, u32 *, u32 *, f32 *);
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void get(u32, Q4 *);
};
extern "C" {
void fn_80100060(void *, Q4 *, Q4 *, f32);
void fn_80100104(void *, Q4 *, Q4 *, f32);

void fn_8021BE0C(A *a, Key *k, void *arg, void *out) {
    Q4 q36;
    Q4 q20;
    u32 l16;
    u32 l12;
    f32 t;
    a->lookup(k->f0, k->f8, arg, &l16, &l12, &t);
    a->get(l16 + k->f4, &q36);
    a->get(l12 + k->f4, &q20);
    if (a->f0 & 0x200) {
        fn_80100060(out, &q36, &q20, t);
    } else {
        fn_80100104(out, &q36, &q20, t);
    }
}

} /* extern "C" */
