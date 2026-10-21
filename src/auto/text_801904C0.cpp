// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
void fn_801044C4(void *s, s32 a, s32 b);
void fn_80134C30(void *q, void *p8, void *r, s32 a, s32 b, s32 c);

} /* extern "C" */

struct A_801904C0 {
    u8 pad[24];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void m(void *, void *, void *, s32);
};

struct Q_801904C0 {
    u8 pad[6448];
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
    virtual s32 m67();
    virtual s32 m68();
    virtual void m69(s32, s32);
};

struct P_801904C0 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void *m4();
};

extern "C" {

void fn_801904C0(P_801904C0 *p, Q_801904C0 *q, void *r, void *s) {
    A_801904C0 *a = *(A_801904C0 **)((u8 *)p + 0x38);
    if (a != 0) {
        a->m(r, q, p, 0);
    }
    if (*(f32 *)((u8 *)p + 0x14) < lbl_803596E0[0]) {
        if (s == 0) {
            s = p->m4();
        }
        if (s != 0) {
            fn_801044C4(s, q->m67(), q->m68());
            q->m69(0, *(s32 *)((u8 *)s + 0x14));
        } else {
            q->m69(0, q->m67());
        }
        fn_80134C30(q, (u8 *)p + 8, r, 6, 6, 0);
    }
}

} /* extern "C" */
