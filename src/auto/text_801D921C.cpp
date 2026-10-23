// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_801D9378(void *a, void *b, void *c);

} /* extern "C" */

struct VA_801D921C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual s32 m(void *, void *);
};

struct VB_801D921C {
    u8 pad[128];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void m59(void *, s32);
    virtual void m60(void *, s32);
};

struct VC_801D921C {
    u8 pad[52];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void m(s32, s32);
};

struct Node_801D921C {
    VA_801D921C *obj;
    s32 active;
    Node_801D921C *next;
};

extern "C" {

s32 fn_801D921C(u8 *p, void *q, s32 flag) {
    Node_801D921C *it;
    s32 found;
    VB_801D921C *o;
    VC_801D921C *c;
    Node_801D921C *it2;
    s32 found2;
    found = 0;
    for (it = *(Node_801D921C **)(p + 0x88); it != 0; it = it->next) {
        if (it->active != 0 && it->obj->m(p, q) == 0) {
            found = 1;
        }
    }
    if (found != 0) {
        return 0;
    }
    o = (VB_801D921C *)fn_801D9378(p, p, q);
    if (o != 0) {
        ((VB_801D921C *)p)->m60(q, flag);
        o->m59(q, flag);
    }
    if (flag != 0) {
        c = *(VC_801D921C **)(p + 0x70);
        if (c != 0) {
            c->m(4, *(s32 *)(p + 0x68));
        }
    }
    found2 = 0;
    for (it2 = *(Node_801D921C **)(p + 0x88); it2 != 0; it2 = it2->next) {
        if (it2->active == 0 && it2->obj->m(p, q) == 0) {
            found2 = 1;
        }
    }
    return found2 ? 0 : 1;
}

} /* extern "C" */
