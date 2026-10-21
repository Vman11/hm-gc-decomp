// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VA { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual s32 f(u8 *, void *); };
struct VP { u8 pad[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void g(void *, s32); virtual void f(void *, s32); };
struct VD { u8 pad[52]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void f(s32, u32); };
struct Node { VA *obj; s32 active; Node *next; };
VP *fn_801D9744(u8 *, u8 *, void *);

s32 fn_801D95E8(u8 *p, void *a, s32 b) {
    Node *n;
    BOOL found;
    VP *o;
    Node *n2;
    BOOL found2;
    found = 0;
    for (n = *(Node **)(p + 136); n != 0; n = n->next) {
        if (n->active != 0) {
            if (n->obj->f(p, a) == 0) {
                found = 1;
            }
        }
    }
    if (found) {
        return 1;
    }
    o = fn_801D9744(p, p, a);
    if (o != 0) {
        ((VP *)p)->f(a, b);
        o->g(a, b);
    }
    if (b != 0 && *(VD **)(p + 112) != 0) {
        (*(VD **)(p + 112))->f(2, *(u32 *)(p + 104));
    }
    found2 = 0;
    for (n2 = *(Node **)(p + 136); n2 != 0; n2 = n2->next) {
        if (n2->active == 0) {
            if (n2->obj->f(p, a) == 0) {
                found2 = 1;
            }
        }
    }
    if (found2) {
        return 1;
    }
    return 1;
}

} /* extern "C" */
