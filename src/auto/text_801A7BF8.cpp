// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_7BF8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int f20(void *, int, f32, f32);
};
struct PB_7BF8 { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void f244(int, int);
};
struct N_7BF8 { O_7BF8 *obj; int f4; N_7BF8 *next; };
struct P_7BF8 : PB_7BF8 { u32 f132; N_7BF8 *f136; u8 pad2[0xB8]; int f324; };
static inline int on_7BF8(P_7BF8 *p, int a, f32 x, f32 y) {
    int r = 0;
    N_7BF8 *n;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f20(p, a, x, y) == 0) r = 1;
        }
    }
    return r;
}
extern "C" int fn_801A7BF8(P_7BF8 *p, int a, f32 x, f32 y) {
    if (on_7BF8(p, a, x, y)) return 1;
    switch (p->f324) {
    case 16:
        p->f324 = 64;
        break;
    case 32:
        p->f324 = 128;
        break;
    case 2:
    case 256:
        p->f244(a, 1);
        p->f324 = 64;
        break;
    case 8:
    case 512:
        p->f244(a, 1);
        p->f324 = 128;
        break;
    }
    return 1;
}
extern "C" {

} /* extern "C" */
