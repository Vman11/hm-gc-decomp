// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_797C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int f32(void *, int, f32, f32);
};
struct PB_797C { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void f244(int, int); virtual void f248(int, int); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void f296(int); virtual void f300(int);
};
struct N_797C { O_797C *obj; int f4; N_797C *next; };
struct P_797C : PB_797C { u32 f132; N_797C *f136; u8 pad2[224 - 140]; PB_797C *f224; u8 pad3[324 - 228]; u32 f324; };
void fn_801C2368(void *, PB_797C *, int);
static inline int on_797C(P_797C *p, int a, f32 x, f32 y) {
    int r = 0;
    N_797C *n;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f32(p, a, x, y) == 0) r = 1;
        }
    }
    return r;
}
extern "C" int fn_801A797C(P_797C *p, int a, f32 x, f32 y) {
    if (on_797C(p, a, x, y)) return 0;
    switch (p->f324) {
    case 16:
    case 32:
        p->f248(a, 1);
        break;
    case 64:
        p->f296(1);
        p->f324 = 32;
        if (p->f224) {
            p->f224->f244(a, 1);
            fn_801C2368(*(void **)(p->pad_ + 124), p->f224, 1);
            p->f248(a, 1);
        }
        break;
    case 128:
        p->f300(1);
        p->f324 = 16;
        break;
    }
    return 0;
}
extern "C" {

} /* extern "C" */
