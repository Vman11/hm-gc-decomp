// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct W;
struct Ctx;
struct L {
    virtual s32 isKind(s32);
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual s32 handle(W *, Ctx *, f32, f32);
    virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void notify(W *, s32);
    virtual s32 check(W *);
};
struct Node { L *obj; s32 enabled; Node *next; };
struct P124 { u8 pad[76]; s32 f76; };
struct WV {
    u8 pad[108]; u32 flags108; u8 pad1[12]; P124 *p124;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual u32 type();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(Ctx *, s32);
    virtual void v60(Ctx *, s32); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(s32);
};
struct W : WV {
    u8 padw[4]; Node *list; u8 pad[84]; WV *p224; u8 pad3[56]; WV *p284; u8 pad4[36]; u32 state; u32 prev; u8 pad5[28]; s32 f360; s32 f364; s32 f368;
};
s32 fn_801BDAD0(W *, Ctx *);
void fn_801C2368(P124 *, WV *, s32);

static inline void setState(W *w, s32 s) {
    Node *n;
    for (n = w->list; n; n = n->next) n->obj->notify(w, s);
    w->prev = w->state;
    w->state = (w->state & 0xFFFF0000) | s;
}
static inline BOOL blocked(W *w) {
    BOOL f = FALSE;
    Node *n;
    for (n = w->list; n; n = n->next) {
        if (n->obj->isKind(11) && n->enabled && !n->obj->check(w)) f = TRUE;
    }
    return f;
}
static inline BOOL blocked2(W *w) {
    BOOL f = FALSE;
    Node *n;
    for (n = w->list; n; n = n->next) {
        if (n->obj->isKind(11) && !n->enabled && !n->obj->check(w)) f = TRUE;
    }
    return f;
}
static inline BOOL dispatch(W *w, Ctx *c, f32 x, f32 y) {
    BOOL f = FALSE;
    Node *n;
    for (n = w->list; n; n = n->next) {
        if (n->enabled && !n->obj->handle(w, c, x, y)) f = TRUE;
    }
    return f;
}

static inline BOOL isType(WV *t, u32 ty) { return t->type() == ty; }
s32 fn_801BB5EC(W *w, Ctx *c, f32 x, f32 y) {
    if (fn_801BDAD0(w, c)) switch ((u16)w->state) { case 64: {
        if (w->f360) setState(w, 2);
        else setState(w, 16);
        w->v77();
        if (blocked(w)) return 1;
        if (w->flags108 & 4) {
            w->p124->f76 = 1;
        } else if (w->p224) {
            w->p224->v59(c, 1);
            fn_801C2368(w->p124, w->p224, 1);
            w->v60(c, 1);
        }
        if (w->f364) {
            WV *t = w->p284;
            if (w->p284->type() == 91) t->v78(w->f368);

        }
        if (dispatch(w, c, x, y)) return 1;
        if (blocked2(w)) return 1;
        return 1;
    } }
    return dispatch(w, c, x, y) ? 0 : 0;
}
}

} /* extern "C" */
