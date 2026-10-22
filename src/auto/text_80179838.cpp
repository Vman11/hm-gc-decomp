// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Ctx80179838 {
    u8 pad[6448];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
    virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual u32 Get(u32 i);
};
extern "C" {
typedef struct E80179838 { u32 key; u32 *vals; u32 n; } E80179838;
typedef struct P80179838 { E80179838 *entries; u32 count; u32 *pool; u32 used; } P80179838;
s32 fn_80179838(P80179838 *p, u32 key, u32 n, Ctx80179838 *ctx) {
    u32 i;
    E80179838 *e;
    if (p->count >= 128) return 0;
    if (p->used + n >= 256) return 0;
    e = &p->entries[p->count++];
    e->key = key;
    e->vals = p->pool + p->used;
    p->used += n;
    e->n = n;
    for (i = 0; i < n; i++) {
        e->vals[i] = ctx->Get(i);
    }
    return 1;
}

} /* extern "C" */
