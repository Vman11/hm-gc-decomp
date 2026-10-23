// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Q801796CC {
    u8 pad[6448];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(s32 a);
    virtual void v7(s32 a);
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
    virtual void v43(f32 a);
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
    virtual void v69(u32 i, u32 v);
};
struct O801796CC {
    u8 pad[20];
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
    virtual void v19(struct Q801796CC *q, u16 a, u16 b, s32 c);
};
struct N801796CC {
    O801796CC *f0;
    N801796CC *f4;
    u8 pad8[4];
    u16 f12;
    u16 f14;
};
struct E801796CC {
    N801796CC *f0;
    u32 *f4;
    u32 f8;
};
struct P801796CC {
    E801796CC *f0;
    u32 f4;
    u32 f8;
    u32 f12;
};
extern "C" {

void fn_801796CC(P801796CC *p, Q801796CC *q) {
    E801796CC *it;
    E801796CC *end;
    N801796CC *node;
    u32 i;
    f32 f;
    if (p->f4 != 0) {
        q->v7(0);
        for (it = p->f0, end = p->f0 + p->f4; it < end; it++) {
            for (i = 0; i < it->f8; i++) q->v69(i, it->f4[i]);
            f = 1.0f;
            for (node = it->f0; node != 0; node = node->f4) {
                q->v43(f);
                node->f0->v19(q, node->f12, node->f14, 0);
                f += 1.0f;
                if (f > 16.0f) f = 16.0f;
            }
        }
        q->v43(0.0f);
        q->v6(0);
        p->f4 = 0;
        p->f12 = 0;
    }
}

} /* extern "C" */
