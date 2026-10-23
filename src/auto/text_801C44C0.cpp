// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct O801C44C0 {
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
    virtual s32 v21(void *, void *);
};
struct N801C44C0 {
    O801C44C0 *obj;
    s32 active;
    N801C44C0 *next;
};
struct T801C44C0 {
    u8 pad[136];
    N801C44C0 *list;
    u8 pad8C[184];
    s32 state;
};
extern "C" {

s32 fn_801C44C0(T801C44C0 *t, void *p2) {
    N801C44C0 *n;
    s32 found = 0;
    for (n = t->list; n; n = n->next) {
        if (n->active) {
            if (!n->obj->v21(t, p2)) found = 1;
        }
    }
    if (found) return 0;
    switch (t->state) {
    case 16:
        t->state = 64;
        break;
    }
    return 0;
}

} /* extern "C" */
