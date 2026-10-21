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
    virtual int v16(Self *, void *);
};
struct Node {
    Child *obj;
    s32 enabled;
    Node *next;
};
struct X {
    u8 pad[52];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(s32, s32);
};
struct Base {
    u8 pad[104];
    s32 f104;
    u8 pad108[4];
    X *f112;
    u8 pad116[12];
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
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
};
struct Self : Base {
    u8 pad132[4];
    Node *list;
    u8 pad140[324 - 140];
    u32 state;
    u8 pad328[436 - 328];
    u32 f436;
    u8 pad440[4];
    u32 f444;
};
void fn_801D95E8(Self *, void *, s32);
int fn_801C8244(Self *self, void *msg, s32 flag) {
    Node *node;
    BOOL fail;
    u32 st = self->state;
    if (st == 8 || st == 32 || st == 128 || st == 512) {
        fail = FALSE;
        for (node = self->list; node; node = node->next) {
            if (node->enabled && !node->obj->v16(self, msg)) fail = TRUE;
        }
        if (fail) return 1;
        if (self->f444 < self->f436 - 1) {
            self->f444++;
            self->v81();
            self->v82();
        }
        if (flag && self->f112) self->f112->v6(2, self->f104);
    } else {
        fn_801D95E8(self, msg, flag);
    }
    return 1;
}

} /* extern "C" */
