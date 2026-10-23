// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Obj_801D8B9C {
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
    virtual s32 v20(u8 *, void *);
};
struct Node_801D8B9C {
    Obj_801D8B9C *obj;
    s32 f4;
    Node_801D8B9C *next;
};
struct O_801D8B9C {
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
    virtual void v44(void *);
};
extern "C" {

s32 fn_801D8B9C(u8 *p, void *arg) {
    Node_801D8B9C *n;
    s32 fail = 0;
    for (n = *(Node_801D8B9C **)(p + 136); n != 0; n = n->next) {
        if (n->f4 != 0) {
            if (n->obj->v20(p, arg) == 0) fail = 1;
        }
    }
    if (fail) return 0;
    {
        O_801D8B9C *o = *(O_801D8B9C **)(p + 284);
        if (o) o->v44(arg);
    }
    {
        Node_801D8B9C *m;
        fail = 0;
        for (m = *(Node_801D8B9C **)(p + 136); m != 0; m = m->next) {
            if (m->f4 == 0) {
                if (m->obj->v20(p, arg) == 0) fail = 1;
            }
        }
        return fail ? 0 : 0;
    }
}

} /* extern "C" */
