// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Self;
struct Child {
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
    virtual int v25(Self *, void *);
};
struct Node {
    Child *obj;
    s32 enabled;
    Node *next;
};
struct Other {
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
    virtual void v49(void *);
};
struct Self {
    u8 pad[136];
    Node *list;
    u8 pad2[284 - 140];
    Other *f284;
};
int fn_801D85FC(Self *self, void *msg) {
    Node *n1;
    BOOL f1;
    Node *n2;
    BOOL f2;
    f1 = FALSE;
    for (n1 = self->list; n1; n1 = n1->next) {
        if (n1->enabled && !n1->obj->v25(self, msg)) f1 = TRUE;
    }
    if (f1) return 0;
    if (self->f284) self->f284->v49(msg);
    f2 = FALSE;
    for (n2 = self->list; n2; n2 = n2->next) {
        if (!n2->enabled && !n2->obj->v25(self, msg)) f2 = TRUE;
    }
    return f2 ? 0 : 0;
}

} /* extern "C" */
