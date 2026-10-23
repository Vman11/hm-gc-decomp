// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P;
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual s32 check(P *p, void *a);
};
typedef struct Node { Obj *obj; s32 en; struct Node *next; } Node;
struct Snd {
    u8 pad[52];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void play(s32 id, void *x);
};
struct P {
    u8 pad[104];
    void *x68;
    u8 pad6c[4];
    Snd *x70;
    u8 pad74[0x14];
    Node *list;
    virtual void v0();
};
struct PV {
    u8 pad[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
    virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
    virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58();
    virtual void enter(void *a, s32 b);
    virtual void leave(void *a, s32 b);
};
PV *fn_801D8FAC(PV *, PV *, void *);

s32 fn_801D8E50(PV *p, void *a, s32 b) {
    s32 fail;
    Node *n;
    PV *other;
    Snd *o;

    fail = 0;
    for (n = ((P *)p)->list; n != 0; n = n->next) {
        if (n->en != 0 && n->obj->check((P *)p, a) == 0) {
            fail = 1;
        }
    }
    if (fail) {
        return 0;
    }
    other = fn_801D8FAC(p, p, a);
    if (other != 0) {
        p->leave(a, b);
        other->enter(a, b);
    }
    if (b != 0 && (o = ((P *)p)->x70) != 0) {
        o->play(8, ((P *)p)->x68);
    }
    fail = 0;
    for (n = ((P *)p)->list; n != 0; n = n->next) {
        if (n->en == 0 && n->obj->check((P *)p, a) == 0) {
            fail = 1;
        }
    }
    return fail ? 0 : 1;
}

} /* extern "C" */
