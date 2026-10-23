// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */

struct O801D829C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual s32 Check(void *, void *);
};

struct H801D829C {
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
    virtual void Notify(void *);
};

extern "C" {
struct N801D829C {
    O801D829C *obj;
    s32 f4;
    N801D829C *next;
};

struct S801D829C {
    u8 pad[136];
    N801D829C *list;
    u8 pad2[284 - 140];
    H801D829C *f284;
};

s32 fn_801D829C(S801D829C *p, void *a) {
    N801D829C *n1;
    s32 f1;
    N801D829C *n2;
    s32 f2;
    s32 ret;
    ret = 0;
    f1 = 0;
    for (n1 = p->list; n1 != 0; n1 = n1->next) {
        if (n1->f4 != 0) {
            if (n1->obj->Check(p, a) == 0) {
                f1 = 1;
            }
        }
    }
    if (f1) {
        return 0;
    }
    if (p->f284 != 0) {
        p->f284->Notify(a);
    }
    f2 = 0;
    for (n2 = p->list; n2 != 0; n2 = n2->next) {
        if (n2->f4 == 0) {
            if (n2->obj->Check(p, a) == 0) {
                f2 = 1;
            }
        }
    }
    return f2 ? 0 : ret;
}

} /* extern "C" */
