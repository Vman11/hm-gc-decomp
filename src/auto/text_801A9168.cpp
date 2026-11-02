// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_9168 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual int f96(void *, int);
};
struct PB_9168 { u8 pad_[108]; s32 f108; u8 pad__[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void f88(int); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void f300(int);
};
struct N_9168 { O_9168 *obj; int f4; N_9168 *next; };
struct P_9168 : PB_9168 { u32 f132; N_9168 *f136; u8 pad3[324 - 140]; u32 f324; u8 pad4[368 - 328]; P_9168 *f368; P_9168 *f372; };
static inline int on_9168(P_9168 *p, int a) {
    int r = 0;
    N_9168 *n;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f96(p, a) == 0) r = 1;
        }
    }
    return r;
}
static inline bool act_9168(P_9168 *p) {
    bool r = false;
    u16 s = p->f324;
    if (s == 8 || s == 4 || s == 32 || s == 128 || s == 512) r = true;
    return r;
}
static inline int b1_9168(P_9168 *q) { int v = (q->f108 >> 1) & 1; return v; }
extern "C" int fn_801A9168(P_9168 *p, int a) {
    if (on_9168(p, a)) return 0;
    if (!(p->f108 & 2)) return 0;
    switch (p->f324) {
    case 8:
    case 32:
    case 64:
    case 128:
        if (act_9168(p->f368)) p->f368->f300(1);
        if (b1_9168(p->f368) == 1) p->f368->f108 &= ~2;
        if ((p->f368->f108 & 1) == 1) p->f368->f88(0);
        if (act_9168(p->f372)) p->f372->f300(1);
        p->f324 = 16;
        break;
    }
    return 0;
}
extern "C" {

} /* extern "C" */
