// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T28 { s32 f0, f4, f8, fc; };
struct E28 { u32 f0; f32 f4; u8 p8[8]; T28 *f10; u32 f14; s32 f18; };
struct B28 { u8 pad[0x68]; };
struct P28 : B28 {
virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); 
    virtual void *v19();
    void *f6c; u32 n70; E28 *a74; u8 p78[0x84 - 0x78]; void *f84;
};
void fn_80190DFC(P28 *p, f32 t);
void fn_80107018(E28 *e, s32 a, s32 b, f32 t);
void fn_8013DF34(T28 *a, void *q, s32 c, f32 f);
void fn_8017A53C(void *a, f32 t);
static inline void Upd(E28 *e, f32 t) { if (e->f14 & 1) { T28 *a = e->f10; s32 hi = a->fc; s32 lo = a->f8; fn_80107018(e, lo, hi, t); } }
#pragma opt_propagation off
void fn_801A0A1C(P28 *p, f32 t) {
    fn_80190DFC(p, t);
    if (p->n70 != 0) {
        void *q = p->f6c;
        if (q == 0) q = p->v19();
        E28 *e = p->a74;
        E28 *end = e + p->n70;
        for (; e < end; e++) {
            if (e->f14 & 1) {
                Upd(e, t);
                s32 c = e->f18; if (e->f0 & 2) fn_8013DF34(e->f10, q, c, e->f4);
            }
        }
    }
    if (p->f84 != 0) fn_8017A53C(p->f84, t);
}

} /* extern "C" */
