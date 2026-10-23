// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Ctx801A07E4 {
    u8 pad[6448];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
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
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void Add(u32 idx, u32 v);
};
struct A801A07E4 { u8 pad[20]; u32 f20; u8 pad2[16]; };
struct B801A07E4 { u8 pad[20]; u32 f20; u8 pad2[28]; };
struct D801A07E4 { u8 pad[28]; u32 countA; u32 countB; A801A07E4 *arrA; B801A07E4 *arrB; };
struct T801A07E4 { D801A07E4 *d; D801A07E4 *GetD() { return d; } };
struct S801A07E4 { u8 pad[132]; T801A07E4 *t; };
static inline D801A07E4 *GetD801A07E4(T801A07E4 *t) { return t->d; }
extern "C" {
void fn_80104870(void *e);

void fn_801A07E4(S801A07E4 *self, Ctx801A07E4 *ctx) {
    T801A07E4 *t = self->t;
    D801A07E4 *d;
    A801A07E4 *a;
    u32 i;
    u32 idx;
    B801A07E4 *b;
    if (t != 0) {
        d = GetD801A07E4(t);
        idx = 0;
        for (i = 0; i < d->countA; i++) {
            a = &d->arrA[i];
            fn_80104870(a);
            ctx->Add(idx++, a->f20);
        }
        for (i = 0; i < d->countB; i++) {
            b = &d->arrB[i];
            fn_80104870(b);
            ctx->Add(idx++, b->f20);
        }
    }
}

} /* extern "C" */
