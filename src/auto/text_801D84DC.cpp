// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Obj801D84DC;
struct Hnd801D84DC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25();
    virtual s32 handle(Obj801D84DC *, void *);
};
struct Node801D84DC { Hnd801D84DC *h; s32 active; Node801D84DC *next; };
struct Cmp801D84DC {
    u8 pad[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void notify(void *);
};
struct Obj801D84DC { u8 pad[136]; Node801D84DC *list; u8 pad2[284 - 140]; Cmp801D84DC *cmp; };
extern "C" {
s32 fn_801D84DC(Obj801D84DC *o, void *arg) {
    Node801D84DC *n;
    s32 f;
    Node801D84DC *m;
    s32 g;
    f = 0;
    for (n = o->list; n != 0; n = n->next) {
        if (n->active != 0 && n->h->handle(o, arg) == 0) f = 1;
    }
    if (f) return 0;
    if (o->cmp) o->cmp->notify(arg);
    g = 0;
    for (m = o->list; m != 0; m = m->next) {
        if (m->active == 0 && m->h->handle(o, arg) == 0) g = 1;
    }
    return g ? 0 : 0;
}

} /* extern "C" */
