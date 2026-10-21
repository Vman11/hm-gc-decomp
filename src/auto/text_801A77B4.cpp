// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VO_801A77B4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual s32 f33(u8 *, void *); };
struct VP_801A77B4 { u8 pad[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void f72(s32); virtual void f73(s32); };
struct VL_801A77B4 { u8 pad[52]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void f6(s32, s32); };
typedef struct N_801A77B4 { VO_801A77B4 *obj; s32 active; struct N_801A77B4 *next; } N_801A77B4;

s32 fn_801A77B4(u8 *p, void *a, s32 b) {
    N_801A77B4 *n;
    s32 failed = 0;
    for (n = *(N_801A77B4 **)(p + 136); n != 0; n = n->next) {
        if (n->active != 0 && n->obj->f33(p, a) == 0) {
            failed = 1;
        }
    }
    if (failed) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 16:
        ((VP_801A77B4 *)p)->f72(b);
        break;
    case 32:
        ((VP_801A77B4 *)p)->f73(b);
        break;
    }
    if (b != 0 && *(VL_801A77B4 **)(p + 112) != 0) {
        (*(VL_801A77B4 **)(p + 112))->f6(16, *(s32 *)(p + 104));
    }
    return 0;
}

} /* extern "C" */
