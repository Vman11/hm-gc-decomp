// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_C0CC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual int f92(void *, int); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void f208(void *, int);
};
struct PB_C0CC { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void f276(void *); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void f316();
};
struct N_C0CC { O_C0CC *obj; int f4; N_C0CC *next; };
struct P_C0CC : PB_C0CC { u32 f132; N_C0CC *f136; u8 pad2[284 - 140]; PB_C0CC *f284; u8 pad3[324 - 288]; u32 f324; u32 f328; };
extern "C" int fn_801BC0CC(P_C0CC *p, int a) {
    N_C0CC *n;
    int r = 0;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f92(p, a) == 0) r = 1;
        }
    }
    if (r) return 0;
    switch (p->f324) {
    case 16:
        for (n = p->f136; n; n = n->next) n->obj->f208(p, 32);
        p->f328 = p->f324;
        p->f324 = (p->f324 & 0xFFFF0000) | 32;
        p->f316();
        if (p->f284) p->f284->f276(p);
        break;
    case 64:
        for (n = p->f136; n; n = n->next) n->obj->f208(p, 32);
        p->f328 = p->f324;
        p->f324 = (p->f324 & 0xFFFF0000) | 32;
        p->f316();
        if (p->f284) p->f284->f276(p);
        break;
    }
    return 0;
}
extern "C" {

} /* extern "C" */
