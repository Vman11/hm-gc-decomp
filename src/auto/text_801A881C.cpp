// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_A881C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual int f172(void *, u32);
};
struct PB_A881C { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void f244(int, int);
};
struct N_A881C { O_A881C *obj; int f4; N_A881C *next; };
struct P_A881C : PB_A881C { u32 f132; N_A881C *f136; u8 pad2[0xB8]; int f324; u8 pad3[0x1C]; int f356; u8 pad4[0xC]; u32 f372; };
extern "C" int fn_801A881C(P_A881C *p, u32 a) {
    N_A881C *n;
    int r = 0;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f172(p, a) == 0) r = 1;
        }
    }
    if (r) return 0;
    if (!(*(u32 *)(p->pad_ + 108) & 2)) return 0;
    switch (p->f324) {
    case 2:
    case 256:
        p->f324 = 16;
        break;
    case 8:
        p->f324 = 32;
        break;
    }
    if (a == p->f372 && p->f356 == 0) p->f244(0, 1);
    return 0;
}
extern "C" {

} /* extern "C" */
