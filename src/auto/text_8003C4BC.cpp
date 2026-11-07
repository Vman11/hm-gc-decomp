#include "common.h"
struct R20 { s32 f0, f4, f8; };
struct O20 {
virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
virtual void v20(); virtual void v21(); virtual void v22(); 
    virtual R20 *v23(s32 a);
};
struct E20 { u8 pad[0x30]; s32 f30; u8 p2[0x34 - 0x34]; };
struct G20 { u8 pad[0x18]; O20 *o; u8 p1c[0x68 - 0x1c]; s32 cur; u8 p6c[4]; E20 *e;
    E20 *Cur() { return &e[cur]; }
};
struct B20 { u8 pad[0x144]; u32 f144; };
extern "C" G20 *lbl_8035B5E4;
extern "C" f32 lbl_8035C1C0;
extern "C" void fn_80253304(E20 *e, s32 n, f32 f);
#define G lbl_8035B5E4
static inline void SetE(E20 *e, s32 v) { e->f30 = v; }
extern "C" s32 fn_8003C4BC(void *a, B20 *b) {
    if ((b->f144 >> 16) == 2) {
        { R20 *r = G->o->v23(G->cur); r->f8 = 1; }
        SetE(G->Cur(), 0);
        fn_80253304(&G->e[G->cur], 500, lbl_8035C1C0);
    } else {
        { R20 *r = G->o->v23(G->cur); r->f8 = 0; }
        SetE(G->Cur(), 1);
    }
    return 1;
}
