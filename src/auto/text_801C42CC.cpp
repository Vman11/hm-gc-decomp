// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

struct VA_801C42CC {
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
    virtual s32 m(void *, void *);
};

struct VB_801C42CC {
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
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void m(void *);
};

struct Node_801C42CC {
    VA_801C42CC *obj;
    s32 active;
    Node_801C42CC *next;
};

extern "C" {

s32 fn_801C42CC(u8 *p, void *q) {
    Node_801C42CC *it;
    s32 found;
    VB_801C42CC *o;
    found = 0;
    for (it = *(Node_801C42CC **)(p + 0x88); it != 0; it = it->next) {
        if (it->active != 0 && it->obj->m(p, q) == 0) {
            found = 1;
        }
    }
    if (found != 0) {
        return 0;
    }
    if ((*(u32 *)(p + 0x6c) & 2) == 0) {
        return 0;
    }
    switch (*(s32 *)(p + 0x144)) {
    case 2:
        *(s32 *)(p + 0x144) = 16;
        break;
    case 8:
        *(s32 *)(p + 0x144) = 32;
        break;
    case 256:
        *(s32 *)(p + 0x144) = 16;
        break;
    case 512:
        *(s32 *)(p + 0x144) = 32;
        break;
    }
    o = *(VB_801C42CC **)(p + 0x11c);
    if (o != 0) {
        o->m(p);
    }
    return 0;
}

} /* extern "C" */
