// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VO_801D7F3C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual s32 f31(u8 *, void *); };
struct VP_801D7F3C { u8 pad[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void f55(void *); };
typedef struct N_801D7F3C { VO_801D7F3C *obj; s32 active; struct N_801D7F3C *next; } N_801D7F3C;

s32 fn_801D7F3C(u8 *p, void *a) {
    N_801D7F3C *n; s32 failed; N_801D7F3C *n2; s32 failed2;
    failed = 0;
    for (n = *(N_801D7F3C **)(p + 136); n != 0; n = n->next) {
        if (n->active != 0 && n->obj->f31(p, a) == 0) {
            failed = 1;
        }
    }
    if (failed) {
        return 0;
    }
    if (*(VP_801D7F3C **)(p + 284) != 0) {
        (*(VP_801D7F3C **)(p + 284))->f55(a);
    }
    failed2 = 0;
    for (n2 = *(N_801D7F3C **)(p + 136); n2 != 0; n2 = n2->next) {
        if (n2->active == 0 && n2->obj->f31(p, a) == 0) {
            failed2 = 1;
        }
    }
    return failed2 ? 0 : 0;
}

} /* extern "C" */
