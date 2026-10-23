// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010C440(void *);
void fn_8010C470(void *, s32, s32);
}

typedef struct { void *f0; u8 pad4[8]; f32 fC; } A801CEB9C;
typedef struct { void *f0; u8 pad4[8]; s32 fC; } B801CEB9C;
typedef struct {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    A801CEB9C *f10;
    B801CEB9C *f14;
} R801CEB9C;

struct T801CEB9C {
    u8 pad0[128];
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
    virtual void Update();
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
    virtual void OnChild(struct T801CEB9C *c);
    u8 pad84[284 - 132];
    T801CEB9C *f11C;
};

extern "C" {
void fn_801CEB9C(T801CEB9C *t, R801CEB9C *r, f32 lo, f32 hi) {
    f32 v;
    r->f8 = lo;
    r->fC = hi;
    if (r->f10) fn_8010C440(r->f10->f0);
    if (r->f14) fn_8010C470(r->f14->f0, (s32)lo, (s32)hi);
    if (r->f10) r->f4 = r->f10->fC;
    v = r->f4;
    if (v > r->fC) v = r->fC;
    if (v < r->f8) v = r->f8;
    if (r->f10) {
        r->f4 = v;
        r->f10->fC = v;
    }
    if (r->f14) {
        r->f4 = v;
        r->f14->fC = (s32)v;
    }
    if (t->f11C) t->f11C->OnChild(t);
    t->Update();
}

} /* extern "C" */
