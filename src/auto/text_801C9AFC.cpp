// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void f(void *, s32); };
struct Node { V *obj; void *pad; Node *next; };

void fn_801C9AFC(u8 *p) {
    Node *n;
    u8 *o = *(u8 **)(p + 376);
    if (o != 0) {
        switch ((u16)*(u32 *)(o + 324)) {
        case 2:
            for (n = *(Node **)(o + 136); n != 0; n = n->next) {
                n->obj->f(o, 32);
            }
            *(u32 *)(o + 328) = *(u32 *)(o + 324);
            *(u32 *)(o + 324) = (*(u32 *)(o + 324) & 0xFFFF0000) | 32;
            break;
        case 16:
            for (n = *(Node **)(o + 136); n != 0; n = n->next) {
                n->obj->f(o, 32);
            }
            *(u32 *)(o + 328) = *(u32 *)(o + 324);
            *(u32 *)(o + 324) = (*(u32 *)(o + 324) & 0xFFFF0000) | 32;
            break;
        case 256:
            for (n = *(Node **)(o + 136); n != 0; n = n->next) {
                n->obj->f(o, 32);
            }
            *(u32 *)(o + 328) = *(u32 *)(o + 324);
            *(u32 *)(o + 324) = (*(u32 *)(o + 324) & 0xFFFF0000) | 32;
            break;
        }
    }
}

} /* extern "C" */
