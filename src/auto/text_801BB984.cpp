// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_B984 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int f20(void *, int, f32, f32); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void f208(void *, int);
};
struct PB_B984 { u8 pad_[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void f244(int, int); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void f284(void *);
};
struct N_B984 { O_B984 *obj; int f4; N_B984 *next; };
struct P_B984 : PB_B984 { u32 f132; N_B984 *f136; u8 pad2[284 - 140]; PB_B984 *f284; u8 pad3[324 - 288]; u32 f324; u32 f328; u8 pad4[360 - 332]; int f360; };
static inline int on_B984(P_B984 *p, int a, f32 x, f32 y) {
    int r;
    N_B984 *n;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f20(p, a, x, y) == 0) r = 1;
        }
    }
    return r;
}
static inline bool busy_B984(P_B984 *p) {
    bool r = false;
    u16 s = p->f324;
    if (s == 1 || s == 4) r = true;
    return r;
}
static inline void all_B984(P_B984 *p) { N_B984 *n; for (n = p->f136; n; n = n->next) n->obj->f208(p, 64); }
extern "C" int fn_801BB984(P_B984 *p, int a, f32 x, f32 y) {
    N_B984 *n;
    int r;
    if (busy_B984(p)) return 0;
    r = 0;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->f20(p, a, x, y) == 0) r = 1;
        }
    }
    if (r) return 1;
    for (n = p->f136; n; n = n->next) n->obj->f208(p, 64);
    p->f328 = p->f324;
    p->f324 = (p->f324 & 0xFFFF0000) | 64;
    if (p->f360) p->f244(a, 1);
    p->f284->f284(p);
    return 1;
}
extern "C" {

} /* extern "C" */
