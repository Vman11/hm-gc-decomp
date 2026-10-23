// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801D7E1C {
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
    virtual s32 v32(void *self, void *x);
};
struct N801D7E1C {
    V801D7E1C *f0;
    s32 f4;
    N801D7E1C *f8;
};
struct W801D7E1C {
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
    virtual void v56(void *x);
};
struct S801D7E1C {
    u8 pad[136];
    N801D7E1C *f136;
    u8 pad2[144];
    W801D7E1C *f284;
};
extern "C" {

s32 fn_801D7E1C(S801D7E1C *self, void *x) {
    N801D7E1C *n;
    s32 fail = 0;
    N801D7E1C *n2;
    s32 fail2;
    for (n = self->f136; n != 0; n = n->f8) {
        if (n->f4 != 0) {
            if (n->f0->v32(self, x) == 0) fail = 1;
        }
    }
    if (fail) return 0;
    if (self->f284 != 0) self->f284->v56(x);
    fail2 = 0;
    for (n2 = self->f136; n2 != 0; n2 = n2->f8) {
        if (n2->f4 == 0) {
            if (n2->f0->v32(self, x) == 0) fail2 = 1;
        }
    }
    return fail2 ? 0 : 0;
}

} /* extern "C" */
