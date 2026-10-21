// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VA { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual s32 f(f32, u8 *); };
struct VB { u8 pad[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void f(u8 *); };
struct VC { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void f(f32); };
struct VD { u8 pad[52]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void f(f32, u32); };
struct Node { VA *obj; void *pad; Node *next; };

void fn_801D7548(u8 *p, f32 t) {
    Node *n;
    BOOL found;
    u32 i;
    VB *b;
    found = 0;
    for (n = *(Node **)(p + 136); n != 0; n = n->next) {
        if (n->obj->f(t, p) == 0) {
            found = 1;
        }
    }
    if (!found) {
        b = *(VB **)(p + 284);
        if (b != 0 && (u16)*(u32 *)(p + 324) == 64) {
            b->f(p);
        }
        if (*(VD **)(p + 112) != 0) {
            if (*(VC ***)(p + 104) != 0) {
                for (i = 0; i < *(u32 *)((*(VD **)(p + 112))->pad + 8); i++) {
                    if ((*(VC ***)(p + 104))[i] != 0) {
                        (*(VC ***)(p + 104))[i]->f(t);
                    }
                }
            }
            (*(VD **)(p + 112))->f(t, *(u32 *)(p + 324));
        }
    }
}

} /* extern "C" */
