// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct H801D83BC {
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
    virtual void v26();    virtual s32 handle(void *self, void *arg);
};
struct X801D83BC {
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
    virtual void v50();    virtual void notify(void *arg);
};
struct Node801D83BC {
    H801D83BC *obj;
    s32 active;
    Node801D83BC *next;
};
struct S801D83BC {
    u8 pad[136];
    Node801D83BC *list;
    u8 pad2[284 - 140];
    X801D83BC *x;
};

s32 fn_801D83BC(S801D83BC *self, void *arg) {
    s32 found;
    Node801D83BC *n;
    found = 0;
    for (n = self->list; n != 0; n = n->next) {
        if (n->active != 0) {
            if (n->obj->handle(self, arg) == 0) {
                found = 1;
            }
        }
    }
    if (found) {
        return 0;
    }
    if (self->x != 0) {
        self->x->notify(arg);
    }
    found = 0;
    for (n = self->list; n != 0; n = n->next) {
        if (n->active == 0) {
            if (n->obj->handle(self, arg) == 0) {
                found = 1;
            }
        }
    }
    return found ? 0 : 0;
}

} /* extern "C" */
