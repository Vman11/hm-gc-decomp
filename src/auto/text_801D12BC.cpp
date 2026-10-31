// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010C440(void *, f32, f32);
void fn_8010C470(void *, s32, s32);
void fn_8010C480(void *, f32 *, f32 *);
void fn_8010C4B8(void *, s32 *, s32 *);
extern volatile f32 lbl_80365180;
typedef struct { void *f0; u8 pad4[8]; f32 fC; } A;
typedef struct { void *f0; u8 pad4[8]; s32 fC; } B;
typedef struct { s32 en; f32 f4; f32 f8; f32 fC; A *f10; B *f14; } R;
struct T {
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
    virtual void OnChild(struct T *c);
    u8 pad84[284 - 132];
    T *f11C;
    u8 pad120[0x168 - 0x120];
    R h;
    R v;
};
void fn_801DB744(T *);
static inline void notify(T *t) {
    if (t->f11C) t->f11C->OnChild(t);
    t->Update();
}
static inline void setValue(T *t, R *r, f32 v) {
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
    notify(t);
}
static inline void setRange(T *t, R *r, f32 lo, f32 hi) {
    r->f8 = lo;
    r->fC = hi;
    if (r->f10) fn_8010C440(r->f10->f0, lo, hi);
    if (r->f14) fn_8010C470(r->f14->f0, (s32)lo, (s32)hi);
    if (r->f10) r->f4 = r->f10->fC;
    setValue(t, r, r->f4);
}
int fn_801D12BC(T *t) {
    volatile f32 a, b;
    s32 ia, ib;
    fn_801DB744(t);
    a = lbl_80365180;
    b = lbl_80365180;
    if (t->h.en) {
        if (t->h.f10) {
            fn_8010C480(t->h.f10->f0, (f32 *)&a, (f32 *)&b);
            { f32 lo, hi; hi = b; lo = a; setRange(t, &t->h, lo, hi); }
            setValue(t, &t->h, t->h.f10->fC);
        }
        if (t->h.f14) {
            fn_8010C4B8(t->h.f14->f0, &ia, &ib);
            setRange(t, &t->h, (f32)ia, (f32)ib);
            setValue(t, &t->h, (f32)t->h.f14->fC);
        }
    }
    if (t->v.en) {
        if (t->v.f10) {
            fn_8010C480(t->v.f10->f0, (f32 *)&a, (f32 *)&b);
            { f32 hi = b; f32 lo = a; setRange(t, &t->v, lo, hi); }
            setValue(t, &t->v, t->v.f10->fC);
        }
        if (t->v.f14) {
            fn_8010C4B8(t->v.f14->f0, &ia, &ib);
            setRange(t, &t->v, (f32)ia, (f32)ib);
            setValue(t, &t->v, (f32)t->v.f14->fC);
        }
    }
    return 0;
}

} /* extern "C" */
