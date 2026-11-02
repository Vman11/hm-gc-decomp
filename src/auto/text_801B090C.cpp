// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_090C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual int f84(void *, int);
};
struct PB_090C { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void f244(int, int); virtual void f248(int, int); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void f272(void *); virtual void v67(); virtual void f280(void *);
};
struct N_090C { O_090C *obj; int f4; N_090C *next; };
struct P_090C : PB_090C { u32 f132; N_090C *f136; u8 pad2[244 - 140]; PB_090C *g244; u8 pad3[264 - 248]; PB_090C *g264; u8 pad4[284 - 268]; PB_090C *f284; u8 pad5[324 - 288]; u32 f324; };
extern "C" int fn_801B090C(P_090C *p, int a) {
    N_090C *n;
    int r = 0;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f84(p, a) == 0) r = 1;
        }
    }
    if (r) return 0;
    if (a & 3) {
        if (p->g264) {
            switch (p->f324) {
            case 32:
                if (p->f284) p->f284->f280(p);
            case 16:
            case 128:
                p->f324 = 2;
                if (p->f284) p->f284->f272(p);
                p->g264->f244(a, 1);
                break;
            }
        }
    } else if (p->g244) {
        switch (p->f324) {
        case 32:
            if (p->f284) p->f284->f280(p);
        case 16:
        case 128:
            p->f248(a, 1);
            p->f324 = 2;
            p->g244->f244(a, 1);
            break;
        }
    }
    return 0;
}
extern "C" {

} /* extern "C" */
