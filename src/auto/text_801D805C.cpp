// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj801D805C;
struct H801D805C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual s32 Handle(Obj801D805C *, void *);
};
struct Node801D805C {
    H801D805C *h;
    s32 f4;
    Node801D805C *next;
};
struct Sub801D805C {
    u8 pad[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void Notify(void *);
};
struct Obj801D805C {
    u8 pad0[136];
    Node801D805C *list;
    u8 pad8c[284 - 140];
    Sub801D805C *sub;
};

s32 fn_801D805C(Obj801D805C *o, void *arg) {
    Node801D805C *n;
    s32 failed = 0;
    for (n = o->list; n != 0; n = n->next) {
        if (n->f4 != 0 && n->h->Handle(o, arg) == 0) {
            failed = 1;
        }
    }
    if (failed != 0) {
        return 0;
    }
    if (o->sub != 0) {
        o->sub->Notify(arg);
    }
    {
        Node801D805C *m;
        s32 failed2 = 0;
        for (m = o->list; m != 0; m = m->next) {
            if (m->f4 == 0 && m->h->Handle(o, arg) == 0) {
                failed2 = 1;
            }
        }
        return failed2 ? 0 : 0;
    }
}

} /* extern "C" */
