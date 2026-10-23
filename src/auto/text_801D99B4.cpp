// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O801D99B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual s32 Check(void *p, s32 a);
};

struct N801D99B4 {
    O801D99B4 *obj;
    s32 active;
    N801D99B4 *next;
};

struct R801D99B4 {
    u8 pad[0x34];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual void Set(s32 a, s32 b);
};

struct P801D99B4 {
    u8 pad[0x80];
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
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58();
    virtual void Enter(s32 a, s32 b);
    virtual void Leave(s32 a, s32 b);
};

P801D99B4 *fn_801D9B10(P801D99B4 *p, P801D99B4 *q, s32 a);

s32 fn_801D99B4(P801D99B4 *p, s32 a, s32 b) {
    {
        N801D99B4 *n;
        s32 found;
        found = 0;
        for (n = M2C_FIELD(p, N801D99B4 **, 0x88); n != 0; n = n->next) {
            if (n->active != 0 && n->obj->Check(p, a) == 0) {
                found = 1;
            }
        }
        if (found) {
            return 1;
        }
    }
    {
        P801D99B4 *q;
        R801D99B4 *r;
        q = fn_801D9B10(p, p, a);
        if (q != 0) {
            p->Leave(a, b);
            q->Enter(a, b);
        }
        if (b != 0) {
            r = M2C_FIELD(p, R801D99B4 **, 0x70);
            if (r != 0) {
                r->Set(1, M2C_FIELD(p, s32 *, 0x68));
            }
        }
    }
    {
        N801D99B4 *n;
        s32 found;
        found = 0;
        for (n = M2C_FIELD(p, N801D99B4 **, 0x88); n != 0; n = n->next) {
            if (n->active == 0 && n->obj->Check(p, a) == 0) {
                found = 1;
            }
        }
        if (found) {
            return 1;
        }
    }
    return 1;
}

} /* extern "C" */
